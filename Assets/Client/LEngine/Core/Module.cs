namespace LEngine
{
    public interface IModuleUpdate
    {
        void Update(float elapseSeconds, float realElapseSeconds);
    }

    /// <summary>
    /// ¿ò¼ÜÄ£¿é»ùÀà
    /// </summary>
    public interface IModule
    {
        public int Priority => 0;

        public void OnInit();

        public void Shutdown();
    }
}
