using DG.Tweening;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using cfg.UI;
using UnityEngine;

namespace LEngine
{
    public interface IVisibleHandler
    {
        /// <summary>
        /// UI显示在界面上的时候触发
        /// </summary>
        /// <param name="isOpen">如果为True,表示主动Show的时候,如果为False,表示其他UI关闭使它显示在最上层</param>
        void OnVisible(bool isOpen);
        /// <summary>
        /// UI关闭的时候触发
        /// </summary>
        /// <param name="isClose">如果为True,表示主动Hide的时候,如果为False,表示其他UI打开使它不显示在最上层</param>
        void OnDisVisible(bool isClose);
    }

    public class UISystem : MonoBehaviour
    {
        private static UISystem instance;
        public static UISystem Instance
        {
            get
            {
                if (instance == null)
                {
                    Debug.Log("UISystem instance is null. Start find UIRoot GameObject......");
                    var go = GameObject.Find("UIRoot");
                    if (go == null)
                    {
                        Debug.LogError("not found UIRoot!!!!!! UISystem will stop run, please check it");
                        return null;
                    }
                    instance = go.TryAddComponent<UISystem>();
                    instance.OnInit();
                }
                return instance;
            }
        }

        private const int LAYER_BASE_INTERVAL = 2000;
        private const int LAYER_ORDER_STEP = 100;

        #region 组件对象

        private Transform uiRoot;
        private RectTransform windowRoot;
        private Camera uiCamera;
        private CanvasGroup black;

        public Transform UIRoot
        {
            get
            {
                if (uiRoot == null)
                {
                    uiRoot = this.transform;
                }
                return uiRoot;
            }
        }
        public Camera UICamera => uiCamera != null ? uiCamera : (uiCamera = uiRoot.Find("UICamera").GetComponent<Camera>());

        public RectTransform WindowRoot
        {
            get
            {
                if (windowRoot == null)
                {
                    windowRoot = UIRoot.Find("WindowRoot").GetComponent<RectTransform>();
                    windowRoot.localPosition = Vector3.zero;
                    windowRoot.localScale = Vector3.one;
                    windowRoot.anchorMin = Vector2.zero;
                    windowRoot.anchorMax = Vector2.one;
                    windowRoot.sizeDelta = Vector2.zero;
                    windowRoot.anchoredPosition3D = Vector3.zero;
                }
                return windowRoot;
            }
        }

        public CanvasGroup Black
        {
            get
            {
                if (black == null)
                {
                    var blackGo = (GameObject)GameObject.Instantiate(Resources.Load("Black"), WindowRoot);
                    black = blackGo.GetComponent<CanvasGroup>();
                    black.GetComponent<RectTransform>().SetFullRect();
                }
                return black;
            }
        }


        #endregion

        //UI实例缓存字典,存储已经实例化的UI
        private readonly Dictionary<string, UIBehavior> uiBehaviorDic = new Dictionary<string, UIBehavior>();
        //预制体缓存字典,存储已经加载的UI预制体
        private readonly Dictionary<string, GameObject> loadedUIPrefabDic = new Dictionary<string, GameObject>();
        //UI实例栈,存储已经打开的UI
        private readonly Stack<UIBehavior> uiBehaviorStack = new Stack<UIBehavior>();
        //各个层级最上层的UI
        private readonly Dictionary<UIWindowLayer, UIBehavior> topWindows = new Dictionary<UIWindowLayer, UIBehavior>();

        #region UI调用对外接口

        public void ShowUIByName(string uiName, params object[] args)
        {
            ShowUIByNameImp(uiName, args).Run();
        }

        public void ShowUI<T>() where T : UIBehavior
        {
            ShowUIByNameImp(typeof(T).Name).Run();
        }

        public void ShowUI<T>(params object[] args) where T : UIBehavior
        {
            ShowUIByNameImp(typeof(T).Name, args).Run();
        }

        public Task ShowUIByNameAsync(string uiName, params object[] args)
        {
            return ShowUIByNameImp(uiName, args);
        }

        public Task ShowUIAsync<T>() where T : UIBehavior
        {
            return ShowUIByNameImp(typeof(T).Name);
        }

        public Task ShowUIAsync<T>(params object[] args) where T : UIBehavior
        {
            return ShowUIByNameImp(typeof(T).Name, args);
        }

        public void HideUIByName(string uiName)
        {
            HideUIByNameImp(uiName);
        }

