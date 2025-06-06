﻿
using GraphProcessor;
using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;

public class UniversalGraphView : BaseGraphView
{
    public UniversalGraphWindow universalGraphWindow;
    public UniversalGraphView(EditorWindow window) : base(window)
    {
        universalGraphWindow = window as UniversalGraphWindow;
    }

    public override void BuildContextualMenu(ContextualMenuPopulateEvent evt)
    {
        BuildStackNodeContextualMenu(evt);
        base.BuildContextualMenu(evt);
    }

    /// <summary>
    /// Add the New Stack entry to the context menu
    /// </summary>
    /// <param name="evt"></param>
    private void BuildStackNodeContextualMenu(ContextualMenuPopulateEvent evt)
    {
        Vector2 position =
            (evt.currentTarget as VisualElement).ChangeCoordinatesTo(contentViewContainer, evt.localMousePosition);
        evt.menu.AppendAction("New Stack", (e) => AddStackNode(new BaseStackNode(position)),
            DropdownMenuAction.AlwaysEnabled);
    }
}
