using System;
using System.Threading.Tasks;
using UnityEngine;
using YooAsset;
using Object = UnityEngine.Object;

namespace LEngine
{
    public class AssetSystem : IAssetSystem, ISystem, ISystemUpdate
    {
        private readonly string assetPath = "Assets/Bundle/";
        private bool _forceUnloadUnusedAssets = false;
        private bool _preorderUnloadUnusedAssets = false;
        private bool _performGCCollect = false;
        private AsyncOperation _asyncOperation = null;
        private float _lastUnloadUnusedAssetsOperationElapseSeconds = 0f;
        private float minUnloadUnusedAssetsInterval = 60f;
        private float maxUnloadUnusedAssetsInterval = 300f;
        private bool useSystemUnloadUnusedAssets = true;

        public float MinUnloadUnusedAssetsInterval
        {
            get => minUnloadUnusedAssetsInterval;
            set => minUnloadUnusedAssetsInterval = value;
        }

        public float MaxUnloadUnusedAssetsInterval
        {
            get => maxUnloadUnusedAssetsInterval;
            set => maxUnloadUnusedAssetsInterval = value;
        }

        public bool UseSystemUnloadUnusedAssets
        {
            get => useSystemUnloadUnusedAssets;
            set => useSystemUnloadUnusedAssets = value;
        }

        public float LastUnloadUnusedAssetsOperationElapseSeconds => _lastUnloadUnusedAssetsOperationElapseSeconds;

        public T LoadAsset<T>(string assetName) where T : Object
        {
            AssetHandle handle = YooAssets.LoadAssetSync<T>($"{assetPath}{assetName}");
            if (handle?.AssetObject == null)
            {
                Debug.LogError($"加载资源失败: {assetName}");
                return null;
            }

            return handle.AssetObject as T;
        }

        public void LoadAsset<T>(string assetName, Action<T> onLoaded) where T : Object
        {
            AssetHandle handle = YooAssets.LoadAssetSync<T>($"{assetPath}{assetName}");
            if (handle?.AssetObject == null)
            {
                Debug.LogError($"加载资源失败: {assetName}");
                return;
            }
            T obj = handle.AssetObject as T;
            onLoaded?.Invoke(obj);
        }

        public async Task<T> LoadAssetAsync<T>(string assetName) where T : Object
        {
            AssetHandle handle = YooAssets.LoadAssetAsync<T>($"{assetPath}{assetName}");
            try
            {
                await handle.Task;

                if (handle.Status == EOperationStatus.Succeed)
                {
                    return handle.AssetObject as T;
                }
                else
                {
                    Debug.LogError($"加载失败: {assetName}");
                    return null;
                }
            }
            finally
            {
                handle.Release();
            }
        }

        public async Task LoadAssetAsync<T>(string assetName, Action<T> onLoaded) where T : Object
        {
            try
            {
                T result = await LoadAssetAsync<T>(assetName);
                onLoaded?.Invoke(result);
            }
            catch (Exception e)
            {
                Debug.LogError($"异步加载异常: {e.Message}");
            }
        }

        public void UnloadUnusedAssets()
        {
            foreach (var package in YooAssets.GetAllPackages())
            {
                if (package is { InitializeStatus: EOperationStatus.Succeed })
                {
                    package.UnloadUnusedAssetsAsync();
                }
            }
        }

        public void ForceUnloadAllAssets()
        {
            foreach (var package in YooAssets.GetAllPackages())
            {
                if (package is { InitializeStatus: EOperationStatus.Succeed })
                {
                    package.UnloadAllAssetsAsync();
                }
            }
        }

        public void OnLowMemory()
        {
            Debug.LogWarning("Low memory reported...");
            ForceUnloadUnusedAssets(true);
        }

        public void ForceUnloadUnusedAssets(bool performGCCollect)
        {
            _forceUnloadUnusedAssets = true;
            if (performGCCollect)
            {
                _performGCCollect = true;
            }
        }

        public void OnInit()
        {

        }

        public void Shutdown()
        {

        }

        public void Update(float elapseSeconds, float realElapseSeconds)
        {
            _lastUnloadUnusedAssetsOperationElapseSeconds += Time.unscaledDeltaTime;
            if (_asyncOperation == null && (_forceUnloadUnusedAssets ||
                                            _lastUnloadUnusedAssetsOperationElapseSeconds >=
                                            maxUnloadUnusedAssetsInterval ||
                                            _preorderUnloadUnusedAssets &&
                                            _lastUnloadUnusedAssetsOperationElapseSeconds >=
                                            minUnloadUnusedAssetsInterval))
            {
                Debug.Log("Unload unused assets...");
                _forceUnloadUnusedAssets = false;
                _preorderUnloadUnusedAssets = false;
                _lastUnloadUnusedAssetsOperationElapseSeconds = 0f;
                _asyncOperation = Resources.UnloadUnusedAssets();
                if (useSystemUnloadUnusedAssets)
                {
                    UnloadUnusedAssets();
                }
            }

            if (_asyncOperation is { isDone: true })
            {
                _asyncOperation = null;
                if (_performGCCollect)
                {
                    Debug.Log("GC.Collect...");
                    _performGCCollect = false;
                    GC.Collect();
                }
            }
        }
    }
}