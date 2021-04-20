using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum PLAYERCLASS { BARBARIAN = 1, BARD = 2, CLERIC = 3, DRUID = 4, FIGHTER = 5,
    MONK = 6, PALADIN = 7, RANGER = 8, ROGUE = 9, SORCERER = 10,
    WARLOCK = 11, WIZARD = 12, ARTIFICER = 13, BLOODHUNTER = 14}

[Serializable]
public class CharacterDetail : MonoBehaviour
{
    public DetailInfo detailInfo;

}

[Serializable]
public class DetailInfo
{
    public string Name;
    public string Class;
    public PLAYERCLASS DefineClass;
    public int Str;
    public int Dex;
    public int Con;
    public int Intel;
    public int Wis;
    public int Chr;
    public static string jsonPath;


    public DetailInfo(int[] Stats, string name, PLAYERCLASS defineClass)
    {
        Name = name;
        DefineClass = defineClass;
        Class = DefineClass.ToString();
        Str = Stats[0];
        Dex = Stats[1];
        Con = Stats[2];
        Intel = Stats[3];
        Wis = Stats[4];
        Chr = Stats[5];
    }

}

[SerializeField]
public class CharacterDeck
{
    public List<DetailInfo> theDeck;
}

public static class JsonHelper
{
    public static T[] FromJson<T>(string json)
    {
        Wrapper<T> wrapper = JsonUtility.FromJson<Wrapper<T>>(json);
        return wrapper.Items;
    }

    public static string ToJson<T>(T[] array)
    {
        Wrapper<T> wrapper = new Wrapper<T>();
        wrapper.Items = array;
        return JsonUtility.ToJson(wrapper);
    }

    public static string ToJson<T>(T[] array, bool prettyPrint)
    {
        Wrapper<T> wrapper = new Wrapper<T>();
        wrapper.Items = array;
        return JsonUtility.ToJson(wrapper, prettyPrint);
    }

    [Serializable]
    private class Wrapper<T>
    {
        public T[] Items;
    }
}
