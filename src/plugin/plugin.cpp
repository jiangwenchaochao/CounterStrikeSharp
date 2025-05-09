#include "plugin/plugin.h"
namespace counterstrikesharp::plugin {
    Plugin::Plugin(){
      plugins().push_back(this);
    }
    // 虚析构函数
    Plugin::~Plugin() {}
    std::vector<Plugin*>& Plugin::plugins() {
        static std::vector<Plugin*> instance;
        return instance;
    }

    void Plugin::onMapStart(char * str){
    }

    void PluginsLoad(bool hot_reload){
        for(auto p: Plugin::plugins()){
            p->Load(hot_reload);
          }
    }
    void PluginsRegisterEvent()
    {
        //-------------
        auto mapstart = [](counterstrikesharp::fxNativeContext* ctx) {
            // 读取参数
            char* str  = reinterpret_cast<char *>(ctx->arguments[0]);
            for(auto p : Plugin::plugins()){
                p->onMapStart(str);
            }
        };
        globals::callbackManager.TryAddFunction("OnMapStart", mapstart);
    }
    void PluginsUnload()
    {
    }
}
