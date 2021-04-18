using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public static class CharacterDetailStatic
{
    //private static string characterName;
    //private static string job;
    //private static PLAYERCLASS defineClass;
    //private static int str;
    //private static int dex;
    //private static int con;
    //private static int intel;
    //private static int wis;
    //private static int chr;

    public static string jsonPath;
    public static string jsonFile;
    public static string jsonExtention;
    public static string json;
    public static List<CharacterDetail> characterDetails;
    public static CharacterDetail characterDetail;
    public static string jsonSerial;
    public static PlayerCharacter newPlayer;
    public static CharacterDetail currentCharacter;
    public static CharacterDetail newChar;

    //public static string CharacterName { get => characterName; set => characterName = value; }
    //public static string Job { get => job; set => job = value; }
    //public static PLAYERCLASS DefineClass { get => defineClass; set => defineClass = value; }
    //public static int Str { get => str; set => str = value; }
    //public static int Dex { get => dex; set => dex = value; }
    //public static int Con { get => con; set => con = value; }
    //public static int Intel { get => intel; set => intel = value; }
    //public static int Wis { get => wis; set => wis = value; }
    //public static int Chr { get => chr; set => chr = value; }


    public static void OnStartGame()
    {
        jsonPath = Application.persistentDataPath + "/Assets/SaveFiles";
        jsonFile = "CharacterDetail";
        jsonExtention = ".json";
        if (!Directory.Exists(jsonPath))
        {
            Directory.CreateDirectory(jsonPath);
            File.Create(jsonPath + "CharacterDetail.json");
        }
        FileStream file = File.Create(jsonPath + "/" + jsonFile + jsonExtention);
        file.Close();
        ReadInfoFromJson();
    }
    public static void InitData()
    {
        CreateCharacter("Bardy McBardface");
        CreateCharacter("Paladin Knights");
        CreateCharacter("Relana Kemari");
    }

    public static void ReadInfoFromJson()
    {
        characterDetails = new List<CharacterDetail>();
        try
        {
            using (FileStream fs = File.Create(jsonPath + "/" + jsonFile + "/" + jsonExtention))
            {

                using StreamReader sr = new StreamReader(fs);

                json = sr.ReadToEnd();
                sr.Close();
                fs.Close();

            }
            
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
        using (FileStream fs = new FileStream(jsonPath, FileMode.OpenOrCreate))
        using (StreamReader sr = new StreamReader(fs))
        {
            json = sr.ReadToEnd();
            sr.Close();
            fs.Close();
        }
        
        characterDetails = JsonUtility.FromJson<List<CharacterDetail>>(json);
        
        jsonSerial = JsonUtility.ToJson(characterDetail);
        File.WriteAllText(jsonPath, jsonSerial);
    }

    public static void CreateCharacter(string newName)
    {
        int[] stats = new int[6];

        for (int i = 0; i < stats.Length; i++)
            stats[i] = UnityEngine.Random.Range(1, 10);

        PLAYERCLASS defineClass = (PLAYERCLASS)UnityEngine.Random.Range(1, 12);
        newChar = new CharacterDetail(stats, newName, defineClass);
        //newChar.Name = newName;
        //newChar.DefineClass = defineClass;
        //newChar.Class = newChar.DefineClass.ToString();
        //newChar.Str = stats[0];
        //newChar.Dex = stats[1];
        //newChar.Con = stats[2];
        //newChar.Intel = stats[3];
        //newChar.Wis = stats[4];
        //newChar.Chr = stats[5];
        CharacterDetailStatic.WhiteInfoToJson(newChar);        
    }

    public static void AddOrUpdateJson(CharacterDetail detail)
    {
        using (FileStream fs = new FileStream(jsonPath, FileMode.OpenOrCreate))
        using (StreamReader sr = new StreamReader(fs))
        {
            json = sr.ReadToEnd();
            sr.Close();
            fs.Close();
        }

        characterDetails = JsonUtility.FromJson<List<CharacterDetail>>(json);
        JsonUtility.FromJsonOverwrite(jsonSerial, detail);
    }
}
    
