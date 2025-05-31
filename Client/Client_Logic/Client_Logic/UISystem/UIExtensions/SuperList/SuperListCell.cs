
using DG.Tweening;
using System;
using UnityEngine;
using UnityEngine.EventSystems;

public class SuperListCell : MonoBehaviour, IPointerClickHandler
{
    protected Action<SuperListCell> cellClick = null;

    protected object _data;
    protected bool selected;

    [HideInInspector] public CanvasGroup canvasGroup;
    [HideInInspector] public int index;

    public void OnPointerClick(PointerEventData eventData)
    {
        OnPointerClick();
        cellClick?.Invoke(this);
    }

    public virtual void OnPointerClick()
    {

    }
    public virtual void UpdateData(object _data)
    {
        this._data = _data;
    }
    public virtual void SetSelected(bool value)
    {
        selected = value;
    }
    public virtual void SetData(object _data)
    {
        this._data = _data;
    }

    public bool TrySetData(object _data)
    {
        bool ret = false;
        try
        {
            SetData(_data);
            ret = true;
        }
        catch (Exception e)
        {
            Debug.LogError($"{e.Message}\n{e.StackTrace}");
        }

        return ret;
    }

    public void SetClickHandle(Action<SuperListCell> cellClick)
    {
        this.cellClick = cellClick;
    }

   

    #region 渐入渐出处理

    private Tweener tween;

    public int AlphaIn(Action callback)
    {
        void Dele()
        {
            tween = null;
            callback?.Invoke();
        }

        tween = DOVirtual.Float(0, 1, 0.1f, AlphaInDel);
        tween.OnComplete(Dele);
        return gameObject.GetInstanceID();
    }

    public void ReturnInit()
    {
        StopAlphaIn();
        AlphaInDel(1);
    }

    public void StopAlphaIn()
    {
        if (tween != null)
        {
            tween.Kill();
            tween = null;
        }
    }

    private void AlphaInDel(float value)
    {
        canvasGroup.alpha = value;
    }

    #endregion
}
