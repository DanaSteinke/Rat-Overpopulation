using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FoodBowlScript : MonoBehaviour
{
    public float foodAmount;
    public bool ReloadMapFlag;

    public GameObject fmo;
    public FoodManager fms;

    private int[] location = new int[2];
    // Start is called before the first frame update
    void Start()
    {
        foodAmount=100;
        ReloadMapFlag=false;
        fmo = GameObject.Find("FoodManager");
        fms = fmo.GetComponent<FoodManager>();
        }

    // Update is called once per frame
    void Update()
    {
        if(ReloadMapFlag){
            ReloadMapFlag=false;
            fms.ReloadMap();
        }
    }

    public bool RatEating(){
        if(foodAmount>0){
            foodAmount = foodAmount>0f ? foodAmount - 1*Time.deltaTime : 0f;
            if(foodAmount<=0f && !ReloadMapFlag){
                ReloadMapFlag = true;
            }
        }
        return foodAmount>0;
    }

    public void RefillFood(){
        foodAmount = 100;
        ReloadMapFlag=true;
    }

    public int[] getLocation(){
        return location;
    }

    public void setLocation(int x, int y){
        location[0] = x;
        location[1] = y;
    }
}
