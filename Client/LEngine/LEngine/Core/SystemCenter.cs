using System;
using System.Collections.Generic;
using UnityEngine;

namespace LEngine
{
    public static class SystemCenter
    {
        internal const int DESIGN_MODULE_COUNT = 16;

        private static readonly Dictionary<Type, ISystem> systemMaps =
            new Dictionary<Type, ISystem>(DESIGN_MODULE_COUNT);

        private static readonly LinkedList<ISystem> systems = new LinkedList<ISystem>();
        private static readonly LinkedList<ISystem> updateSystems = new LinkedList<ISystem>();
        private static readonly List<ISystemUpdate> updateExecuteList = new List<ISystemUpdate>(DESIGN_MODULE_COUNT);

        private static bool isExecuteListDirty;

        public static void Update(float elapseSeconds, float realElapseSeconds)
        {
            if (isExecuteListDirty)
            {
                isExecuteListDirty = false;
                BuildExecuteList();
            }

            int executeCount = updateExecuteList.Count;
            for (int i = 0; i < executeCount; i++)
            {
                updateExecuteList[i].Update(elapseSeconds, realElapseSeconds);
            }
        }

        /// <summary>
        /// 关闭所有模块
        /// </summary>
        public static void Shutdown()
        {
            for (LinkedListNode<ISystem> current = systems.Last; current != null; current = current.Previous)
            {
                current.Value.Shutdown();
            }

            systems.Clear();
            systemMaps.Clear();
            updateSystems.Clear();
            updateExecuteList.Clear();
        }

        public static T GetSystem<T>() where T : class
        {
            Type interfaceType = typeof(T);
            if (!interfaceType.IsInterface)
            {
                Debug.LogError($"You must get module by interface, but {interfaceType.FullName} is not.");
            }

            if (systemMaps.TryGetValue(interfaceType, out ISystem module))
            {
                return module as T;
            }

            string moduleName = $"{interfaceType.Namespace}.{interfaceType.Name.Substring(1)}";
            Type moduleType = Type.GetType(moduleName);
            if (moduleType == null)
            {
                Debug.LogError($"Module type '{moduleName}' not found.");
                return null;
            }
            return GetSystem(moduleType) as T;
        }

        public static ISystem GetSystem(Type moduleType)
        {
            return systemMaps.TryGetValue(moduleType, out ISystem module) ? module : CreateSystem(moduleType);
        }

        /// <summary>
        /// 创建游戏框架模块。
        /// </summary>
        private static ISystem CreateSystem(Type moduleType)
        {
            ISystem system = (ISystem)Activator.CreateInstance(moduleType);
            if (system == null)
            {
                Debug.LogError($"Can not create module {moduleType.FullName}");
            }

            systemMaps[moduleType] = system;

            RegisterUpdate(system);

            return system;
        }

        public static T RegisterSystem<T>(ISystem system) where T : class
        {
            Type interfaceType = typeof(T);
            if (!interfaceType.IsInterface)
            {
                Debug.LogError($"You must get module by interface, but {interfaceType.FullName} is not.");
            }
            systemMaps[interfaceType] = system;
            RegisterUpdate(system);
            return system as T;
        }

        private static void RegisterUpdate(ISystem system)
        {
            LinkedListNode<ISystem> current = systems.First;
            while (current != null)
            {
                if (system.Priority > current.Value.Priority)
                    break;
                current = current.Next;
            }

            if (current != null)
                systems.AddBefore(current, system);
            else
                systems.AddLast(system);

            Type interfaceType = typeof(ISystemUpdate);
            bool implementsInterface = interfaceType.IsInstanceOfType(system);
            if (implementsInterface)
            {
                LinkedListNode<ISystem> currentUpdate = updateSystems.First;
                while (currentUpdate != null)
                {
                    if (system.Priority > currentUpdate.Value.Priority)
                        break;
                    currentUpdate = currentUpdate.Next;
                }
                if (currentUpdate != null)
                    updateSystems.AddBefore(currentUpdate, system);
                else
                    updateSystems.AddLast(system);
                isExecuteListDirty = true;
            }
            system.OnInit();
        }

        private static void BuildExecuteList()
        {
            updateExecuteList.Clear();
            foreach (ISystem module in updateSystems)
            {
                updateExecuteList.Add(module as ISystemUpdate);
            }
        }
    }
}