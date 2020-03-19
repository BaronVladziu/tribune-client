// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tribune_tts.proto

#include "tribune_tts.pb.h"
#include "tribune_tts.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace techmo {
namespace tribune {

static const char* TTS_method_names[] = {
  "/techmo.tribune.TTS/Synthesize",
};

std::unique_ptr< TTS::Stub> TTS::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< TTS::Stub> stub(new TTS::Stub(channel));
  return stub;
}

TTS::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Synthesize_(TTS_method_names[0], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReader< ::techmo::tribune::SynthesizeResponse>* TTS::Stub::SynthesizeRaw(::grpc::ClientContext* context, const ::techmo::tribune::SynthesizeRequest& request) {
  return ::grpc_impl::internal::ClientReaderFactory< ::techmo::tribune::SynthesizeResponse>::Create(channel_.get(), rpcmethod_Synthesize_, context, request);
}

void TTS::Stub::experimental_async::Synthesize(::grpc::ClientContext* context, ::techmo::tribune::SynthesizeRequest* request, ::grpc::experimental::ClientReadReactor< ::techmo::tribune::SynthesizeResponse>* reactor) {
  ::grpc_impl::internal::ClientCallbackReaderFactory< ::techmo::tribune::SynthesizeResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_Synthesize_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::techmo::tribune::SynthesizeResponse>* TTS::Stub::AsyncSynthesizeRaw(::grpc::ClientContext* context, const ::techmo::tribune::SynthesizeRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc_impl::internal::ClientAsyncReaderFactory< ::techmo::tribune::SynthesizeResponse>::Create(channel_.get(), cq, rpcmethod_Synthesize_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::techmo::tribune::SynthesizeResponse>* TTS::Stub::PrepareAsyncSynthesizeRaw(::grpc::ClientContext* context, const ::techmo::tribune::SynthesizeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncReaderFactory< ::techmo::tribune::SynthesizeResponse>::Create(channel_.get(), cq, rpcmethod_Synthesize_, context, request, false, nullptr);
}

TTS::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TTS_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< TTS::Service, ::techmo::tribune::SynthesizeRequest, ::techmo::tribune::SynthesizeResponse>(
          std::mem_fn(&TTS::Service::Synthesize), this)));
}

TTS::Service::~Service() {
}

::grpc::Status TTS::Service::Synthesize(::grpc::ServerContext* context, const ::techmo::tribune::SynthesizeRequest* request, ::grpc::ServerWriter< ::techmo::tribune::SynthesizeResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace techmo
}  // namespace tribune

