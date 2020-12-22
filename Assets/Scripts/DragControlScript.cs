using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DragControlScript : MonoBehaviour
{
    public GameObject hitObject;
    public bool isDragging;
    public Vector3 screenPosition;
    private Plane movePlane;
    // Start is called before the first frame update
    void Start()
    {
        isDragging = false;
        Vector3 sPoint = new Vector3(0.0f, 20.0f, 0.0f);
        movePlane = new Plane(Vector3.up, sPoint);
    }

    // Update is called once per frame
    void Update()
    {
        #if UNITY_IOS
        if(Input.touchCount>0 && Input.GetTouch(0).phase == TouchPhase.Began){
        #else
        if(Input.GetMouseButtonDown(0)){
            #endif
            #if UNITY_IOS
            Vector3 position = Input.GetTouch(0).position;
            #else
            Vector3 position = Input.mousePosition;
            #endif
            Ray ray = Camera.main.ScreenPointToRay(position);
            RaycastHit hit;
                if(Physics.Raycast(ray, out hit)){
                    var name = hit.collider.name;
                    Debug.Log(name + "hit");
                    if(name == "Rat"){
                        Debug.Log("Rat hit!");
                    }
                    hitObject = hit.collider.gameObject;
                    screenPosition = Camera.main.WorldToScreenPoint(hitObject.transform.position);
                    isDragging = true;
                }
            }

            #if UNITY_IOS
            if(Input.touchCount==0){
                #else
                if(Input.GetMouseButtonUp(0)){
                    #endif

                    if(hitObject!=null){
                        sendDropMessage(hitObject);
                    }
                    isDragging = false;
                    hitObject = null;
                }

                if(isDragging && hitObject){
                    #if UNITY_IOS
                    Vector3 position = Input.GetTouch(0).position;
                    #else
                    Vector3 position = Input.mousePosition;
                    #endif
                    Ray ray = Camera.main.ScreenPointToRay(position);
                    float enter = 0.0f;
                    if(movePlane.Raycast(ray, out enter)){
                        Vector3 hitPoint = ray.GetPoint(enter);
                        hitObject.transform.position = hitPoint;
                    }
                }
            }

            public void sendDropMessage(GameObject obj){
                obj.SendMessage("objectDropped");
            }
        }
    


