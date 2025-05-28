using LEngine;

public class InitGameplayOnLoad 
{
    public static bool loaded = false;
    public static void Init()
    {
        if (!loaded)
        {
            InitOnLoadMethod.ProcessInitOnLoadMethod(typeof(InitGameplayOnLoad));
            loaded = true;
        }
    }
}
