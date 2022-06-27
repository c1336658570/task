// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: NetworkTest.proto
#ifndef GRPC_NetworkTest_2eproto__INCLUDED
#define GRPC_NetworkTest_2eproto__INCLUDED

#include "NetworkTest.pb.h"

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

namespace NetworkTest {

class NT final {
public:
    static constexpr char const *service_full_name() {
        return "NetworkTest.NT";
    }
    class StubInterface {
    public:
        virtual ~StubInterface() {}
        virtual ::grpc::Status AnswerRegister(::grpc::ClientContext *context, const ::NetworkTest::Register &request, ::NetworkTest::Result *response) = 0;
        std::unique_ptr<::grpc::ClientAsyncResponseReaderInterface<::NetworkTest::Result>> AsyncAnswerRegister(::grpc::ClientContext *context, const ::NetworkTest::Register &request, ::grpc::CompletionQueue *cq) {
            return std::unique_ptr<::grpc::ClientAsyncResponseReaderInterface<::NetworkTest::Result>>(AsyncAnswerRegisterRaw(context, request, cq));
        }
        std::unique_ptr<::grpc::ClientAsyncResponseReaderInterface<::NetworkTest::Result>> PrepareAsyncAnswerRegister(::grpc::ClientContext *context, const ::NetworkTest::Register &request, ::grpc::CompletionQueue *cq) {
            return std::unique_ptr<::grpc::ClientAsyncResponseReaderInterface<::NetworkTest::Result>>(PrepareAsyncAnswerRegisterRaw(context, request, cq));
        }
        virtual ::grpc::Status ResultQuery(::grpc::ClientContext *context, const ::NetworkTest::Query &request, ::NetworkTest::Result *response) = 0;
        std::unique_ptr<::grpc::ClientAsyncResponseReaderInterface<::NetworkTest::Result>> AsyncResultQuery(::grpc::ClientContext *context, const ::NetworkTest::Query &request, ::grpc::CompletionQueue *cq) {
            return std::unique_ptr<::grpc::ClientAsyncResponseReaderInterface<::NetworkTest::Result>>(AsyncResultQueryRaw(context, request, cq));
        }
        std::unique_ptr<::grpc::ClientAsyncResponseReaderInterface<::NetworkTest::Result>> PrepareAsyncResultQuery(::grpc::ClientContext *context, const ::NetworkTest::Query &request, ::grpc::CompletionQueue *cq) {
            return std::unique_ptr<::grpc::ClientAsyncResponseReaderInterface<::NetworkTest::Result>>(PrepareAsyncResultQueryRaw(context, request, cq));
        }
        class async_interface {
        public:
            virtual ~async_interface() {}
            virtual void AnswerRegister(::grpc::ClientContext *context, const ::NetworkTest::Register *request, ::NetworkTest::Result *response, std::function<void(::grpc::Status)>) = 0;
            virtual void AnswerRegister(::grpc::ClientContext *context, const ::NetworkTest::Register *request, ::NetworkTest::Result *response, ::grpc::ClientUnaryReactor *reactor) = 0;
            virtual void ResultQuery(::grpc::ClientContext *context, const ::NetworkTest::Query *request, ::NetworkTest::Result *response, std::function<void(::grpc::Status)>) = 0;
            virtual void ResultQuery(::grpc::ClientContext *context, const ::NetworkTest::Query *request, ::NetworkTest::Result *response, ::grpc::ClientUnaryReactor *reactor) = 0;
        };
        typedef class async_interface experimental_async_interface;
        virtual class async_interface *async() { return nullptr; }
        class async_interface *experimental_async() {
            return async();
        }

