using UnityEngine;

namespace LEngine
{
    [DisallowMultipleComponent]
    public class RootModule : SingletonBehavior<RootModule>
    {
        private float gameSpeedBeforePause = 1f;

    }
}