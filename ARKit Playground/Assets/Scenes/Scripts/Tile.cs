using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tile : MonoBehaviour
{
    [SerializeField]
    Material ClickedMat;
    [SerializeField]
    Material UnclickedMat;
    public bool isClicked;
    public List<int>GridPos = new List<int>();
    public string GridName;

    GameObject CurrentTile;
    GameObject PreviousTile;

    private void Start()
    {
        isClicked = false;
        
    }

    private void Update()
    {

    }


    private void OnMouseUp()
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit))
        {
            if (PreviousTile != null)
            {
                PreviousTile.GetComponent<Renderer>().material = UnclickedMat;
            }

            CurrentTile = hit.collider.gameObject;
            PreviousTile = CurrentTile;
            if (CurrentTile.TryGetComponent(out Tile tile))
            {
                CurrentTile.GetComponent<Renderer>().material = ClickedMat;
                Debug.Log(tile.GridName);
            }
        }
    }
}
