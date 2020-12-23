using UnityEngine;

public class RatIdleState : RatBaseState{

    private int[,] codDirection = new int[,]{
        {1, 0},
        {0, 1},
        {-1, 0},
        {0, -1}
    };
    public override void EnterState(RatScript rs){

    }

    public override void Update(RatScript rs){
        if(rs.hunger<0.5f){
            rs.TransitionToState(rs.LookingForFoodState);
        }
    }

    private void randomMoveAround(RatScript rs){
        int[,] foodMap = rs.getFoodMap();
        int ratX = (int)Mathf.Floor(rs.ratTransform.position.x/10f);
        int ratY = (int)Mathf.Floor(rs.ratTransform.position.z/10f);

        for(int i=0; i<4; i++){
            int x = ratX + codDirection[i, 0];
            int y = ratY + codDirection[i, 1];
            if((x>=0 && x<rs.foodMap.GetLength(0)) && (y>=0 && y<foodMap.GetLength(1))){
                if(foodMap[x, y]>0 && Random.Range(0.0f, 1.0f) < 0.25f){
                }
            }
        }
    }
}
