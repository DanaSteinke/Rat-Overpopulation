using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FoodManager : MonoBehaviour
{
public MapGeneratorScript mg;
    // Start is called before the first frame update
    void Start()
    {
	//int[,] foodMap = new int[mg.map.GetLength(0), mg.map.GetLength(1)];

	int[,] foodMap  = generateFoodMap(mg.getMap());
	Debug.Log(foodMap[1,1]);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public int[,] generateFoodMap(int[,] map){
	int[,] result = new int[10, 10];
	int fX = 0;
	int fY = 0;
	for(int i=0; i<map.GetLength(0); i++){
	    for(int j=0; j<map.GetLength(1); j++){
		if(map[i, j] == 2){
		    fX=i;
		    fY=j;
		}
		if(map[i, j] == 1){
		    result[i, j] =-1;
		}
	    }
	}
	Queue<int[]> q = new Queue<int[]>();
	q.Enqueue(new int[]{fX, fY});

	int step=1;
	while(q.Count != 0){
	    int size = q.Count;
	    for(int i=0; i<size; i++){
		int[] current = q.Dequeue();
		int cX = current[0];
		int cY = current[1];
		result[cX, cY] = step;
		//up
		if(cX>0 && result[cX-1,cY]==0){
		    q.Enqueue(new int[]{cX-1, cY});
		    result[cX-1, cY] = step;
		}
		//down
		if(cX<result.GetLength(0)-1 && result[cX+1,cY]==0){
		    q.Enqueue(new int[]{cX+1, cY});
		    result[cX+1, cY] = step;
		}
		//left
		if(cY>0 && result[cX,cY-1]==0){
		    q.Enqueue(new int[]{cX, cY-1});
		    result[cX, cY-1] = step;
		}
		//right
		if(cY<result.GetLength(1)-1 && result[cX,cY+1]==0){
		    q.Enqueue(new int[]{cX, cY+1});
		    result[cX, cY+1] = step;
		}
	    }
	    step++;
	}

	return result;
    }


    
}
