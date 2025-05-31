using System;

[AttributeUsage(AttributeTargets.Field)]
public class AutoBindAttribute : Attribute
{
    public string Path { get; }

    public AutoBindAttribute(string path = "")
    {
        Path = path;
    }
}
