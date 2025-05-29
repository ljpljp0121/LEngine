using System;
using System.Threading.Tasks;
using YooAsset;

namespace LEngine
{
    public interface IAssetSystem
    {
        /// <summary>
        /// 获取或设置无用资源释放的最小间隔时间，以秒为单位。
        /// </summary>
        public float MinUnloadUnusedAssetsInterval { get; set; }
        /// <summary>
        /// 获取或设置无用资源释放的最大间隔时间，以秒为单位。
        /// </summary>
        public float MaxUnloadUnusedAssetsInterval { get; set; }
        /// <summary>
        /// 使用系统释放无用资源策略。
        /// </summary>
        public bool UseSystemUnloadUnusedAssets { get; set; }
        /// <summary>
        /// 获取无用资源释放的等待时长，以秒为单位。
        /// </summary>
        public float LastUnloadUnusedAssetsOperationElapseSeconds { get; }

        /// <summary>
        /// 加载资源（同步方式）
        /// </summary>
        public T LoadAsset<T>(string assetName) where T : UnityEngine.Object;
        /// <summary>
        /// 加载资源（同步方式）
        /// </summary>
        public void LoadAsset<T>(string assetName, Action<T> onLoaded) where T : UnityEngine.Object;

        /// <summary>
        /// 加载资源（异步方式）
        /// </summary>
        public Task<T> LoadAssetAsync<T>(string assetName) where T : UnityEngine.Object;
        /// <summary>
        /// 加载资源（异步方式）
        /// </summary>
        public Task LoadAssetAsync<T>(string assetName, Action<T> onLoaded) where T : UnityEngine.Object;

        /// <summary>
        /// 资源回收（卸载引用计数为零的资源）。
        /// </summary>
        public void UnloadUnusedAssets();

        /// <summary>
        /// 强制回收所有资源。
        /// </summary>
        public void ForceUnloadAllAssets();

        /// <summary>
        /// 触发低内存事件。
        /// </summary>
        public void OnLowMemory();


        /// <summary>
        /// 强制卸载无用资源。
        /// </summary>
        public void ForceUnloadUnusedAssets(bool performGCCollect);
    }
}