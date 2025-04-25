namespace counterstrikesharp::plugin {
// class plugin
// {
//   public:
//     virtual void Load(bool hot_reload) = 0;
//     virtual void OnAllPluginsLoaded(bool hotReload) = 0;
//     virtual void Unload(bool hotReload) = 0;
// };

class plugin
{
  public:
    void Load(bool hot_reload);
    void OnAllPluginsLoaded(bool hotReload);
    void Unload(bool hotReload);
};

} // namespace counterstrikesharp::plugin
