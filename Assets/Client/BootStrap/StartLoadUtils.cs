
using HybridCLR;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Cysharp.Threading.Tasks;
using UnityEngine;
using YooAsset;


public class StartLoadUtils
{
    private const int MAX_RETRY_TIME = 3;

    public static List<string> AOTMetaAssemblyFiles { get; } = new List<string>()
    {
        "mscorlib.dll",
        "System.dll",
        "System.Core.dll",
    };

    public static List<string> HotUpdateAssets { get; } = new List<string>() //顺序很重要,越下层的越先加载
    {
        "Client_Base.dll",
        "Client_Logic.dll",
        "Client_GamePlay.dll",
        "Client_UI.dll",
    };

    public static Dictionary<string, byte[]> assetDataDic = new Dictionary<string, byte[]>();

    public static async Task InitDll(string packageName, EPlayMode playMode)
    {
        Debug.Log($"Start Load Dll Package{packageName}");
        await LoadPackage(packageName, playMode);
        await LoadPackageDll(packageName);//加载热更DLL
        Debug.Log($"Load Dll success Package{packageName}");
    }

    public static async Task InitResource(string packageName, EPlayMode playMode)
    {
        Debug.Log($"Start load assetPackage Package{packageName}");
        await LoadPackage(packageName, playMode);
        Debug.Log($"load assetPackage success Package{packageName}");
    }

    private static async Task LoadPackage(string packageName, EPlayMode playMode)
    {
        await InitPackage(packageName, playMode); //初始化资源包
        string packageVersion = await UpdatePackageVersion(packageName); //更新资源版本号
        await UpdatePackageManifest(packageName, packageVersion);//更新资源清单
        if (playMode == EPlayMode.HostPlayMode)
        {
            var downloader = CreatePackageDownloader(packageName); //创建资源下载器
            if (downloader.TotalDownloadCount != 0)//有新资源
            {
                await DownloadPackageFiles(downloader);//下载资源文件
            }
            else
            {
                Debug.Log("Not found any download files !");
            }
        }
        await ClearPackageCache(packageName);//清理资源缓存
    }

    /// <summary>
    /// 初始化资源包
    /// </summary>
    public static async Task InitPackage(string packageName, EPlayMode playMode)
    {
        int maxRetryTime = MAX_RETRY_TIME;
        Debug.Log($"Init assetPackage!!! Package: {packageName} EPlayMode: {playMode}");
        var package = YooAssets.TryGetPackage(packageName) ?? YooAssets.CreatePackage(packageName);
        InitializationOperation initializationOperation = null;

        // 编辑器下的模拟模式
        if (playMode == EPlayMode.EditorSimulateMode)
        {
            Debug.Log("EditorSimulateMode！！！");
            PackageInvokeBuildResult simulateBuildResult = EditorSimulateModeHelper.SimulateBuild(packageName);
            EditorSimulateModeParameters createParameters = new EditorSimulateModeParameters();
            createParameters.EditorFileSystemParameters =
                FileSystemParameters.CreateDefaultEditorFileSystemParameters(simulateBuildResult.PackageRootDirectory);
            initializationOperation = package.InitializeAsync(createParameters);
        }
        // 单机运行模式
        if (playMode == EPlayMode.OfflinePlayMode)
        {
            Debug.Log("OfflinePlayMode！！！");
            var createParameters = new OfflinePlayModeParameters();
            createParameters.BuildinFileSystemParameters =
                FileSystemParameters.CreateDefaultBuildinFileSystemParameters();
            initializationOperation = package.InitializeAsync(createParameters);
        }
        // 联机运行模式
        if (playMode == EPlayMode.HostPlayMode)
        {
            Debug.Log("HostPlayMode！！！");
            string defaultHostServer = GetHostServerURL(packageName);
            string fallbackHostServer = GetHostServerURL(packageName);
            IRemoteServices remoteServices = new RemoteServices(defaultHostServer, fallbackHostServer);
            var createParameters = new HostPlayModeParameters();
            createParameters.BuildinFileSystemParameters =
                FileSystemParameters.CreateDefaultBuildinFileSystemParameters();
            createParameters.CacheFileSystemParameters =
                FileSystemParameters.CreateDefaultCacheFileSystemParameters(remoteServices);
            initializationOperation = package.InitializeAsync(createParameters);
        }

        await initializationOperation;
        if (initializationOperation.Status != EOperationStatus.Succeed)
        {
            Debug.LogError($"Init assetPackage Failed!!! retry!!! {initializationOperation.Error}");
        }
        else
        {
            Debug.Log($"Init assetPackage  success !!!");
        }
    }

    /// <summary>
    /// 更新资源版本号
    /// </summary>
    public static async Task<string> UpdatePackageVersion(string packageName)
    {
        var package = YooAssets.GetPackage(packageName);
        var operation = package.RequestPackageVersionAsync();
        await operation;
        if (operation.Status != EOperationStatus.Succeed)
        {
            Debug.LogError($"UpdatePackageVersion Failed!!! {operation.Error}");
            return string.Empty;
        }
        else
        {
            Debug.Log($"UpdatePackageVersion Success!!! Request package version : {operation.PackageVersion}");
            return operation.PackageVersion;
        }
    }

    /// <summary>
    /// 更新资源清单
    /// </summary>
    public static async Task UpdatePackageManifest(string packageName, string packageVersion)
    {
        var package = YooAssets.GetPackage(packageName);
        var operation = package.UpdatePackageManifestAsync(packageVersion);
        await operation;
        if (operation.Status != EOperationStatus.Succeed)
        {
            Debug.LogError($"UpdatePackageManifest Failed!!! {operation.Error}");
        }
        else
        {
            Debug.Log($"UpdatePackageManifest  Success!!!");
        }
    }

