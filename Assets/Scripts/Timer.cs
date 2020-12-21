using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Timer : MonoBehaviour
{
private int width, height;
private Rect rect;
private GUIStyle labelStyle;
private string currentTime;

    void Awake(){
	width = Screen.width;
	height = Screen.height;
	rect = new Rect(10, 10, width-20, height-20);
    }

    void OnGUI(){
	labelStyle = new GUIStyle(GUI.skin.GetStyle("label"));
	labelStyle.alignment = TextAnchor.MiddleCenter;

	labelStyle.fontSize = 12 * (width/200);
	labelStyle.normal.textColor = Color.red;

	currentTime = Time.time.ToString("f6");
	currentTime = "Time is: " + currentTime + " sec.";

	GUI.Label(rect, currentTime, labelStyle);
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
