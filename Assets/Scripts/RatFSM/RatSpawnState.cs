using UnityEngine;

public class RatSpawnState : RatBaseState
{
    public override void EnterState(RatScript rs){
        rs.StopRunning();
    }

    public override void OnCollisionEnter(RatScript rs, Collision other){
        if(rs.newSpawned){
            rs.newSpawned = false;
            rs.agent.enabled = true;
        }
        Debug.Log("rat dropped to ground");
        rs.TransitionToState(rs.IdleState);
    }

    public override void Update(RatScript rs){

    }
}
