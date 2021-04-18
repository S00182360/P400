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
    public List<DetailInfo> characterDetails;
    public CharacterDetail characterDetail;
    public string jsonSerial;
    public PlayerCharacter newPlayer;
    public DetailInfo currentCharacter;
    public DetailInfo newChar;
    [SerializeField]
    CharacterDetailManager characterDetailManager;

    private void Awake()
    {
        DontDestroyOnLoad(this.gameObject);
    }
    void Start()
    {
        OnStartGame();
        InitData();
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void OnStartGame()
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
    public void InitData()
    {
        CreateCharacter("Bardy McBardface");
        CreateCharacter("Paladin Knights");
        CreateCharacter("Relana Kemari");
    }

    public void ReadInfoFromJson()
    {
        characterDetails = new List<DetailInfo>();
        try
        {
            using (FileStream fs = File.Create(jsonPath + "/" + jsonFile + jsonExtention))
            {

                using StreamReader sr = new StreamReader(fs);

                json = sr.ReadToEnd();
                sr.Close();
                fs.Close();

            }

            characterDetails = JsonUtility.FromJson<List<DetailInfo>>(json);

            for (int i = 0; i < characterDetails.Count; i++)
                Debug.Log(characterDetails[0].Name);

        }
        catch
        {
            Debug.Log("Exception in CDManager ReadInfoFromJson()");
        }

        characterDetail = JsonUtility.FromJson<CharacterDetail>(json);
    }

    public void WhiteInfoToJson(DetailInfo characterDetail)
    {
        //Save current info
        using (FileStream fs = new FileStream(jsonPath, FileMode.OpenOrCreate))
        using (StreamReader sr = new StreamReader(fs))
        {
            json = sr.ReadToEnd();
            sr.Close();
            fs.Close();
        }

        characterDetails = JsonUtility.FromJson<List<DetailInfo>>(json);

        jsonSerial = JsonUtility.ToJson(characterDetail);
        File.WriteAllText(jsonPath, jsonSerial);
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

        characterDetailManager.WhiteInfoToJson(newChar);
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

            characterDetails = JsonUtility.FromJson<List<DetailInfo>>(json);
            JsonUtility.FromJsonOverwrite(jsonSerial, detail);

        }
        catch
        {
            Debug.Log("Exception in CDManager AddOrUpdateJson()");
        }
    }
}
