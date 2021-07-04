using UnityEngine;

public class RatLookingForWaterState : RatBaseState{

    private bool destinationSet;
    private float popupTextTime;

    public override void EnterState(RatScript rs){
        rs.StopRunning();
        searchAndGo(rs);
    }

    public override void OnCollisionEnter(RatScript rs, Collision other){
        
    }


    public override void Update(RatScript rs){
        int[,] waterMap = rs.getWaterMap();
        int ratX = (int)Mathf.Floor(rs.ratTransform.position.x/10f);
        int ratY = (int)Mathf.Floor(rs.ratTransform.position.z/10f);  

        if(popupTextTime < Time.time - 1f){
            popupTextTime = Time.time;
            rs.popUpRatLookingForWaterText();
        } 

        if(waterMap[ratX, ratY]==1 || waterMap[ratX, ratY]==2){
            rs.TransitionToState(rs.DrinkingState);
        } 

        /*if(rs.agent.remainingDistance<=1 && destinationSet){
            destinationSet = false;
            Debug.Log("RatX: " + rs.ratTransform.position.x + "ratY: " + rs.ratTransform.position.z);
            Debug.Log("Distance: " + rs.agent.remainingDistance);
            rs.TransitionToState(rs.DrinkingState); 
        } */
    }

    private void searchAndGo(RatScript rs){
        rs.bottleID = rs.getWaterBottleIDByRatLocation();
        Vector3 wbPosition = rs.getWaterBottlePositionByBottleID();
        rs.RunToDestination(new Vector3(wbPosition.x, rs.ratTransform.position.y, wbPosition.z));
        destinationSet = true;

        /*int searchRange = 2;
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
        Debug.Log("Min water path found: " + target); */
    }
}
