using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RatScript : MonoBehaviour
{
    public int id;
    public Rigidbody rb;
    public RatManager rms;
    public GameObject rm;
    public Transform ratTransform;
    // Start is called before the first frame update

    public float hunger;
    public float energy;

    private RatBaseState currentState;

    public readonly RatIdleState IdleState = new RatIdleState();
    public readonly RatLookingForFoodState LookingForFoodState = new RatLookingForFoodState();
    public readonly RatEatingState EatingState = new RatEatingState();
    public readonly RatSleepingState SleepingState = new RatSleepingState();

    public int[,] foodMap;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        ratTransform = GetComponent<Transform>();

        rm = GameObject.Find("RatManager");
        rms = rm.GetComponent<RatManager>();

        hunger = 1.0f;
        energy = 1.0f;

        TransitionToState(IdleState);
    }

    // Update is called once per frame
    void Update()
    {
        hunger = hunger > 0f ? hunger - 0.02f * Time.deltaTime: 0f;
        energy = energy > 0f ? energy - 0.005f * Time.deltaTime: 0f;

        currentState.Update(this);
    }

    public void objectDropped(){
        Debug.Log("Rat Dropped");
        rb.isKinematic = false;
        this.transform.parent = rm.transform;
        rms.removeRatTrainCell(id);
    }

    public void SetID(int i){
        id = i;
    }

    public void TransitionToState(RatBaseState state){
        currentState = state;
        currentState.EnterState(this);
    }

    public RatBaseState CurrentState{
        get {return currentState; }
    }

    public void DownloadFoodMap(int[,] map){
        foodMap = map;
        Debug.Log(foodMap[1,1]);

    }

    public void UploadFoodMap(){
        rms.UpdateFoodMap(this.foodMap);
    }

    public int[,] getFoodMap(){
        return this.foodMap;
    }
}
