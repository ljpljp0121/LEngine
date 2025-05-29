
using System;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using Sirenix.OdinInspector.Editor.Validation;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// 无限循环等高列表实现
/// </summary>
public class SuperList : MonoBehaviour
{

    [Title("参数设置")]
    [SerializeField] private bool needSelectedIndex = true;
    [SerializeField, InfoBox("X:左,Y:上,Z:右,W:下")] private Vector4 MaskPadding;
    [SerializeField] private GameObject go;
    [SerializeField] private float verticalGap;
    [SerializeField] private float horizontalGap;
    [SerializeField] private float extraSize;
    [SerializeField] private bool IsVertical;
    [SerializeField] private bool IsAlphaIn;
    [SerializeField] private bool IsRestrain;
    [SerializeField] private bool ShowEmptyCell;
    [SerializeField] private Scrollbar Scrollbar;

    //相关组件
    private RectTransform rectTransform;
    private SuperScrollRect scrollRect;
    private RectMask2D rectMask2D;
    private GameObject container;
    private GameObject pool; //对象池节点

    private List<object> dataList = new List<object>(); //每个Cell的数据
    private List<SuperListCell> showPool = new List<SuperListCell>(); //显示的Cell
    private List<SuperListCell> hidePool = new List<SuperListCell>(); //隐藏的Cell

    private float width;
    private float height;
    private float cellWidth;
    private float cellHeight;
    private float cellScale;
    private string unitName;

    private float containerWidth;
    private float containerHeight;
    private int rowNum; //最多显示行数
    private int colNum; //最多显示列数
    private int minNum; //最少显示个数,如果要补全空单元格会使用到

    private int showIndex;
    private int selectedIndex = -1;
    private float curPercent = 0;

    private int[] insertIndexArr;
    private RectTransform[] insertRectArr;
    private float allInsertFix = 0;

    private bool hasInit = false;
    private bool hasAwake = false;
    private bool hasSetContainerSize = false;

    public Action<object> CellClickHandle;
    public Action<int> CellClickIndexHandle;
    public Action<int> OnScrollOneIndex;

    private List<SuperListCell> alphaInList = new List<SuperListCell>();
    private Dictionary<int, bool> hasAlphaInDic = new Dictionary<int, bool>();


    #region 核心方法

    /// <summary>
    /// 根据数据量设置容器大小
    /// </summary>
    private void SetContainerSize()
    {
        if (IsVertical)
        {
            containerHeight = Mathf.Ceil(1.0f * (dataList.Count - colNum) / colNum) * (cellHeight + verticalGap) + cellHeight;
            if (insertIndexArr != null)
            {
                allInsertFix = 0;
                for (int i = 0; i < insertIndexArr.Length; i++)
                {
                    allInsertFix += insertRectArr[i].rect.height + verticalGap;
                }

                containerHeight += allInsertFix;
            }

            containerHeight += extraSize;
            if (containerHeight <= height)
            {
                containerHeight = height + 1;
            }

            rectTransform.anchoredPosition = new Vector2(rectTransform.anchoredPosition.x, 0f);
            rectTransform.offsetMin = new Vector2(rectTransform.offsetMin.x, -containerHeight);
            rectTransform.offsetMax = new Vector2(width, 0);
            curPercent = 1;
        }
        else
        {
            containerWidth = Mathf.Ceil(1.0f * (dataList.Count - rowNum) / rowNum) * (cellWidth + horizontalGap) + cellWidth;
            if (insertIndexArr != null)
            {
                allInsertFix = 0;
                for (int i = 0; i < insertIndexArr.Length; i++)
                {
                    allInsertFix += insertRectArr[i].rect.width + horizontalGap;
                }
                containerWidth += allInsertFix;
            }
            containerWidth += extraSize;
            if (containerWidth <= width)
            {
                containerWidth = width + 1;
            }
            rectTransform.anchoredPosition = new Vector2(0f, rectTransform.anchoredPosition.y);
            rectTransform.offsetMax = new Vector2(containerWidth, rectTransform.offsetMax.y);
            rectTransform.offsetMin = new Vector2(0, -height);
            curPercent = 0;
        }
        if (!hasSetContainerSize)
        {
            hasSetContainerSize = true;
            scrollRect.onValueChanged.AddListener(new UnityEngine.Events.UnityAction<Vector2>(OnScroll));
        }
    }

