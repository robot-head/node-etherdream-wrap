// node-etherdream.cc
#include <node.h>
#include <etherdream.h>

namespace nodeetherdream {

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;

void Method(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  args.GetReturnValue().Set(String::NewFromUtf8(isolate, "world"));
}

void EtherdreamLibStart(const FunctionCallbackInfo<Value>& args) {
  args.GetReturnValue().Set(etherdream_lib_start());
}

void EtherdreamDacCount(const FunctionCallbackInfo<Value>& args) {
  args.GetReturnValue().Set(etherdream_dac_count());
}

void init(Local<Object> exports) {
  NODE_SET_METHOD(exports, "etherdream_lib_start", EtherdreamLibStart);
  NODE_SET_METHOD(exports, "etherdream_dac_count", EtherdreamDacCount);
}

NODE_MODULE(etherdream, init)

}  // namespace nodeetherdream