    /// <summary>
    /// 创建资源下载器
    /// </summary>
    public static ResourceDownloaderOperation CreatePackageDownloader(string packageName)
    {
        Debug.Log($"Create Downloader  Package{packageName}");
        var package = YooAssets.GetPackage(packageName);
        int downloadingMaxNum = 10;
        int failedTryAgain = 3;
        ResourceDownloaderOperation downloader = package.CreateResourceDownloader(downloadingMaxNum, failedTryAgain);
        return downloader;
    }

    /// <summary>
    /// 下载资源文件
    /// </summary>
    public static async Task DownloadPackageFiles(ResourceDownloaderOperation downloader)
    {
        downloader.DownloadErrorCallback = (data) =>
        {
            Debug.Log($"下载出错：文件名：{data.FileName}，错误信息：{data.ErrorInfo}");
        };
        downloader.DownloadUpdateCallback = (data) =>
        {
            Debug.Log($"文件总数：{data.TotalDownloadCount},已下载文件数：{data.CurrentDownloadCount}," +
                      $"下载总大小：{data.TotalDownloadBytes},已下载大小{data.CurrentDownloadBytes}");
        };
        downloader.DownloadFileBeginCallback = (data) =>
        {
            Debug.Log($"开始下载：文件名：{data.FileName},文件大小：{data.FileSize}");
        };

        downloader.BeginDownload();
        await downloader;
        if (downloader.Status != EOperationStatus.Succeed)
        {
            Debug.LogError($"下载失败：{downloader.Error}");
        }
        else
        {
            Debug.Log($"下载成功");
        }
    }

    public static async Task LoadPackageDll(string packageName)
    {
        Debug.Log($"加载热更DLL Package{packageName}");
        var package = YooAssets.GetPackage(packageName);
        await LoadDllAssets(package, AOTMetaAssemblyFiles, "AOTDll", true);
        await LoadDllAssets(package, HotUpdateAssets, "HotUpdateDll");
        LoadHotUpdateAssemblies();
    }

    /// <summary>
    /// 加载DLL资源
    /// </summary>
    private static async Task LoadDllAssets(ResourcePackage package, List<string> assets, string pathName,
        bool isAOTMetadata = false)
    {
        foreach (var asset in assets)
        {
            RawFileHandle handle = package.LoadRawFileAsync($"Assets/Bundle/{pathName}/{asset}");
            await handle;
            if (handle.Status != EOperationStatus.Succeed)
            {
                Debug.LogError($"加载失败: {asset}, 错误: {handle.LastError}");
                continue;
            }
            byte[] fileData = handle.GetRawFileData();
            assetDataDic[asset] = fileData;
            Debug.Log($"{asset} 加载成功，大小: {fileData.Length}");
            if (isAOTMetadata)//加载AOT数据
            {
                try
                {
                    // 使用 HybridCLR 的 API 加载 AOT 元数据
                    HomologousImageMode mode = HomologousImageMode.SuperSet;
                    RuntimeApi.LoadMetadataForAOTAssembly(fileData, mode);
                    Debug.Log($"AOT 元数据加载成功: {asset}");
                }
                catch (Exception e)
                {
                    Debug.LogError($"AOT 元数据加载失败: {asset}, 错误: {e}");
                }
            }
            handle.Release();
        }
    }

    /// <summary>
    /// 清理资源缓存
    /// </summary>
    public static async Task ClearPackageCache(string packageName)
    {
        Debug.Log($"加载完成 开始清理资源缓存!!  Package{packageName}");
        var package = YooAssets.GetPackage(packageName);
        var operation = package.ClearCacheFilesAsync(EFileClearMode.ClearUnusedBundleFiles);
        await operation;
        assetDataDic.Clear();
    }

    private static void LoadHotUpdateAssemblies()
    {
        for (var i = 0; i < HotUpdateAssets.Count; i++)
        {
            var asset = HotUpdateAssets[i];
            if (assetDataDic.TryGetValue(asset, out byte[] dllData))
            {
                try
                {
                    System.Reflection.Assembly.Load(dllData);
                    Debug.Log($"热更新 DLL 加载成功: {asset}");
                }
                catch (Exception e)
                {
                    Debug.LogError($"热更新 DLL 加载失败: {asset}, 错误: {e}");
                }
            }
        }
    }

    /// <summary>
    /// 获取资源服务器地址
    /// </summary>
    private static string GetHostServerURL(string packageName)
    {
        string bucketName = "unity-2540297235";
        string endpoint = "oss-cn-hangzhou.aliyuncs.com";
        string version = Bootstrap.Instance.Version;
        string hostServerIP = $"https://{bucketName}.{endpoint}/LPublic/{version}/{packageName}";

        return hostServerIP;

        // #if UNITY_EDITOR
        //         if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.Android)
        //             return $"{hostServerIP}";
        //         else if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.iOS)
        //             return $"{hostServerIP}";
        //         else if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.WebGL)
        //             return $"{hostServerIP}";
        //         else
        //             return $"{hostServerIP}";
        // #else
        //         if (Application.platform == RuntimePlatform.Android)
        //             return $"{hostServerIP}";
        //         else if (Application.platform == RuntimePlatform.IPhonePlayer)
        //             return $"{hostServerIP}";
        //         else if (Application.platform == RuntimePlatform.WebGLPlayer)
        //             return $"{hostServerIP}";
        //         else
        //             return $"{hostServerIP}";
        // #endif
    }
}
