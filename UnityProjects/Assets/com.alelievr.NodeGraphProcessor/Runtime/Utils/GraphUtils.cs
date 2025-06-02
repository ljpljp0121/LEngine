using System;
using System.Linq;
using System.Collections.Generic;

namespace GraphProcessor
{
    /// <summary>
    /// ͼ��������
    /// </summary>
    public static class GraphUtils
    {
        /// <summary>
        /// �ڵ�״̬
        /// </summary>
        enum State
        {
            /// <summary>
            /// δ����
            /// </summary>
            White,  
            /// <summary>
            /// ������
            /// </summary>
            Grey,
            /// <summary>
            /// �ѷ���
            /// </summary>
            Black,  
        }

        /// <summary>
        /// ����ר�ýڵ��װ��
        /// ��װԭʼ�ڵ㲢����㷨����״̬��Ϣ
        /// </summary>
        class TarversalNode
        {
            public BaseNode node;
            public List<TarversalNode> inputs = new List<TarversalNode>();
            public List<TarversalNode> outputs = new List<TarversalNode>();
            public State    state = State.White;

            public TarversalNode(BaseNode node) { this.node = node; }
        }

        /// <summary>
        /// ͼ����ר�����ݽṹ
        /// �Ż��㷨ִ��Ч��
        /// </summary>
        class TraversalGraph
        {
            public List<TarversalNode> nodes = new List<TarversalNode>();
            public List<TarversalNode> outputs = new List<TarversalNode>();
        }

        /// <summary>
        /// ��BaseGraphת��Ϊ�㷨�Ż���TraversalGraph
        /// </summary>
        static TraversalGraph ConvertGraphToTraversalGraph(BaseGraph graph)
        {
            TraversalGraph g = new TraversalGraph();
            Dictionary<BaseNode, TarversalNode> nodeMap = new Dictionary<BaseNode, TarversalNode>();

            foreach (var node in graph.nodes)
            {
                var tn = new TarversalNode(node);
                g.nodes.Add(tn);
                nodeMap[node] = tn;

                if (graph.graphOutputs.Contains(node))
                    g.outputs.Add(tn);
            }

            foreach (var tn in g.nodes)
            {
                tn.inputs = tn.node.GetInputNodes().Where(n => nodeMap.ContainsKey(n)).Select(n => nodeMap[n]).ToList();
                tn.outputs = tn.node.GetOutputNodes().Where(n => nodeMap.ContainsKey(n)).Select(n => nodeMap[n]).ToList();
            }

            return g;
        }

        /// <summary>
        /// �������������������
        /// ���ؽڵ��б���Դͷ�ڵ㵽����ڵ�
        /// </summary>
        public static List<BaseNode> DepthFirstSort(BaseGraph g)
        {
            var graph = ConvertGraphToTraversalGraph(g);
            List<BaseNode> depthFirstNodes = new List<BaseNode>();

            foreach (var n in graph.nodes)
                DFS(n);

            void DFS(TarversalNode n)
            {
                if (n.state == State.Black)
                    return;
                
                n.state = State.Grey;

                if (n.node is ParameterNode parameterNode && parameterNode.accessor == ParameterAccessor.Get)
                {
                    foreach (var setter in graph.nodes.Where(x=> 
                        x.node is ParameterNode p &&
                        p.parameterGUID == parameterNode.parameterGUID &&
                        p.accessor == ParameterAccessor.Set))
                    {
                        if (setter.state == State.White)
                            DFS(setter);
                    }
                }
                else
                {
                    foreach (var input in n.inputs)
                    {
                        if (input.state == State.White)
                            DFS(input);
                    }
                }

                n.state = State.Black;

                // Only add the node when his children are completely visited
                depthFirstNodes.Add(n.node);
            }

            return depthFirstNodes;
        }

        /// <summary>
        /// ���ͼ�е�ѭ������
        /// ����ѭ��ʱͨ���ص�֪ͨ
        /// </summary>
        public static void FindCyclesInGraph(BaseGraph g, Action<BaseNode> cyclicNode)
        {
            var graph = ConvertGraphToTraversalGraph(g);
            List<TarversalNode> cyclicNodes = new List<TarversalNode>();

            foreach (var n in graph.nodes)
                DFS(n);

            void DFS(TarversalNode n)
            {
                if (n.state == State.Black)
                    return;
                
                n.state = State.Grey;

                foreach (var input in n.inputs)
                {
                    if (input.state == State.White)
                        DFS(input);
                    else if (input.state == State.Grey)
                        cyclicNodes.Add(n);
                }
                n.state = State.Black;
            }

            cyclicNodes.ForEach((tn) => cyclicNode?.Invoke(tn.node));
        }
    }
}