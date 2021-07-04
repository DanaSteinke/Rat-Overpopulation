using UnityEngine;

public class RatDrinkingState : RatBaseState{

    private float popupTextTime;

    public override void EnterState(RatScript rs){
        rs.StopRunning();
        rs.agent.velocity = Vector3.zero;
    }

    public override void OnCollisionEnter(RatScript rs, Collision other){
        rs.HandleOnCollisionEnterStates(other);
    }
    public override void Update(RatScript rs){
        if(rs.drinkWaterFromBottle() && rs.thirst < 1f){
            rs.thirst = rs.thirst<1f ? rs.thirst+ rs.thirstRecoverRate*Time.deltaTime : 1f;
            if(popupTextTime < Time.time - 2f){
                popupTextTime = Time.time;
                rs.popUpRatDrinkingText();
            }
        }
        else{
            rs.TransitionToState(rs.IdleState);
        }
    }
}