        public void HideUI<T>() where T : UIBehavior
        {
            HideUIByNameImp(typeof(T).Name);
        }
        public bool IsShow(string wndName)
        {
            if (uiBehaviorDic.TryGetValue(wndName, out var uiBehavior))
            {
                return uiBehavior.IsVisible;
            }
            else
            {
                return false;
            }
        }

        #endregion

        #region UI调用内部接口

        protected Task ShowUIByNameImp(string uiName, params object[] args)
        {
            Debug.Log($"ShowUIByNameImp:{uiName}");
            var tcs = new TaskCompletionSource<bool>();

            //UI显示流程
            void ShowUIBehavior(UIBehavior uiBase)
            {
                TaskUtil.Run(async () =>
                {
                    if (OnUIPreShow != null)
                    {
                        await OnUIPreShow(uiBase);
                    }
                    await uiBase.ShowImp(args); //UIBehavior自定义流程
                    OnUIShown?.Invoke(uiBase, args);
                    tcs.SetResult(true);
                });
            }

            if (uiBehaviorDic.TryGetValue(uiName, out var uiBehavior))
            {
                ShowUIBehavior(uiBehavior);
            }
            else
            {
                LoadUI(uiName, ShowUIBehavior);
            }
            return tcs.Task;
        }

        protected void HideUIByNameImp(string uiName)
        {
            if (uiBehaviorDic.TryGetValue(uiName, out var uiBehavior))
            {
                uiBehavior.HideImp();
                OnUIHide?.Invoke(uiBehavior);
            }
            else
            {
                Debug.LogWarning($"HideUI {uiName} not found!");
            }
        }

        private void LoadUI(string uiName, Action<UIBehavior> ret)
        {
            try
            {
                var (prefab, wndInfo) = GetUIPrefabAndConfig(uiName);

                if (prefab == null)
                {
                    Debug.LogError("! ! ! Can't find in UI prefab. " + uiName);
                    return;
                }
                UIBehavior uiBehavior = GetUIBehaviour(uiName, prefab);
                if (uiBehavior == null)
                {
                    Debug.LogError("! ! ! Can't UIBehavior find in UI prefab. " + uiName);
                    return;
                }
                if (wndInfo == null)
                {
                    wndInfo = Game.Table.GetVOData<TbUIWnd>().Get(uiName);
                    if (wndInfo == null)
                    {
                        Debug.LogError("! ! ! Can't find in UI config. " + uiName);
                        return;
                    }
                }
                uiBehavior.WndInfo = wndInfo;

                ret?.Invoke(uiBehavior);
            }
            catch (Exception e)
            {
                Debug.LogError(e.Message);
            }
        }

        private (GameObject prefab, UIWnd wndInfo) GetUIPrefabAndConfig(string uiName)
        {
            if (loadedUIPrefabDic.TryGetValue(uiName, out var cachePrefab))
            {
                return (cachePrefab, null);
            }

            UIWnd wndInfo = Game.Table.GetVOData<TbUIWnd>().Get(uiName);
            if (wndInfo == null)
            {
                Debug.LogError($"! ! ! Can't find in UI config. {uiName}");
                return (null, null);
            }
            string prefabDir = wndInfo.Path;
            if (string.IsNullOrEmpty(prefabDir))
            {
                Debug.LogError("  error : GetUIPrefabByUIBehaviourName  cant find uibehaviour:" + uiName + " prefabDir:" +
                                prefabDir);
                return (null, null);
            }

            if (loadedUIPrefabDic.TryGetValue(uiName, out var value))
                return (value, wndInfo);

            var uiPrefab = Game.Asset.LoadAsset<GameObject>($"Prefab/UI/{prefabDir}");
            if (uiPrefab == null)
            {
                Debug.LogError("! ! ! Can't find UI Prefab ! ! ! prefabDir：" + prefabDir);
                return (null, null);
            }
            GameObject go = GameObject.Instantiate(uiPrefab, WindowRoot.transform);
            go.transform.Reset();
            loadedUIPrefabDic.Add(uiName, go);
            Debug.Log("-----Add Prefab:" + uiName);
            return (go, wndInfo);
        }

