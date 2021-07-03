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
        float babyNum = Random.Range(1f, 5f);
        for(int i=0; i<babyNum; i++){
            rs.energy-=rs.energyRate*5;
            rs.babiesMade++;
            rs.spawnBabyRat();
            Debug.Log("new rat spawned");
        }
    }
    
}
