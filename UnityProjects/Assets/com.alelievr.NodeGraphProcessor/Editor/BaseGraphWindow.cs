using System.Linq;
using System;
using UnityEngine;
using UnityEditor;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;
using UnityEditor.SceneManagement;
using UnityEditor.Experimental.GraphView;

namespace GraphProcessor
{
    /// <summary>
    /// 图编辑器窗口的基类
    /// </summary>
    [System.Serializable]
    public abstract class BaseGraphWindow : EditorWindow
    {
        protected VisualElement rootView;
        protected BaseGraphView graphView; //图的编辑器视图

        [SerializeField]
        protected BaseGraph graph; //图的运行时数据

        readonly string graphWindowStyle = "GraphProcessorStyles/BaseGraphView";

        /// <summary>
        /// 节点图是否加载
        /// </summary>
        public bool isGraphLoaded
        {
            get { return graphView != null && graphView.graph != null; }
        }

        bool reloadWorkaround = false;

        public event Action<BaseGraph> graphLoaded;     //图加载回调
        public event Action<BaseGraph> graphUnloaded;   //图卸载回调

        /// <summary>
        /// 窗口启用时调用
        /// </summary>
        protected virtual void OnEnable()
        {
            rootView = rootVisualElement;
            //rootView.name = "graphRootView";

            if (graph != null)
                LoadGraph();
            else
                reloadWorkaround = true;
        }

        protected virtual void Update()
        {
            // Workaround for the Refresh option of the editor window:
            // When Refresh is clicked, OnEnable is called before the serialized data in the
            // editor window is deserialized, causing the graph view to not be loaded
            if (reloadWorkaround && graph != null)
            {
                LoadGraph();
                reloadWorkaround = false;
            }
        }

        /// <summary>
        /// 窗口被禁用时调用
        /// </summary>
        protected virtual void OnDisable()
        {
            if (graph != null && graphView != null)
                graphView.SaveGraphToDisk();
        }

        /// <summary>
        /// 窗口关闭时调用
        /// </summary>
        protected virtual void OnDestroy() { }

        void LoadGraph()
        {
            // We wait for the graph to be initialized
            if (graph.isEnabled)
                InitializeGraph(graph);
            else
                graph.onEnabled += () => InitializeGraph(graph);
        }

        public void InitializeGraph(BaseGraph graph)
        {
            //保存旧图
            if (this.graph != null && graph != this.graph)
            {
                // Save the graph to the disk
                EditorUtility.SetDirty(this.graph);
                AssetDatabase.SaveAssets();
                // Unload the graph
                graphUnloaded?.Invoke(this.graph);
            }

            graphLoaded?.Invoke(graph);
            this.graph = graph;

            if (graphView != null)
                rootView.Remove(graphView);

            //初始化BaseGraphView
            InitializeWindow(graph);
            if (graphView == null)
            {
                Debug.LogError("GraphView has not been added to the BaseGraph root view !");
                return;
            }
            graphView.styleSheets.Add(Resources.Load<StyleSheet>(graphWindowStyle));
            GridBackground gridBackground = new GridBackground();
            gridBackground.StretchToParentSize();
            graphView.Insert(0, gridBackground);
            graphView.Initialize(graph);

            InitializeGraphView(graphView);

            //链接场景到BaseGraph
            if (graph.IsLinkedToScene())
                LinkGraphWindowToScene(graph.GetLinkedScene());
            else
                graph.onSceneLinked += LinkGraphWindowToScene;
        }

        void LinkGraphWindowToScene(Scene scene)
        {
            EditorSceneManager.sceneClosed += CloseWindowWhenSceneIsClosed;

            void CloseWindowWhenSceneIsClosed(Scene closedScene)
            {
                if (scene == closedScene)
                {
                    Close();
                    EditorSceneManager.sceneClosed -= CloseWindowWhenSceneIsClosed;
                }
            }
        }

        public virtual void OnGraphDeleted()
        {
            if (graph != null && graphView != null)
                rootView.Remove(graphView);

            graphView = null;
        }

        /// <summary>
        /// 初始化BaseGraphWindow视图,必须要生成一个graphView
        /// </summary>
        protected abstract void InitializeWindow(BaseGraph graph);
        /// <summary>
        /// 初始化graphView
        /// </summary>
        /// <param name="view"></param>
        protected virtual void InitializeGraphView(BaseGraphView view) { }
    }
}