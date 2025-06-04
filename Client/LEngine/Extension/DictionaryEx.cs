using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DictionaryEx<TKey, TValue>
{
    private Dictionary<TKey, TValue> dictionary = new Dictionary<TKey, TValue>();
    private Dictionary<TKey, TValue> destroyed = new Dictionary<TKey, TValue>();
    private Dictionary<TKey, TValue> added = new Dictionary<TKey, TValue>();
    public void Add(TKey key, TValue value)
    {
        added.Add(key, value);
    }

    public bool Remove(TKey key)
    {
        if (added.ContainsKey(key))
        {
            added.Remove(key);
            return true;
        }

        TValue value;
        if (dictionary.TryGetValue(key, out value))
        {
            if (destroyed.ContainsKey(key))
            {
                return false;
            }
            else
            {
                destroyed.Add(key, value);
                return true;
            }
        }

        return false;
    }

    public bool ContainsKey(TKey key)
    {
        if (destroyed.ContainsKey(key))
            return false;

        if (added.ContainsKey(key))
            return true;

        return dictionary.ContainsKey(key);
    }

    public bool ContainsValue(TValue value)
    {
        if (destroyed.ContainsValue(value))
            return false;

        if (added.ContainsValue(value))
            return true;

        return dictionary.ContainsValue(value);
    }

    public void Iterator(Action<TKey, TValue> call)
    {
        foreach (KeyValuePair<TKey, TValue> entry in added)
            dictionary.Add(entry.Key, entry.Value);
        added.Clear();

        foreach (TKey key in destroyed.Keys)
            dictionary.Remove(key);
        destroyed.Clear();

        foreach (KeyValuePair<TKey, TValue> entry in dictionary)
            call(entry.Key, entry.Value);
    }

    public int Count
    {
        get { return dictionary.Count + added.Count - destroyed.Count; }
    }

    public void Clear()
    {
        added.Clear();
        destroyed.Clear();
        dictionary.Clear();
    }
}
