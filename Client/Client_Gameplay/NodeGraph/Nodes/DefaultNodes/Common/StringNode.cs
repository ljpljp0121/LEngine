using GraphProcessor;
using UnityEngine;

[System.Serializable, NodeMenuItem("String")]
public class StringNode : BaseNode
{
    [Output(name = "Out"), SerializeField]
    public string output;

    public override string name => "String";

    public override void TryGetOutputValue<T>(NodePort outputPort, NodePort inputPort, ref T value)
    {
        if (output is T finalValue)
        {
            value = finalValue;
        }
    }
}