    /// <summary>
    /// 根据当前滚动位置动态更新屏幕上显示的单元格
    /// </summary>
    /// <param name="nowIndex">当前应该显示的第一个单元格的数据索引</param>
    /// <param name="dataHasChange">数据是否发生变化（true时需要刷新单元格内容）</param>
    /// <param name="insertHasChange">插入元素是否变化（true时需要更新单元格位置偏移）</param>
    /// <param name="isInit">是否为初始化阶段（跳过部分限制条件）</param>
    private void ResetPos(int nowIndex, bool dataHasChange, bool insertHasChange, bool isInit = false)
    {
        if (IsVertical) //垂直滚动布局处理
        {
            // 非初始化阶段，当数据量不足以填满一屏时直接返回（防止滚动抖动）
            if (!isInit && showPool.Count > 0 && dataList.Count <= rowNum) { return; }
            //向下滚动整列（优化处理）
            if (nowIndex - showIndex == colNum)
            {
                // 遍历需要新增的列数（通常为1列）
                for (int i = 0; i < nowIndex - showIndex; i++)
                {
                    int newIndex = showIndex + rowNum * colNum + i;
                    SuperListCell unit = showPool[0];
                    showPool.RemoveAt(0);
                    if (newIndex < dataList.Count)// 有效数据范围
                    {
                        showPool.Add(unit);
                        SetCellIndex(unit, newIndex);
                        SetCellData(unit, newIndex);
                    }
                    else// 超出数据范围，回收到对象池
                    {
                        hidePool.Add(unit);
                        unit.transform.SetParent(pool.transform, false);
                    }
                }
            }
            //向上滚动整列（优化处理）
            else if (nowIndex - showIndex == -colNum)
            {
                for (int i = 0; i < showIndex - nowIndex; i++)
                {
                    int newIndex = showIndex - colNum + i;
                    SuperListCell unit;
                    // 优先从对象池获取，不足时复用显示池末尾单元格
                    if (showPool.Count == rowNum * colNum)
                    {
                        unit = showPool[showPool.Count - 1];
                        showPool.RemoveAt(showPool.Count - 1);
                    }
                    else
                    {
                        unit = hidePool[0];
                        hidePool.RemoveAt(0);
                        unit.transform.SetParent(container.transform, false);
                    }
                    showPool.Insert(0, unit);
                    SetCellIndex(unit, newIndex);
                    SetCellData(unit, newIndex);
                }
            }
            //非整列滚动（通用处理）
            else
            {
                //计算当前应显示的索引范围（可视区域+缓冲区域）
                List<int> tmpList = new List<int>();
                for (int i = 0; i < rowNum * colNum; i++)
                {
                    if (nowIndex + i < dataList.Count)
                    {
                        tmpList.Add(nowIndex + i);
                    }
                    else
                    {
                        break;
                    }
                }
                SuperListCell[] newShowPool = new SuperListCell[tmpList.Count];
                List<SuperListCell> replacePool = new List<SuperListCell>();
                for (int i = 0; i < showPool.Count; i++)
                {
                    SuperListCell unit = showPool[i];
                    int tmpIndex = unit.index;
                    if (tmpList.Contains(tmpIndex))
                    {
                        newShowPool[tmpList.IndexOf(tmpIndex)] = unit;
                        if (dataHasChange)
                        {
                            SetCellData(unit, tmpIndex);
                        }
                        if (insertHasChange)
                        {
                            SetCellIndex(unit, tmpIndex);
                        }
                    }
                    else
                    {
                        replacePool.Add(unit);
                    }
                }
                showPool.Clear();
                for (int i = 0; i < newShowPool.Length; i++)
                {
                    if (newShowPool[i] == null)
                    {
                        SuperListCell unit;
                        if (replacePool.Count > 0)
                        {
                            unit = replacePool[0];
                            replacePool.RemoveAt(0);
                        }
                        else
                        {
                            unit = hidePool[0];
                            hidePool.RemoveAt(0);
                            unit.transform.SetParent(container.transform, false);
                        }
                        newShowPool[i] = unit;
                        SetCellData(unit, tmpList[i]);
                        SetCellIndex(unit, tmpList[i]);
                    }
                    showPool.Add(newShowPool[i]);
                }
                foreach (var unit in replacePool)
                {
                    unit.transform.SetParent(pool.transform, false);
                    hidePool.Add(unit);
                }
            }
        }
        else //水平布局
        {
            if (!isInit && showPool.Count > 0 && dataList.Count <= colNum) { return; }
            if (nowIndex - showIndex == rowNum)
            {
                for (int i = 0; i < nowIndex - showIndex; i++)
                {
                    int newIndex = showIndex + rowNum * colNum + i;
                    SuperListCell unit = showPool[0];
                    showPool.RemoveAt(0);
                    if (newIndex < dataList.Count)
                    {
                        showPool.Add(unit);
                        SetCellData(unit, newIndex);
                        SetCellIndex(unit, newIndex);
                    }
                    else
                    {
                        hidePool.Add(unit);
                        unit.transform.SetParent(pool.transform, false);
                    }
                }
            }
            else if (nowIndex - showIndex == -rowNum)
            {
                for (int i = 0; i < showIndex - nowIndex; i++)
                {
                    int newIndex = showIndex - rowNum + i;
                    SuperListCell unit;
                    if (showPool.Count == rowNum * colNum)
                    {
                        unit = showPool[showPool.Count - 1];
                        showPool.RemoveAt(showPool.Count - 1);
                    }
                    else
                    {
                        unit = hidePool[0];
                        hidePool.RemoveAt(0);
                        unit.transform.SetParent(container.transform, false);
                    }
                    showPool.Insert(0, unit);
                    SetCellData(unit, newIndex);
                    SetCellIndex(unit, newIndex);
                }
            }
            else
            {
                List<int> tmpList = new List<int>();
                for (int i = 0; i < rowNum * colNum; i++)
                {
                    if (nowIndex + i < dataList.Count)
                    {
                        tmpList.Add(nowIndex + i);
                    }
                    else
                    {
                        break;
                    }
                }
                SuperListCell[] newShowPool = new SuperListCell[tmpList.Count];
                List<SuperListCell> replacePool = new List<SuperListCell>();
                for (int i = 0; i < showPool.Count; i++)
                {
                    SuperListCell unit = showPool[i];
                    int tmpIndex = unit.index;
                    if (tmpList.Contains(tmpIndex))
                    {
                        newShowPool[tmpList.IndexOf(tmpIndex)] = unit;
                        if (dataHasChange)
                        {
                            SetCellData(unit, tmpIndex);
                        }
                        if (insertHasChange)
                        {
                            SetCellIndex(unit, tmpIndex);
                        }
                    }
                    else
                    {
                        replacePool.Add(unit);
                    }
                }
                showPool.Clear();
                for (int i = 0; i < newShowPool.Length; i++)
                {
                    if (newShowPool[i] == null)
                    {
                        SuperListCell unit;
                        if (replacePool.Count > 0)
                        {
                            unit = replacePool[0];
                            replacePool.RemoveAt(0);
                        }
                        else
                        {
                            unit = hidePool[0];
                            hidePool.RemoveAt(0);
                            unit.transform.SetParent(container.transform, false);
                        }
                        newShowPool[i] = unit;
                        SetCellData(unit, tmpList[i]);
                        SetCellIndex(unit, tmpList[i]);
                    }
                    showPool.Add(newShowPool[i]);
                }
                foreach (var unit in replacePool)
                {
                    unit.transform.SetParent(pool.transform, false);
                    hidePool.Add(unit);
                }
            }
        }

        showIndex = nowIndex;
        if (ShowEmptyCell)
        {
            for (int i = showPool.Count; i < minNum; i++)
            {
                SuperListCell unit = hidePool[0];
                hidePool.RemoveAt(0);
                unit.transform.SetParent(container.transform, false);
                showPool.Add(unit);
                SetCellData(unit, -1);
                SetCellIndex(unit, showIndex + i);
            }
        }
    }

