using UnityEngine;

public class RatEatingState : RatBaseState{
    public override void EnterState(RatScript rs){
        rs.agent.ResetPath();
        rs.agent.velocity = Vector3.zero;
    }

    public override void Update(RatScript rs){
        rs.hunger = rs.hunger<1f ? rs.hunger+0.1f*Time.deltaTime : 1f;
        if(rs.hunger == 1f){
            rs.TransitionToState(rs.IdleState);
        }
    }
}
