using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

namespace LEngine
{
    /// <summary>
    /// GameObject对象池数据
    /// </summary>
    public class GameObjectPoolData
    {
        // 这一层物体的 父节点
        public Transform RootTransform;
        // 对象容器
        public Queue<GameObject> PoolQueue;
        // 容量限制 -1代表无限
        private int maxCapacity = -1;
        public int MaxCapacity
        {
            get => maxCapacity;
            set => maxCapacity = value;
        }

        public GameObjectPoolData(int capacity = -1)
        {
            if (capacity == -1)
            {
                PoolQueue = new Queue<GameObject>();
            }
            else
            {
                PoolQueue = new Queue<GameObject>(capacity);
            }
        }

        public void Init(string assetPath, Transform poolRootObj, int capacity = -1)
        {
            // 创建父节点 并设置到对象池根节点下方
            GameObject go = SystemCenter.GetSystem<PoolSystem>().GetGameObject(PoolSystem.PoolLayerGameObjectName, poolRootObj);
            if (go.IsNull())
            {
                go = new GameObject(PoolSystem.PoolLayerGameObjectName);
                go.transform.SetParent(poolRootObj);
            }
            RootTransform = go.transform;
            RootTransform.name = assetPath;
            maxCapacity = capacity;
        }

        #region 数据操作

        /// <summary>
        /// 将对象放进对象池
        /// </summary>
        public bool PushObj(GameObject obj)
        {
            // 检测是不是超过容量
            if (maxCapacity != -1 && PoolQueue.Count >= maxCapacity)
            {
                GameObject.Destroy(obj);
                return false;
            }
            // 对象进容器
            PoolQueue.Enqueue(obj);
            // 设置父物体
            obj.transform.SetParent(RootTransform);
            // 设置隐藏
            obj.SetActive(false);
            return true;
        }

        /// <summary>
        /// 从对象池中获取对象
        /// </summary>
        /// <returns></returns>
        public GameObject GetObj(Transform parent = null)
        {
            GameObject obj = PoolQueue.Dequeue();
            // 显示对象
            obj.SetActive(true);
            // 设置父物体
            obj.transform.SetParent(parent);
            if (parent == null)
            {
                // 回归默认场景
                SceneManager.MoveGameObjectToScene(obj, SceneManager.GetActiveScene());
            }
            return obj;
        }

        /// <summary>
        /// 销毁层数据
        /// </summary>
        /// <param name="pushThisToPool">将对象池层级挂接点也推送进对象池</param>
        public void Desotry(bool pushThisToPool = false)
        {
            maxCapacity = -1;
            if (!pushThisToPool)
            {
                // 真实销毁 这里由于删除层级根物体 会导致下方所有对象都被删除，所以不需要单独删除PoolQueue
                GameObject.Destroy(RootTransform.gameObject);
            }
            else
            {
                // 销毁队列中的全部游戏物体
                foreach (GameObject item in PoolQueue)
                {
                    GameObject.Destroy(item);
                }

                // 扔进对象池
                RootTransform.gameObject.name = PoolSystem.PoolLayerGameObjectName;
                SystemCenter.GetSystem<PoolSystem>().PushGameObject(RootTransform.gameObject);
                SystemCenter.GetSystem<PoolSystem>().PushObject(this);
            }
            // 队列清理
            PoolQueue.Clear();
            RootTransform = null;
        }

        #endregion
    }
}