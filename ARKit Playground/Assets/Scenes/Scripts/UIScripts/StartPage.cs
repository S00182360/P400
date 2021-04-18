using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartPage : MonoBehaviour
{
    
    // Start is called before the first frame update
    void Start()
    {
        CharacterDetailStatic.OnStartGame();
        CharacterDetailStatic.InitData();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void GoToGameScene()
    {
        SceneManager.LoadScene("Sceb");
    }
}
