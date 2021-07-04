using UnityEngine;

public class RatIdleState : RatBaseState{

    private int[,] codDirection = new int[,]{
        {1, 0},
        {0, 1},
        {-1, 0},
        {0, -1}
    };

    public override void EnterState(RatScript rs){
       // Debug.Log("rat enter idle state");
        moveToRandomDestination(rs);
    }

    public override void OnCollisionEnter(RatScript rs, Collision other){
        rs.HandleOnCollisionEnterStates(other);
    }

    public override void Update(RatScript rs){
        if(rs.thirst<0.5f && rs.stress<1){
            rs.StopRunning();
            rs.TransitionToState(rs.LookingForWaterState);
        }
        else if(rs.hunger<0.5f){
            rs.StopRunning();
            rs.TransitionToState(rs.LookingForFoodState);
        }
        else if(rs.energy < 0.5f){
            rs.StopRunning();
            rs.TransitionToState(rs.SleepingState);
        }

        else if(rs.agent.remainingDistance<=5f){
            moveToRandomDestination(rs);
        }
        
    }

    private void moveToRandomDestination(RatScript rs){
        int[,] mazeMap = rs.getMazeMap();
        int ratX = (int)Mathf.Floor(rs.ratTransform.position.x/10f);
        int ratY = (int)Mathf.Floor(rs.ratTransform.position.z/10f);

        int mapValue = -1;
        int dX = 0;
        int dY = 0;
        while(mapValue != 0 ){
            dX = Random.Range(1, mazeMap.GetLength(0)-1);
            dY = Random.Range(1, mazeMap.GetLength(1)-1);
            mapValue = mazeMap[dX, dY];
        }
        Vector3 des = new Vector3(dX*10f, 0f, dY*10f);
        //Debug.Log("new destination: "+des);

        rs.RunToDestination(new Vector3(dX*10f, rs.ratTransform.position.y, dY*10f));
    }
}
