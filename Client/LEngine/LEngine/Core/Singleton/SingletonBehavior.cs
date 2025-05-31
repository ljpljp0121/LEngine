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
                    Debug.LogWarning($"δ�ҵ� {typeof(T).Name} ��ʵ�������ڴ�����ʵ����");
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
                Debug.LogWarning($"��⵽�ظ��� {typeof(T).Name} ʵ�����������١�");
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
