namespace LEngine
{
    public interface ISystemUpdate
    {
        void Update(float elapseSeconds, float realElapseSeconds);
    }

    /// <summary>
    /// ���ģ�����
    /// </summary>
    public interface ISystem
    {
        public int Priority => 0;

        public void OnInit();

        public void Shutdown();
    }
}
