#ifndef PLUGIN_H
#define PLUGIN_H

#include <vector>
#include "core/log.h"
#include "scripting/callback_manager.h"
namespace counterstrikesharp::plugin {

  class Plugin{
  public:
    Plugin();
    virtual void Load(bool hot_reload) = 0;
    virtual void Unload(bool hotReload) = 0;
    virtual ~Plugin();
    static std::vector<Plugin*>& plugins();
  public:
    virtual void onMapStart(char * str);
  };

  void PluginsLoad(bool hot_reload);
  void PluginsRegisterEvent();
  void PluginsUnload();

} // namespace counterstrikesharp::plugin
#endif  // PLUGIN_H
