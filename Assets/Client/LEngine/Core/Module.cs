namespace LEngine
{
    public interface IModuleUpdate
    {
        void Update(float elapseSeconds, float realElapseSeconds);
    }

    /// <summary>
    /// ���ģ�����
    /// </summary>
    public interface IModule
    {
        public int Priority => 0;

        public void OnInit();

        public void Shutdown();
    }
}
