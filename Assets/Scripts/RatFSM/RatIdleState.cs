using UnityEngine;

public class RatIdleState : RatBaseState{

    private int[,] codDirection = new int[,]{
        {1, 0},
        {0, 1},
        {-1, 0},
        {0, -1}
    };

    public override void EnterState(RatScript rs){
        Debug.Log("rat enter idle state");
        moveToRandomDestination(rs);
    }

    public override void OnCollisionEnter(RatScript rs, Collision other){
        if(other.gameObject.name=="Rat" && !rs.newSpawned && rs.alive){
            RatScript otherRS = other.gameObject.GetComponent<RatScript>();
            if(otherRS.alive){
            Debug.Log("rat collision");
            rs.IncreaseSocialActivityByCollision();
            if(Random.Range(0, 1)<rs.actionRate){
                if(rs.stress<0.5){
                    rs.TransitionToState(rs.PlayingState);
                }
                else{
                    rs.TransitionToState(rs.FightingState);
                }
            }
            }
        }
    }

    public override void Update(RatScript rs){
        if(rs.hunger<0.5f && rs.stress<1){
            rs.TransitionToState(rs.LookingForFoodState);
        }
        else if(rs.thirst<0.5f){
            rs.TransitionToState(rs.LookingForWaterState);
        }
        else if(rs.energy < 0.5f){
            rs.TransitionToState(rs.SleepingState);
        }

        else if(rs.agent.remainingDistance<=5f){
            moveToRandomDestination(rs);
        }
        
    }

    private void moveToRandomDestination(RatScript rs){
        int[,] foodMap = rs.getFoodMap();
        int ratX = (int)Mathf.Floor(rs.ratTransform.position.x/10f);
        int ratY = (int)Mathf.Floor(rs.ratTransform.position.z/10f);

        int mapValue = -1;
        int dX = 0;
        int dY = 0;
        while(mapValue <=0 ){
            dX = Random.Range(1, foodMap.GetLength(0)-1);
            dY = Random.Range(1, foodMap.GetLength(1)-1);
            mapValue = foodMap[dX, dY];
        }
        Vector3 des = new Vector3(dX*10f, 0f, dY*10f);
        //Debug.Log("new destination: "+des);

        rs.RunToDestination(new Vector3(dX*10f, rs.ratTransform.position.y, dY*10f));
    }
}
