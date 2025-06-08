using GraphProcessor;
using Sirenix.OdinInspector;
using UnityEngine;

public class NPBehaveGraph : BaseGraph
{
    [HideInInspector]
    public NP_BlackBoard NpBlackBoard = new NP_BlackBoard();

    [Button("ExportNPBehaveData")]
    public void ExportNPBehaveData()
    {

    }
}