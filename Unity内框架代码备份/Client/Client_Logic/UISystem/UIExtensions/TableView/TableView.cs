
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using DG.Tweening;
using LEngine;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// 无限循环不等高列表实现
/// </summary>
[RequireComponent(typeof(ScrollRect))]
public class TableView : MonoBehaviour
{
    /// <summary>
    /// 滚动方向
    /// </summary>
    public enum Direction
    {
        /// <summary>
        /// 垂直方向
        /// </summary>
        Vertical,
        /// <summary>
        /// 水平方向
        /// </summary>
        Horizontal,
    }

    public Direction ScrollType;
    public float PaddingFront;

    #region Private filed

    private ScrollRect scrollView;
    private RectTransform content;
    private RectTransform viewPort;
    private Coroutine asyncReload;
    private bool isUsedCellsDirty = false;
    private readonly List<float> cellPositions = new List<float>();
    private readonly List<float> cellLastPositions = new List<float>();
    /// <summary>
    /// 记录使用滚动index
    /// </summary>
    private readonly HashSet<int> indices = new HashSet<int>();
    /// <summary>
    /// 正在被使用的单元
    /// </summary>
    readonly List<TableViewCell> cellUsed = new List<TableViewCell>();
    /// <summary>
    /// 未被使用的单元
    /// </summary>
    readonly List<TableViewCell> cellFreed = new List<TableViewCell>();
    /// <summary>
    /// 给定索引的单元格大小
    /// </summary>
    Func<TableView, int, Vector2> tableCellSizeForIndex;
    /// <summary>
    /// 给定索引的单元格的间隔(指和后边一个cell的间隔）
    /// </summary>
    Func<TableView, int, float> tableCellGapForIndex;
    /// <summary>
    /// 给定索引处的单元格实例
    /// </summary>
    Func<TableView, int, TableViewCell> tableCellAtIndex;
    /// <summary>
    /// 返回给定表视图中的单元格数
    /// </summary>
    Func<TableView, int> numberOfCellsInTableView;
    /// <summary>
    /// 返回给定表视图中的单元格数
    /// </summary>
    Action<TableView, Vector2> tableViewScrollUpdate;

    #endregion

    #region Private methods

    private void Awake()
    {
        scrollView = transform.GetComponent<ScrollRect>();
        scrollView.horizontal = ScrollType == Direction.Horizontal;
        scrollView.vertical = ScrollType == Direction.Vertical;
        content = scrollView.content;
        viewPort = scrollView.viewport;
        InitContent();
        scrollView.onValueChanged.AddListener(OnValueChanged);
    }

    /// <summary>
    /// 初始化内容容器的锚点
    /// </summary>
    private void InitContent()
    {
        Vector2 anchorMin = Vector2.zero;
        Vector2 anchorMax = Vector2.zero;
        Vector2 pivot = Vector2.zero;
        switch (ScrollType)
        {
            case Direction.Vertical:
                anchorMin.y = 1;
                anchorMax.y = 1;
                pivot.y = 1;
                break;
            case Direction.Horizontal:

                break;
            default:
                break;
        }
        content.anchorMin = anchorMin;
        content.anchorMax = anchorMax;
        content.pivot = pivot;
    }

    private void OnDestroy()
    {
        scrollView.onValueChanged.RemoveListener(OnValueChanged);
        tableCellSizeForIndex = null;
        tableCellGapForIndex = null;
        tableCellAtIndex = null;
        numberOfCellsInTableView = null;
    }

    /// <summary>
    /// 更新所有Cell的位置
    /// </summary>
    private void UpdateCellPositions()
    {
        var cellsCount = numberOfCellsInTableView(this);
        cellLastPositions.Clear();
        cellPositions.Clear();
        if (cellsCount > 0)
        {
            float currentPos = 0f + PaddingFront;
            float currentLastPos = currentPos;
            for (int i = 0; i < cellsCount; i++)
            {
                cellPositions.Add(currentPos);
                cellLastPositions.Add(currentLastPos);
                var cellSize = tableCellSizeForIndex(this, i);
                var cellGap = tableCellGapForIndex(this, i);
                switch (ScrollType)
                {
                    case Direction.Vertical:
                        currentLastPos = currentPos + cellSize.y;
                        currentPos = cellSize.y + cellGap;
                        break;
                    case Direction.Horizontal:
                        currentLastPos = currentPos + cellSize.x;
                        currentPos += cellSize.x + cellGap;
                        break;
                    default:
                        break;
                }
            }
            cellLastPositions.Add(currentLastPos);
            cellPositions.Add(currentPos);
        }
    }

