using System;
using UnityEngine;

namespace LEngine
{
    public class PoolSystem : IPoolSystem, ISystem
    {
        public const string PoolLayerGameObjectName = "PoolLayer";
        private GameObjectPoolModule gameObjectPoolModule;
        private ObjectPoolModule objectPoolModule;
        private Transform poolRoot;

        #region GameObject对象池

        public void InitGameObjectPool(string keyName, int maxCapacity = -1, GameObject prefab = null, int defaultQuantity = 0)
        {
            gameObjectPoolModule.InitObjectPool(keyName, maxCapacity, prefab, defaultQuantity);
        }

        public void InitGameObjectPool(string keyName, int maxCapacity, GameObject[] gameObjects = null)
        {
            gameObjectPoolModule.InitObjectPool(keyName, maxCapacity, gameObjects);
        }

        public void InitGameObjectPool(GameObject prefab, int maxCapacity = -1, int defaultQuantity = 0)
        {
            InitGameObjectPool(prefab.name, maxCapacity, prefab, defaultQuantity);
        }

        public GameObject GetGameObject(string keyName, Transform parent = null)
        {
            GameObject go = gameObjectPoolModule.GetObject(keyName, parent);
            return go;
        }

        public T GetGameObject<T>(string keyName, Transform parent = null) where T : Component
        {
            GameObject go = GetGameObject(keyName, parent);
            if (go != null) return go.GetComponent<T>();
            else return null;
        }

        public bool PushGameObject(string keyName, GameObject obj)
        {
            if (!obj.IsNull())
            {
                bool res = gameObjectPoolModule.PushObject(keyName, obj);
                return res;
            }
            else
            {
                Debug.LogError("您正在将Null放置对象池");
                return false;
            }
        }

        public bool PushGameObject(GameObject obj)
        {
            return PushGameObject(obj.name, obj);
        }

        public void ClearGameObject(string keyName)
        {
            gameObjectPoolModule.Clear(keyName);
        }

        #endregion

        #region Object对象池

        public void InitObjectPool<T>(string keyName, int maxCapacity = -1, int defaultQuantity = 0) where T : new()
        {
            objectPoolModule.InitObjectPool<T>(keyName, maxCapacity, defaultQuantity);
        }

        public void InitObjectPool<T>(int maxCapacity = -1, int defaultQuantity = 0) where T : new()
        {
            InitObjectPool<T>(typeof(T).FullName, maxCapacity, defaultQuantity);
        }

        public void InitObjectPool(string keyName, int maxCapacity = -1)
        {
            objectPoolModule.InitObjectPool(keyName, maxCapacity);
        }

        public void InitObjectPool(Type type, int maxCapacity = -1)
        {
            objectPoolModule.InitObjectPool(type, maxCapacity);
        }

        public T GetObject<T>() where T : class
        {
            return GetObject<T>(typeof(T).FullName);
        }

        public T GetObject<T>(string keyName) where T : class
        {
            object obj = GetObject(keyName);
            if (obj == null) return null;
            else return (T)obj;
        }

        public object GetObject(Type type)
        {
            return GetObject(type.FullName);
        }

        public object GetObject(string keyName)
        {
            object obj = objectPoolModule.GetObject(keyName);
            return obj;
        }

        public bool PushObject(object obj)
        {
            return PushObject(obj, obj.GetType().FullName);
        }

        public bool PushObject(object obj, string keyName)
        {
            if (obj == null)
            {
                Debug.LogError("您正在将Null放置对象池");
                return false;
            }
            else
            {
                bool res = objectPoolModule.PushObject(obj, keyName);
                return res;
            }
        }

        public void ClearObject<T>()
        {
            ClearObject(typeof(T).FullName);
        }

        public void ClearObject(Type type)
        {
            ClearObject(type.FullName);
        }

        public void ClearObject(string keyName)
        {
            objectPoolModule.ClearObject(keyName);
        }

        #endregion

        public void ClearAll(bool clearGameObject = true, bool clearCSharpObject = true)
        {
            if (clearGameObject)
            {
                gameObjectPoolModule.ClearAll();
            }
            if (clearCSharpObject)
            {
                objectPoolModule.ClearAll();
            }
        }

        public void OnInit()
        {
            gameObjectPoolModule = new GameObjectPoolModule();
            objectPoolModule = new ObjectPoolModule();
            poolRoot = new GameObject("PoolRoot").transform;
            poolRoot.position = Vector3.zero;
            var gameRoot = Transform.FindObjectOfType<LEngineRoot>();
            if (gameRoot == null)
            {
                Debug.LogError("framework is null,can not create poolRoot");
            }
            poolRoot.SetParent(gameRoot.transform);
            gameObjectPoolModule.Init(poolRoot);
        }

        public void Shutdown()
        {
            GameObject.Destroy(poolRoot);
            gameObjectPoolModule = null;
            objectPoolModule = null;
        }
    }
}