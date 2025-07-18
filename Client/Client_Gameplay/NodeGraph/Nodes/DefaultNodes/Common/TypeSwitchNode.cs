﻿using System.Collections.Generic;
using GraphProcessor;
using UnityEngine;

[System.Serializable, NodeMenuItem("Custom/TypeSwitchNode")]
public class TypeSwitchNode : BaseNode
{
    [Input]
    public string input;

    [SerializeField]
    public bool toggleType;

    public override string name => "TypeSwitchNode";

    [CustomPortBehavior(nameof(input))]
    IEnumerable<PortData> GetInputPort(List<SerializableEdge> edges)
    {
        yield return new PortData
        {
            identifier = "input",
            displayName = "In",
            displayType = (toggleType) ? typeof(float) : typeof(string)
        };
    }

    protected override void Process()
    {
        TryGetInputValue(nameof(input), ref input);
        Debug.Log("Input: " + input);
    }
}