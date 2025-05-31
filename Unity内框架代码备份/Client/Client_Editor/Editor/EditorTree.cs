using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector.Editor;
using UnityEditor;
using UnityEngine;

public class EditorTree : OdinMenuEditorWindow
{
    [MenuItem("Project/LEngineTool")]
    private static void OpenWindow()
    {
        var window = GetWindow<EditorTree>();
    }

    protected override OdinMenuTree BuildMenuTree()
    {
        var tree = new OdinMenuTree();
        tree.Selection.SupportsMultiSelect = false;
        tree.Config.AutoScrollOnSelectionChanged = true;
        tree.Config.DrawScrollView = true;
        tree.Config.AutoHandleKeyboardNavigation = true;

        var buildTool = CreateInstance<BuildTool>();
        buildTool.Init();
        tree.Add("BuildTool", buildTool);

        return tree;
    }
}
