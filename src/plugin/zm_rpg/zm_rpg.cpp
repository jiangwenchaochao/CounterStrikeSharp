#include <core/globals.h>

#include "core/log.h"
#include "plugin/plugin.h"
#include "scripting/callback_manager.h"

namespace counterstrikesharp::plugin { 

void plugin::Load(bool hot_reload)
{
    auto mapstart = [](counterstrikesharp::fxNativeContext* ctx) {
        // 读取参数
        char* str  = reinterpret_cast<char *>(ctx->arguments[0]);
        CSSHARP_CORE_INFO(str);
        // ctx->result = *reinterpret_cast<uint64_t*>(&result);
    };
    globals::callbackManager.TryAddFunction("OnMapStart", mapstart);
}

void plugin::OnAllPluginsLoaded(bool hotReload) {};
void plugin::Unload(bool hotReload) {};

} // namespace counterstrikesharp::plugin