        private UIBehavior GetUIBehaviour(string uiName, GameObject uiGo = null)
        {
            if (uiBehaviorDic.TryGetValue(uiName, out var uiBehavior))
            {
                return uiBehavior;
            }

            if (uiGo)
            {
                uiBehavior = uiGo.GetComponent<UIBehavior>(true);
                if (uiBehavior == null)
                {
                    var monos = uiGo.GetComponentsInChildren<UIBehavior>(true);
                    if (monos.Length > 0)
                        uiBehavior = monos[0];
                }
                if (uiBehavior == null)
                {
                    Debug.LogError("error ：GetUIBehaviour cant find " + uiName + " UI");
                }
            }

            if (uiBehavior != null)
            {
                uiBehaviorDic.TryAdd(uiName, uiBehavior);
            }

            return uiBehavior;
        }

        private T GetUIBehaviour<T>(GameObject uiGO = null) where T : UIBehavior
        {
            return (T)GetUIBehaviour(typeof(T).Name, uiGO);
        }

        #endregion

        #region 层级管理

        private void UpdateSortingLayer(UIBehavior uiBehavior, bool isShow)
        {
            if (uiBehavior.WndInfo == null)
            {
                Debug.LogError("! ! ! Can't find in UI config. " + uiBehavior.name);
                return;
            }
            int layer = uiBehavior.WndInfo.Layer;

            if (isShow)
            {
                int order = GetCurOrderNum(uiBehavior);
                var canvas = uiBehavior.Canvas;
                if (canvas != null)
                {
                    canvas.overrideSorting = true;
                    canvas.sortingOrder = order;
                }

                var sortRoot = uiBehavior.gameObject.TryAddComponent<UISortingRoot>();
                if (sortRoot != null)
                {
                    sortRoot.SetOrder(order);
                }

                foreach (var sorting in uiBehavior.GetComponentsInChildren<UISortingOrder>())
                {
                    sorting.ForceRefresh();
                }
            }
        }

        private int GetCurOrderNum(UIBehavior uiBehavior)
        {
            int order = 0;
            List<UIBehavior> all = GetAllBehavior();
            for (int i = all.Count - 1; i >= 0; i--)
            {
                UIBehavior bhvr = all[i];
                if (bhvr != uiBehavior && bhvr.WndInfo.Layer == uiBehavior.WndInfo.Layer)
                {
                    order = bhvr.GetComponent<Canvas>().sortingOrder + LAYER_ORDER_STEP;
                    break;
                }
            }

            if (order == 0)
            {
                order = uiBehavior.WndInfo.Layer * LAYER_BASE_INTERVAL;
            }

            return order;
        }

        #endregion

        #region 拓展事件

        /// <summary>
        /// UIShow之前
        /// </summary>
        public event Func<UIBehavior, Task> OnUIPreShow;
        /// <summary>
        /// UIShow之后
        /// </summary>
        public event Action<UIBehavior, object[]> OnUIShown;
        /// <summary>
        /// UIHide事件
        /// </summary>
        public event Action<UIBehavior> OnUIHide;
        /// <summary>
        /// 设置可见性
        /// </summary>
        public Func<GameObject, bool, Task> SetVisibleFunc;

        private void InitEvent()
        {
            OnUIPreShow += async (behavior) =>
            {
                await PreShowUI(behavior);
            };
            OnUIShown += PostShowUI;
            OnUIHide += PostUIHide;
            SetVisibleFunc += SetVisibleImp;
        }

        #endregion

        #region ShowUI之前拓展

        /// <summary>
        /// ShowUI之前拓展
        /// </summary>
        private async Task PreShowUI(UIBehavior uiBehavior)
        {
            await DealLayerOnShow(uiBehavior);
        }

        private async Task DealLayerOnShow(UIBehavior uiBehavior)
        {
            var layer = uiBehavior.WndInfo.Layer;
            Debug.Log($"DealLayerOnShow: {layer}");
            if (layer == 3)
            {
                List<UIBehavior> all = GetAllBehavior();
                for (int i = all.Count - 1; i >= 0; i--)
                {
                    UIBehavior bhvr = all[i];
                    if (bhvr != uiBehavior)
                    {
                        if (bhvr.WndInfo.Layer == layer)
                        {
                            HideUIByNameImp(bhvr.WndInfo.Name);
                        }
                    }
                }
            }
            else if (layer == 1)
            {
                List<UIBehavior> all = GetAllBehavior();
                for (int i = all.Count - 1; i >= 0; i--)
                {
                    UIBehavior bhvr = all[i];
                    if (bhvr != uiBehavior)
                    {
                        if (bhvr.WndInfo.Layer == layer && bhvr.IsVisible)
                        {
                            Debug.Log($"{bhvr.name} SetVisibleNotChangeVisible (false)");
                            await bhvr.SetVisibleNotChangeVisible(false);
                        }
                    }
                }
            }
        }

