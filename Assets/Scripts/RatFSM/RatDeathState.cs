using UnityEngine;

public class RatDeathState : RatBaseState
{
    public override void EnterState(RatScript rs){
        rs.die();
    }

    public override void OnCollisionEnter(RatScript rs, Collision other){
        
    }

    public override void Update(RatScript rs){

    }
}