    /// <summary>
    /// 位置改变时的回调
    /// </summary>
    private void OnValueChanged(Vector2 position)
    {
        if (tableCellSizeForIndex == null ||
           tableCellAtIndex == null ||
           numberOfCellsInTableView == null ||
           cellLastPositions.Count == 0)
            return;
        ScrollViewDidScroll();
        tableViewScrollUpdate?.Invoke(this, position);
    }

    /// <summary>
    /// 处理移动完成之后的单元
    /// </summary>
    private void ScrollViewDidScroll()
    {
        var cellsCount = numberOfCellsInTableView(this);
        if (cellsCount == 0)
            return;
        if (isUsedCellsDirty)
        {
            isUsedCellsDirty = false;
            cellUsed.Sort();
        }

        int startIndex, endIndex, index, maxIndex;
        var pos = content.localPosition;
        var inverse = ScrollType == Direction.Vertical ? 1 : -1;
        var offset = new Vector2(pos.x * inverse, pos.y * inverse);
        var viewSize = viewPort.rect.size;
        var localScale = content.localScale;
        maxIndex = Mathf.Max(cellsCount - 1, 0);
        startIndex = MinIndexFromOffset(offset);
        if (startIndex == -1)
            startIndex = cellsCount - 1;
        switch (ScrollType)
        {
            case Direction.Vertical:
                offset.y += viewSize.y / localScale.y;
                break;
            case Direction.Horizontal:
                offset.x += viewSize.x / localScale.x;
                break;
            default:
                break;
        }

        endIndex = MaxIndexFromOffset(offset);
        if (endIndex == -1)
            endIndex = cellsCount - 1;

        if (cellUsed.Count > 0)
        {
            var cell = cellUsed[0];
            index = cell.Index;
            while (index < startIndex)
            {
                MoveCellOutOfSight(cell);
                if (cellUsed.Count > 0)
                {
                    cell = cellUsed[0];
                    index = cell.Index;
                }
                else
                    break;
            }
        }

        if (cellUsed.Count > 0)
        {
            var cell = cellUsed.Last();
            index = cell.Index;
            while (index <= maxIndex && index > endIndex)
            {
                MoveCellOutOfSight(cell);
                if (cellUsed.Count > 0)
                {
                    cell = cellUsed.Last();
                    index = cell.Index;
                }
                else
                    break;
            }
        }

        for (int i = startIndex; i <= endIndex; i++)
        {
            if (indices.Contains(i))
                continue;
            UpdateCellAtIndex(i);
        }
    }

    /// <summary>
    /// 计算当前滚动位置的最小索引
    /// </summary>
    private int MinIndexFromOffset(Vector2 offset)
    {
        int maxIndex = numberOfCellsInTableView(this) - 1;
        if (maxIndex < 0)
            return maxIndex;
        int index = MinIndexFromOffsetInternal(ref offset, maxIndex);
        if (index != -1)
        {
            index = Mathf.Max(0, index);
            if (index > maxIndex)
                return -1;
        }
        return index;
    }
    private int MinIndexFromOffsetInternal(ref Vector2 offset, int maxIndex)
    {
        var low = 0;
        var high = maxIndex;
        float search;
        switch (ScrollType)
        {
            case Direction.Horizontal:
                search = offset.x;
                break;
            default:
                search = offset.y;
                break;
        }
        while (low <= high)
        {
            var searchIndex = low + (high - low) / 2;
            float cellStart = cellLastPositions[searchIndex];
            float cellEnd = cellLastPositions[searchIndex + 1];
            if (search >= cellStart && search <= cellEnd)
                return searchIndex;
            else if (search < cellStart)
                high = searchIndex - 1;
            else
                low = searchIndex + 1;
        }

        if (low <= 0)
            return 0;
        return -1;
    }

