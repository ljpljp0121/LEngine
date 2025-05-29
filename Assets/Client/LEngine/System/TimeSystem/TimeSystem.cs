using System;
using System.Collections.Generic;
using UnityEngine;

namespace LEngine
{
    public delegate void TimerHandler(object[] args);
    public class TimeSystem : ITimeSystem, ISystem, ISystemUpdate
    {
        [Serializable]
        internal class Timer
        {
            public int timerId = 0;
            public float curTime = 0;
            public float time = 0;
            public TimerHandler Handler;
            public bool isLoop = false;
            public bool isNeedRemove = false;
            public bool isRunning = false;
            public bool isUnscaled = false; //是否使用非缩放的时间
            public object[] Args = null; //回调参数
        }

        private int curTimerId = 0;
        private readonly List<Timer> timerList = new List<Timer>();
        private readonly List<Timer> unscaledTimerList = new List<Timer>();
        private readonly List<int> cacheRemoveTimers = new List<int>();
        private readonly List<int> cacheRemoveUnscaledTimers = new List<int>();


        public int AddTimer(TimerHandler callback, float time, bool isLoop = false, bool isUnscaled = false, params object[] args)
        {
            Timer timer = new Timer
            {
                timerId = ++curTimerId,
                curTime = time,
                time = time,
                Handler = callback,
                isLoop = isLoop,
                isUnscaled = isUnscaled,
                Args = args,
                isNeedRemove = false,
                isRunning = true
            };

            InsertTimer(timer);
            return timer.timerId;
        }

        private void InsertTimer(Timer timer)
        {
            bool isInsert = false;
            if (timer.isUnscaled)
            {
                for (int i = 0, len = unscaledTimerList.Count; i < len; i++)
                {
                    if (unscaledTimerList[i].curTime > timer.curTime)
                    {
                        unscaledTimerList.Insert(i, timer);
                        isInsert = true;
                        break;
                    }
                }

                if (!isInsert)
                {
                    unscaledTimerList.Add(timer);
                }
            }
            else
            {
                for (int i = 0, len = timerList.Count; i < len; i++)
                {
                    if (timerList[i].curTime > timer.curTime)
                    {
                        timerList.Insert(i, timer);
                        isInsert = true;
                        break;
                    }
                }

                if (!isInsert)
                {
                    timerList.Add(timer);
                }
            }
        }

        public void Stop(int timerId)
        {
            Timer timer = GetTimer(timerId);
            if (timer != null) timer.isRunning = false;
        }

        public void Resume(int timerId)
        {
            Timer timer = GetTimer(timerId);
            if (timer != null) timer.isRunning = true;
        }

        public bool IsRunning(int timerId)
        {
            Timer timer = GetTimer(timerId);
            return timer is { isRunning: true };
        }

        public float GetLeftTime(int timerId)
        {
            Timer timer = GetTimer(timerId);
            if (timer == null) return 0;
            return timer.curTime;
        }

        public void Restart(int timerId)
        {
            Timer timer = GetTimer(timerId);
            if (timer != null)
            {
                timer.curTime = timer.time;
                timer.isRunning = true;
            }
        }

        public void ResetTimer(int timerId, TimerHandler callback, float time, bool isLoop = false, bool isUnscaled = false)
        {
            Reset(timerId, callback, time, isLoop, isUnscaled);
        }

        public void ResetTimer(int timerId, float time, bool isLoop, bool isUnscaled)
        {
            Reset(timerId, time, isLoop, isUnscaled);
        }

        public void Reset(int timerId, TimerHandler callback, float time, bool isLoop = false, bool isUnscaled = false)
        {
            Timer timer = GetTimer(timerId);
            if (timer != null)
            {
                timer.curTime = time;
                timer.time = time;
                timer.Handler = callback;
                timer.isLoop = isLoop;
                timer.isNeedRemove = false;
                if (timer.isUnscaled != isUnscaled)
                {
                    RemoveTimerImmediate(timerId);

                    timer.isUnscaled = isUnscaled;
                    InsertTimer(timer);
                }
            }
        }

        public void Reset(int timerId, float time, bool isLoop, bool isUnscaled)
        {
            Timer timer = GetTimer(timerId);
            if (timer != null)
            {
                timer.curTime = time;
                timer.time = time;
                timer.isLoop = isLoop;
                timer.isNeedRemove = false;
                if (timer.isUnscaled != isUnscaled)
                {
                    RemoveTimerImmediate(timerId);

                    timer.isUnscaled = isUnscaled;
                    InsertTimer(timer);
                }
            }
        }

        private void RemoveTimerImmediate(int timerId)
        {
            for (int i = 0, len = timerList.Count; i < len; i++)
            {
                if (timerList[i].timerId == timerId)
                {
                    timerList.RemoveAt(i);
                    return;
                }
            }

            for (int i = 0, len = unscaledTimerList.Count; i < len; i++)
            {
                if (unscaledTimerList[i].timerId == timerId)
                {
                    unscaledTimerList.RemoveAt(i);
                    return;
                }
            }
        }

        public void RemoveTimer(int timerId)
        {
            for (int i = 0, len = timerList.Count; i < len; i++)
            {
                if (timerList[i].timerId == timerId)
                {
                    timerList[i].isNeedRemove = true;
                    return;
                }
            }

            for (int i = 0, len = unscaledTimerList.Count; i < len; i++)
            {
                if (unscaledTimerList[i].timerId == timerId)
                {
                    unscaledTimerList[i].isNeedRemove = true;
                    return;
                }
            }
        }

