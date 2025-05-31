using System;

namespace LEngine
{
    public interface IEventSystem
    {
        #region ��Ӽ���

        /// <summary>
        /// ����޲��¼�
        /// </summary>
        public void RegisterEvent(string eventName, Action action);

        // <summary>
        // ���1���¼�����
        // </summary>
        public void RegisterEvent<T>(string eventName, Action<T> action);

        #endregion

        #region ��������

        /// <summary>
        /// �����޲ε��¼�
        /// </summary>
        public void DispatchEvent(string eventName);

        /// <summary>
        /// ����1�ε��¼�
        /// </summary>
        public void DispatchEvent<T>(string eventName, T arg0);

        #endregion

        #region �Ƴ�����

        /// <summary>
        /// �Ƴ��޲ε��¼�����
        /// </summary>
        public void RemoveEvent(string eventName, Action action);

        /// <summary>
        /// �Ƴ�1�ε��¼�����
        /// </summary>
        public void RemoveEvent<T>(string eventName, Action<T> action);


        public void RemoveEvent(string eventName);

        public void Clear();

        #endregion

        #region �����¼�

        public void RegisterEvent<T>(Action<T> action) where T : BaseEvent;

        public void RemoveEvent<T>(Action<T> action) where T : BaseEvent;

        public void RemoveEvent<T>() where T : BaseEvent;

        public void DispatchEvent<T>(T arg) where T : BaseEvent;

        #endregion
    }

    /// <summary>
    /// �¼�����,���������¼���Ҫ�̳������
    /// </summary>
    public class BaseEvent
    {
    }
}