    private:
        virtual ::grpc::ClientAsyncResponseReaderInterface<::NetworkTest::Result> *AsyncAnswerRegisterRaw(::grpc::ClientContext *context, const ::NetworkTest::Register &request, ::grpc::CompletionQueue *cq) = 0;
        virtual ::grpc::ClientAsyncResponseReaderInterface<::NetworkTest::Result> *PrepareAsyncAnswerRegisterRaw(::grpc::ClientContext *context, const ::NetworkTest::Register &request, ::grpc::CompletionQueue *cq) = 0;
        virtual ::grpc::ClientAsyncResponseReaderInterface<::NetworkTest::Result> *AsyncResultQueryRaw(::grpc::ClientContext *context, const ::NetworkTest::Query &request, ::grpc::CompletionQueue *cq) = 0;
        virtual ::grpc::ClientAsyncResponseReaderInterface<::NetworkTest::Result> *PrepareAsyncResultQueryRaw(::grpc::ClientContext *context, const ::NetworkTest::Query &request, ::grpc::CompletionQueue *cq) = 0;
    };
    class Stub final : public StubInterface {
    public:
        Stub(const std::shared_ptr<::grpc::ChannelInterface> &channel, const ::grpc::StubOptions &options = ::grpc::StubOptions());
        ::grpc::Status AnswerRegister(::grpc::ClientContext *context, const ::NetworkTest::Register &request, ::NetworkTest::Result *response) override;
        std::unique_ptr<::grpc::ClientAsyncResponseReader<::NetworkTest::Result>> AsyncAnswerRegister(::grpc::ClientContext *context, const ::NetworkTest::Register &request, ::grpc::CompletionQueue *cq) {
            return std::unique_ptr<::grpc::ClientAsyncResponseReader<::NetworkTest::Result>>(AsyncAnswerRegisterRaw(context, request, cq));
        }
        std::unique_ptr<::grpc::ClientAsyncResponseReader<::NetworkTest::Result>> PrepareAsyncAnswerRegister(::grpc::ClientContext *context, const ::NetworkTest::Register &request, ::grpc::CompletionQueue *cq) {
            return std::unique_ptr<::grpc::ClientAsyncResponseReader<::NetworkTest::Result>>(PrepareAsyncAnswerRegisterRaw(context, request, cq));
        }
        ::grpc::Status ResultQuery(::grpc::ClientContext *context, const ::NetworkTest::Query &request, ::NetworkTest::Result *response) override;
        std::unique_ptr<::grpc::ClientAsyncResponseReader<::NetworkTest::Result>> AsyncResultQuery(::grpc::ClientContext *context, const ::NetworkTest::Query &request, ::grpc::CompletionQueue *cq) {
            return std::unique_ptr<::grpc::ClientAsyncResponseReader<::NetworkTest::Result>>(AsyncResultQueryRaw(context, request, cq));
        }
        std::unique_ptr<::grpc::ClientAsyncResponseReader<::NetworkTest::Result>> PrepareAsyncResultQuery(::grpc::ClientContext *context, const ::NetworkTest::Query &request, ::grpc::CompletionQueue *cq) {
            return std::unique_ptr<::grpc::ClientAsyncResponseReader<::NetworkTest::Result>>(PrepareAsyncResultQueryRaw(context, request, cq));
        }
        class async final : public StubInterface::async_interface {
        public:
            void AnswerRegister(::grpc::ClientContext *context, const ::NetworkTest::Register *request, ::NetworkTest::Result *response, std::function<void(::grpc::Status)>) override;
            void AnswerRegister(::grpc::ClientContext *context, const ::NetworkTest::Register *request, ::NetworkTest::Result *response, ::grpc::ClientUnaryReactor *reactor) override;
            void ResultQuery(::grpc::ClientContext *context, const ::NetworkTest::Query *request, ::NetworkTest::Result *response, std::function<void(::grpc::Status)>) override;
            void ResultQuery(::grpc::ClientContext *context, const ::NetworkTest::Query *request, ::NetworkTest::Result *response, ::grpc::ClientUnaryReactor *reactor) override;

        private:
            friend class Stub;
            explicit async(Stub *stub) : stub_(stub) {}
            Stub *stub() { return stub_; }
            Stub *stub_;
        };
        class async *async() override {
            return &async_stub_;
        }

