using UnityEngine;

public class RatFightingState : RatBaseState
{
    public override void EnterState(RatScript rs){
    }

    public override void OnCollisionEnter(RatScript rs, Collision other){
        
    }


    public override void Update(RatScript rs)
    {
        ratFight(rs);
        rs.TransitionToState(rs.IdleState);
    }

    public void ratFight(RatScript rs){
        rs.HP-=rs.HungerHPRate*5;
        rs.energy-=rs.energyRate*5;
    }
}
