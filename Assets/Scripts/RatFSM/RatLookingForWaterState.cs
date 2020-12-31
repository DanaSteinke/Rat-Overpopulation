using UnityEngine;

public class RatLookingForWaterState : RatBaseState{
    public override void EnterState(RatScript rs){
        rs.StopRunning();
        searchAndGo(rs);
        /*int[,] foodMap = rs.getFoodMap();
        int ratX = (int)Mathf.Floor(rs.ratTransform.position.x/10f);
        int ratY = (int)Mathf.Floor(rs.ratTransform.position.z/10f);

        for(int i=0; i<foodMap.GetLength(0); i++){
            for(int j=0; j<foodMap.GetLength(1); j++){
                if(foodMap[i, j] == 1){
                    rs.RunToDestination(new Vector3(i*10f, rs.ratTransform.position.y, j*10f));
                }
            }
        }*/
    }

    public override void OnCollisionEnter(RatScript rs, Collision other){
        
    }


    public override void Update(RatScript rs){
        int[,] waterMap = rs.getWaterMap();
        int ratX = (int)Mathf.Floor(rs.ratTransform.position.x/10f);
        int ratY = (int)Mathf.Floor(rs.ratTransform.position.z/10f);

        if(waterMap[ratX, ratY]==1){
            rs.TransitionToState(rs.DrinkingState);
        }

        if(rs.agent.remainingDistance<=5){
            searchAndGo(rs);
        }

        
    }

    private void searchAndGo(RatScript rs){
        int searchRange = 5;
        int[,] waterMap = rs.getWaterMap();
        int rows = waterMap.GetLength(0);
        int cols = waterMap.GetLength(1);
        int ratX = (int)Mathf.Floor(rs.ratTransform.position.x/10f);
        int ratY = (int)Mathf.Floor(rs.ratTransform.position.z/10f);
        int min = 2147483647;

        int[] target = new int[2];

        for(int i = -searchRange; i<searchRange+1; i++){
            for(int j=-searchRange; j<searchRange+1; j++){
                int x = ratX+i;
                int y = ratY+j;
                if((x>0 && x<rows) && (y>0 && y<cols)){
                    if(waterMap[x,y]>0 && waterMap[x, y]<min){
                        min = waterMap[x, y];
                        target[0] = x;
                        target[1] = y;
                    }
                }
            }
        }
        rs.RunToDestination(new Vector3(target[0]*10f, rs.ratTransform.position.y, target[1]*10f));
        Debug.Log("Min water path found: " + target);
    }
}
