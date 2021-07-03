using UnityEngine;

public class RatPlayingState : RatBaseState
{
    public override void EnterState(RatScript rs){
        rs.timeStamp = Time.time;
        ratPlay(rs);
    }

    public override void OnCollisionEnter(RatScript rs, Collision other){
        
    }


    public override void Update(RatScript rs)
    {
        if(rs.timeStamp + 1f < Time.time){
            Debug.Log("timeStamp :" + rs.timeStamp + ", Time.time: "+ Time.time);
            rs.timeStamp = Time.time;
            rs.TransitionToState(rs.IdleState);
        }
    }

    public void ratPlay(RatScript rs){
        rs.energy-=rs.energyRate*5;
        rs.stress-=rs.stressDecreaseRate*5;
    }
}
