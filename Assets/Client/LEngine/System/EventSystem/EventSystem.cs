using System;

namespace LEngine
{
    public class EventSystem : IEventSystem, ISystem
    {
        private EventModule eventModule;

        public void RegisterEvent(string eventName, Action action)
        {
            eventModule.RegisterEvent(eventName, action);
        }

        public void RegisterEvent<T>(string eventName, Action<T> action)
        {
            eventModule.RegisterEvent(eventName, action);
        }

        public void DispatchEvent(string eventName)
        {
            eventModule.DispatchEvent(eventName);
        }

        public void DispatchEvent<T>(string eventName, T arg0)
        {
            eventModule.DispatchEvent(eventName, arg0);
        }

        public void RemoveEvent(string eventName, Action action)
        {
            eventModule.RemoveEvent(eventName, action);
        }

        public void RemoveEvent<T>(string eventName, Action<T> action)
        {
            eventModule.RemoveEvent(eventName, action);
        }

        public void RemoveEvent(string eventName)
        {
            eventModule.RemoveEvent(eventName);
        }

        public void Clear()
        {
            eventModule.Clear();
        }

        public void RegisterEvent<T>(Action<T> action) where T : BaseEvent
        {
            RegisterEvent<T>(typeof(T).Name, action);
        }

        public void RemoveEvent<T>(Action<T> action) where T : BaseEvent
        {
            RemoveEvent(typeof(T).Name, action);
        }

        public void RemoveEvent<T>() where T : BaseEvent
        {
            RemoveEvent(typeof(T).Name);
        }

        public void DispatchEvent<T>(T arg) where T : BaseEvent
        {
            DispatchEvent(typeof(T).Name, arg);
        }

        public void OnInit()
        {
            eventModule = new EventModule();
        }

        public void Shutdown()
        {
            eventModule.Clear();
            eventModule = null;
        }
    }
}