        #endregion

        #region ShowUI之后拓展

        /// <summary>
        /// ShowUI之后拓展
        /// </summary>
        private void PostShowUI(UIBehavior uiBehavior, object[] args)
        {
            Debug.Log($"PostShowUI: {uiBehavior.name}");
            SetTopWindowOnShow(uiBehavior);
            UpdateSortingLayer(uiBehavior, true);
        }

        private void SetTopWindowOnShow(UIBehavior uiBehavior)
        {
            SetTopWindow(uiBehavior);
            if (uiBehavior is IVisibleHandler)
            {
                (uiBehavior as IVisibleHandler).OnVisible(true);
            }
            if (uiBehavior.WndInfo.Layer == 1)
            {
                List<UIBehavior> all = GetAllBehavior();
                for (int i = all.Count - 1; i >= 0; i--)
                {
                    UIBehavior bhvr = all[i];
                    if (bhvr != uiBehavior && bhvr.WndInfo.Layer == uiBehavior.WndInfo.Layer && bhvr.IsVisible)
                    {
                        if (bhvr is IVisibleHandler)
                            (bhvr as IVisibleHandler).OnDisVisible(false);
                    }
                }
            }
        }

        #endregion

        #region HideUI拓展

        /// <summary>
        /// HideUI拓展
        /// </summary>
        private void PostUIHide(UIBehavior uiBehavior)
        {
            Debug.Log($"UISystem HideUI : {uiBehavior.name}");
            uiBehavior.gameObject.SetActive(false);
            UpdateSortingLayer(uiBehavior, false);
            DealLayerOnHide(uiBehavior);
            DealTopWindowOnHide(uiBehavior);
            DealDestroyImp(uiBehavior);
        }

        private void DealLayerOnHide(UIBehavior uiBehavior)
        {
            Debug.Log($"DealLayerOnHide: {uiBehavior.name}");
            var layer = uiBehavior.WndInfo.Layer;
            if (layer == 1)
            {
                List<UIBehavior> all = GetAllBehavior();
                Debug.Log($"DealLayerOnShow : all window count : {all.Count}");
                for (int i = all.Count - 1; i >= 0; i--)
                {
                    UIBehavior bhvr = all[i];
                    if (bhvr != uiBehavior && bhvr.WndInfo.Layer == layer && bhvr.IsVisible)
                    {
                        bhvr.SetVisibleNotChangeVisible(true).Run();
                        break;
                    }
                }
            }
        }

        private void DealTopWindowOnHide(UIBehavior uiBehavior)
        {
            if (uiBehavior is IVisibleHandler)
                (uiBehavior as IVisibleHandler).OnDisVisible(true);
            if (IsTop(uiBehavior) && uiBehavior.WndInfo.Layer == 1)
            {
                List<UIBehavior> all = GetAllBehavior();
                for (int i = all.Count - 1; i >= 0; i--)
                {
                    UIBehavior bhvr = all[i];
                    if (bhvr != uiBehavior && bhvr.WndInfo.Layer == uiBehavior.WndInfo.Layer)
                    {
                        SetTopWindow(bhvr);
                        if (bhvr is IVisibleHandler)
                            (bhvr as IVisibleHandler).OnVisible(false);
                        return;
                    }
                }
                UIWindowLayer layer = (UIWindowLayer)uiBehavior.WndInfo.Layer;
                topWindows.Remove(layer);
            }
        }

        private void DealDestroyImp(UIBehavior uiBehavior)
        {
            if (uiBehavior.WndInfo.DestroyOnHide)
            {
                string uiName = uiBehavior.WndInfo.Name;
                if (loadedUIPrefabDic.TryGetValue(uiName, out var prefab))
                {
                    Destroy(prefab);
                    if (!loadedUIPrefabDic.Remove(uiName))
                    {
                        Debug.LogWarning($"Key {uiName} not found in LoadedUIPrefabDic");
                    }
                    Debug.Log("-----Destroy Prefab:" + uiName);
                }
                else
                {
                    Debug.Log("=====DestroyUI Can't find uibehaviourName:" + uiName);
                }
                if (!uiBehaviorDic.Remove(uiName))
                {
                    Debug.LogWarning($"Key {uiName} not found in UIBehaviorDic");
                }
                Destroy(uiBehavior.gameObject);
            }
        }

