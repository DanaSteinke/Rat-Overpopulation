using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PauseControl : MonoBehaviour
{
public static bool gameIsPaused;
    // Start is called before the first frame update
    void Start()
    {
        gameIsPaused = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape)){
	    gameIsPaused = !gameIsPaused;
	    PauseGame();
	}
    }

    public void PauseGame(){
	gameIsPaused = true;
	Time.timeScale = 0f;
    }
    public void UnPauseGame(){
	gameIsPaused = false;
	Time.timeScale = 1;
    }
    
}
