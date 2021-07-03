using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class RatScript : MonoBehaviour
{
    public int id;
    public Rigidbody rb;
    public RatManager rms;
    public GameObject fmo;
    public FoodManager fms;
    public GameObject rm;
    public Transform ratTransform;
    public NavMeshAgent agent;
    public Animator anim;

    public bool newSpawned;
    public bool alive;
    public float hunger;
    public float thirst;
    public float energy;
    public float HP;
    public float stress;
    public float socialActivity;
    public float actionRate;
    public float age;
    public float maxAge;
    public int babiesMade;
    public float timeStamp;

    public float hungerRate;
    public float energyRate;
    public float thirstRate;
    public float stressRate;
    public float HungerHPRate;
    public float ThirstHPRate;
    public float hungerRecoverRate;
    public float thirstRecoverRate;
    public float energyRecoverRate;
    public float energyHPRecoverRate;
    public float stressDecreaseRate;
    public float socialActivityDecreaseRate;
    public float playCoolDownRate;
    public float fightCoolDownRate;

    private RatBaseState currentState;

    public string foodBowlName;

    public readonly RatIdleState IdleState = new RatIdleState();
    public readonly RatLookingForFoodState LookingForFoodState = new RatLookingForFoodState();
    public readonly RatEatingState EatingState = new RatEatingState();
    public readonly RatLookingForWaterState LookingForWaterState = new RatLookingForWaterState();
    public readonly RatDrinkingState DrinkingState = new RatDrinkingState();
    public readonly RatSleepingState SleepingState = new RatSleepingState();
    public readonly RatDeathState DeathState = new RatDeathState();
    public readonly RatSpawnState SpawnState = new RatSpawnState();
    public readonly RatPlayingState PlayingState = new RatPlayingState();
    public readonly RatFightingState FightingState = new RatFightingState();
    public readonly RatMateState MateState = new RatMateState();


    public int[,] foodMap;
    public int[,] waterMap;
    public int[,] mazeMap;

    void Start()
    {
        Debug.Log("Rat start: " + this.transform.position);
        agent.enabled = false;
        rb = GetComponent<Rigidbody>();
        ratTransform = GetComponent<Transform>();

        rm = GameObject.Find("RatManager");
        rms = rm.GetComponent<RatManager>();

        fmo = GameObject.Find("FoodManager");
        fms = fmo.GetComponent<FoodManager>();

        alive = true;
        newSpawned = true;
        HP = 1.0f;
        hunger = Random.Range(0.5f, 1f);
        thirst = Random.Range(0.5f, 1f);
        energy = 1.0f;
        stress = 0;
        socialActivity= 50;
        actionRate = 0.25f;
        age = 0;
        maxAge = Random.Range(9f, 11f);
        babiesMade = 0;

        hungerRate = 0.02f;
        thirstRate = 0.03f;
        energyRate = hungerRate/4;
        stressRate = 0.001f;
        hungerRecoverRate = hungerRate*10f;
        thirstRecoverRate = thirstRate*20f;
        energyRecoverRate = energyRate*10f;
        energyHPRecoverRate = energyRecoverRate;
        HungerHPRate = energyHPRecoverRate/10f;
        ThirstHPRate = energyHPRecoverRate/2f;
        stressDecreaseRate = stressRate*10f;
        socialActivityDecreaseRate = 0.1f;
        playCoolDownRate = 2f;
        fightCoolDownRate = 2f;


        TransitionToState(SpawnState);
        
    }

    // Update is called once per frame
    void Update()
    {
        if(ratTransform.position.z>0){
            //Time.timeScale = 0;
        }
        if(!newSpawned && alive){
            ratRoutine();
        }
        
        currentState.Update(this);
    }

    public void objectDropped(){
        //Vector3 pos = this.transform.position;
        Debug.Log("Rat Dropped");
        if(newSpawned){
            releaseNewSpawnedRat();
        }
    }

    public void releaseNewSpawnedRat(){
        if(!rb || !rm || !rms){
            rb = GetComponent<Rigidbody>();
            rm = GameObject.Find("RatManager");
            rms = rm.GetComponent<RatManager>();
        }
        rb.isKinematic = false;
            this.transform.parent = rm.transform;
            rms.removeRatTrainCell(id);
            rms.ratReleased(id);
    }

    public void OnCollisionEnter(Collision other){
       
        Debug.Log("collision: " + other);
        currentState.OnCollisionEnter(this, other);
    }

    public void IncreaseSocialActivityByCollision(){
        socialActivity++;
    }

    private void ratRoutine(){
        age = age + 0.01f * Time.deltaTime;
        socialActivity = socialActivity > 0f ? socialActivity - socialActivityDecreaseRate * Time.deltaTime: 0f;
        hunger = hunger > 0f ? hunger - hungerRate * Time.deltaTime: 0f;     
        energy = energy > 0f ? energy - energyRate * Time.deltaTime: 0f;
        thirst = thirst > 0f ? thirst - thirstRate * Time.deltaTime: 0f;
        
        if(socialActivity<10 || socialActivity>200){
            stress+=stressRate;
            Debug.Log("stress increase");
        }
        else{
            stress = stress > 0f ? stress - stressDecreaseRate * Time.deltaTime: 0f;
        }
        HealthChangeByHunger();

        if(HP <= 0 || age > maxAge){
            TransitionToState(DeathState);
        }

        transform.localScale = new Vector3((2/9f)*age+(7/9f),(2/9f)*age+(7/9f),(2/9f)*age+(7/9f));
    }

    private void HealthChangeByHunger(){
        if(hunger<0.3f){
            HP = HP>0f? HP - HungerHPRate * Time.deltaTime : 0f;
        }
    }

    private void HealthChangeByThirst(){
        if(thirst<0.3f){
            HP = HP>0f? HP - ThirstHPRate * Time.deltaTime : 0f;
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

    //using pointer, not a hard copy of the map
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

    //using pointer, not a hard copy of the map
    public void DownloadWaterMap(int[,] map){
        waterMap = map;
        Debug.Log(waterMap[1,1]);
    }

    public void UploadWaterMap(){
        rms.UpdateWaterMap(this.waterMap);
    }

    public int[,] getWaterMap(){
        return this.waterMap;
    }

    public void DownloadMazeMap(int[,] map){
        mazeMap = map;
        Debug.Log(mazeMap[1,1]);
    }

    public int[,] getMazeMap(){
        return this.mazeMap;
    }

    public void die(){
        StopRunning();
        agent.enabled = false;
        rb.constraints = RigidbodyConstraints.FreezeRotationZ;
        ratTransform.RotateAround(ratTransform.position,new Vector3(0f, 0f, 1f), 90);
        alive = false;
        rms.ratDeath(id);
    }

    public void RunToDestination(Vector3 des){
        agent.SetDestination(des);
        anim.CrossFade("Running", 0.1f);
        anim.SetBool("IsIdle", false);
    }

    public void StopRunning(){
        if(agent.enabled){
            agent.ResetPath();
        }
        anim.CrossFade("Idle", 0.1f);
        anim.SetBool("IsIdle", true);
    }

    public void AutoDropRatAtLocation(Vector3 pos){
        ratTransform.position = pos;
        objectDropped();
    }

    public void checkDead(GameObject obj){
        if(alive == false){
            handleDeadRat(obj);
        }
    }
    public void handleDeadRat(GameObject obj){
        Destroy(obj);
    }

    public bool canRatsMate(){
        if(age>4 && stress<0.5 && alive && babiesMade<age-4){
            return true;
        }
        return false;
    }

    public void spawnBabyRat(){
        rms.spawnBabyRat(this);
    }

    public bool eatFoodFromBowl(){
        return fms.reduceFoodAmountByFoodBowlName(foodBowlName);
    }

    public void setFoodBowlNameByPos(){
        int ratX = (int)Mathf.Floor(ratTransform.position.x/10f);
        int ratY = (int)Mathf.Floor(ratTransform.position.z/10f);
        Debug.Log("ratX =" + ratX + ", ratY =" + ratY);
        for(int i=ratX-1; i<=ratX+1; i++){
            for(int j=ratY-1; j<=ratY+1; j++){
                if(foodMap[i,j]==1){
                    foodBowlName="foodbowl_" + i + "_" +j;
                }
            }
        }
    }

    public bool canPlayNow(){
        return HP > 0.5 && timeStamp + playCoolDownRate > Time.time;
    }

    public bool canFightNow(){
        return timeStamp + fightCoolDownRate > Time.time;
    }

    public void popUpRatEatingText(){
        rms.popUpRatEatingText(this);
    }

    public void popUpRatDrinkingText(){
        rms.popUpRatDrinkingText(this);
    }
  
}
