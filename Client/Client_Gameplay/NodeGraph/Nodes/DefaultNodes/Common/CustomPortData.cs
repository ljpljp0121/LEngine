﻿using System.Collections.Generic;
using GraphProcessor;
using UnityEngine;

[System.Serializable, NodeMenuItem("Custom/PortData")]
public class CustomPortData : BaseNode
{
    [Input(name = "In Values", allowMultiple = true)]
    public IEnumerable<object> inputs = null;

    static PortData[] portDatas = new PortData[] {
        new PortData{displayName = "0", displayType = typeof(float), identifier = "0"},
        new PortData{displayName = "1", displayType = typeof(int), identifier = "1"},
        new PortData{displayName = "2", displayType = typeof(GameObject), identifier = "2"},
        new PortData{displayName = "3", displayType = typeof(Texture2D), identifier = "3"},
    };

    [Output]
    public float output;

    public override string name => "Port Data";

    protected override void Process()
    {
        output = 0;

        inputs = TryGetAllInputValues<object>(nameof(inputs));

        if (inputs == null)
            return;

        foreach (float input in inputs)
            output += input;
    }

    public override void TryGetOutputValue<T>(NodePort outputPort, NodePort inputPort, ref T value)
    {
        if (output is T finalValue)
        {
            value = finalValue;
        }
    }

    [CustomPortBehavior(nameof(inputs))]
    IEnumerable<PortData> GetPortsForInputs(List<SerializableEdge> edges)
    {
        PortData pd = new PortData();

        foreach (var portData in portDatas)
        {
            yield return portData;
        }
    }
}