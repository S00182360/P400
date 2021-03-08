using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameBoard : MonoBehaviour
{
    //TODO: create tile generation method

    //Read board size
    //generate grid of size (x,y)
    [SerializeField]
    GameObject boardTile;

    [SerializeField]
    int width;
    [SerializeField]
    int length;

    private void Awake()
    {
        StartCoroutine(DrawBoard(width, length));
    }
    void Start()
    {
        DrawBoard(width, length);        
    }

    private IEnumerator DrawBoard(int w, int l)
    {
        WaitForSeconds wait = new WaitForSeconds(0.05f);

        //Vector3 widthVe = Vector3.right * w;
        Vector3 heightVe = Vector3.forward * l;

        for (int i = 0; i < w; i++)
        {
            Vector3 start = Vector3.forward * i;
            Vector3 startWidth;
            //Debug.DrawLine(start, start + widthVe);

            //Instantiate(boardTile, start + widthVe, Quaternion.identity);

            for (int j = 0; j < l; j++)
            {
                startWidth = Vector3.right * j;
                startWidth += start;
                Instantiate(boardTile, startWidth + heightVe, Quaternion.identity);
                yield return wait;
            }
        }

    }


    void Update()
    {
        
    }

    
}