    /// <summary>
    ///  ​更新一个单元格的显示状态和位置
    /// </summary>
    private void SetCellIndex(SuperListCell cell, int index)
    {
        Vector2 pos = GetPositionByIndex(index);
        ((RectTransform)cell.transform).anchoredPosition = pos;
        cell.index = index;
        cell.gameObject.name = unitName + index;
        cell.SetSelected(index == selectedIndex);
    }

    /// <summary>
    /// 根据单元格索引计算其在列表中的精确坐标位置
    /// </summary>
    private Vector2 GetPositionByIndex(int index, bool ignoreInsert = false)
    {
        int row;
        int col;
        float xFix = 0;
        float yFix = 0;
        if (IsVertical)
        {
            row = index / colNum;
            col = index % colNum;
            if (insertIndexArr != null && ignoreInsert == false)
            {
                for (int i = 0; i < insertIndexArr.Length; i++)
                {
                    if (row >= insertIndexArr[i])
                        yFix += insertRectArr[i].rect.height + verticalGap;
                    else
                        break;
                }
            }
        }
        else
        {
            col = index / rowNum;
            row = index % rowNum;
            if (insertIndexArr != null && ignoreInsert == false)
            {
                for (int i = 0; i < insertIndexArr.Length; i++)
                {
                    if (col >= insertIndexArr[i])
                        xFix += insertRectArr[i].rect.width + horizontalGap;
                    else
                        break;
                }
            }
        }
        float xPos = col * (cellWidth + horizontalGap) + xFix;
        float yPos = -row * (cellHeight + verticalGap) - yFix;
        Vector2 pos = new Vector2(xPos, yPos);
        return pos;
    }

