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
    public Material ClickedMat;
    [SerializeField]
    public Material UnclickedMat;

    GameObject CurrentTile;
    GameObject PreviousTile;

    [SerializeField]
    Tile tile;
    [SerializeField]
    PlayerCharacter player;

    public Tile selectedTile;
    public PlayerCharacter selectedPlayer;

    void Start()
    {
        AllTiles = new List<GameObject>();
        //StartCoroutine(DrawBoardDelayed(width, length));
        DrawBoard(width, length);
        CreatePlayer("Player1", new Vector3(0, 0, 0));
        CreatePlayer("Player1", new Vector3(0, 0, 4));
        CreatePlayer("Player1", new Vector3(4, 0, 4));
        CreatePlayer("Player1", new Vector3(4, 0, 0));
    }

    private void DrawBoard(int w, int l)
    {
        //Vector3 widthVe = Vector3.right * w;
        for (int x = 0; x < width; x++)
        {
            for (int z = 0; z < length; z++)
            {
                Tile spawnedTile = Instantiate(tile, new Vector3(x, 0, z), Quaternion.identity);
                spawnedTile.transform.SetParent(transform);
                spawnedTile.name = string.Concat(x.ToString(), " , ", z.ToString());
                spawnedTile.GridPos.x = x;
                spawnedTile.GridPos.y = z;

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

    public void SelectPlayer(PlayerCharacter player)
    {
        DeselectTile();
        
        if (selectedPlayer)
            DeselectPlayer();

        selectedPlayer = player;
        selectedPlayer.UpdateMaterial(ClickedMat);
        selectedPlayer.isSelected = true;
    }

    public void SelectTile(Tile tile)
    {
        if (selectedTile)
            DeselectTile();

        selectedTile = tile;
        selectedTile.UpdateMat(ClickedMat);
        selectedTile.isSelected = true;
    }

    public Tile GetSelectedTile()
    {
        if (!selectedTile)
        {
            Debug.Log("tile is null GameBoard.GetSelectedTile()");
            throw new System.Exception("tile is null GameBoard.GetSelectedTile()");
        }
        else
            return selectedTile;
    }

    public PlayerCharacter GetSelectedPlayer()
    {
        if (!selectedPlayer)
        {
            Debug.Log("player is null GameBoard.GetSelectedPlayer()");
            throw new System.Exception("player is null GameBoard.GetSelectedPlayer()");
        }
        else
            return selectedPlayer;
    }

    public void DeselectPlayer()
    {
        selectedPlayer.UpdateMaterial(UnclickedMat);
        selectedPlayer.isSelected = false;
    }

    public void DeselectTile()
    {
        if (selectedTile != null)
        {
            selectedTile.UpdateMat(UnclickedMat);
            selectedTile.isSelected = false;
        }
    }

    private void CreatePlayer(string name, Vector3 pos)
    {
        PlayerCharacter newPlayer = Instantiate(player, transform.position, Quaternion.identity);
        newPlayer.transform.SetParent(transform);
        newPlayer.name = name;
        newPlayer.SetPosition(pos);
    }
}
