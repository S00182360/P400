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
    public Vector2 GridPos;
    public string GridName;

    [SerializeField]
    GameObject CurrentTile;
    [SerializeField]
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
            PreviousTile = CurrentTile;

            CurrentTile = hit.collider.gameObject;

            if (CurrentTile.TryGetComponent(out Tile tile))
            {
                GetComponentInParent<GameBoard>().SelectedTile = CurrentTile;
                CurrentTile.GetComponent<Renderer>().material = ClickedMat;
                //Debug.Log(tile.GridName);
            }
            Debug.Log(string.Format("Current Tile :{0}\nPrevious Tile:{1}", CurrentTile.GetComponent<Tile>().GridName, PreviousTile.GetComponent<Tile>().GridName));
        }
    }
}
