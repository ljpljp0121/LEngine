using GraphProcessor;
using UnityEngine;

[System.Serializable, NodeMenuItem("Primitives/Color")]
public class ColorNode : BaseNode
{
    [Output(name = "Color"), SerializeField]
    public new Color color;

    public override string name => "Color";

    public override void TryGetOutputValue<T>(NodePort outputPort, NodePort inputPort, ref T value)
    {
        if (color is T finalValue)
        {
            value = finalValue;
        }
    }
}