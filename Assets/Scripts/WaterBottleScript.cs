using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaterBottleScript : MonoBehaviour
{
    public float waterAmount;
    public bool ReloadMapFlag;

    public GameObject wbmo;
    public WaterBottleManager wbms;
    // Start is called before the first frame update
    void Start()
    {
        waterAmount = 100;
        ReloadMapFlag = false;
        wbmo = GameObject.Find("WaterBottleManager");
        wbms = wbmo.GetComponent<WaterBottleManager>();
    }

    // Update is called once per frame
    void Update()
    {
        if(ReloadMapFlag){
            ReloadMapFlag = false;
            wbms.ReloadMap();
        }
    }

    public bool RatDrinking(){
        if(waterAmount > 0f){
            waterAmount = waterAmount>0f ? waterAmount - 1*Time.deltaTime : 0f;
            if(waterAmount<=0f && !ReloadMapFlag){
                ReloadMapFlag = true;
            }
        }
        return waterAmount > 0f;
    }

    public void RefillWaterBottle(){
        waterAmount = 100;
        ReloadMapFlag = true;
    }
}
