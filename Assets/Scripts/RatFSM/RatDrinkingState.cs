using UnityEngine;

public class RatDrinkingState : RatBaseState{
    public override void EnterState(RatScript rs){
        rs.StopRunning();
        rs.agent.velocity = Vector3.zero;
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
        rs.thirst = rs.thirst<1f ? rs.thirst+ rs.thirstRecoverRate*Time.deltaTime : 1f;
        if(rs.thirst == 1f){
            rs.TransitionToState(rs.IdleState);
        }
    }
}
