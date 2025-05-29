namespace LEngine
{
    public interface ISystemUpdate
    {
        void Update(float elapseSeconds, float realElapseSeconds);
    }

    /// <summary>
    /// ¿ò¼ÜÄ£¿é»ùÀà
    /// </summary>
    public interface ISystem
    {
        public int Priority => 0;

        public void OnInit();

        public void Shutdown();
    }
}
