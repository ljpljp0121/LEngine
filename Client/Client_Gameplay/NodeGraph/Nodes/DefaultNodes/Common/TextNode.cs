using GraphProcessor;
using UnityEngine;

[System.Serializable, NodeMenuItem("Primitives/Text")]
public class TextNode : BaseNode
{
    [Output(name = "Label"), SerializeField]
    public string output;

    public override string name => "Text";

    public override void TryGetOutputValue<T>(NodePort outputPort, NodePort inputPort, ref T value)
    {
        if (output is T finalValue)
        {
            value = finalValue;
        }
    }
}