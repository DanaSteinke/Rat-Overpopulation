using UnityEngine;

public class RatLookingForFoodState : RatBaseState{
    public override void EnterState(RatScript rs){

    }

    public override void Update(RatScript rs){
        int[,] foodMap = rs.getFoodMap();
        int ratX = (int)Mathf.Floor(rs.ratTransform.position.x/10f);
        int ratY = (int)Mathf.Floor(rs.ratTransform.position.z/10f);

        Debug.Log(foodMap[1,1]);
        Debug.Log("x: " + ratX + ",y: " + ratY);

        int[] target = new int[2];
        int min = 2147483647;
        if(ratX-1>=0 && foodMap[ratX-1, ratY] < min && foodMap[ratX-1, ratY] > 0){
            target[0] = ratX-1;
            target[1] = ratY;
            min = foodMap[ratX-1, ratY];
        }
        if(ratY-1>=0 && foodMap[ratX, ratY-1] < min && foodMap[ratX, ratY-1] > 0){
            target[0] = ratX;
            target[1] = ratY-1;
            min = foodMap[ratX, ratY-1];
        }
        if(ratX+1 < foodMap.GetLength(0) && foodMap[ratX+1, ratY] < min && foodMap[ratX+1, ratY] > 0){
            target[0] = ratX+1;
            target[1] = ratY;
            min = foodMap[ratX+1, ratY];
        }
        if(ratY+1 < foodMap.GetLength(1) && foodMap[ratX, ratY+1] < min && foodMap[ratX, ratY+1] > 0){
            target[0] = ratX;
            target[1] = ratY+1;
            min = foodMap[ratX, ratY+1];
        }

        float step = 10.0f*Time.deltaTime;
        rs.ratTransform.position = Vector3.MoveTowards(rs.ratTransform.position, new Vector3(target[0]*10f, rs.ratTransform.position.y, target[1]*10f), step);

    }
}
