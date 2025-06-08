using GraphProcessor;
using UnityEngine.UIElements;

[NodeCustomEditor(typeof(SettingsNode))]
public class SettingsNodeView : BaseNodeView
{
    protected override bool hasSettings => true;

    SettingsNode settingsNode;

    public override void Enable()
    {
        settingsNode = nodeTarget as SettingsNode;

        controlsContainer.Add(new Label("Hello World !"));
    }

    protected override VisualElement CreateSettingsView()
    {
        var settings = new VisualElement();

        settings.Add(new EnumField("S", settingsNode.setting));

        return settings;
    }
}