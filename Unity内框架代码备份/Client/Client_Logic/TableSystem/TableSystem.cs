using cfg;
using System.Collections.Generic;
using LEngine;

public class TableSystem : Singleton<TableSystem>
{
    private Dictionary<string, IVOFun> tables = new Dictionary<string, IVOFun>();

    public T GetVOData<T>() where T : IVOFun, new()
    {
        if (tables.ContainsKey(typeof(T).Name))
        {
            return (T)tables[typeof(T).Name];
        }
        else
        {
            var table = new T();
            table._LoadData();
            tables.Add(typeof(T).Name, table);
            return (T)table;
        }
    }
}