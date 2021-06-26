using UnityEngine;

public class RatMateState : RatBaseState
{
   public RatManager rm = new RatManager();
    public override void EnterState(RatScript rs){
        
    }

    public override void OnCollisionEnter(RatScript rs, Collision other){
        
    }


    public override void Update(RatScript rs)
    {
        ratMate(rs);
        rs.TransitionToState(rs.IdleState);
    }

    public void ratMate(RatScript rs){
        rs.energy-=rs.energyRate*5;
        rs.spawnBabyRat();
        Debug.Log("new rat spawned");
    }
    
}
