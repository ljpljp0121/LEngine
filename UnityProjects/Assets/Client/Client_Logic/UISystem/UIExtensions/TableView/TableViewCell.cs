
using System;
using System.Runtime.CompilerServices;
using UnityEngine;

public class TableViewCell : IComparable<TableViewCell>
{
    public int HashCode { private set; get; }
    public GameObject Go { private set; get; }
    public bool Empty => Index == -1 && RectTransform.childCount == 0;
    public RectTransform RectTransform { private set; get; }

    public int Index
    {
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        get => index;
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        set => index = value;
    }

    private int index = -1;

    public TableViewCell()
    {
        HashCode = GetHashCode();
    }

    public void Init(Transform parent)
    {
        Go = new GameObject("TableViewCell", typeof(RectTransform));
        RectTransform = Go.GetComponent<RectTransform>();
        RectTransform.sizeDelta = Vector2.zero;
        RectTransform.SetParent(parent, false);
    }

    public void ResetData()
    {
        index = -1;
    }

    public int CompareTo(TableViewCell other)
    {
        return index.CompareTo(other.index);
    }

    public void SetArchPoint(in Vector2 anchorMin, in Vector2 anchorMax)
    {
        RectTransform.anchorMin = anchorMin;
        RectTransform.anchorMax = anchorMax;
    }

    public void SetPivotPoint(in Vector2 pivot)
    {
        RectTransform.pivot = pivot;
    }

    public void SetPosition(in Vector2 pos)
    {
        RectTransform.localPosition = pos;
    }
}