    /// <summary>
    /// 计算当前滚动位置的最大索引
    /// </summary>
    private int MaxIndexFromOffset(Vector2 offset)
    {
        int maxIndex = numberOfCellsInTableView(this) - 1;
        if (maxIndex < 0)
            return maxIndex;
        int index = MaxIndexFromOffsetInternal(ref offset, maxIndex);
        if (index != -1)
        {
            index = Mathf.Max(0, index);
            if (index > maxIndex)
                return -1;
        }
        return index;
    }
    private int MaxIndexFromOffsetInternal(ref Vector2 offset, int maxIndex)
    {
        var low = 0;
        var high = maxIndex;
        float search;
        switch (ScrollType)
        {
            case Direction.Horizontal:
                search = offset.x;
                break;
            default:
                search = offset.y;
                break;
        }
        while (high >= low)
        {
            var searchIndex = low + (high - low) / 2;
            float cellStart = cellPositions[searchIndex];
            float cellEnd = cellPositions[searchIndex + 1];
            if (search >= cellStart && search <= cellEnd)
                return searchIndex;
            else if (search < cellStart)
                high = searchIndex - 1;
            else
                low = searchIndex + 1;
        }
        if (low <= 0)
            return 0;
        return -1;
    }

    /// <summary>
    /// 对应索引处Cell位置偏移
    /// </summary>
    private Vector2 OffsetFromIndex(int index)
    {
        switch (ScrollType)
        {
            case Direction.Vertical:
                return new Vector2(0, cellPositions[index] * -1);
            case Direction.Horizontal:
                return new Vector2(cellPositions[index], 0);
            default:
                return Vector2.zero;
        }
    }

    /// <summary>
    /// 计算当前滚动位置的最大偏移量
    /// </summary>
    private Vector2 MaxContentOffset()
    {
        var anchorPoint = content.pivot;
        var size = content.sizeDelta;
        var scale = content.localScale;
        float contWidth = size.x * scale.x;
        float contHeight = size.y * scale.y;

        return new Vector2(anchorPoint.x * contWidth, anchorPoint.y * contHeight);
    }

    /// <summary>
    /// 计算当前滚动位置的最小偏移量
    /// </summary>
    private Vector2 MinContentOffset()
    {
        var anchorPoint = content.pivot;
        var size = content.sizeDelta;
        var scale = content.localScale;
        float contWidth = size.x * scale.x;
        float contHeight = size.y * scale.y;

        var viewSize = viewPort.rect.size;

        return new Vector2(viewSize.x - (1 - anchorPoint.x) * contWidth, viewSize.y - (1 - anchorPoint.y) * contHeight);
    }

    /// <summary>
    /// 移动要被隐藏的cell
    /// </summary>
    private void MoveCellOutOfSight(TableViewCell cell)
    {
        cellFreed.Add(cell);
        cellUsed.Remove(cell);
        isUsedCellsDirty = true;
        indices.Remove(cell.Index);
        cell.ResetData();
        cell.Go.SetActive(false);
    }

    /// <summary>
    /// 设置Cell索引
    /// </summary>
    private void SetIndexForCell(int index, TableViewCell cell)
    {
        cell.Index = index;
        var anchorMin = new Vector2();
        var anchorMax = new Vector2();
        var pivot = new Vector2();
        switch (ScrollType)
        {
            case Direction.Vertical:
                anchorMin.y = 1;
                anchorMax.y = 1;
                pivot.y = 1;
                break;
            default:
                break;
        }
        cell.SetArchPoint(anchorMin, anchorMax);
        cell.SetPivotPoint(pivot);
        cell.SetPosition(OffsetFromIndex(index));
    }

    /// <summary>
    /// 设置Content偏移
    /// </summary>
    /// <param name="offset"></param>
    void SetContentOffset(ref Vector2 offset)
    {
        if (scrollView.movementType != ScrollRect.MovementType.Elastic)
        {
            Vector2 minOffset = MinContentOffset();
            Vector2 maxOffset = MaxContentOffset();

            offset.x = Mathf.Clamp(offset.x, minOffset.x, maxOffset.x);
            offset.y = Mathf.Clamp(offset.y, minOffset.y, maxOffset.y);
        }

        content.localPosition = offset;
    }

