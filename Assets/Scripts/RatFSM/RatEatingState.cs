using UnityEngine;

public class RatEatingState : RatBaseState{
    private string foodBowlName;
    private float popupTextTime;
    
    public override void EnterState(RatScript rs){
        int[,] foodMap = rs.getFoodMap();
        rs.StopRunning();
        rs.agent.velocity = Vector3.zero;        
        
       // Debug.Log("hunger = " + rs.hunger);
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
        Debug.Log("foodBowlName = " + rs.foodBowlName);
        if(rs.eatFoodFromBowl() && rs.hunger<=1f){
            rs.hunger = rs.hunger<1f ? rs.hunger+ rs.hungerRecoverRate*Time.deltaTime : 1f;
            if(popupTextTime < Time.time - 1f){
                popupTextTime = Time.time;
                rs.popUpRatEatingText();
            }
        }
        else{
            rs.TransitionToState(rs.IdleState);
        }

        
        
    }
}
