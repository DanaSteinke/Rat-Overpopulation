using UnityEngine;

public class RatIdleState : RatBaseState{
    public override void EnterState(RatScript rs){

    }

    public override void Update(RatScript rs){
        if(rs.hunger<0.5f){
            rs.TransitionToState(rs.LookingForFoodState);
        }
    }
}
