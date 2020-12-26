using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class CameraController : MonoBehaviour
{
    public Camera cam;
    public Vector3 pos;
    public bool upPressed;
    public bool downPressed;
    public bool leftPressed;
    public bool rightPressed;

    public MapGeneratorScript mg;
    private int[,] map;

    private float topBound;
    private float bottomBound;
    private float leftBound;
    private float rightBound;

    // Start is called before the first frame update
    void Start()
    {
        map = mg.getMap();
        pos = cam.transform.position;
        topBound = pos.y*Mathf.Tan((90-cam.transform.rotation.eulerAngles.x)*(Mathf.PI/180));
        bottomBound = (map.GetLength(0)-1)*10f+pos.y*Mathf.Tan((90-cam.transform.rotation.eulerAngles.x)*(Mathf.PI/180));
        leftBound = 0f;
        rightBound = (map.GetLength(1)-1)*10f;
    }

    // Update is called once per frame
    void Update()
    {
        pos = cam.transform.position;
        if(upPressed && pos.x>=topBound){
        cam.transform.position = new Vector3(pos.x-1f, pos.y, pos.z);
        }
        if(downPressed && pos.x<=bottomBound){
        cam.transform.position = new Vector3(pos.x+1f, pos.y, pos.z);
        }
        if(leftPressed && pos.z>=leftBound){
        cam.transform.position = new Vector3(pos.x, pos.y, pos.z-1f);
        }
        if(rightPressed && pos.z<=rightBound){
        cam.transform.position = new Vector3(pos.x, pos.y, pos.z+1f);
        }
        
    }

    public void moveCameraUp(){
        upPressed = true;
    }
    public void moveCameraDown(){
        downPressed = true;
    }
    public void moveCameraLeft(){
        leftPressed = true;
    }
    public void moveCameraRight(){
        rightPressed = true;
    }

    public void upReleased(){
        upPressed = false;
    }
    public void downReleased(){
        downPressed = false;
    }
    public void leftReleased(){
        leftPressed = false;
    }
    public void rightReleased(){
        rightPressed = false;
    }
}
