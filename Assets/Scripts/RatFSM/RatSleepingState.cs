using UnityEngine;

public class RatSleepingState : RatBaseState{
    public override void EnterState(RatScript rs){

    }
    public override void OnCollisionEnter(RatScript rs, Collision other){
        
    }

    public override void Update(RatScript rs){
        rs.energy = rs.energy > 1f? 1f : rs.energy + rs.energyRecoverRate*Time.deltaTime;
        rs.HP = rs.HP > 1f? 1f : rs.HP + rs.energyHPRecoverRate*Time.deltaTime;

        if(rs.energy >= 1f){
            rs.TransitionToState(rs.IdleState);
        }
    }
}
