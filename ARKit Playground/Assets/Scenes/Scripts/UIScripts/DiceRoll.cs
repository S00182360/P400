using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class DiceRoll : MonoBehaviour
{
    [SerializeField]
    TMP_Text Result;

    public void RollD20()
    {
        Result.text = Random.Range(1, 20).ToString();
    }

    public void RollD12()
    {
        Result.text = Random.Range(1, 12).ToString();
    }

    public void RollD10()
    {
        Result.text = Random.Range(1, 10).ToString();
    }

    public void RollD8()
    {
        Result.text = Random.Range(1, 8).ToString();
    }

    public void RollD6()
    {
        Result.text = Random.Range(1, 6).ToString();
    }

    public void RollD4()
    {
        Result.text = Random.Range(1, 4).ToString();
    }
}
