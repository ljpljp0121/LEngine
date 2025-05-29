
using System;
using UnityEngine;
using UnityEngine.UI;

public class UISortingRoot : MonoBehaviour
{
    public Action ReSortCallback = null;
    private Canvas cvsSelf;

    private void InitCanvas()
    {
        gameObject.GetOrAddComponent<GraphicRaycaster>();
        if (!cvsSelf)
        {
            cvsSelf = gameObject.GetOrAddComponent<Canvas>();
        }
        cvsSelf.overrideSorting = true;
    }

    public int SortingOrder { get; private set; } = 0;
    public void SetOrder(int o)
    {
        SortingOrder = o;
        InitCanvas();
        cvsSelf.sortingOrder = o;
        if (ReSortCallback != null)
        {
            ReSortCallback();
        }
    }
}
