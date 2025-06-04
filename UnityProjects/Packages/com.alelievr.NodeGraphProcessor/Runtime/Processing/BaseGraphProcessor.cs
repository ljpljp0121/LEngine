using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using Unity.Jobs;
using Unity.Collections;
// using Unity.Entities;

namespace GraphProcessor
{

    /// <summary>
    /// 图处理器的基类，用于管理图的调度和处理。
    /// </summary>
    public abstract class BaseGraphProcessor
    {
        //要处理的图
        protected BaseGraph graph;

        public BaseGraphProcessor(BaseGraph graph)
        {
            this.graph = graph;

            UpdateComputeOrder();
        }

        /// <summary>
        /// 更新图中节点的计算顺序
        /// </summary>
        public abstract void UpdateComputeOrder();

        public abstract void Run();
    }
}
