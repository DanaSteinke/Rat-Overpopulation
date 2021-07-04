using UnityEngine;

public class RatLookingForFoodState : RatBaseState{

    private float popupTextTime;

    public override void EnterState(RatScript rs){
        rs.StopRunning();
        searchAndGo(rs);
    }

    public override void OnCollisionEnter(RatScript rs, Collision other){
        
    }


    public override void Update(RatScript rs){
        int[,] foodMap = rs.getFoodMap();
        int ratX = (int)Mathf.Floor(rs.ratTransform.position.x/10f);
        int ratY = (int)Mathf.Floor(rs.ratTransform.position.z/10f);

        if(popupTextTime < Time.time - 1f){
            popupTextTime = Time.time;
            rs.popUpRatLookingForFoodText();
        }

        if(foodMap[ratX, ratY]==2){
            rs.setFoodBowlNameByPos();
            rs.TransitionToState(rs.EatingState);
        }

        if(rs.agent.remainingDistance<=5){
            searchAndGo(rs);
        }

        
    }

    private void searchAndGo(RatScript rs){
        int searchRange = 5;
        int[,] foodMap = rs.getFoodMap();
        int[,] mazeMap = rs.getMazeMap();
        int rows = foodMap.GetLength(0);
        int cols = foodMap.GetLength(1);
        int ratX = (int)Mathf.Floor(rs.ratTransform.position.x/10f);
        int ratY = (int)Mathf.Floor(rs.ratTransform.position.z/10f);
        int min = 2147483647;

        int[] target = new int[2];
        int mapValue=1;
          while(mapValue != 0 ){
            target[0] = Random.Range(1, mazeMap.GetLength(0)-1);
            target[1] = Random.Range(1, mazeMap.GetLength(1)-1);
            mapValue = mazeMap[target[0], target[1]];
        }

        for(int i = -searchRange; i<searchRange+1; i++){
            for(int j=-searchRange; j<searchRange+1; j++){
                int x = ratX+i;
                int y = ratY+j;
                if((x>0 && x<rows) && (y>0 && y<cols)){
                    if(foodMap[x,y]>0 && foodMap[x, y]<min){
                        min = foodMap[x, y];
                        target[0] = x;
                        target[1] = y;
                    }
                }
            }
        }
        rs.RunToDestination(new Vector3(target[0]*10f, rs.ratTransform.position.y, target[1]*10f));
      //  Debug.Log("Min food path found: " + target);
    }
}