    private:
        std::shared_ptr<::grpc::ChannelInterface> channel_;
        class async async_stub_ {
            this
        };
        ::grpc::ClientAsyncResponseReader<::NetworkTest::Result> *AsyncAnswerRegisterRaw(::grpc::ClientContext *context, const ::NetworkTest::Register &request, ::grpc::CompletionQueue *cq) override;
        ::grpc::ClientAsyncResponseReader<::NetworkTest::Result> *PrepareAsyncAnswerRegisterRaw(::grpc::ClientContext *context, const ::NetworkTest::Register &request, ::grpc::CompletionQueue *cq) override;
        ::grpc::ClientAsyncResponseReader<::NetworkTest::Result> *AsyncResultQueryRaw(::grpc::ClientContext *context, const ::NetworkTest::Query &request, ::grpc::CompletionQueue *cq) override;
        ::grpc::ClientAsyncResponseReader<::NetworkTest::Result> *PrepareAsyncResultQueryRaw(::grpc::ClientContext *context, const ::NetworkTest::Query &request, ::grpc::CompletionQueue *cq) override;
        const ::grpc::internal::RpcMethod rpcmethod_AnswerRegister_;
        const ::grpc::internal::RpcMethod rpcmethod_ResultQuery_;
    };
    static std::unique_ptr<Stub> NewStub(const std::shared_ptr<::grpc::ChannelInterface> &channel, const ::grpc::StubOptions &options = ::grpc::StubOptions());