    /// <summary>
    /// 设置单元格数据并管理淡入动画逻辑
    /// </summary>
    private void SetCellData(SuperListCell cell, int index)
    {
        //空单元格处理
        if (index == -1)
            cell.TrySetData(null);
        // 不需要淡入效果的直接设置数据
        else if (!IsAlphaIn)
            cell.TrySetData(dataList[index]);
        //需要淡入效果的处理逻辑
        else
        {
            bool result = cell.TrySetData(dataList[index]);
            if (result)
            {
                cell.canvasGroup.alpha = 0;
                int _index = alphaInList.IndexOf(cell);
                bool needStart = false;
                if (_index != -1)
                {
                    if (_index == 0)
                    {
                        cell.ReturnInit();
                        needStart = true;
                    }
                    alphaInList.RemoveAt(_index);
                }
                alphaInList.Add(cell);
                if (alphaInList.Count == 1 || needStart)
                {
                    var _cell = alphaInList[0];
                    if (hasAlphaInDic.ContainsKey(_cell.gameObject.GetInstanceID()))
                    {
                        _cell.ReturnInit();
                        OneAlphaInOver();
                        return;
                    }
                    hasAlphaInDic[_cell.AlphaIn(OneAlphaInOver)] = true;
                }
            }
            else
            {
                cell.canvasGroup.alpha = 1;
                int _index = alphaInList.IndexOf(cell);
                bool needStart = false;
                if (_index != -1)
                {
                    if (_index == 0)
                    {
                        cell.ReturnInit();
                        needStart = true;
                    }
                    alphaInList.RemoveAt(_index);
                }
                if (needStart && alphaInList.Count > 0)
                {
                    var _cell = alphaInList[0];
                    if (hasAlphaInDic.ContainsKey(_cell.gameObject.GetInstanceID()))
                    {
                        _cell.ReturnInit();
                        OneAlphaInOver();
                        return;
                    }
                    hasAlphaInDic[_cell.AlphaIn(OneAlphaInOver)] = true;
                }
            }
        }
    }

