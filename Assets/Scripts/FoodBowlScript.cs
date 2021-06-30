using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FoodBowlScript : MonoBehaviour
{
    public float foodAmount;
    // Start is called before the first frame update
    void Start()
    {
        foodAmount=100;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void RatEating(){
        foodAmount--;
    }
}
