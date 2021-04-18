using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public static class CharacterDetailStatic
{
    private static string characterName;
    private static string job;
    private static PLAYERCLASS defineClass;
    private static int str;
    private static int dex;
    private static int con;
    private static int intel;
    private static int wis;
    private static int chr;
    public static string jsonPath;
    public static string json;
    public static List<CharacterDetail> characterDetails;
    public static CharacterDetail characterDetail;
    public static string jsonSerial;
    

    public static string CharacterName { get => characterName; set => characterName = value; }
    public static string Job { get => job; set => job = value; }
    public static PLAYERCLASS DefineClass { get => defineClass; set => defineClass = value; }
    public static int Str { get => str; set => str = value; }
    public static int Dex { get => dex; set => dex = value; }
    public static int Con { get => con; set => con = value; }
    public static int Intel { get => intel; set => intel = value; }
    public static int Wis { get => wis; set => wis = value; }
    public static int Chr { get => chr; set => chr = value; }

    public static void OnStartGame()
    {
        jsonPath = "Assets/SaveFile/CharacterData.json";
        ReadInfoFromJson();
    }
    public static void InitData(string name)
    {
        CreateCharacter("Bardy McBardface");
        CreateCharacter("Paladin Knights");
        CreateCharacter("Nash Kemari");
    }

    public static void ReadInfoFromJson()
    {
        characterDetails = new List<CharacterDetail>();
        try
        {
            using (StreamReader sr = new StreamReader(jsonPath))
                json = sr.ReadToEnd();
            
            characterDetails = JsonUtility.FromJson<List<CharacterDetail>>(json);

            for (int i = 0; i < characterDetails.Count; i++)
                Debug.Log(characterDetails[0].Name);
            
        }
        catch(Exception e)
        {
            Debug.Log(e.Message);
        }
        characterDetail = JsonUtility.FromJson<CharacterDetail>(json);
    }

    public static void WhiteInfoToJson(CharacterDetail characterDetail)
    {
        //Save current info
        using (StreamReader sr = new StreamReader(jsonPath))
            json = sr.ReadToEnd();
        characterDetails = JsonUtility.FromJson<List<CharacterDetail>>(json);
        
        jsonSerial = JsonUtility.ToJson(characterDetail);
        File.WriteAllText(jsonPath, jsonSerial);
    }

    public static void CreateCharacter(string newName)
    {
        PlayerCharacter newPlayer = new();
        int[] stats = new int[6];

        for (int i = 0; i < stats.Length; i++)
            stats[i] = UnityEngine.Random.Range(1, 10);

        PLAYERCLASS defineClass = (PLAYERCLASS)UnityEngine.Random.Range(1, 12);

        if (newPlayer.TryGetComponent(out CharacterDetail newChar))
        {
            newChar.Name = newName;
            newChar.DefineClass = defineClass;
            newChar.Class = newChar.DefineClass.ToString();
            newChar.Str = stats[0];
            newChar.Dex = stats[1];
            newChar.Con = stats[2];
            newChar.Intel = stats[3];
            newChar.Wis = stats[4];
            newChar.Chr = stats[5];
            CharacterDetailStatic.WhiteInfoToJson(newChar);
        }
        
    }

    public static void AddOrUpdateJson(CharacterDetail detail)
    {
        JsonUtility.FromJsonOverwrite(jsonSerial, detail);
    }
}
    
