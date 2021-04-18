using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class HelpButton : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ShowWebView()
    {
        InAppBrowser.OpenURL("https://dnd5e.info/spellcasting/spell-list/bard/");
        
    }
}
