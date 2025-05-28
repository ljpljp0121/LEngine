using System;
using System.Collections.Generic;
using UnityEngine;

namespace LEngine
{
    public static class ModuleSystem
    {
        internal const int DESIGN_MODULE_COUNT = 16;

        private static readonly Dictionary<Type, IModule> moduleMaps =
            new Dictionary<Type, IModule>(DESIGN_MODULE_COUNT);

        private static readonly LinkedList<IModule> modules = new LinkedList<IModule>();
        private static readonly LinkedList<IModule> updateModules = new LinkedList<IModule>();
        private static readonly List<IModuleUpdate> updateExecuteList = new List<IModuleUpdate>(DESIGN_MODULE_COUNT);

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
            for (LinkedListNode<IModule> current = modules.Last; current != null; current = current.Previous)
            {
                current.Value.Shutdown();
            }

            modules.Clear();
            moduleMaps.Clear();
            updateModules.Clear();
            updateExecuteList.Clear();
        }

        public static T GetModule<T>() where T : class
        {
            Type interfaceType = typeof(T);
            if (!interfaceType.IsInterface)
            {
                Debug.LogError($"You must get module by interface, but {interfaceType.FullName} is not.");
            }

            if (moduleMaps.TryGetValue(interfaceType, out IModule module))
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
            return GetModule(moduleType) as T;
        }

        public static IModule GetModule(Type moduleType)
        {
            return moduleMaps.TryGetValue(moduleType, out IModule module) ? module : CreateModule(moduleType);
        }

        /// <summary>
        /// 创建游戏框架模块。
        /// </summary>
        private static IModule CreateModule(Type moduleType)
        {
            IModule module = (IModule)Activator.CreateInstance(moduleType);
            if (module == null)
            {
                Debug.LogError($"Can not create module {moduleType.FullName}");
            }

            moduleMaps[moduleType] = module;

            RegisterUpdate(module);

            return module;
        }

        public static T RegisterModule<T>(IModule module) where T : class
        {
            Type interfaceType = typeof(T);
            if (!interfaceType.IsInterface)
            {
                Debug.LogError($"You must get module by interface, but {interfaceType.FullName} is not.");
            }
            moduleMaps[interfaceType] = module;
            RegisterUpdate(module);
            return module as T;
        }

        private static void RegisterUpdate(IModule module)
        {
            LinkedListNode<IModule> current = modules.First;
            while (current != null)
            {
                if (module.Priority > current.Value.Priority)
                    break;
                current = current.Next;
            }

            if (current != null)
                modules.AddBefore(current, module);
            else
                modules.AddLast(module);

            Type interfaceType = typeof(IModuleUpdate);
            bool implementsInterface = interfaceType.IsInstanceOfType(module);
            if (implementsInterface)
            {
                LinkedListNode<IModule> currentUpdate = updateModules.First;
                while (currentUpdate != null)
                {
                    if (module.Priority > currentUpdate.Value.Priority)
                        break;
                    currentUpdate = currentUpdate.Next;
                }
                if (currentUpdate != null)
                    updateModules.AddBefore(currentUpdate, module);
                else
                    updateModules.AddLast(module);
                isExecuteListDirty = true;
            }
            module.OnInit();
        }

        private static void BuildExecuteList()
        {
            updateExecuteList.Clear();
            foreach (IModule module in updateModules)
            {
                updateExecuteList.Add(module as IModuleUpdate);
            }
        }
    }
}