    class Service : public ::grpc::Service {
    public:
        Service();
        virtual ~Service();
        virtual ::grpc::Status AnswerRegister(::grpc::ServerContext *context, const ::NetworkTest::Register *request, ::NetworkTest::Result *response);
        virtual ::grpc::Status ResultQuery(::grpc::ServerContext *context, const ::NetworkTest::Query *request, ::NetworkTest::Result *response);
    };
    template<class BaseClass>
    class WithAsyncMethod_AnswerRegister : public BaseClass {
    private:
        void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
        WithAsyncMethod_AnswerRegister() {
            ::grpc::Service::MarkMethodAsync(0);
        }
        ~WithAsyncMethod_AnswerRegister() override {
            BaseClassMustBeDerivedFromService(this);
        }
        // disable synchronous version of this method
        ::grpc::Status AnswerRegister(::grpc::ServerContext * /*context*/, const ::NetworkTest::Register * /*request*/, ::NetworkTest::Result * /*response*/) override {
            abort();
            return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
        }
        void RequestAnswerRegister(::grpc::ServerContext *context, ::NetworkTest::Register *request, ::grpc::ServerAsyncResponseWriter<::NetworkTest::Result> *response, ::grpc::CompletionQueue *new_call_cq, ::grpc::ServerCompletionQueue *notification_cq, void *tag) {
            ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
        }
    };
    template<class BaseClass>
    class WithAsyncMethod_ResultQuery : public BaseClass {
    private:
        void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
        WithAsyncMethod_ResultQuery() {
            ::grpc::Service::MarkMethodAsync(1);
        }
        ~WithAsyncMethod_ResultQuery() override {
            BaseClassMustBeDerivedFromService(this);
        }
        // disable synchronous version of this method
        ::grpc::Status ResultQuery(::grpc::ServerContext * /*context*/, const ::NetworkTest::Query * /*request*/, ::NetworkTest::Result * /*response*/) override {
            abort();
            return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
        }
        void RequestResultQuery(::grpc::ServerContext *context, ::NetworkTest::Query *request, ::grpc::ServerAsyncResponseWriter<::NetworkTest::Result> *response, ::grpc::CompletionQueue *new_call_cq, ::grpc::ServerCompletionQueue *notification_cq, void *tag) {
            ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
        }
    };
    typedef WithAsyncMethod_AnswerRegister<WithAsyncMethod_ResultQuery<Service>> AsyncService;
    template<class BaseClass>
    class WithCallbackMethod_AnswerRegister : public BaseClass {
    private:
        void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
        WithCallbackMethod_AnswerRegister() {
            ::grpc::Service::MarkMethodCallback(0,
                                                new ::grpc::internal::CallbackUnaryHandler<::NetworkTest::Register, ::NetworkTest::Result>(
                                                        [this](
                                                                ::grpc::CallbackServerContext *context, const ::NetworkTest::Register *request, ::NetworkTest::Result *response) { return this->AnswerRegister(context, request, response); }));
        }
        void SetMessageAllocatorFor_AnswerRegister(
                ::grpc::MessageAllocator<::NetworkTest::Register, ::NetworkTest::Result> *allocator) {
            ::grpc::internal::MethodHandler *const handler = ::grpc::Service::GetHandler(0);
            static_cast<::grpc::internal::CallbackUnaryHandler<::NetworkTest::Register, ::NetworkTest::Result> *>(handler)
                    ->SetMessageAllocator(allocator);
        }
        ~WithCallbackMethod_AnswerRegister() override {
            BaseClassMustBeDerivedFromService(this);
        }
        // disable synchronous version of this method
        ::grpc::Status AnswerRegister(::grpc::ServerContext * /*context*/, const ::NetworkTest::Register * /*request*/, ::NetworkTest::Result * /*response*/) override {
            abort();
            return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
        }
        virtual ::grpc::ServerUnaryReactor *AnswerRegister(
                ::grpc::CallbackServerContext * /*context*/, const ::NetworkTest::Register * /*request*/, ::NetworkTest::Result * /*response*/) { return nullptr; }
    };
    template<class BaseClass>
    class WithCallbackMethod_ResultQuery : public BaseClass {
    private:
        void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
        WithCallbackMethod_ResultQuery() {
            ::grpc::Service::MarkMethodCallback(1,
                                                new ::grpc::internal::CallbackUnaryHandler<::NetworkTest::Query, ::NetworkTest::Result>(
                                                        [this](
                                                                ::grpc::CallbackServerContext *context, const ::NetworkTest::Query *request, ::NetworkTest::Result *response) { return this->ResultQuery(context, request, response); }));
        }
        void SetMessageAllocatorFor_ResultQuery(
                ::grpc::MessageAllocator<::NetworkTest::Query, ::NetworkTest::Result> *allocator) {
            ::grpc::internal::MethodHandler *const handler = ::grpc::Service::GetHandler(1);
            static_cast<::grpc::internal::CallbackUnaryHandler<::NetworkTest::Query, ::NetworkTest::Result> *>(handler)
                    ->SetMessageAllocator(allocator);
        }
        ~WithCallbackMethod_ResultQuery() override {
            BaseClassMustBeDerivedFromService(this);
        }
        // disable synchronous version of this method
        ::grpc::Status ResultQuery(::grpc::ServerContext * /*context*/, const ::NetworkTest::Query * /*request*/, ::NetworkTest::Result * /*response*/) override {
            abort();
            return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
        }
        virtual ::grpc::ServerUnaryReactor *ResultQuery(
                ::grpc::CallbackServerContext * /*context*/, const ::NetworkTest::Query * /*request*/, ::NetworkTest::Result * /*response*/) { return nullptr; }
    };
    typedef WithCallbackMethod_AnswerRegister<WithCallbackMethod_ResultQuery<Service>> CallbackService;
    typedef CallbackService ExperimentalCallbackService;
    template<class BaseClass>
    class WithGenericMethod_AnswerRegister : public BaseClass {
    private:
        void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
        WithGenericMethod_AnswerRegister() {
            ::grpc::Service::MarkMethodGeneric(0);
        }
        ~WithGenericMethod_AnswerRegister() override {
            BaseClassMustBeDerivedFromService(this);
        }
        // disable synchronous version of this method
        ::grpc::Status AnswerRegister(::grpc::ServerContext * /*context*/, const ::NetworkTest::Register * /*request*/, ::NetworkTest::Result * /*response*/) override {
            abort();
            return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
        }
    };
    template<class BaseClass>
    class WithGenericMethod_ResultQuery : public BaseClass {
    private:
        void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
        WithGenericMethod_ResultQuery() {
            ::grpc::Service::MarkMethodGeneric(1);
        }
        ~WithGenericMethod_ResultQuery() override {
            BaseClassMustBeDerivedFromService(this);
        }
        // disable synchronous version of this method
        ::grpc::Status ResultQuery(::grpc::ServerContext * /*context*/, const ::NetworkTest::Query * /*request*/, ::NetworkTest::Result * /*response*/) override {
            abort();
            return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
        }
    };
    template<class BaseClass>
    class WithRawMethod_AnswerRegister : public BaseClass {
    private:
        void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
        WithRawMethod_AnswerRegister() {
            ::grpc::Service::MarkMethodRaw(0);
        }
        ~WithRawMethod_AnswerRegister() override {
            BaseClassMustBeDerivedFromService(this);
        }
        // disable synchronous version of this method
        ::grpc::Status AnswerRegister(::grpc::ServerContext * /*context*/, const ::NetworkTest::Register * /*request*/, ::NetworkTest::Result * /*response*/) override {
            abort();
            return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
        }
        void RequestAnswerRegister(::grpc::ServerContext *context, ::grpc::ByteBuffer *request, ::grpc::ServerAsyncResponseWriter<::grpc::ByteBuffer> *response, ::grpc::CompletionQueue *new_call_cq, ::grpc::ServerCompletionQueue *notification_cq, void *tag) {
            ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
        }
    };
    template<class BaseClass>
    class WithRawMethod_ResultQuery : public BaseClass {
    private:
        void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
        WithRawMethod_ResultQuery() {
            ::grpc::Service::MarkMethodRaw(1);
        }
        ~WithRawMethod_ResultQuery() override {
            BaseClassMustBeDerivedFromService(this);
        }
        // disable synchronous version of this method
        ::grpc::Status ResultQuery(::grpc::ServerContext * /*context*/, const ::NetworkTest::Query * /*request*/, ::NetworkTest::Result * /*response*/) override {
            abort();
            return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
        }
        void RequestResultQuery(::grpc::ServerContext *context, ::grpc::ByteBuffer *request, ::grpc::ServerAsyncResponseWriter<::grpc::ByteBuffer> *response, ::grpc::CompletionQueue *new_call_cq, ::grpc::ServerCompletionQueue *notification_cq, void *tag) {
            ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
        }
    };
    template<class BaseClass>
    class WithRawCallbackMethod_AnswerRegister : public BaseClass {
    private:
        void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
        WithRawCallbackMethod_AnswerRegister() {
            ::grpc::Service::MarkMethodRawCallback(0,
                                                   new ::grpc::internal::CallbackUnaryHandler<::grpc::ByteBuffer, ::grpc::ByteBuffer>(
                                                           [this](
                                                                   ::grpc::CallbackServerContext *context, const ::grpc::ByteBuffer *request, ::grpc::ByteBuffer *response) { return this->AnswerRegister(context, request, response); }));
        }
        ~WithRawCallbackMethod_AnswerRegister() override {
            BaseClassMustBeDerivedFromService(this);
        }
        // disable synchronous version of this method
        ::grpc::Status AnswerRegister(::grpc::ServerContext * /*context*/, const ::NetworkTest::Register * /*request*/, ::NetworkTest::Result * /*response*/) override {
            abort();
            return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
        }
        virtual ::grpc::ServerUnaryReactor *AnswerRegister(
                ::grpc::CallbackServerContext * /*context*/, const ::grpc::ByteBuffer * /*request*/, ::grpc::ByteBuffer * /*response*/) { return nullptr; }
    };
    template<class BaseClass>
    class WithRawCallbackMethod_ResultQuery : public BaseClass {
    private:
        void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
        WithRawCallbackMethod_ResultQuery() {
            ::grpc::Service::MarkMethodRawCallback(1,
                                                   new ::grpc::internal::CallbackUnaryHandler<::grpc::ByteBuffer, ::grpc::ByteBuffer>(
                                                           [this](
                                                                   ::grpc::CallbackServerContext *context, const ::grpc::ByteBuffer *request, ::grpc::ByteBuffer *response) { return this->ResultQuery(context, request, response); }));
        }
        ~WithRawCallbackMethod_ResultQuery() override {
            BaseClassMustBeDerivedFromService(this);
        }
        // disable synchronous version of this method
        ::grpc::Status ResultQuery(::grpc::ServerContext * /*context*/, const ::NetworkTest::Query * /*request*/, ::NetworkTest::Result * /*response*/) override {
            abort();
            return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
        }
        virtual ::grpc::ServerUnaryReactor *ResultQuery(
                ::grpc::CallbackServerContext * /*context*/, const ::grpc::ByteBuffer * /*request*/, ::grpc::ByteBuffer * /*response*/) { return nullptr; }
    };
    template<class BaseClass>
    class WithStreamedUnaryMethod_AnswerRegister : public BaseClass {
    private:
        void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
        WithStreamedUnaryMethod_AnswerRegister() {
            ::grpc::Service::MarkMethodStreamed(0,
                                                new ::grpc::internal::StreamedUnaryHandler<
                                                        ::NetworkTest::Register, ::NetworkTest::Result>(
                                                        [this](::grpc::ServerContext *context,
                                                               ::grpc::ServerUnaryStreamer<
                                                                       ::NetworkTest::Register, ::NetworkTest::Result> *streamer) {
                                                            return this->StreamedAnswerRegister(context,
                                                                                                streamer);
                                                        }));
        }
        ~WithStreamedUnaryMethod_AnswerRegister() override {
            BaseClassMustBeDerivedFromService(this);
        }
        // disable regular version of this method
        ::grpc::Status AnswerRegister(::grpc::ServerContext * /*context*/, const ::NetworkTest::Register * /*request*/, ::NetworkTest::Result * /*response*/) override {
            abort();
            return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
        }
        // replace default version of method with streamed unary
        virtual ::grpc::Status StreamedAnswerRegister(::grpc::ServerContext *context, ::grpc::ServerUnaryStreamer<::NetworkTest::Register, ::NetworkTest::Result> *server_unary_streamer) = 0;
    };
    template<class BaseClass>
    class WithStreamedUnaryMethod_ResultQuery : public BaseClass {
    private:
        void BaseClassMustBeDerivedFromService(const Service * /*service*/) {}

