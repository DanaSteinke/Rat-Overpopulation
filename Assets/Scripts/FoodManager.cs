using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FoodManager : MonoBehaviour
{
public MapGeneratorScript mg;
public int[,] foodMap;

public Dictionary<string, FoodBowlScript> foodScriptDictionary = new Dictionary<string, FoodBowlScript>();

    // Start is called before the first frame update
    void Start()
    {

	//	foodScriptDictionary = mg.foodScriptDictionary;
	//int[,] foodMap = new int[mg.map.GetLength(0), mg.map.GetLength(1)];

	//int[,] foodMap  = generateFoodMap(mg.getMap());
	//Debug.Log(foodMap[1,1]);
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetMouseButtonDown(0)){
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
       
            if(Physics.Raycast(ray, out hit, Mathf.Infinity)){

                if(hit.collider.name.StartsWith("foodbowl_"))
                {
					FoodBowlScript fs = null;
                    if(foodScriptDictionary.TryGetValue(hit.collider.name, out fs)){
						fs.RefillFood();
					}
                }
                
            }
        }
    }

    /*public int[,] generateFoodMap(int[,] map){
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
    } */

	public int[,] getFoodMap(){
		return foodMap;
	}

	public void UpdateFoodMap(int[,] map){
		this.foodMap = map;
	}

	public void UpdateFoodScriptDic(Dictionary<string, FoodBowlScript> dic){
		this.foodScriptDictionary = dic;
	}

	public void SetFoodBowlIsClickable(){
		foreach(KeyValuePair<string, FoodBowlScript> entry in foodScriptDictionary){
			FoodBowlScript fs = entry.Value;
			GlobalScript.SetLayerRecursively(fs.gameObject,0);
		}
	}
    
}
