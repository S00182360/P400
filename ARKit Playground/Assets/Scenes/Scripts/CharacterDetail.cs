using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum PLAYERCLASS { BARBARIAN = 1, BARD = 2, CLERIC = 3, DRUID = 4, FIGHTER = 5,
    MONK = 6, PALADIN = 7, RANGER = 8, ROGUE = 9, SORCERER = 10,
    WARLOCK = 11, WIZARD = 12, ARTIFICER = 13, BLOODHUNTER = 14}


public class CharacterDetail : MonoBehaviour
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

    public CharacterDetail(int[] Stats, string name, PLAYERCLASS defineClass)
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

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

