using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class CharacterDetailManager : MonoBehaviour
{

    public string jsonPath;
    public string jsonFile;
    public string jsonExtention;
    public string json;
    public List<DetailInfo> characterDeck;
    public DetailInfo[] detailInfos;
    public CharacterDetail characterDetail;
    public string jsonSerial;
    public PlayerCharacter newPlayer;
    public DetailInfo currentCharacter;
    public DetailInfo newChar;
    

    private void Awake()
    {
        DontDestroyOnLoad(this.gameObject);
    }
    void Start()
    {

        jsonPath = Application.persistentDataPath + "/Assets/SaveFiles";
        jsonFile = "CharacterDetail";
        jsonExtention = ".json";
        characterDeck = new List<DetailInfo>();
        OnStartGame();
        InitData();
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void OnStartGame()
    {
        Debug.Log("OnStratGame reached");

        if (!Directory.Exists(jsonPath))
        {
            Debug.Log("DIR does not exist");
            Directory.CreateDirectory(jsonPath);
            File.Create(jsonPath + "CharacterDetail.json");
        }
        FileStream file = File.Create(jsonPath + "/" + jsonFile + jsonExtention);
        file.Close();
        ReadInfoFromJson();
    }
    public void InitData()
    {
        Debug.Log("InitData reached");
        CreateCharacter("Bardy McBardface");
        Debug.Log("Bardy mcbardface done"); 
        CreateCharacter("Paladin Knights");
        Debug.Log("PaladinKnight done");
        CreateCharacter("Relana Kemari");
        Debug.Log("Relana done");
        WriteInfoToJson();

    }

    public void ReadInfoFromJson()
    {
        Debug.Log("ReadInfoFromJson");
        characterDeck = new List<DetailInfo>();
        try
        {
            Debug.Log("ReadInfoFromJson try clause");
            using (FileStream fs = File.Create(jsonPath + "/" + jsonFile + jsonExtention))
            {
                Debug.Log("ReadInfoFromJson FS");
                using StreamReader sr = new StreamReader(fs);
                {
                    Debug.Log("ReadInfoFromJson FS -> StreamReader");
                    json = sr.ReadToEnd();
                    sr.Close();
                    fs.Close();
                }
            }
            if(json.Length > 5)
            {
                detailInfos = JsonHelper.FromJson<DetailInfo>(json);
                for (int i = 0; i < detailInfos.Length; i++)
                {
                    characterDeck.Add(detailInfos[i]);
                }
            }

            for (int i = 0; i < characterDeck.Count; i++)
                Debug.Log(characterDeck[0].Name);

        }
        catch
        {
            Debug.Log("Exception in CDManager ReadInfoFromJson()");
        }

        
    }

    public void WriteInfoToJson()
    {
        Debug.Log("WriteInfoToJson reached");
        //Save current info
        using (FileStream fs = new FileStream(string.Concat(jsonPath, "/", jsonFile, jsonExtention), FileMode.OpenOrCreate, FileAccess.ReadWrite))
        {
            //jsonSerial = JsonUtility.ToJson(characterDetail);
            jsonSerial = JsonHelper.ToJson(characterDeck.ToArray(), true);
            Debug.Log(jsonSerial);
            using(StreamWriter sw = new StreamWriter(fs))
            {
                Debug.Log("Inside StreamWriter");
                sw.WriteLine(jsonSerial);
                Debug.Log("After writing");
            }
            fs.Close();
            File.WriteAllText(string.Concat(jsonPath, "/", jsonFile, jsonExtention), jsonSerial);
        }

    }

    public void CreateCharacter(string newName)
    {
        int[] stats = new int[6];

        for (int i = 0; i < stats.Length; i++)
            stats[i] = UnityEngine.Random.Range(1, 10);

        PLAYERCLASS defineClass = (PLAYERCLASS)UnityEngine.Random.Range(1, 12);
        newChar = new DetailInfo(stats, newName, defineClass);
        //newChar.Name = newName;
        //newChar.DefineClass = defineClass;
        //newChar.Class = newChar.DefineClass.ToString();
        //newChar.Str = stats[0];
        //newChar.Dex = stats[1];
        //newChar.Con = stats[2];
        //newChar.Intel = stats[3];
        //newChar.Wis = stats[4];
        //newChar.Chr = stats[5];
        //CharacterDetailStatic.WhiteInfoToJson(newChar);
        characterDeck.Add(newChar);
    }

    public void AddOrUpdateJson(CharacterDetail detail)
    {
        try
        {
            using (FileStream fs = new FileStream(jsonPath, FileMode.OpenOrCreate))
            using (StreamReader sr = new StreamReader(fs))
            {
                json = sr.ReadToEnd();
                sr.Close();
                fs.Close();
            }

            characterDeck = JsonUtility.FromJson<List<DetailInfo>>(json);
            JsonUtility.FromJsonOverwrite(jsonSerial, detail);

        }
        catch
        {
            Debug.Log("Exception in CDManager AddOrUpdateJson()");
        }
    }
}
