using System;
using System.Reflection;
using System.Threading.Tasks;
using cfg.UI;
using UnityEngine;
using UnityEngine.UI;

namespace LEngine
{
    [RequireComponent(typeof(Canvas), typeof(GraphicRaycaster))]
    public abstract class UIBehavior : MonoBehaviour
    {
        #region 实例属性

        private UIWnd wndInfo;
        private Canvas canvas;
        private GraphicRaycaster rayCaster;

        public UIWnd WndInfo
        {
            get => wndInfo;
            set => wndInfo = value;
        }
        public Canvas Canvas
        {
            get
            {
                if (canvas == null)
                {
                    canvas = gameObject.TryAddComponent<Canvas>();
                }
                return canvas;
            }
        }

        public GraphicRaycaster RayCaster => rayCaster != null ? rayCaster : (rayCaster = GetComponent<GraphicRaycaster>());
        public int SortingOrder => Canvas.sortingOrder;

        public bool IsVisible { get; private set; }

        public bool IsShowing => UISystem.IsShow(wndInfo.Name);

        #endregion

        #region UI调用管理

        protected virtual void OnShow(params object[] args) { }
        protected virtual Task OnShowAsync(params object[] args) => Task.CompletedTask;
        protected virtual Task OnPreShowAsync(params object[] args) => Task.CompletedTask;
        protected virtual Task OnPostShowAsync(params object[] args) => Task.CompletedTask;
        protected virtual void OnHide() { }

        public virtual Animator GetAnim()
        {
            return this.transform.GetComponent<Animator>();
        }

        #endregion

        #region 显示/隐藏实现

        /// <summary>
        /// 显示接口，uiSystem调用
        /// </summary>
        public async Task ShowImp(params object[] args)
        {
            try
            {
                transform.localPosition = new Vector3(-50000, -50000, 0);
                if (IsShowing)
                {
                    try
                    {
                        HideImp();
                    }
                    catch (Exception e)
                    {
                        Debug.LogError(e);
                    }

                    await SetVisible(false);
                    gameObject.SetActive(false);
                }
                try
                {
                    AutoBindComponents();
                    await OnPreShowAsync(args);
                    gameObject.SetActive(true);
                    OnShow(args);
                    await OnShowAsync(args);
                    await OnPostShowAsync(args);

                    if (!IsVisible)
                    {
                        await SetVisible(true);
                    }
                }
                catch (Exception e)
                {
                    Debug.LogError($"show wnd failed 1!{e}");
                }
                transform.localPosition = Vector3.zero;
            }
            catch (Exception e)
            {
                Debug.LogError($"UI Show Error: {e}");
            }
        }

        /// <summary>
        /// 关闭接口，uiSystem调用
        /// </summary>
        public void HideImp()
        {
            try
            {
                Debug.Log("Hide:" + GetType());
                if (IsShowing)
                {
                    try
                    {
                        OnHide();
                    }
                    catch (Exception e)
                    {
                        Debug.LogError(e);
                    }
                    IsVisible = false;
                }
                else if (gameObject.activeSelf)
                {
                    try
                    {
                        OnHide();
                    }
                    catch (Exception e)
                    {
                        Debug.LogError(e);
                    }
                }
            }
            catch (Exception e)
            {
                Debug.LogError($"UI Hide Error: {e}");
            }
        }


        #endregion

        #region 自动绑定

        private void AutoBindComponents()
        {
            var fields = GetType().GetFields(BindingFlags.NonPublic | BindingFlags.Instance);
            foreach (var field in fields)
            {
                var bindAttr = field.GetCustomAttribute<AutoBindAttribute>();
                if (bindAttr != null)
                {
                    var component = FindComponent(field.FieldType, bindAttr.Path);
                    if (component != null)
                    {
                        field.SetValue(this, component);
                    }
                }
            }
        }

        private Component FindComponent(Type type, string path)
        {
            var targetTransform = string.IsNullOrEmpty(path) ? transform.Find(type.Name) : transform.Find(path);

            return targetTransform?.GetComponent(type);
        }

        #endregion

        #region 显示关闭其他UI

        protected void ShowUI<T>(params object[] args) where T : UIBehavior
        {
            UISystem.ShowUI<T>(args);
        }

        protected void HideUI<T>() where T : UIBehavior
        {
            UISystem.HideUI<T>();
        }

        protected void Hide()
        {
            UISystem.HideUIByName(wndInfo.Name);
        }

        #endregion

        #region 拓展

        public Task SetVisible(bool value)
        {
            IsVisible = value;
            if (UISystem.SetVisibleFunc != null && this.gameObject != null)
            {
                return UISystem.SetVisibleFunc(this.gameObject, value);
            }
            return Task.CompletedTask;
        }

        public Task SetVisibleNotChangeVisible(bool value)
        {
            if (UISystem.SetVisibleFunc != null && this.gameObject != null)
            {
                return UISystem.SetVisibleFunc(this.gameObject, value);
            }
            return Task.CompletedTask;
        }

        #endregion
    }
}