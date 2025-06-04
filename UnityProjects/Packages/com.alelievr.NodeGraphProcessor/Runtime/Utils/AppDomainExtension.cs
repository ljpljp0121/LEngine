using System.Collections.Generic;
using System.Collections;
using System;

namespace GraphProcessor
{
    /// <summary>
    /// 反射拓展
    /// </summary>
    public static class AppDomainExtension
    {
        /// <summary>
        /// 获取当前AppDomain中所有类型
        /// </summary>
        public static IEnumerable<Type> GetAllTypes(this AppDomain domain)
        {
            foreach (var assembly in domain.GetAssemblies())
            {
                Type[] types = { };

                try
                {
                    types = assembly.GetTypes();
                }
                catch
                {
                    //just ignore it ...
                }

                foreach (var type in types)
                    yield return type;
            }
        }
    }
}
