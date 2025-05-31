using UnityEngine;

namespace LEngine
{
    public interface IPoolSystem
    {
        #region GameObject对象池
        /// <summary>
        /// 初始化一个GameObject类型的对象池类型
        /// </summary>
        /// <param name="keyName">资源名称</param>
        /// <param name="maxCapacity">容量限制，超出时会销毁而不是进入对象池，-1代表无限</param>
        /// <param name="defaultQuantity">默认容量，填写会向池子中放入对应数量的对象，0代表不预先放入</param>
        /// <param name="prefab">填写默认容量时预先放入的对象</param>
        public void InitGameObjectPool(string keyName, int maxCapacity = -1, GameObject prefab = null, int defaultQuantity = 0);

        /// <summary>
        /// 初始化对象池
        /// </summary>
        /// <param name="keyName"></param>
        /// <param name="maxCapacity">最大容量，-1代表无限</param>
        /// <param name="gameObjects">默认要放进来的对象数组</param>
        public void InitGameObjectPool(string keyName, int maxCapacity, GameObject[] gameObjects = null);

        /// <summary>
        /// 初始化对象池并设置容量
        /// </summary>
        /// <param name="maxCapacity">容量限制，超出时会销毁而不是进入对象池，-1代表无限</param>
        /// <param name="defaultQuantity">默认容量，填写会向池子中放入对应数量的对象，0代表不预先放入</param>
        /// <param name="prefab">填写默认容量时预先放入的对象</param>
        public void InitGameObjectPool(GameObject prefab, int maxCapacity = -1, int defaultQuantity = 0);

        /// <summary>
        /// 获取GameObject，没有则返回Null
        /// </summary>
        public GameObject GetGameObject(string keyName, Transform parent = null);

        /// <summary>
        /// 获取GameObject，没有则返回Null
        /// T:组件
        /// </summary>
        public T GetGameObject<T>(string keyName, Transform parent = null) where T : Component;

        /// <summary>
        /// 游戏物体放置对象池中
        /// </summary>
        /// <param name="keyName">对象池中的key</param>
        /// <param name="obj">放入的物体</param>
        public bool PushGameObject(string keyName, GameObject obj);

        /// <summary>
        /// 游戏物体放置对象池中
        /// </summary>
        /// <param name="obj">放入的物体,Key默认为物体名称</param>
        public bool PushGameObject(GameObject obj);

        /// <summary>
        /// 清除某个游戏物体在对象池中的所有数据
        /// </summary>
        public void ClearGameObject(string keyName);
        #endregion

        #region Object对象池

        /// <summary>
        /// 初始化对象池并设置容量
        /// </summary>
        /// <param name="keyName">资源名称</param>
        /// <param name="maxCapacity">容量限制，超出时会销毁而不是进入对象池，-1代表无限</param>
        /// <param name="defaultQuantity">默认容量，填写会向池子中放入对应数量的对象，0代表不预先放入</param>
        public void InitObjectPool<T>(string keyName, int maxCapacity = -1, int defaultQuantity = 0) where T : new();

        /// <summary>
        /// 初始化对象池并设置容量
        /// </summary>
        /// <param name="maxCapacity">容量限制，超出时会销毁，-1代表无限</param>
        /// <param name="defaultQuantity">默认容量，填写会预先向池子中放入对应数量的对象，0代表不预先放入</param>
        public void InitObjectPool<T>(int maxCapacity = -1, int defaultQuantity = 0) where T : new();

        /// <summary>
        /// 初始化一个普通C#对象池类型
        /// </summary>
        /// <param name="keyName">keyName</param>
        /// <param name="maxCapacity">容量，超出时会丢弃，-1代表无限</param>
        public void InitObjectPool(string keyName, int maxCapacity = -1);

        /// <summary>
        /// 初始化对象池
        /// </summary>
        /// <param name="type">资源类型</param>
        /// <param name="maxCapacity">容量限制，超出时会销毁而不是进入对象池，-1代表无限</param>
        public void InitObjectPool(System.Type type, int maxCapacity = -1);

        /// <summary>
        /// 获取普通对象（非GameObject）
        /// </summary>
        public T GetObject<T>() where T : class;

        public T GetObject<T>(string keyName) where T : class;

        public object GetObject(System.Type type);

        public object GetObject(string keyName);

        /// <summary>
        /// 普通对象（非GameObject）放置对象池中
        /// 基于类型存放
        /// </summary>
        public bool PushObject(object obj);

        /// <summary>
        /// 普通对象（非GameObject）放置对象池中
        /// 基于KeyName存放
        /// </summary>
        public bool PushObject(object obj, string keyName);

        /// <summary>
        /// 清理某个C#类型数据
        /// </summary>
        public void ClearObject<T>();

        public void ClearObject(System.Type type);

        public void ClearObject(string keyName);

        #endregion

        #region 通用

        /// <summary>
        /// 清除全部
        /// </summary>
        public void ClearAll(bool clearGameObject = true, bool clearCSharpObject = true);

        #endregion
    }
}