#include <napi.h>
#include "dsjin.h"
using namespace Napi;
using namespace DSJIN;
String Hello(const CallbackInfo& info) {
  return String::New(info.Env(), HelloWorld());
}
Object Init(Env env, Object exports) {
  exports.Set("hello", Function::New(env, Hello));
  return exports;
}
NODE_API_MODULE(hello, Init)