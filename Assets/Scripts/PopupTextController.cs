using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PopupTextController : MonoBehaviour
{

    public GameObject popupText;
    private GameObject canvas;

    public void Start(){
        canvas = GameObject.Find("Canvas");

    }

    public void CreatePopupText(string text, Transform location, Color32 color){
        GameObject instance = Instantiate(popupText);
        Vector2 screenPosition = Camera.main.WorldToScreenPoint(location.position);

        instance.transform.SetParent(canvas.transform, false);
        instance.transform.position = screenPosition;

        PopupTextScript pts = instance.gameObject.GetComponent<PopupTextScript>();
        pts.SetText(text, color);
        pts.PlayPopup();
    }

    public void PopupYellowText(string text, Transform location){
        Color32 yellowTextColor = new Color32(255, 185, 0, 255);
        CreatePopupText(text, location, yellowTextColor);
    }

    public void PopupBlueText(string text, Transform location){
        Color32 blueTextColor = new Color32(73, 67, 229, 255);
        CreatePopupText(text, location, blueTextColor);
    }
}
