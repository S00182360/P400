using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputManager : MonoBehaviour
{

    [SerializeField]
    public GameBoard gameBoard;
    [SerializeField]
    Material highlightMat;
    public Tile selection;

    void Update()
    {


        if (Input.GetMouseButtonDown(0))
        {
            GameObject obj = RayGetObj();

            if(gameBoard.GetSelectedPlayer())
        }
    }

    private GameObject RayGetObj()
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        if(Physics.Raycast(ray, out hit))
        {
            return hit.transform.gameObject;
        }
        return null;
    }
}
