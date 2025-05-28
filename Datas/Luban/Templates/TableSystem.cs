using cfg;
using System.Collections.Generic;

public static class TableSystem
{
    private static Dictionary<string, IVOFun> tables = new Dictionary<string, IVOFun>();

    public static T GetVOData<T>() where T : IVOFun,new()
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