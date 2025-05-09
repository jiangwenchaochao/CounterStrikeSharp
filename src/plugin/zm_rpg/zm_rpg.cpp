#include <core/globals.h>

#include "core/log.h"
#include "plugin/plugin.h"
#include "scripting/callback_manager.h"

namespace counterstrikesharp::plugin { 

#define REGISTER_PLUGIN(CLASS_NAME) \
    static CLASS_NAME global_##CLASS_NAME;

    class Zm_rpg :public Plugin{
    public:
        void Load(bool hot_reload) override{
            CSSHARP_CORE_INFO("Zm_rpg load");
        };
        void Unload(bool hotReload) override {
            CSSHARP_CORE_INFO("Zm_rpg Unload");
        };

    public:
        void onMapStart(char * str) override {
            CSSHARP_CORE_INFO("Zm_rpg onMapStart {}" ,str);
        }

    };
    REGISTER_PLUGIN(Zm_rpg);

} // namespace counterstrikesharp::plugin
