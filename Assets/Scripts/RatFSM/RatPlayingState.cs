using UnityEngine;

public class RatPlayingState : RatBaseState
{
   
    public override void EnterState(RatScript rs){
        
    }

    public override void OnCollisionEnter(RatScript rs, Collision other){
        
    }


    public override void Update(RatScript rs)
    {
        ratPlay(rs);
        rs.TransitionToState(rs.IdleState);
    }

    public void ratPlay(RatScript rs){
        rs.energy-=rs.energyRate*5;
        rs.stress-=rs.stressDecreaseRate*5;
    }
}
