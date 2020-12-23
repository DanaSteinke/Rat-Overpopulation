using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class RatScript : MonoBehaviour
{
    public int id;
    public Rigidbody rb;
    public RatManager rms;
    public GameObject rm;
    public Transform ratTransform;

    public NavMeshAgent agent;
    // Start is called before the first frame update

    public bool newSpawned;
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
        agent.enabled = false;
        rb = GetComponent<Rigidbody>();
        ratTransform = GetComponent<Transform>();

        rm = GameObject.Find("RatManager");
        rms = rm.GetComponent<RatManager>();

        newSpawned = true;
        hunger = 1.0f;
        energy = 1.0f;

        TransitionToState(IdleState);
    }

    // Update is called once per frame
    void Update()
    {
        if(!newSpawned){
            agent.enabled = true;
            hunger = hunger > 0f ? hunger - 0.02f * Time.deltaTime: 0f;
            energy = energy > 0f ? energy - 0.005f * Time.deltaTime: 0f;
        }
        currentState.Update(this);
    }

    public void objectDropped(){
        Vector3 pos = this.transform.position;
        Debug.Log("Rat Dropped");
        if(newSpawned){
            rb.isKinematic = false;
            this.transform.parent = rm.transform;
            rms.removeRatTrainCell(id);
            newSpawned = false;
        }
    }

    public void OnCollisionEnter(){
        if(!newSpawned){
            agent.enabled = true;
        }
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
