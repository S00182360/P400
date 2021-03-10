using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameBoard : MonoBehaviour
{
    //TODO: 

    //Read board size
    //generate grid of size (x,y)
    [SerializeField]
    GameObject boardTile;
    [SerializeField]
    List<GameObject> AllTiles;
    [SerializeField]
    int width;
    [SerializeField]
    int length;
    [SerializeField]
    Material ClickedMat;
    [SerializeField]
    Material UnclickedMat;
    public GameObject SelectedTile;
    GameObject CurrentTile;
    GameObject PreviousTile;

    private void Awake()
    {
    }
    void Start()
    {
        AllTiles = new List<GameObject>();
        //StartCoroutine(DrawBoardDelayed(width, length));
        DrawBoard(width, length);

    }

    private void DrawBoard(int w, int l)
    {
        //Vector3 widthVe = Vector3.right * w;
        Vector3 heightVe = Vector3.forward * l;

        for (int i = 0; i < w; i++)
        {
            Vector3 start = Vector3.forward * i;
            Vector3 startWidth;

            for (int j = 0; j < l; j++)
            {
                startWidth = Vector3.right * j;
                startWidth += start;
                GameObject newTile = Instantiate(boardTile, startWidth + heightVe, Quaternion.identity);
                newTile.transform.parent = this.transform;
                AllTiles.Add(newTile);
                if (newTile.TryGetComponent(out Tile tile))
                {
                    tile.GridPos.x = i;
                    tile.GridPos.y = j;
                    tile.GridName = i.ToString() + j.ToString();
                }
            }
        }
    }

    #region Commented Code
    //private void OnMouseUp()
    //{
    //    Debug.Log("Entered OnMouseUp()");
    //    Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
    //    RaycastHit hit;
    //    if (Physics.Raycast(ray, out hit))
    //    {
    //        if (PreviousTile != null)
    //        {
    //            PreviousTile.GetComponent<Renderer>().material = UnclickedMat;
    //        }

    //        CurrentTile = hit.collider.gameObject;
    //        PreviousTile = CurrentTile;
    //        if (CurrentTile.TryGetComponent(out Tile tile))
    //        {
    //            CurrentTile.GetComponent<Renderer>().material = ClickedMat;
    //            Debug.Log(tile.GridName);
    //        }
    //    }
    //}

    //private IEnumerator DrawBoardDelayed(int w, int l)
    //{
    //    WaitForSeconds wait = new WaitForSeconds(0.05f);

    //    //Vector3 widthVe = Vector3.right * w;
    //    Vector3 heightVe = Vector3.forward * l;

    //    for (int i = 0; i < w; i++)
    //    {
    //        Vector3 start = Vector3.forward * i;
    //        Vector3 startWidth;
    //        //Debug.DrawLine(start, start + widthVe);

    //        //Instantiate(boardTile, start + widthVe, Quaternion.identity);

    //        for (int j = 0; j < l; j++)
    //        {
    //            startWidth = Vector3.right * j;
    //            startWidth += start;
    //            GameObject newTile = Instantiate(boardTile, startWidth + heightVe, Quaternion.identity);
    //            AllTiles.Add(newTile);
    //            if(newTile.TryGetComponent(out Tile tile))
    //            {
    //                tile.GridPos.Add(i);
    //                tile.GridPos.Add(j);
    //                tile.GridName = i.ToString() + j.ToString();
    //            }
    //            yield return wait;
    //        }
    //    }

    //}
    #endregion

    void Update()
    {
        
    }

    
}
