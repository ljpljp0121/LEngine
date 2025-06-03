using GraphProcessor;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEngine;

public class GraphProcessorMenuItems : NodeGraphProcessorMenuItems
{
    [MenuItem("Assets/Create/NodeGraph/GraphProcessor", false, 10)]
    public static void CreateGraphProcessor()
    {
        var graph = ScriptableObject.CreateInstance<BaseGraph>();
        ProjectWindowUtil.CreateAsset(graph, "GraphProcessor.asset");
    }

    [OnOpenAsset(0)]
    public static bool OnBaseGraphOpened(int instanceID, int line)
    {
        var asset = EditorUtility.InstanceIDToObject(instanceID) as BaseGraph;

        if(asset != null)
        {
           EditorWindow.GetWindow<DefaultGraphWindow>().InitializeGraph(asset as BaseGraph);
           return true;
        }
        return false;
    }

    [MenuItem("Assets/Create/NodeGraph/Node C# Script",false, MenuItemPosition.afterCreateScript)]
    private static void CreateNodeScript()
    {
        CreateDefaultNodeCSharpScritpt();
    }

    [MenuItem("Assets/Create/NodeGraph/NodeView C# Script", false, MenuItemPosition.beforeCreateScript)]
    private static void CreateNodeViewScript()
    {
        CreateDefaultNodeViewCSharpScritpt();
    }
}
