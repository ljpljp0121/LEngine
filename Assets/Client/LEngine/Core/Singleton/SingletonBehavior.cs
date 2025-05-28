using UnityEngine;

namespace LEngine
{
    public abstract class SingletonBehavior<T> : MonoBehaviour where T : SingletonBehavior<T>
    {
        protected static T instance;

        public static T Instance
        {
            get
            {
                if (instance == null)
                {
                    Debug.LogWarning($"未找到 {typeof(T).Name} 的实例，正在创建新实例。");
                    var go = new GameObject(typeof(T).Name);
                    instance = go.AddComponent<T>();
                }
                return instance;
            }
        }

        protected virtual void Awake()
        {
            if (instance == null)
            {
                instance = this as T;
                DontDestroyOnLoad();
            }
            else if (instance != this)
            {
                Debug.LogWarning($"检测到重复的 {typeof(T).Name} 实例，正在销毁。");
                Destroy(gameObject);
            }
        }


        protected void DontDestroyOnLoad()
        {
            if (instance == this)
            {
                DontDestroyOnLoad(gameObject);
            }
        }
    }
}