    /// <summary>
    /// 淡入动画完成回调，处理动画队列的连锁执行逻辑
    /// </summary>
    private void OneAlphaInOver()
    {
        alphaInList.RemoveAt(0);

        if (alphaInList.Count > 0)
        {

            SuperListCell cell = alphaInList[0];
            if (hasAlphaInDic.ContainsKey(cell.gameObject.GetInstanceID()))
            {
                cell.ReturnInit();
                OneAlphaInOver();
                return;
            }
            hasAlphaInDic[cell.AlphaIn(OneAlphaInOver)] = true;
        }
    }

    /// <summary>
    /// 统一设置插入元素的锚点布局规则
    /// </summary>
    private void SetInsertRectPivot(RectTransform rectTransform)
    {
        var size = rectTransform.rect.size;
        rectTransform.anchorMin = new Vector2(0, 1);
        rectTransform.anchorMax = new Vector2(0, 1);
        rectTransform.pivot = new Vector2(0, 1);
        rectTransform.offsetMin = new Vector2();
        rectTransform.offsetMax = new Vector2();
        rectTransform.sizeDelta = size;
    }

    /// <summary>
    /// 将列表设置到当前的百分比滚动位置
    /// </summary>
    private void SetCurPercent()
    {
        if (IsVertical)
        {
            OnScroll(new Vector2(0, curPercent));
            scrollRect.verticalNormalizedPosition = curPercent;
        }
        else
        {
            OnScroll(new Vector2(curPercent, 0));
            scrollRect.horizontalNormalizedPosition = curPercent;
        }
    }

    /// <summary>
    /// 滚动事件处理核心方法（根据滚动位置动态计算当前应显示的起始索引）
    /// </summary>
    private void OnScroll(Vector2 v)
    {
        int nowIndex;
        if (IsVertical)
        {
            curPercent = v.y;
            float y;
            if (curPercent < 0)
                y = 1;
            else if (curPercent > 1)
                y = 0;
            else
                y = 1 - curPercent;

            if (insertIndexArr == null)
                nowIndex = (int)(y * (containerHeight - height) / (cellHeight + verticalGap)) * colNum;
            else
            {
                FixY(0, y, ref y, 0);
                nowIndex = (int)(y * (containerHeight - height - allInsertFix) / (cellHeight + verticalGap)) * colNum;
                if (nowIndex < 0)
                    nowIndex = 0;
            }
        }
        else
        {
            curPercent = v.x;
            float x;
            if (curPercent < 0)
                x = 0;
            else if (curPercent > 1)
                x = 1;
            else
                x = curPercent;
            if (insertIndexArr == null)
                nowIndex = (int)(x * (containerWidth - width) / (cellWidth + horizontalGap)) * rowNum;
            else
            {
                FixX(0, x, ref x, 0);
                nowIndex = (int)(x * (containerWidth - width - allInsertFix) / (cellWidth + horizontalGap)) * rowNum;
                if (nowIndex < 0)
                    nowIndex = 0;
            }
        }
        if (nowIndex != showIndex)
        {
            ResetPos(nowIndex, false, false);
            OnScrollOneIndex?.Invoke(nowIndex);
        }
    }

    /// <summary>
    /// 垂直滚动布局插入元素的位置递归修正算法
    /// </summary>
    private void FixY(int startIndex, float yOld, ref float y, float fix)
    {
        int tmpIndex = (int)(y * (containerHeight - height - allInsertFix) / (cellHeight + verticalGap));
        if (tmpIndex > insertIndexArr[startIndex])
        {
            fix += insertRectArr[startIndex].rect.height + verticalGap;
            y = ((containerHeight - height - allInsertFix + fix) * yOld - fix) / (containerHeight - height - allInsertFix);
            if (startIndex < insertIndexArr.Length - 1)
            {

                FixY(startIndex + 1, yOld, ref y, fix);
            }
        }
    }

