using UnityEngine;

namespace LEngine
{
    public static class GameTime
    {
        /// <summary>
        /// ��֡��ʼʱ��ʱ�䣨ֻ������
        /// </summary>
        public static float time;

        /// <summary>
        /// ����һ֡����ǰ֡�ļ�����룩��ֻ������
        /// </summary>
        public static float deltaTime;

        /// <summary>
        /// timeScale����һ֡����ǰ֡�Ķ���ʱ����������Ϊ��λ����ֻ������
        /// </summary>
        public static float unscaledDeltaTime;

        /// <summary>
        /// ִ������������̶�֡���ʸ��µ�ʱ����������Ϊ��λ����
        /// <remarks>��MonoBehavior��MonoBehaviour.FixedUpdate��</remarks>
        /// </summary>
        public static float fixedDeltaTime;

        /// <summary>
        /// ����Ϸ��ʼ��������֡����ֻ������
        /// </summary>
        public static float frameCount;

        /// <summary>
        /// timeScale��֡�Ķ���ʱ�䣨ֻ��������������Ϸ��ʼ(�ȸ���ɺ�)������ʱ�䣨����Ϊ��λ����
        /// </summary>
        public static float unscaledTime;

        /// <summary>
        /// ����һ֡��ʱ�䡣
        /// </summary>
        public static void StartFrame()
        {
            time = Time.time;
            deltaTime = Time.deltaTime;
            unscaledDeltaTime = Time.unscaledDeltaTime;
            fixedDeltaTime = Time.fixedDeltaTime;
            frameCount = Time.frameCount;
            unscaledTime = Time.unscaledTime;
        }
    }
}
