using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;

namespace LEngine
{

    public class Ref<T>
    {
        public T Value;

        [MethodImpl(MethodImplOptions.NoInlining)]
        public Ref(T v) => this.Value = v;
    }

    public class CustomTaskScheduler : TaskScheduler
    {
        public new static CustomTaskScheduler Current { get; } = new CustomTaskScheduler();
        private readonly LinkedList<Task> mQueue = new LinkedList<Task>();

        public void Run()
        {
            if (mQueue.Count == 0)
                return;

            var task = mQueue.First;
            mQueue.RemoveFirst();
            try
            {
                TryExecuteTask(task.Value);
            }
            catch (Exception e)
            {
                Debug.LogError(e.ToString());
            }
        }

        protected override IEnumerable<Task> GetScheduledTasks()
        {
            return mQueue;
        }

        protected override void QueueTask(Task task)
        {
            mQueue.AddLast(task); //t.Start(MyTaskScheduler.Current)时，将Task加入到队列中
        }

        //当执行该函数时，程序正在尝试以同步的方式执行Task代码
        protected override bool TryExecuteTaskInline(Task task, bool taskWasPreviouslyQueued)
        {
            return false;
        }
    }

    public static class TaskUtil
    {
        public static Ref<Task> Run(this Func<Task> task)
        {
            var tsk = task();
            Run(tsk);
            return new Ref<Task>(tsk);
        }

        public static void Run(Action task)
        {
            var t = new Task(task);
            t.Start(CustomTaskScheduler.Current);
        }

        public static void Run(this Task task)
        {
            task.ContinueWith((t) =>
            {
                if (t.Exception != null)
                    Debug.LogError(t.Exception.InnerException?.ToString());
            }, CustomTaskScheduler.Current);
        }
    }

}