    /// <summary>
    /// 水平滚动布局插入元素的位置递归修正算法
    /// </summary>
    private void FixX(int startIndex, float xOld, ref float x, float fix)
    {

        int tmpIndex = (int)(x * (containerWidth - width - allInsertFix) / (cellWidth + horizontalGap));

        if (tmpIndex > insertIndexArr[startIndex])
        {

            fix += insertRectArr[startIndex].rect.width + horizontalGap;

            x = ((containerWidth - width - allInsertFix + fix) * xOld - fix) / (containerWidth - width - allInsertFix);

            if (startIndex < insertIndexArr.Length - 1)
            {

                FixX(startIndex + 1, xOld, ref x, fix);
            }
        }
    }

    #endregion

    #region 初始化

    void Awake()
    {
        if (hasAwake)
            return;
        scrollRect = gameObject.AddComponent<SuperScrollRect>();
        scrollRect.vertical = IsVertical;
        scrollRect.horizontal = !IsVertical;

        if (IsVertical)
        {
            scrollRect.verticalScrollbar = Scrollbar;
        }
        else
        {
            scrollRect.horizontalScrollbar = Scrollbar;
        }

        scrollRect.isRestrain = IsRestrain;

        Vector4 padding = new Vector4(MaskPadding.x, MaskPadding.w, MaskPadding.z, MaskPadding.y);

        if (gameObject.GetComponent<Mask>() == null)
        {
            rectMask2D = gameObject.AddComponent<RectMask2D>();
            rectMask2D.padding = padding;
        }

        if (gameObject.GetComponent<Image>() == null)
        {
            Image img = gameObject.AddComponent<Image>();
            img.color = Color.clear;
        }
        hasAwake = true;
    }

    private void Init()
    {
        container = new GameObject("Container", typeof(RectTransform));
        container.transform.SetParent(transform, false);
        pool = new GameObject("Pool", typeof(RectTransform));
        pool.transform.SetParent(transform, false);
        pool.SetActive(false);
        rectTransform = container.transform as RectTransform;
        if (rectTransform != null)
        {
            rectTransform.anchorMin = new Vector2(0, 1);
            rectTransform.anchorMax = new Vector2(0, 1);
            rectTransform.pivot = new Vector2(0, 1);
            rectTransform.offsetMin = new Vector2();
            rectTransform.offsetMax = new Vector2();
            scrollRect.content = rectTransform;
        }
        width = ((RectTransform)transform).rect.width;
        height = ((RectTransform)transform).rect.height;
        SetSize();
        CreateCells();
        hasInit = true;
    }

