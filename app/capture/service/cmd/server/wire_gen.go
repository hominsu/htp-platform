// Code generated by Wire. DO NOT EDIT.

//go:generate go run github.com/google/wire/cmd/wire
//go:build !wireinject
// +build !wireinject

package main

import (
	"github.com/go-kratos/kratos/v2"
	"github.com/go-kratos/kratos/v2/log"
	"htp-platform/app/capture/service/internal/biz"
	"htp-platform/app/capture/service/internal/conf"
	"htp-platform/app/capture/service/internal/data"
	"htp-platform/app/capture/service/internal/server"
	"htp-platform/app/capture/service/internal/service"
)

// Injectors from wire.go:

// initApp init kratos application.
func initApp(confServer *conf.Server, registry *conf.Registry, confData *conf.Data, logger log.Logger) (*kratos.App, func(), error) {
	v := data.NewVideoCaptures(confData, logger)
	dataData, cleanup, err := data.NewData(v, logger)
	if err != nil {
		return nil, nil, err
	}
	captureRepo := data.NewCaptureRepo(dataData, logger)
	captureUsecase := biz.NewCaptureUsecase(captureRepo, logger)
	captureService := service.NewCaptureService(captureUsecase, logger)
	grpcServer := server.NewGRPCServer(confServer, captureService, logger)
	registrar := server.NewRegistrar(registry)
	app := newApp(logger, grpcServer, registrar)
	return app, func() {
		cleanup()
	}, nil
}
