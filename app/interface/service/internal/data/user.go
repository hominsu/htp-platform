package data

import (
	"context"
	"github.com/go-kratos/kratos/v2/log"
	"htp-platform/app/interface/service/internal/biz"
	"htp-platform/app/interface/service/internal/data/ent/user"
)

var _ biz.UserRepo = (*userRepo)(nil)

type userRepo struct {
	data *Data
	log  *log.Helper
}

// NewUserRepo .
func NewUserRepo(data *Data, logger log.Logger) biz.UserRepo {
	return &userRepo{
		data: data,
		log:  log.NewHelper(log.With(logger, "module", "data/user")),
	}
}

func (r *userRepo) FindByUsername(ctx context.Context, username string) (*biz.User, error) {
	target, err := r.data.db.User.
		Query().
		Where(user.UsernameEQ(username)).
		Only(ctx)

	if err != nil {
		return nil, biz.ErrUserNotFound
	}
	return &biz.User{
		Id:           target.ID,
		Email:        target.Email,
		Username:     target.Username,
		PasswordHash: target.PasswordHash,
	}, nil
}

func (r *userRepo) FindByEmail(ctx context.Context, email string) (*biz.User, error) {
	target, err := r.data.db.User.
		Query().
		Where(user.EmailEQ(email)).
		Only(ctx)

	if err != nil {
		return nil, biz.ErrUserNotFound
	}
	return &biz.User{
		Id:           target.ID,
		Email:        target.Email,
		Username:     target.Username,
		PasswordHash: target.PasswordHash,
	}, nil
}

func (r *userRepo) Create(ctx context.Context, user *biz.User) (*biz.User, error) {
	po, err := r.data.db.User.
		Create().
		SetEmail(user.Email).
		SetUsername(user.Username).
		SetPasswordHash(user.PasswordHash).
		Save(ctx)
	if err != nil {
		return nil, err
	}
	return &biz.User{
		Id:           po.ID,
		Email:        po.Email,
		Username:     po.Username,
		PasswordHash: po.PasswordHash,
	}, nil
}

func (r *userRepo) Update(ctx context.Context, user *biz.User) (*biz.User, error) {
	po, err := r.data.db.User.
		UpdateOneID(user.Id).
		SetEmail(user.Email).
		SetUsername(user.Username).
		SetPasswordHash(user.PasswordHash).
		Save(ctx)
	if err != nil {
		return nil, err
	}
	return &biz.User{
		Id:           po.ID,
		Email:        po.Email,
		Username:     po.Username,
		PasswordHash: po.PasswordHash,
	}, nil
}

func (r *userRepo) Get(ctx context.Context, id int64) (*biz.User, error) {
	po, err := r.data.db.User.Get(ctx, id)
	if err != nil {
		return nil, err
	}
	return &biz.User{
		Id:           po.ID,
		Email:        po.Email,
		Username:     po.Username,
		PasswordHash: po.PasswordHash,
	}, nil
}