    //设置Cell的大小和行列数
    private void SetSize()
    {
        if (IsVertical)
        {
            float tmpCellWidth = ((RectTransform)go.transform).rect.width;
            if (width >= tmpCellWidth)
            {
                colNum = (int)Mathf.Floor((width - tmpCellWidth) / (tmpCellWidth + horizontalGap)) + 1;
                cellScale = 1;
                cellWidth = tmpCellWidth;
                cellHeight = ((RectTransform)go.transform).rect.height;
            }
            else
            {
                colNum = 1;
                cellScale = width / tmpCellWidth;
                cellWidth = width;
                cellHeight = ((RectTransform)go.transform).rect.height * cellScale;
            }

            int n = (int)(height / (cellHeight + verticalGap));
            if (height - n * (cellHeight + verticalGap) < verticalGap)
            {
                rowNum = n + 1;
            }
            else
            {
                rowNum = n + 2;
            }

            minNum = colNum * (rowNum - 1);
        }
        else
        {
            float tmpCellHeight = ((RectTransform)go.transform).rect.height;
            if (height >= tmpCellHeight)
            {
                rowNum = (int)Mathf.Floor((height - tmpCellHeight) / (tmpCellHeight + verticalGap)) + 1;
                cellScale = 1;
                cellWidth = ((RectTransform)go.transform).rect.width;
                cellHeight = tmpCellHeight;
            }
            else
            {
                rowNum = 1;
                cellScale = height / tmpCellHeight;
                cellWidth = ((RectTransform)go.transform).rect.width * cellScale;
                cellHeight = height;
            }
            int n = (int)(width / (cellWidth + horizontalGap));
            if (width - n * (cellWidth + horizontalGap) < horizontalGap)
            {
                colNum = n + 1;
            }
            else
            {
                colNum = n + 2;
            }
            minNum = rowNum * (colNum - 1);
        }
    }
    //创建Cell
    private void CreateCells()
    {
        unitName = go.name;
        for (int i = 0; i < rowNum * colNum; i++)
        {
            GameObject unit = Instantiate(go);
            unit.transform.SetParent(pool.transform, false);
            var rectUnit = (RectTransform)unit.transform;
            rectUnit.anchorMin = new Vector2(0, 1);
            rectUnit.anchorMax = new Vector2(0, 1);
            rectUnit.pivot = new Vector2(0, 1);
            rectUnit.localScale = new Vector3(cellScale, cellScale, cellScale);
            SuperListCell cell = unit.GetComponent<SuperListCell>();
            if (cell == null)
            {
                Debug.LogWarning($"{this.name} No SuperListCell !!! {unit.name}");
                continue;
            }
            if (needSelectedIndex)
            {
                cell.SetClickHandle(CellClick);
            }
            if (IsAlphaIn)
            {
                cell.canvasGroup = unit.GetComponent<CanvasGroup>();
                if (cell.canvasGroup == null)
                {
                    cell.canvasGroup = unit.AddComponent<CanvasGroup>();
                }
            }
            hidePool.Add(cell);
        }
    }

    //单元格点击回调
    private void CellClick(SuperListCell cell)
    {
        SetSelectedIndex(cell.index);
    }

    void OnDisable()
    {
        if (IsAlphaIn)
        {
            for(int i = 0; i < showPool.Count ;i++)
                showPool[i].ReturnInit();
            for (int i = 0; i < hidePool.Count; i++)
                hidePool[i].ReturnInit();
            alphaInList.Clear();
        }
    }

    void OnDestroy()
    {
        go = null;
    }

    #endregion

    #region 对外接口

    /// <summary>
    /// 设置/更新列表数据并刷新显示（列表核心入口方法）
    /// </summary>
    public void SetData<T>(List<T> data)
    {
        if (!hasInit)
        {
            Init();
        }
        scrollRect.StopMovement();
        if (IsAlphaIn)
        {
            if (showPool.Count > 0)
            {
                for (int i = 0; i < showPool.Count; i++)
                {
                    showPool[i].transform.SetParent(pool.transform, false);
                    hidePool.Add(showPool[i]);
                }
                showPool.Clear();
            }
        }

        if (dataList.Count > 0)
        {
            dataList.Clear();
        }

        foreach (var unit in data)
        {
            dataList.Add(unit);
        }

        SetContainerSize();
        showIndex = 0;
        ResetPos(0, true, false, true);
    }

    /// <summary>
    /// 设置/更新列表数据数据并保持当前滚动位置
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="data"></param>
    public void SetDataAndKeepLocation<T>(List<T> data)
    {
        float percent = curPercent;
        SetData<T>(data);
        curPercent = percent;
        SetCurPercent();
    }

    /// <summary>
    /// 设置百分比滚动位置
    /// </summary>
    public void SetPercent(float percent)
    {
        curPercent = percent;
        SetCurPercent();
    }

