using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class HelpButton : MonoBehaviour
{
    public void ShowWebView()
    {
        InAppBrowser.OpenURL("https://open5e.com/spells/spells-table");
        
    }
}
