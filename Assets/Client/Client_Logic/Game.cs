

using UnityEngine;

namespace LEngine
{
    public class Game
    {
        /// <summary>
        /// 设置系统
        /// </summary>
        public static Settings Settings
        {
            get => settings ??= Settings.Instance;
            private set => settings = value;
        }
        private static Settings settings;

        /// <summary>
        /// 资源系统
        /// </summary>
        public static IAssetSystem Asset => asset ??= Get<IAssetSystem>();
        private static IAssetSystem asset;

        /// <summary>
        /// 计时器系统
        /// </summary>
        public static ITimeSystem Time => time ??= Get<ITimeSystem>();
        private static ITimeSystem time;

        /// <summary>
        /// 表系统
        /// </summary>
        public static TableSystem Table => table ??= TableSystem.Instance;
        private static TableSystem table;

        /// <summary>
        /// UI系统
        /// </summary>
        public static UISystem UI => ui ??= UISystem.Instance;
        private static UISystem ui;

        /// <summary>
        /// 对象池系统
        /// </summary>
        public static PoolSystem Pool => pool ??= Get<PoolSystem>();
        private static PoolSystem pool;

        private static T Get<T>() where T : class
        {
            T system = SystemCenter.GetSystem<T>();
            if (system == null)
            {
                Debug.LogError($"{typeof(T)} is null");
            }

            return system;
        }
    }
}