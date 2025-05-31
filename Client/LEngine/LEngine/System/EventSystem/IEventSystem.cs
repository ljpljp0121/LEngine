using System;

namespace LEngine
{
    public interface IEventSystem
    {
        #region 添加监听

        /// <summary>
        /// 添加无参事件
        /// </summary>
        public void RegisterEvent(string eventName, Action action);

        // <summary>
        // 添加1参事件监听
        // </summary>
        public void RegisterEvent<T>(string eventName, Action<T> action);

        #endregion

        #region 触发监听

        /// <summary>
        /// 触发无参的事件
        /// </summary>
        public void DispatchEvent(string eventName);

        /// <summary>
        /// 触发1参的事件
        /// </summary>
        public void DispatchEvent<T>(string eventName, T arg0);

        #endregion

        #region 移除监听

        /// <summary>
        /// 移除无参的事件监听
        /// </summary>
        public void RemoveEvent(string eventName, Action action);

        /// <summary>
        /// 移除1参的事件监听
        /// </summary>
        public void RemoveEvent<T>(string eventName, Action<T> action);


        public void RemoveEvent(string eventName);

        public void Clear();

        #endregion

        #region 类型事件

        public void RegisterEvent<T>(Action<T> action) where T : BaseEvent;

        public void RemoveEvent<T>(Action<T> action) where T : BaseEvent;

        public void RemoveEvent<T>() where T : BaseEvent;

        public void DispatchEvent<T>(T arg) where T : BaseEvent;

        #endregion
    }

    /// <summary>
    /// 事件基类,所有类型事件都要继承这个类
    /// </summary>
    public class BaseEvent
    {
    }
}