    public:
        WithStreamedUnaryMethod_ResultQuery() {
            ::grpc::Service::MarkMethodStreamed(1,
                                                new ::grpc::internal::StreamedUnaryHandler<
                                                        ::NetworkTest::Query, ::NetworkTest::Result>(
                                                        [this](::grpc::ServerContext *context,
                                                               ::grpc::ServerUnaryStreamer<
                                                                       ::NetworkTest::Query, ::NetworkTest::Result> *streamer) {
                                                            return this->StreamedResultQuery(context,
                                                                                             streamer);
                                                        }));
        }
        ~WithStreamedUnaryMethod_ResultQuery() override {
            BaseClassMustBeDerivedFromService(this);
        }
        // disable regular version of this method
        ::grpc::Status ResultQuery(::grpc::ServerContext * /*context*/, const ::NetworkTest::Query * /*request*/, ::NetworkTest::Result * /*response*/) override {
            abort();
            return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
        }
        // replace default version of method with streamed unary
        virtual ::grpc::Status StreamedResultQuery(::grpc::ServerContext *context, ::grpc::ServerUnaryStreamer<::NetworkTest::Query, ::NetworkTest::Result> *server_unary_streamer) = 0;
    };
    typedef WithStreamedUnaryMethod_AnswerRegister<WithStreamedUnaryMethod_ResultQuery<Service>> StreamedUnaryService;
    typedef Service SplitStreamedService;
    typedef WithStreamedUnaryMethod_AnswerRegister<WithStreamedUnaryMethod_ResultQuery<Service>> StreamedService;
};

}// namespace NetworkTest


#endif// GRPC_NetworkTest_2eproto__INCLUDED
