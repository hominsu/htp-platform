// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: v1/robot.proto
#ifndef GRPC_v1_2frobot_2eproto__INCLUDED
#define GRPC_v1_2frobot_2eproto__INCLUDED

#include "v1/robot.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace machine {
namespace robot {
namespace v1 {

// 以下服务运行在机器人端，作为服务端监听后端的请求
class Control final {
 public:
  static constexpr char const* service_full_name() {
    return "machine.robot.v1.Control";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status AppendCoordinate(::grpc::ClientContext* context, const ::machine::robot::v1::AppendCoordinateRequest& request, ::machine::robot::v1::AppendCoordinateReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::machine::robot::v1::AppendCoordinateReply>> AsyncAppendCoordinate(::grpc::ClientContext* context, const ::machine::robot::v1::AppendCoordinateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::machine::robot::v1::AppendCoordinateReply>>(AsyncAppendCoordinateRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::machine::robot::v1::AppendCoordinateReply>> PrepareAsyncAppendCoordinate(::grpc::ClientContext* context, const ::machine::robot::v1::AppendCoordinateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::machine::robot::v1::AppendCoordinateReply>>(PrepareAsyncAppendCoordinateRaw(context, request, cq));
    }
    virtual ::grpc::Status Zero(::grpc::ClientContext* context, const ::machine::robot::v1::ZeroRequest& request, ::machine::robot::v1::ZeroReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::machine::robot::v1::ZeroReply>> AsyncZero(::grpc::ClientContext* context, const ::machine::robot::v1::ZeroRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::machine::robot::v1::ZeroReply>>(AsyncZeroRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::machine::robot::v1::ZeroReply>> PrepareAsyncZero(::grpc::ClientContext* context, const ::machine::robot::v1::ZeroRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::machine::robot::v1::ZeroReply>>(PrepareAsyncZeroRaw(context, request, cq));
    }
    virtual ::grpc::Status GetMotorInfo(::grpc::ClientContext* context, const ::machine::robot::v1::GetMotorInfoRequest& request, ::machine::robot::v1::GetMotorInfoReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::machine::robot::v1::GetMotorInfoReply>> AsyncGetMotorInfo(::grpc::ClientContext* context, const ::machine::robot::v1::GetMotorInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::machine::robot::v1::GetMotorInfoReply>>(AsyncGetMotorInfoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::machine::robot::v1::GetMotorInfoReply>> PrepareAsyncGetMotorInfo(::grpc::ClientContext* context, const ::machine::robot::v1::GetMotorInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::machine::robot::v1::GetMotorInfoReply>>(PrepareAsyncGetMotorInfoRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void AppendCoordinate(::grpc::ClientContext* context, const ::machine::robot::v1::AppendCoordinateRequest* request, ::machine::robot::v1::AppendCoordinateReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void AppendCoordinate(::grpc::ClientContext* context, const ::machine::robot::v1::AppendCoordinateRequest* request, ::machine::robot::v1::AppendCoordinateReply* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void Zero(::grpc::ClientContext* context, const ::machine::robot::v1::ZeroRequest* request, ::machine::robot::v1::ZeroReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Zero(::grpc::ClientContext* context, const ::machine::robot::v1::ZeroRequest* request, ::machine::robot::v1::ZeroReply* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void GetMotorInfo(::grpc::ClientContext* context, const ::machine::robot::v1::GetMotorInfoRequest* request, ::machine::robot::v1::GetMotorInfoReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetMotorInfo(::grpc::ClientContext* context, const ::machine::robot::v1::GetMotorInfoRequest* request, ::machine::robot::v1::GetMotorInfoReply* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::machine::robot::v1::AppendCoordinateReply>* AsyncAppendCoordinateRaw(::grpc::ClientContext* context, const ::machine::robot::v1::AppendCoordinateRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::machine::robot::v1::AppendCoordinateReply>* PrepareAsyncAppendCoordinateRaw(::grpc::ClientContext* context, const ::machine::robot::v1::AppendCoordinateRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::machine::robot::v1::ZeroReply>* AsyncZeroRaw(::grpc::ClientContext* context, const ::machine::robot::v1::ZeroRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::machine::robot::v1::ZeroReply>* PrepareAsyncZeroRaw(::grpc::ClientContext* context, const ::machine::robot::v1::ZeroRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::machine::robot::v1::GetMotorInfoReply>* AsyncGetMotorInfoRaw(::grpc::ClientContext* context, const ::machine::robot::v1::GetMotorInfoRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::machine::robot::v1::GetMotorInfoReply>* PrepareAsyncGetMotorInfoRaw(::grpc::ClientContext* context, const ::machine::robot::v1::GetMotorInfoRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status AppendCoordinate(::grpc::ClientContext* context, const ::machine::robot::v1::AppendCoordinateRequest& request, ::machine::robot::v1::AppendCoordinateReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::machine::robot::v1::AppendCoordinateReply>> AsyncAppendCoordinate(::grpc::ClientContext* context, const ::machine::robot::v1::AppendCoordinateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::machine::robot::v1::AppendCoordinateReply>>(AsyncAppendCoordinateRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::machine::robot::v1::AppendCoordinateReply>> PrepareAsyncAppendCoordinate(::grpc::ClientContext* context, const ::machine::robot::v1::AppendCoordinateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::machine::robot::v1::AppendCoordinateReply>>(PrepareAsyncAppendCoordinateRaw(context, request, cq));
    }
    ::grpc::Status Zero(::grpc::ClientContext* context, const ::machine::robot::v1::ZeroRequest& request, ::machine::robot::v1::ZeroReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::machine::robot::v1::ZeroReply>> AsyncZero(::grpc::ClientContext* context, const ::machine::robot::v1::ZeroRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::machine::robot::v1::ZeroReply>>(AsyncZeroRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::machine::robot::v1::ZeroReply>> PrepareAsyncZero(::grpc::ClientContext* context, const ::machine::robot::v1::ZeroRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::machine::robot::v1::ZeroReply>>(PrepareAsyncZeroRaw(context, request, cq));
    }
    ::grpc::Status GetMotorInfo(::grpc::ClientContext* context, const ::machine::robot::v1::GetMotorInfoRequest& request, ::machine::robot::v1::GetMotorInfoReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::machine::robot::v1::GetMotorInfoReply>> AsyncGetMotorInfo(::grpc::ClientContext* context, const ::machine::robot::v1::GetMotorInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::machine::robot::v1::GetMotorInfoReply>>(AsyncGetMotorInfoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::machine::robot::v1::GetMotorInfoReply>> PrepareAsyncGetMotorInfo(::grpc::ClientContext* context, const ::machine::robot::v1::GetMotorInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::machine::robot::v1::GetMotorInfoReply>>(PrepareAsyncGetMotorInfoRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void AppendCoordinate(::grpc::ClientContext* context, const ::machine::robot::v1::AppendCoordinateRequest* request, ::machine::robot::v1::AppendCoordinateReply* response, std::function<void(::grpc::Status)>) override;
      void AppendCoordinate(::grpc::ClientContext* context, const ::machine::robot::v1::AppendCoordinateRequest* request, ::machine::robot::v1::AppendCoordinateReply* response, ::grpc::ClientUnaryReactor* reactor) override;
      void Zero(::grpc::ClientContext* context, const ::machine::robot::v1::ZeroRequest* request, ::machine::robot::v1::ZeroReply* response, std::function<void(::grpc::Status)>) override;
      void Zero(::grpc::ClientContext* context, const ::machine::robot::v1::ZeroRequest* request, ::machine::robot::v1::ZeroReply* response, ::grpc::ClientUnaryReactor* reactor) override;
      void GetMotorInfo(::grpc::ClientContext* context, const ::machine::robot::v1::GetMotorInfoRequest* request, ::machine::robot::v1::GetMotorInfoReply* response, std::function<void(::grpc::Status)>) override;
      void GetMotorInfo(::grpc::ClientContext* context, const ::machine::robot::v1::GetMotorInfoRequest* request, ::machine::robot::v1::GetMotorInfoReply* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::machine::robot::v1::AppendCoordinateReply>* AsyncAppendCoordinateRaw(::grpc::ClientContext* context, const ::machine::robot::v1::AppendCoordinateRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::machine::robot::v1::AppendCoordinateReply>* PrepareAsyncAppendCoordinateRaw(::grpc::ClientContext* context, const ::machine::robot::v1::AppendCoordinateRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::machine::robot::v1::ZeroReply>* AsyncZeroRaw(::grpc::ClientContext* context, const ::machine::robot::v1::ZeroRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::machine::robot::v1::ZeroReply>* PrepareAsyncZeroRaw(::grpc::ClientContext* context, const ::machine::robot::v1::ZeroRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::machine::robot::v1::GetMotorInfoReply>* AsyncGetMotorInfoRaw(::grpc::ClientContext* context, const ::machine::robot::v1::GetMotorInfoRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::machine::robot::v1::GetMotorInfoReply>* PrepareAsyncGetMotorInfoRaw(::grpc::ClientContext* context, const ::machine::robot::v1::GetMotorInfoRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_AppendCoordinate_;
    const ::grpc::internal::RpcMethod rpcmethod_Zero_;
    const ::grpc::internal::RpcMethod rpcmethod_GetMotorInfo_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status AppendCoordinate(::grpc::ServerContext* context, const ::machine::robot::v1::AppendCoordinateRequest* request, ::machine::robot::v1::AppendCoordinateReply* response);
    virtual ::grpc::Status Zero(::grpc::ServerContext* context, const ::machine::robot::v1::ZeroRequest* request, ::machine::robot::v1::ZeroReply* response);
    virtual ::grpc::Status GetMotorInfo(::grpc::ServerContext* context, const ::machine::robot::v1::GetMotorInfoRequest* request, ::machine::robot::v1::GetMotorInfoReply* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_AppendCoordinate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_AppendCoordinate() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_AppendCoordinate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AppendCoordinate(::grpc::ServerContext* /*context*/, const ::machine::robot::v1::AppendCoordinateRequest* /*request*/, ::machine::robot::v1::AppendCoordinateReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAppendCoordinate(::grpc::ServerContext* context, ::machine::robot::v1::AppendCoordinateRequest* request, ::grpc::ServerAsyncResponseWriter< ::machine::robot::v1::AppendCoordinateReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Zero : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Zero() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Zero() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Zero(::grpc::ServerContext* /*context*/, const ::machine::robot::v1::ZeroRequest* /*request*/, ::machine::robot::v1::ZeroReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestZero(::grpc::ServerContext* context, ::machine::robot::v1::ZeroRequest* request, ::grpc::ServerAsyncResponseWriter< ::machine::robot::v1::ZeroReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetMotorInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetMotorInfo() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_GetMotorInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetMotorInfo(::grpc::ServerContext* /*context*/, const ::machine::robot::v1::GetMotorInfoRequest* /*request*/, ::machine::robot::v1::GetMotorInfoReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetMotorInfo(::grpc::ServerContext* context, ::machine::robot::v1::GetMotorInfoRequest* request, ::grpc::ServerAsyncResponseWriter< ::machine::robot::v1::GetMotorInfoReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_AppendCoordinate<WithAsyncMethod_Zero<WithAsyncMethod_GetMotorInfo<Service > > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_AppendCoordinate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_AppendCoordinate() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::machine::robot::v1::AppendCoordinateRequest, ::machine::robot::v1::AppendCoordinateReply>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::machine::robot::v1::AppendCoordinateRequest* request, ::machine::robot::v1::AppendCoordinateReply* response) { return this->AppendCoordinate(context, request, response); }));}
    void SetMessageAllocatorFor_AppendCoordinate(
        ::grpc::MessageAllocator< ::machine::robot::v1::AppendCoordinateRequest, ::machine::robot::v1::AppendCoordinateReply>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::machine::robot::v1::AppendCoordinateRequest, ::machine::robot::v1::AppendCoordinateReply>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_AppendCoordinate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AppendCoordinate(::grpc::ServerContext* /*context*/, const ::machine::robot::v1::AppendCoordinateRequest* /*request*/, ::machine::robot::v1::AppendCoordinateReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* AppendCoordinate(
      ::grpc::CallbackServerContext* /*context*/, const ::machine::robot::v1::AppendCoordinateRequest* /*request*/, ::machine::robot::v1::AppendCoordinateReply* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_Zero : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Zero() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::machine::robot::v1::ZeroRequest, ::machine::robot::v1::ZeroReply>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::machine::robot::v1::ZeroRequest* request, ::machine::robot::v1::ZeroReply* response) { return this->Zero(context, request, response); }));}
    void SetMessageAllocatorFor_Zero(
        ::grpc::MessageAllocator< ::machine::robot::v1::ZeroRequest, ::machine::robot::v1::ZeroReply>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::machine::robot::v1::ZeroRequest, ::machine::robot::v1::ZeroReply>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Zero() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Zero(::grpc::ServerContext* /*context*/, const ::machine::robot::v1::ZeroRequest* /*request*/, ::machine::robot::v1::ZeroReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Zero(
      ::grpc::CallbackServerContext* /*context*/, const ::machine::robot::v1::ZeroRequest* /*request*/, ::machine::robot::v1::ZeroReply* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_GetMotorInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_GetMotorInfo() {
      ::grpc::Service::MarkMethodCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::machine::robot::v1::GetMotorInfoRequest, ::machine::robot::v1::GetMotorInfoReply>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::machine::robot::v1::GetMotorInfoRequest* request, ::machine::robot::v1::GetMotorInfoReply* response) { return this->GetMotorInfo(context, request, response); }));}
    void SetMessageAllocatorFor_GetMotorInfo(
        ::grpc::MessageAllocator< ::machine::robot::v1::GetMotorInfoRequest, ::machine::robot::v1::GetMotorInfoReply>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(2);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::machine::robot::v1::GetMotorInfoRequest, ::machine::robot::v1::GetMotorInfoReply>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_GetMotorInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetMotorInfo(::grpc::ServerContext* /*context*/, const ::machine::robot::v1::GetMotorInfoRequest* /*request*/, ::machine::robot::v1::GetMotorInfoReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetMotorInfo(
      ::grpc::CallbackServerContext* /*context*/, const ::machine::robot::v1::GetMotorInfoRequest* /*request*/, ::machine::robot::v1::GetMotorInfoReply* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_AppendCoordinate<WithCallbackMethod_Zero<WithCallbackMethod_GetMotorInfo<Service > > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_AppendCoordinate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_AppendCoordinate() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_AppendCoordinate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AppendCoordinate(::grpc::ServerContext* /*context*/, const ::machine::robot::v1::AppendCoordinateRequest* /*request*/, ::machine::robot::v1::AppendCoordinateReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Zero : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Zero() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Zero() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Zero(::grpc::ServerContext* /*context*/, const ::machine::robot::v1::ZeroRequest* /*request*/, ::machine::robot::v1::ZeroReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetMotorInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetMotorInfo() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_GetMotorInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetMotorInfo(::grpc::ServerContext* /*context*/, const ::machine::robot::v1::GetMotorInfoRequest* /*request*/, ::machine::robot::v1::GetMotorInfoReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_AppendCoordinate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_AppendCoordinate() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_AppendCoordinate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AppendCoordinate(::grpc::ServerContext* /*context*/, const ::machine::robot::v1::AppendCoordinateRequest* /*request*/, ::machine::robot::v1::AppendCoordinateReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAppendCoordinate(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Zero : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Zero() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_Zero() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Zero(::grpc::ServerContext* /*context*/, const ::machine::robot::v1::ZeroRequest* /*request*/, ::machine::robot::v1::ZeroReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestZero(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetMotorInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetMotorInfo() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_GetMotorInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetMotorInfo(::grpc::ServerContext* /*context*/, const ::machine::robot::v1::GetMotorInfoRequest* /*request*/, ::machine::robot::v1::GetMotorInfoReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetMotorInfo(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_AppendCoordinate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_AppendCoordinate() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->AppendCoordinate(context, request, response); }));
    }
    ~WithRawCallbackMethod_AppendCoordinate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AppendCoordinate(::grpc::ServerContext* /*context*/, const ::machine::robot::v1::AppendCoordinateRequest* /*request*/, ::machine::robot::v1::AppendCoordinateReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* AppendCoordinate(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Zero : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Zero() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Zero(context, request, response); }));
    }
    ~WithRawCallbackMethod_Zero() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Zero(::grpc::ServerContext* /*context*/, const ::machine::robot::v1::ZeroRequest* /*request*/, ::machine::robot::v1::ZeroReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Zero(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_GetMotorInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_GetMotorInfo() {
      ::grpc::Service::MarkMethodRawCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetMotorInfo(context, request, response); }));
    }
    ~WithRawCallbackMethod_GetMotorInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetMotorInfo(::grpc::ServerContext* /*context*/, const ::machine::robot::v1::GetMotorInfoRequest* /*request*/, ::machine::robot::v1::GetMotorInfoReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetMotorInfo(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_AppendCoordinate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_AppendCoordinate() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::machine::robot::v1::AppendCoordinateRequest, ::machine::robot::v1::AppendCoordinateReply>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::machine::robot::v1::AppendCoordinateRequest, ::machine::robot::v1::AppendCoordinateReply>* streamer) {
                       return this->StreamedAppendCoordinate(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_AppendCoordinate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status AppendCoordinate(::grpc::ServerContext* /*context*/, const ::machine::robot::v1::AppendCoordinateRequest* /*request*/, ::machine::robot::v1::AppendCoordinateReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedAppendCoordinate(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::machine::robot::v1::AppendCoordinateRequest,::machine::robot::v1::AppendCoordinateReply>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Zero : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Zero() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::machine::robot::v1::ZeroRequest, ::machine::robot::v1::ZeroReply>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::machine::robot::v1::ZeroRequest, ::machine::robot::v1::ZeroReply>* streamer) {
                       return this->StreamedZero(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Zero() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Zero(::grpc::ServerContext* /*context*/, const ::machine::robot::v1::ZeroRequest* /*request*/, ::machine::robot::v1::ZeroReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedZero(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::machine::robot::v1::ZeroRequest,::machine::robot::v1::ZeroReply>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetMotorInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetMotorInfo() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler<
          ::machine::robot::v1::GetMotorInfoRequest, ::machine::robot::v1::GetMotorInfoReply>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::machine::robot::v1::GetMotorInfoRequest, ::machine::robot::v1::GetMotorInfoReply>* streamer) {
                       return this->StreamedGetMotorInfo(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetMotorInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetMotorInfo(::grpc::ServerContext* /*context*/, const ::machine::robot::v1::GetMotorInfoRequest* /*request*/, ::machine::robot::v1::GetMotorInfoReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetMotorInfo(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::machine::robot::v1::GetMotorInfoRequest,::machine::robot::v1::GetMotorInfoReply>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_AppendCoordinate<WithStreamedUnaryMethod_Zero<WithStreamedUnaryMethod_GetMotorInfo<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_AppendCoordinate<WithStreamedUnaryMethod_Zero<WithStreamedUnaryMethod_GetMotorInfo<Service > > > StreamedService;
};

}  // namespace v1
}  // namespace robot
}  // namespace machine


#endif  // GRPC_v1_2frobot_2eproto__INCLUDED
