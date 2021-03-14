using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tile : MonoBehaviour
{
    public Vector2 GridPos;
    public string GridName;
    public bool isSelected;

    private void Start()
    {
        isSelected = false;
        gameObject.layer = 8;
    }

    public void UpdateMat(Material mat)
    {
        GetComponent<Renderer>().material = mat;
    }

}