    /// <summary>
    /// 添加要显示的cell
    /// </summary>
    private void AddCellIfNecessary(TableViewCell cell)
    {
        if (cell.RectTransform.parent != content)
        {
            cell.RectTransform.SetParent(content);
        }
        cell.Go.SetActive(true);
        cellUsed.Add(cell);
        indices.Add(cell.Index);
        isUsedCellsDirty = true;
    }

    /// <summary>
    /// 异步处理每一个单元格，采用Unity携程处理
    /// </summary>
    /// <param name="loadedCall"></param>
    /// <returns></returns>
    IEnumerator ScrollViewDidScrollAsync(Action loadedCall, Func<IEnumerator> func)
    {
        var cellsCount = numberOfCellsInTableView(this);
        if (cellsCount == 0)
            yield break;
        //加载完成之前禁止拖动
        scrollView.vertical = false;
        scrollView.horizontal = false;

        if (isUsedCellsDirty)
        {
            isUsedCellsDirty = false;
            cellUsed.Sort();
        }

        int index;
        var pos = content.localPosition;
        var inverse = ScrollType == Direction.Horizontal ? 1 : -1;
        var offset = new Vector2(pos.x * inverse, pos.y * inverse);
        var viewSize = viewPort.rect.size;
        var localScale = content.localScale;
        var maxIndex = Mathf.Max(cellsCount - 1, 0);

        var startIndex = MinIndexFromOffset(offset);
        if (startIndex == -1)
        {
            startIndex = cellsCount - 1;
        }

        switch (ScrollType)
        {
            case Direction.Vertical:
                offset.y += viewSize.y / localScale.y;
                break;
            case Direction.Horizontal:
                offset.x += viewSize.x / localScale.x;
                break;
            default:
                break;
        }

        var endIndex = MaxIndexFromOffset(offset);
        if (endIndex == -1)
        {
            endIndex = cellsCount - 1;
        }

        if (cellUsed.Count > 0)
        {
            var cell = cellUsed[0];

            index = cell.Index;
            while (index < startIndex)
            {
                MoveCellOutOfSight(cell);
                if (cellUsed.Count > 0)
                {
                    cell = cellUsed[0];
                    index = cell.Index;
                }
                else
                    break;
            }
        }

        if (cellUsed.Count > 0)
        {
            var cell = cellUsed.Last();

            index = cell.Index;

            while (index <= maxIndex && index > endIndex)
            {
                MoveCellOutOfSight(cell);
                if (cellUsed.Count > 0)
                {
                    cell = cellUsed.Last();
                    index = cell.Index;
                }
                else
                    break;
            }
        }

        for (int i = startIndex; i <= endIndex; i++)
        {
            if (indices.Contains(i))
            {
                continue;
            }
            //只有加载或更新的时候会有卡顿，所以在更新范围内的单元格的时候采用分帧处理
            UpdateCellAtIndex(i);
            yield return func.Invoke();
        }
        //加载完成之后才能拖动
        switch (ScrollType)
        {
            case Direction.Vertical:
                scrollView.vertical = true;
                scrollView.horizontal = false;
                break;
            case Direction.Horizontal:
                scrollView.vertical = false;
                scrollView.horizontal = true;
                break;
            default:
                break;
        }


        //最后处理回调
        loadedCall?.Invoke();
        //清理引用
        asyncReload = null;
        ScrollViewDidScroll();
        yield return null;
        ScrollViewDidScroll();
    }

    IEnumerator ReloadDataAsyncInternal(Action loadedCall, Func<IEnumerator> delayFunc)
    {
        return ScrollViewDidScrollAsync(loadedCall, delayFunc);
    }

    private void ReleaseCoroutine()
    {
        if (asyncReload != null)
            StopCoroutine(asyncReload);
        asyncReload = null;
    }

