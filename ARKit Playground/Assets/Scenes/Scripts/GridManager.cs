using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class GridManager : MonoBehaviour
{
    //TODO
    //Assign grid gameobject from GameBoard
    //

    public ARRaycastManager aRRaycast;
    GameObject Grid;
    [SerializeField]
    GameObject Tile;
    [SerializeField]
    int width;
    [SerializeField]
    int length;


    private List<ARRaycastHit> aRRayHits;
    

    void Start()
    {
        aRRayHits = new List<ARRaycastHit>();
    }

    void Update()
    {
        if (Input.touchCount > 0)
        {
            var touch = Input.GetTouch(0);

            if(touch.phase == TouchPhase.Ended)
            {
                if(Input.touchCount == 1)
                {
                    if (aRRaycast.Raycast(touch.position, aRRayHits))
                    {
                        var pose = aRRayHits[0].pose;
                        //Use event handler to start GameBoard?
                        //PlaceGrid(pose.position);
                        //StartCoroutine(DrawTiles(width, length));
                        DrawTiles(width, length, pose.position);
                        return;
                    }

                    Ray rayCast = Camera.main.ScreenPointToRay(touch.position);

                    if(Physics.Raycast(rayCast, out RaycastHit hit))
                    {
                        //Check collidaer tag for specific behaviours
                        if (hit.collider.CompareTag(""))
                        {
                            //Behaviour here
                        }
                    }
                }
            }
        }
    }

    private IEnumerator DelayDrawTiles(int w, int l)
    {
        WaitForSeconds wait = new WaitForSeconds(0.05f);
        Vector3 lengthVe = Vector3.forward * l;

        for (int i = 0; i < w; i++)
        {
            Vector3 start = Vector3.forward * i;
            Vector3 startWidth;

            for (int j = 0; j < l; j++)
            {
                startWidth = Vector3.right * j;
                startWidth += start;
                Instantiate(Tile, startWidth + lengthVe, Quaternion.identity);
                yield return wait;
            }
        }
    }

    private void DrawTiles(int w, int l, Vector3 start)
    {
        Vector3 lengthVe = start * l;

        for (int i = 0; i < w; i++)
        {
            //start = Vector3.forward * i;
            Vector3 startWidth;

            for (int j = 0; j < l; j++)
            {
                startWidth = Vector3.right * j;
                startWidth += start;
                Instantiate(Tile, startWidth + lengthVe, Quaternion.identity);
            }
        }
    }
}