        public void RemoveAllTimer()
        {
            timerList.Clear();
            unscaledTimerList.Clear();
        }

        private Timer GetTimer(int timerId)
        {
            for (int i = 0, len = timerList.Count; i < len; i++)
            {
                if (timerList[i].timerId == timerId)
                {
                    return timerList[i];
                }
            }

            for (int i = 0, len = unscaledTimerList.Count; i < len; i++)
            {
                if (unscaledTimerList[i].timerId == timerId)
                {
                    return unscaledTimerList[i];
                }
            }

            return null;
        }

        private void LoopCallInBadFrame()
        {
            bool isLoopCall = false;
            for (int i = 0, len = timerList.Count; i < len; i++)
            {
                Timer timer = timerList[i];
                if (timer.isLoop && timer.curTime <= 0)
                {
                    if (timer.Handler != null)
                    {
                        timer.Handler(timer.Args);
                    }

                    timer.curTime += timer.time;
                    if (timer.curTime <= 0)
                    {
                        isLoopCall = true;
                    }
                }
            }

            if (isLoopCall)
            {
                LoopCallInBadFrame();
            }
        }

        private void LoopCallUnscaledInBadFrame()
        {
            bool isLoopCall = false;
            for (int i = 0, len = unscaledTimerList.Count; i < len; i++)
            {
                Timer timer = unscaledTimerList[i];
                if (timer.isLoop && timer.curTime <= 0)
                {
                    if (timer.Handler != null)
                    {
                        timer.Handler(timer.Args);
                    }

                    timer.curTime += timer.time;
                    if (timer.curTime <= 0)
                    {
                        isLoopCall = true;
                    }
                }
            }

            if (isLoopCall)
            {
                LoopCallUnscaledInBadFrame();
            }
        }

        private void UpdateTimer(float elapseSeconds)
        {
            bool isLoopCall = false;
            for (int i = 0, len = timerList.Count; i < len; i++)
            {
                Timer timer = timerList[i];
                if (timer.isNeedRemove)
                {
                    cacheRemoveTimers.Add(i);
                    continue;
                }

                if (!timer.isRunning) continue;
                timer.curTime -= elapseSeconds;
                if (timer.curTime <= 0)
                {
                    if (timer.Handler != null)
                    {
                        timer.Handler(timer.Args);
                    }

                    if (timer.isLoop)
                    {
                        timer.curTime += timer.time;
                        if (timer.curTime <= 0)
                        {
                            isLoopCall = true;
                        }
                    }
                    else
                    {
                        cacheRemoveTimers.Add(i);
                    }
                }
            }

            for (int i = cacheRemoveTimers.Count - 1; i >= 0; i--)
            {
                timerList.RemoveAt(cacheRemoveTimers[i]);
                cacheRemoveTimers.RemoveAt(i);
            }

            if (isLoopCall)
            {
                LoopCallInBadFrame();
            }
        }

        private void UpdateUnscaledTimer(float realElapseSeconds)
        {
            bool isLoopCall = false;
            for (int i = 0, len = unscaledTimerList.Count; i < len; i++)
            {
                Timer timer = unscaledTimerList[i];
                if (timer.isNeedRemove)
                {
                    cacheRemoveUnscaledTimers.Add(i);
                    continue;
                }

                if (!timer.isRunning) continue;
                timer.curTime -= realElapseSeconds;
                if (timer.curTime <= 0)
                {
                    if (timer.Handler != null)
                    {
                        timer.Handler(timer.Args);
                    }

                    if (timer.isLoop)
                    {
                        timer.curTime += timer.time;
                        if (timer.curTime <= 0)
                        {
                            isLoopCall = true;
                        }
                    }
                    else
                    {
                        cacheRemoveUnscaledTimers.Add(i);
                    }
                }
            }

            for (int i = cacheRemoveUnscaledTimers.Count - 1; i >= 0; i--)
            {
                unscaledTimerList.RemoveAt(cacheRemoveUnscaledTimers[i]);
                cacheRemoveUnscaledTimers.RemoveAt(i);
            }

            if (isLoopCall)
            {
                LoopCallUnscaledInBadFrame();
            }
        }

        private readonly List<System.Timers.Timer> _ticker = new List<System.Timers.Timer>();

        public System.Timers.Timer AddSystemTimer(Action<object, System.Timers.ElapsedEventArgs> callBack)
        {
            int interval = 1000;
            var timerTick = new System.Timers.Timer(interval);
            timerTick.AutoReset = true;
            timerTick.Enabled = true;
            timerTick.Elapsed += new System.Timers.ElapsedEventHandler(callBack);

            _ticker.Add(timerTick);

            return timerTick;
        }

        private void DestroySystemTimer()
        {
            foreach (var ticker in _ticker)
            {
                if (ticker != null)
                {
                    ticker.Stop();
                }
            }
        }

        public void OnInit()
        {
        }

        public void Shutdown()
        {
            RemoveAllTimer();
            DestroySystemTimer();
        }

        public void Update(float elapseSeconds, float realElapseSeconds)
        {
            UpdateTimer(elapseSeconds);
            UpdateUnscaledTimer(realElapseSeconds);
        }
    }
}