    IEnumerator _frameDelay()
    {
        return null;
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    float EmptyGap(TableView _, int __)
    {
        return 0;
    }
    #endregion

    #region 外部接口

    /// <summary>
    /// 是否能触摸滚动
    /// </summary>
    public bool TouchEnabled
    {
        get => scrollView.enabled;
        set => scrollView.enabled = value;
    }

    /// <summary>
    /// Unity滚动组件
    /// </summary>
    public ScrollRect ScrollRect => scrollView;

    /// <summary>
    /// 设置数据代理
    /// </summary>
    /// <param name="tableCellSizeForIndex">获取给定单元格大小的代理</param>
    /// <param name="tableCellAtIndex">获取给定索引处的单元格实例的代理</param>
    /// <param name="numberOfCellsInTableView">获取返回给定表视图中的单元格数的代理</param>
    /// <param name="tableCellGapForIndex">获取给定索引处的单元格间隔的代理</param>
    /// <param name="tableViewScrollUpdate">获取滚动区域位置变化时的代理</param>
    public void SetDataSource(
        Func<TableView, int, Vector2> tableCellSizeForIndex,
        Func<TableView, int, TableViewCell> tableCellAtIndex,
        Func<TableView, int> numberOfCellsInTableView,
        Func<TableView, int, float> tableCellGapForIndex = null,
        Action<TableView, Vector2> tableViewScrollUpdate = null)
    {
        if (tableCellSizeForIndex == null)
            throw new ArgumentNullException();
        if (tableCellAtIndex == null)
            throw new ArgumentNullException();
        if (numberOfCellsInTableView == null)
            throw new ArgumentNullException();
        this.tableCellSizeForIndex = tableCellSizeForIndex;
        this.tableCellAtIndex = tableCellAtIndex;
        this.numberOfCellsInTableView = numberOfCellsInTableView;
        this.tableCellGapForIndex = tableCellGapForIndex ?? EmptyGap;
        this.tableViewScrollUpdate = tableViewScrollUpdate;
    }

    /// <summary>
    /// 根据下标更新一个cell
    /// </summary>
    public void UpdateCellAtIndex(int index)
    {
        if (index < 0)
            return;
        var countOfItems = numberOfCellsInTableView(this);
        if (countOfItems == 0 || index > countOfItems - 1)
            return;
        var cell = CellAtIndex(index);
        if (cell != null)
            MoveCellOutOfSight(cell);
        cell = tableCellAtIndex(this, index);
        SetIndexForCell(index, cell);
        AddCellIfNecessary(cell);
    }

    /// <summary>
    /// 根据下标插入一个cell
    /// </summary>
    public void InsertCellAtIndex(int index)
    {
        if (index < 0)
            return;
        var countOfItems = numberOfCellsInTableView(this);
        if (countOfItems == 0 || index > countOfItems - 1)
            return;

        var cell = CellAtIndex(index);
        if (cell != null)
        {
            int newIndex = cellUsed.IndexOf(cell);
            int length = cellUsed.Count;
            for (int i = newIndex; i < length; i++)
            {
                cell = cellUsed[i];
                SetIndexForCell(cell.Index + 1, cell);
            }
        }

        cell = tableCellAtIndex(this, index);
        SetIndexForCell(index, cell);
        AddCellIfNecessary(cell);

        UpdateCellPositions();
        UpdateContentSize();
    }

    /// <summary>
    /// 根据下标移除一个cell
    /// </summary>
    public void RemoveCellAtIndex(int index)
    {
        if (index < 0)
            return;
        var countOfItems = numberOfCellsInTableView(this);
        if (countOfItems == 0 || index > countOfItems - 1)
            return;
        var cell = CellAtIndex(index);
        if (cell == null)
            return;
        var newIndex = cellUsed.IndexOf(cell);
        MoveCellOutOfSight(cell);
        indices.Remove(index);
        UpdateCellPositions();
        for (int i = cellUsed.Count - 1; i > newIndex; i--)
        {
            cell = cellUsed[i];
            SetIndexForCell(cell.Index - 1, cell);
        }
    }

    /// <summary>
    /// 根据下标获取一个cell
    /// </summary>
    public TableViewCell CellAtIndex(int index)
    {
        foreach (var cell in cellUsed)
        {
            if (cell.Index == index)
                return cell;
        }
        return default;
    }

    /// <summary>
    /// 重新加载（同步方法）
    /// </summary>
    public void ReloadData()
    {
        ReleaseCoroutine();
        foreach (var cell in cellUsed)
        {
            cell.ResetData();
            cell.Go.SetActive(false);

            cellFreed.Add(cell);
        }

        indices.Clear();
        cellUsed.Clear();

        UpdateCellPositions();
        UpdateContentSize();
        if (numberOfCellsInTableView(this) > 0)
            ScrollViewDidScroll();
    }

    /// <summary>
    /// 重新加载（异步方法）
    /// </summary>
    /// <param name="delayFunc">提供每次间隔的函数，默认是每帧加载</param>
    /// <param name="loadedCall">加载完成的回调</param>
    public void ReloadDataAsync(Func<IEnumerator> delayFunc = null, Action loadedCall = null)
    {
        ReleaseCoroutine();
        foreach (var cell in cellUsed)
        {
            cell.ResetData();
            cell.Go.SetActive(false);

            cellFreed.Add(cell);
        }

        indices.Clear();
        cellUsed.Clear();

        UpdateCellPositions();
        UpdateContentSize();
        if (numberOfCellsInTableView(this) > 0)
            asyncReload = StartCoroutine(ReloadDataAsyncInternal(loadedCall, delayFunc ?? _frameDelay));
    }

    /// <summary>
    /// 保持当前滚动位置的重新加载（异步方法）
    /// </summary>
    /// <param name="delayFunc">提供每次间隔的函数，默认是每帧加载</param>
    /// <param name="loadedCall">加载完成的回调</param>
    public void ReloadDataAsyncKeepPos(Func<IEnumerator> delayFunc = null, Action loadedCall = null)
    {
        ReleaseCoroutine();
        foreach (var cell in cellUsed)
        {
            cell.ResetData();
            cell.Go.SetActive(false);

            cellFreed.Add(cell);
        }

        indices.Clear();
        cellUsed.Clear();
        var currOffset = GetContentOffset();
        UpdateCellPositions();
        UpdateContentSize();
        SetContentOffset(ref currOffset);
        if (numberOfCellsInTableView(this) > 0)
            asyncReload = StartCoroutine(ReloadDataAsyncInternal(loadedCall, delayFunc ?? _frameDelay));
    }

    /// <summary>
    /// 保持当前滚动位置的重新加载
    /// </summary>
    public void ReloadDataKeepPos()
    {
        var currOffset = GetContentOffset();
        ReloadData();
        SetContentOffset(ref currOffset);
    }

    /// <summary>
    /// 获取当前内容偏移
    /// </summary>
    public Vector2 GetContentOffset()
    {
        var currOffset = content.localPosition;
        return new Vector2(currOffset.x, currOffset.y);
    }

    /// <summary>
    /// 出队一个cell，如果是空表示是新的cell单元
    /// </summary>
    /// <returns></returns>
    public TableViewCell DequeCell()
    {
        TableViewCell cell;
        if (cellFreed.Count == 0)
        {
            return null;
        }
        else
        {
            cell = cellFreed[0];
            cellFreed.RemoveAt(0);
        }
        return cell;
    }

    /// <summary>
    /// 创建一个TableCell实例
    /// </summary>
    /// <returns></returns>
    public TableViewCell CreateCell()
    {
        //不允许外部生成TableViewCell实例，防止引用问题
        var cell = new TableViewCell();
        cell.Init(content);
        return cell;
    }

    /// <summary>
    /// 更新内容容器大小
    /// </summary>
    public void UpdateContentSize()
    {
        var size = Vector2.zero;
        int cellsCount = numberOfCellsInTableView(this);
        if (cellsCount > 0)
        {
            float maxPosition = cellPositions[cellsCount];
            switch (ScrollType)
            {
                case Direction.Horizontal:
                    size.x = maxPosition;
                    size.y = content.sizeDelta.y;
                    break;
                default:
                    size.x = content.sizeDelta.x;
                    size.y = maxPosition;
                    break;
            }
        }
        content.sizeDelta = size;
    }

    /// <summary>
    /// 设置自动滑动（内容没超过列表的时候禁止滑动）
    /// </summary>
    public void SetAutoTouchAble(float limitSize = 0)
    {
        var sizeContent = content.rect.size;
        var listSize = (transform as RectTransform).rect.size;
        if (ScrollType == Direction.Horizontal)
        {
            TouchEnabled = limitSize > 0 ? limitSize > listSize.x : sizeContent.x > listSize.x;
        }
        else
        {
            TouchEnabled = limitSize > 0 ? limitSize > listSize.y : sizeContent.y > listSize.y;
        }
    }

    /// <summary>
    /// 获取存在的Cell
    /// </summary>
    public List<TableViewCell> GetUsedCell()
    {
        return cellUsed;
    }

    #endregion

    #region 拓展接口

    /// <summary>
    /// 直接跳转到对应下标的位置
    /// </summary>
    public void JumpToIndex(int index, float duration = 0)
    {
        switch (ScrollType)
        {
            case Direction.Vertical:
                {
                    var currLength = numberOfCellsInTableView(this);
                    float maxIndex = Mathf.Max(currLength - 1, 1);
                    float offset;
                    if (maxIndex < 0)
                        offset = 0;
                    else if (index >= maxIndex)
                        offset = 0;
                    else
                        offset = 1f - index / maxIndex;

                    if (duration > 0)
                    {
                        var initPos = scrollView.verticalNormalizedPosition;
                        DOTween.To(() => initPos, value => scrollView.verticalNormalizedPosition = value, offset, duration).SetEase(Ease.Linear);
                    }
                    else
                        scrollView.verticalNormalizedPosition = offset;

                    if (currLength > 0)
                        ScrollViewDidScroll();
                }
                break;
            case Direction.Horizontal:
                {
                    float maxIndex = Mathf.Max(numberOfCellsInTableView(this), 0);
                    var targetPosIndex = (int)Mathf.Clamp(index, 0, maxIndex);
                    scrollView.content.SetLocalPositionX(-cellPositions[targetPosIndex]);
                    if (maxIndex > 0)
                        ScrollViewDidScroll();
                }
                break;
            default:
                break;
        }
    }

    public void JumpNormalizedPosition(float pos)
    {
        switch (ScrollType)
        {
            case Direction.Vertical:
                scrollView.verticalNormalizedPosition = pos;
                break;
            case Direction.Horizontal:
                scrollView.horizontalNormalizedPosition = pos;
                break;
        }
    }

    /// <summary>
    /// 直接跳转到对应下标的位置的重新加载（同步方法）
    /// </summary>
    public void ReloadDataWithIndex(int index)
    {
        ReleaseCoroutine();
        foreach (var cell in cellUsed)
        {
            cell.ResetData();
            cell.Go.SetActive(false);

            cellFreed.Add(cell);
        }

        indices.Clear();
        cellUsed.Clear();

        UpdateCellPositions();
        UpdateContentSize();
        if (numberOfCellsInTableView(this) > 0)
            ScrollViewDidScroll();
        JumpToIndex(index);
    }

    /// <summary>
    /// 直接跳转到对应下标的位置的重新加载（异步方法）
    /// </summary>
    public void ReloadDataAsyncWithIndex(int index, Func<IEnumerator> delayFunc = null, Action loadedCall = null)
    {
        ReleaseCoroutine();
        foreach (var cell in cellUsed)
        {
            cell.ResetData();
            cell.Go.SetActive(false);

            cellFreed.Add(cell);
        }

        indices.Clear();
        cellUsed.Clear();
        UpdateCellPositions();
        UpdateContentSize();
        JumpToIndex(index);
        if (numberOfCellsInTableView(this) > 0)
            asyncReload = StartCoroutine(ReloadDataAsyncInternal(loadedCall, delayFunc ?? _frameDelay));
    }

    /// <summary>
    /// 对应下标是否在显示区域
    /// </summary>
    public bool IsShowIndex(int index)
    {
        return indices.Contains(index);
    }
    /// <summary>
    /// 获取列表最后一位的下标
    /// </summary>
    public int GetEndIndex()
    {
        var pos = content.localPosition;
        var inverse = ScrollType == Direction.Vertical ? 1 : -1;
        var offset = new Vector2(pos.x * inverse, pos.y * inverse);
        var viewSize = viewPort.rect.size;
        var localScale = content.localScale;
        switch (ScrollType)
        {
            case Direction.Vertical:
                offset.y += viewSize.y / localScale.y;
                break;
            case Direction.Horizontal:
                offset.x += viewSize.x / localScale.x;
                break;
            default:
                break;
        }
        return MaxIndexFromOffset(offset);
    }

    #endregion
}