        #endregion

        #region 内部接口拓展

        private async Task SetVisibleImp(GameObject obj, bool visible)
        {
            try
            {
                Debug.Log($"UISystem SetVisible: {obj.name}- {visible}");
                var bhvr = obj.GetComponent<UIBehavior>();
                Animator anim = obj.GetComponent<UIBehavior>().GetAnim();
                if (visible)
                {
                    obj.gameObject.SetActive(true);
                    obj.transform.localPosition = Vector3.zero;
                    if (anim != null)
                    {
                        anim.SetTrigger("open");
                    }
                }
                else
                {
                    if (anim != null)
                    {
                        anim.SetTrigger("close");
                        black.gameObject.SetActive(true);

                        var hide = obj.TryAddComponent<UIHide>();
                        var timer = anim.GetAnimDuration("out", 1f);
                        await hide.Hide(timer);
                        obj.transform.localPosition = new Vector3(-50000, -50000, 0);
                        black.gameObject.SetActive(false);
                    }
                    else
                    {
                        obj.transform.localPosition = new Vector3(-50000, -50000, 0);
                    }
                }

                Debug.Log($"UISystem SetVisible localPosition :{obj.transform.localPosition}");
            }
            catch (Exception e)
            {
                Debug.LogError($"{e.Message}\n{e.StackTrace}");
            }
        }

        private void SetTopWindow(UIBehavior uiBehavior)
        {
            UIWindowLayer layer = (UIWindowLayer)uiBehavior.WndInfo.Layer;
            if (topWindows.ContainsKey(layer))
                topWindows[layer] = uiBehavior;
            else
                topWindows.Add(layer, uiBehavior);
        }

        private List<UIBehavior> GetAllBehavior()
        {
            var list = new List<UIBehavior>(uiBehaviorDic.Values);
            var keys = new List<string>(uiBehaviorDic.Keys);
            for (int i = list.Count - 1; i >= 0; i--)
            {
                if (list[i] == null)
                {
                    list.RemoveAt(i);
                    var t = keys[i];
                    uiBehaviorDic.Remove(t);
                    Debug.LogWarning($"UIBehavior name : {t} is NULL !!!");
                }
            }
            list.Sort(UIBehaviorSortFunc);
            return list;
        }

        private int UIBehaviorSortFunc(UIBehavior x, UIBehavior y)
        {
            return x.SortingOrder - y.SortingOrder;
        }

        public bool IsTop(UIBehavior uiBehavior)
        {
            UIWindowLayer layer = (UIWindowLayer)uiBehavior.WndInfo.Layer;
            if (topWindows.TryGetValue(layer, out var topWindow))
            {
                return topWindow.Equals(uiBehavior);
            }
            return false;
        }

        #endregion

        public void OnInit()
        {
            uiRoot = GetComponent<Transform>();
            uiCamera = uiRoot.Find("UICamera").GetComponent<Camera>();
            windowRoot = uiRoot.Find("WindowRoot").GetComponent<RectTransform>();
            InitEvent();
        }

        public void Shutdown()
        {
            uiRoot = null;
            uiCamera = null;
            windowRoot = null;
            OnUIPreShow = null;
            OnUIShown = null;
            OnUIHide = null;
            SetVisibleFunc = null;
            foreach (string ui in uiBehaviorDic.Keys)
            {
                Instance.HideUIByNameImp(ui);
            }
            uiBehaviorDic.Clear();
            loadedUIPrefabDic.Clear();
            topWindows.Clear();
        }
    }

    /// <summary>
    /// UIWindow层级
    /// </summary>
    public enum UIWindowLayer
    {
        Normal = 1,
        PopUp = 2,
        Tip = 3,
        Marquee = 4,
        Common = 5,
        Loading = 6,
    }

    public class UIHide : MonoBehaviour
    {
        private Tween tw;
        private TaskCompletionSource<bool> tcs;
        public Task Hide(float delayTimer = 1f)
        {
            tcs = new TaskCompletionSource<bool>();
            tw = DOVirtual.DelayedCall(delayTimer, DelayDo);
            return tcs.Task;
        }

        public virtual void UIHideFinish()
        {
            if (tw != null)
            {
                tw.Kill();
                tw = null;
                tcs.SetResult(true);
            }
        }

        private void DelayDo()
        {
            if (tw != null)
            {
                tcs.SetResult(true);
                tw = null;
            }
        }
    }
}