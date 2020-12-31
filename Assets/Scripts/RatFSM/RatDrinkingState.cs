using UnityEngine;

public class RatDrinkingState : RatBaseState{
    public override void EnterState(RatScript rs){
        rs.StopRunning();
        rs.agent.velocity = Vector3.zero;
    }

    public override void OnCollisionEnter(RatScript rs, Collision other){
        
    }
    public override void Update(RatScript rs){
        rs.thirst = rs.thirst<1f ? rs.thirst+ rs.thirstRecoverRate*Time.deltaTime : 1f;
        if(rs.thirst == 1f){
            rs.TransitionToState(rs.IdleState);
        }
    }
}
