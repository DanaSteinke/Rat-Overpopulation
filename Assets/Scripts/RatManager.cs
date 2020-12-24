using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RatManager : MonoBehaviour
{
public int RatAmount;
public GameObject RatObject;
public GameObject RatContainer;
public GameObject RatStopper;
public GameObject[] RatList;
public GameObject[] RatSpawnTrain;
public int xOS;
public int yOS;

    //public FoodManager fms;
    public MapGeneratorScript mg;
    public int[,] foodMap;
    public int[,] mazeMap;

    void Awake(){
        //foodMap = DeepCopyMap(fms.getFoodMap());
        
    }

    // Start is called before the first frame update
    void Start()
    {
        RatAmount = mg.ratNumber;
        foodMap = generateFoodMap(mg.getMap());
        mazeMap = mg.getMap();
        GlobalScript.print2DArray(foodMap);

        RatList = new GameObject[RatAmount];
        RatSpawnTrain = new GameObject[RatAmount];
       
        
        spawnRats();
                Debug.Log("First Rat: " + RatList[0].transform.position);

    }

    // Update is called once per frame
    void Update()
    {
    }

    public void spawnRats(){
        GameObject RatTrain = new GameObject();
        RatTrain.transform.parent = this.transform;
        GameObject stopper = Instantiate(RatStopper, new Vector3(-10f, 0f, -20f), Quaternion.identity);

        for(int i=0; i<RatAmount; i++){
            Debug.Log("Rat generated!");
            Vector3 position = new Vector3((0+i)*10f, 0f, -20f);
            GameObject newRatCont = Instantiate(RatContainer, position, Quaternion.identity);
            newRatCont.transform.parent = RatTrain.transform;

            Transform rat = newRatCont.transform.GetChild(0);
            rat.gameObject.SendMessage("SetID", i);
            rat.gameObject.SendMessage("DownloadFoodMap",foodMap);

            RatSpawnTrain[i] = newRatCont;
            RatList[i] = rat.gameObject;

            Debug.Log(i + " " + rat.position);
        }
    }

    public void removeRatTrainCell(int id){
        //Debug.Log("remove Cell id: "+id);
        Destroy(RatSpawnTrain[id]);
        RatSpawnTrain[id] = null;
    }

    /*public void UploadFoodMap(int[,] map){
        fms.UpdateFoodMap(DeepCopyMap(map));
    }

    public void DownloadFoodMap(int[,] map){
        this.foodMap = DeepCopyMap(map);
        for(inti=0; i<RatList)
    }*/

    public void UpdateFoodMap(int[,] map){

    }

    public int[,] DeepCopyMap(int[,] map){
        int[,] result = new int[map.GetLength(0), map.GetLength(1)];
        for(int i=0; i<map.GetLength(0); i++){
            for(int j=0; j<map.GetLength(1); j++){
                result[i, j] = map[i, j];
            }
        }
        return result;
    }


    public int[,] generateFoodMap(int[,] map){
	int[,] result = new int[map.GetLength(0), map.GetLength(1)];
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