    /// <summary>
    /// 将指定索引的单元格滚动到可视区域
    /// </summary>
    public void DisplayIndex(int index, float offset = 0)
    {
        float finalPos;
        if (IsVertical)
        {
            if (containerHeight > height)
            {
                float pos = (index / colNum) * (cellHeight + verticalGap);
                if (insertRectArr != null)
                {
                    for (int i = 0; i < insertRectArr.Length; i++)
                    {
                        if (index >= insertIndexArr[i])
                            pos = pos + insertRectArr[i].rect.height + verticalGap;
                        else
                            break;
                    }
                }

                finalPos = 1 - (pos + offset) / (containerHeight - height);
                if (finalPos < 0)
                    finalPos = 0;
                else if (finalPos > 1)
                    finalPos = 1;
            }
            else
                finalPos = 1;
        }
        else
        {
            if (containerWidth > width)
            {
                float pos = (index / rowNum) * (cellWidth + horizontalGap);
                if (insertRectArr != null)
                {
                    for (int i = 0; i < insertRectArr.Length; i++)
                    {
                        if (index >= insertIndexArr[i])
                            pos = pos + insertRectArr[i].rect.width + horizontalGap;
                        else
                            break;
                    }
                }

                finalPos = (pos + offset) / (containerWidth - width);
                if (finalPos < 0)
                    finalPos = 0;
                else if (finalPos > 1)
                    finalPos = 1;
            }
            else
                finalPos = 0;
        }

        curPercent = finalPos;
        SetCurPercent();
    }

    /// <summary>
    /// 更新对应索引单元格数据并刷新显示
    /// </summary>
    public void UpdateItemAt(int index, object data)
    {
        dataList[index] = data;
        foreach (SuperListCell cell in showPool)
        {
            if (cell.index == index)
            {
                cell.TrySetData(data);
                break;
            }
        }
    }

    /// <summary>
    /// 设置插入元素（如分隔符）并更新列表布局
    /// 会在列表中对应的索引处插入元素
    /// </summary>
    public void SetInsert(int[] indexes, RectTransform[] rects)
    {
        insertIndexArr = indexes;
        insertRectArr = rects;
        SetContainerSize();
        if (insertIndexArr != null)
        {
            float fix = 0;
            for (int i = 0; i < insertIndexArr.Length; i++)
            {
                rects[i].SetParent(container.transform, false);
                if (IsVertical)
                {
                    SetInsertRectPivot(insertRectArr[i]);
                    insertRectArr[i].anchoredPosition = new Vector2(0, -(cellHeight + verticalGap) * insertIndexArr[i] - fix);
                    fix += rects[i].rect.height + verticalGap;
                }
                else
                {
                    SetInsertRectPivot(insertRectArr[i]);
                    insertRectArr[i].anchoredPosition = new Vector2((cellWidth + horizontalGap) * insertIndexArr[i] + fix, 0);
                    fix += rects[i].rect.width + horizontalGap;
                }
            }
        }
        showIndex = 0;
        ResetPos(0, false, true, true);
    }

    /// <summary>
    /// 设置对应索引单元格为选中状态
    /// </summary>
    public void SetSelectedIndex(int index)
    {
        if (selectedIndex == index)
            return;
        if (needSelectedIndex)
        {
            foreach (var cell in showPool)
            {
                if (cell.index == index)
                {
                    cell.SetSelected(true);
                }
                else if (cell.index == selectedIndex)
                {
                    cell.SetSelected(false);
                }
            }
            selectedIndex = index;
        }

        if (selectedIndex != -1 || !needSelectedIndex)
        {
            if (CellClickHandle != null)
                CellClickHandle(dataList[index]);
            if (CellClickIndexHandle != null)
                CellClickIndexHandle(index);
        }
    }

    /// <summary>
    /// 清空列表数据
    /// </summary>
    public void Clear()
    {
        dataList.Clear();
        SetData(dataList);
    }

    /// <summary>
    /// 获取单元格数据
    /// </summary>
    public List<object> GetData()
    {
        return dataList;
    }

    #endregion
}