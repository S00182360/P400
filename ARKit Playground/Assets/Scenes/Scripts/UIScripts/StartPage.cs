using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartPage : MonoBehaviour
{
    public void GoToGameScene()
    {
        SceneManager.LoadScene("Sceb");
    }

    public void GoToCharacterConfig()
    {
        SceneManager.LoadScene("CharacterConfig");
    }

    public void GoToStartPage()
    {
        SceneManager.LoadScene("StartPage");
    }
}
