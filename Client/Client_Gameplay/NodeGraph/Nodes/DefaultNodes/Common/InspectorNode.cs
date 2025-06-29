﻿using GraphProcessor;

[System.Serializable, NodeMenuItem("Custom/InspectorNode")]
public class InspectorNode : BaseNode
{
    [Input(name = "In")]
    public float input;

    [Output(name = "Out")]
    public float output;

    [ShowInInspector]
    public bool additionalSettings;
    [ShowInInspector]
    public string additionalParam;

    public override string name => "InspectorNode";

    protected override void Process()
    {
        TryGetInputValue(nameof(input), ref input);
        output = input * 42;
    }

    public override void TryGetOutputValue<T>(NodePort outputPort, NodePort inputPort, ref T value)
    {
        if (output is T finalValue)
        {
            value = finalValue;
        }
    }
}