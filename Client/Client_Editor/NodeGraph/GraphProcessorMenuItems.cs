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

    [MenuItem("Assets/Create/NodeGraph/GraphProcessor_NP", false, 10)]
    public static void CreateGraphProcessor_NP()
    {
        //var graph = ScriptableObject.CreateInstance<NPBehaveGraph>();
        //ProjectWindowUtil.CreateAsset(graph, "NPBehaveGraph.asset");
    }

    [MenuItem("Assets/Create/NodeGraph/GraphProcessor_Skill", false, 10)]
    public static void CreateGraphProcessor_Skill()
    {
        //var graph = ScriptableObject.CreateInstance<SkillGraph>();
        //ProjectWindowUtil.CreateAsset(graph, "SkillGraph.asset");
    }

    [OnOpenAsset(0)]
    public static bool OnBaseGraphOpened(int instanceID, int line)
    {
        var baseGraph = EditorUtility.InstanceIDToObject(instanceID) as BaseGraph;
        return InitializeGraph(baseGraph);
    }

    public static bool InitializeGraph(BaseGraph? baseGraph)
    {
        if (baseGraph == null) return false;

        switch (baseGraph)
        {
            default:
                EditorWindow.GetWindow<FallbackGraphWindow>().InitializeGraph(baseGraph);
                break;
        }

        return true;
    }

    [MenuItem("Assets/Create/NodeGraph/Node C# Script", false)]
    private static void CreateNodeScript()
    {
        CreateDefaultNodeCSharpScritpt();
    }

    [MenuItem("Assets/Create/NodeGraph/NodeView C# Script", false)]
    private static void CreateNodeViewScript()
    {
        CreateDefaultNodeViewCSharpScritpt();
    }
}
