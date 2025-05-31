using System.Collections.Generic;
using System;

namespace LEngine
{
    public class EventModule
    {
        private static ObjectPoolModule objectPoolModule = new ObjectPoolModule();
        private Dictionary<string, IEventInfo> eventInfoDic = new Dictionary<string, IEventInfo>();

        #region 内部接口和类

        private interface IEventInfo
        {
            void Destory();
        }

        /// <summary>
        /// 无参-事件信息
        /// </summary>
        private class EventInfo : IEventInfo
        {
            public Action action;

            public void Init(Action action)
            {
                this.action = action;
            }

            public void Destory()
            {
                action = null;
                objectPoolModule.PushObject(this);
            }
        }

        /// <summary>
        /// 多参Action事件信息
        /// </summary>
        private class MultipleParameterEventInfo<TAction> : IEventInfo where TAction : MulticastDelegate
        {
            public TAction action;

            public void Init(TAction action)
            {
                this.action = action;
            }

            public void Destory()
            {
                action = null;
                objectPoolModule.PushObject(this);
            }
        }

        #endregion

        #region 添加监听

        /// <summary>
        /// 添加无参事件
        /// </summary>
        public void RegisterEvent(string eventName, Action action)
        {
            // 有没有对应的事件可以监听
            if (eventInfoDic.ContainsKey(eventName))
            {
                (eventInfoDic[eventName] as EventInfo).action += action;
            }
            // 没有的话，需要新增 到字典中，并添加对应的Action
            else
            {
                EventInfo _eventInfo = objectPoolModule.GetObject<EventInfo>();
                if (_eventInfo == null) _eventInfo = new EventInfo();
                _eventInfo.Init(action);
                eventInfoDic.Add(eventName, _eventInfo);
            }
        }

        // <summary>
        // 添加多参事件监听
        // </summary>
        public void RegisterEvent<TAction>(string eventName, TAction action) where TAction : MulticastDelegate
        {
            // 有没有对应的事件可以监听
            if (eventInfoDic.TryGetValue(eventName, out IEventInfo eventInfo))
            {
                MultipleParameterEventInfo<TAction> _info = (MultipleParameterEventInfo<TAction>)eventInfo;
                _info.action = (TAction)Delegate.Combine(_info.action, action);
            }
            else AddMultipleParameterEventInfo(eventName, action);
        }

        private void AddMultipleParameterEventInfo<TAction>(string eventName, TAction action)
            where TAction : MulticastDelegate
        {
            MultipleParameterEventInfo<TAction> _newEventInfo =
                objectPoolModule.GetObject<MultipleParameterEventInfo<TAction>>();
            if (_newEventInfo == null) _newEventInfo = new MultipleParameterEventInfo<TAction>();
            _newEventInfo.Init(action);
            eventInfoDic.Add(eventName, _newEventInfo);
        }

        #endregion

        #region 触发事件

        /// <summary>
        /// 触发无参的事件
        /// </summary>
        public void DispatchEvent(string eventName)
        {
            if (eventInfoDic.TryGetValue(eventName, out var eventInfo))
            {
                ((EventInfo)eventInfo).action?.Invoke();
            }
        }

        /// <summary>
        /// 触发1个参数的事件
        /// </summary>
        public void DispatchEvent<T>(string eventName, T arg)
        {
            if (eventInfoDic.TryGetValue(eventName, out IEventInfo eventInfo))
                ((MultipleParameterEventInfo<Action<T>>)eventInfo).action?.Invoke(arg);
        }

        #endregion

        #region 移除监听

        /// <summary>
        /// 移除无参的事件监听
        /// </summary>
        public void RemoveEvent(string eventName, Action action)
        {
            if (eventInfoDic.TryGetValue(eventName, out IEventInfo eventInfo))
            {
                ((EventInfo)eventInfo).action -= action;
            }
        }

        /// <summary>
        /// 移除有参数的事件监听
        /// </summary>
        public void RemoveEvent<TAction>(string eventName, TAction action) where TAction : MulticastDelegate
        {
            if (eventInfoDic.TryGetValue(eventName, out IEventInfo eventInfo))
            {
                MultipleParameterEventInfo<TAction> info = (MultipleParameterEventInfo<TAction>)eventInfo;
                info.action = (TAction)Delegate.Remove(info.action, action);
            }
        }

        /// <summary>
        /// 移除一个事件的所有监听
        /// </summary>
        public void RemoveEvent(string eventName)
        {
            if (eventInfoDic.Remove(eventName, out IEventInfo eventInfo))
            {
                eventInfo.Destory();
            }
        }

        /// <summary>
        /// 清空事件中心
        /// </summary>
        public void Clear()
        {
            foreach (string eventName in eventInfoDic.Keys)
            {
                eventInfoDic[eventName].Destory();
            }
            eventInfoDic.Clear();
        }

        #endregion
    }
}