using UnityEngine;

public class RatEatingState : RatBaseState{
    public override void EnterState(RatScript rs){
        rs.StopRunning();
        rs.agent.velocity = Vector3.zero;
        Debug.Log("hunger = " + rs.hunger);
    }

    public override void OnCollisionEnter(RatScript rs, Collision other){
        
    }
    public override void Update(RatScript rs){
        rs.hunger = rs.hunger<1f ? rs.hunger+ rs.hungerRecoverRate*Time.deltaTime : 1f;
        if(rs.hunger == 1f){
            rs.TransitionToState(rs.IdleState);
        }
    }
}
