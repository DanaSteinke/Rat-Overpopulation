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
    public GameOverManager goms;
    public MapGeneratorScript mg;
    public PauseControl pcs;

    public int[,] foodMap;
    public int[,] waterMap;
    public int[,] mazeMap;

    public int totalRatNumber = 0;
    public int deadRatNumber = 0;
    public float SamplingRate = 1f;
    public float timer = 0;
    public LinkedList<int> totalRatStack = new LinkedList<int>();
    public LinkedList<int> deadRatStack = new LinkedList<int>();
    public bool isGameOver = false;

    void Awake(){
        //foodMap = DeepCopyMap(fms.getFoodMap());
        
    }

    // Start is called before the first frame update
    void Start()
    {
        RatAmount = mg.ratNumber;
        foodMap = generateFoodMap(mg.getMap());
        waterMap = generateWaterMap(mg.getMap());
        mazeMap = mg.getMap();
        GlobalScript.print2DArray(foodMap);
        GlobalScript.print2DArray(waterMap);

        RatList = new GameObject[RatAmount];
        RatSpawnTrain = new GameObject[RatAmount];
       
        
        spawnRats();
                Debug.Log("First Rat: " + RatList[0].transform.position);

    }

    // Update is called once per frame
    void Update()
    {
        if(!isGameOver){
        sampleGameDataAndCheckGameOver();
        }
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
            rat.gameObject.SendMessage("DownloadWaterMap", waterMap);

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

    public void UpdateWaterMap(int[,] map){

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
    Queue<int[]> q = new Queue<int[]>();
	for(int i=0; i<map.GetLength(0); i++){
	    for(int j=0; j<map.GetLength(1); j++){
		    if(map[i, j] == 2){
		        q.Enqueue(new int[]{i, j});
		    }
		    if(map[i, j] == 1){
		        result[i, j] =-1;
		    }
	    }
	}

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

    public int[,] generateWaterMap(int[,] map){
	int[,] result = new int[map.GetLength(0), map.GetLength(1)];
	int fX = 0;
	int fY = 0;
    Queue<int[]> q = new Queue<int[]>();
	for(int i=0; i<map.GetLength(0); i++){
	    for(int j=0; j<map.GetLength(1); j++){
		    if(map[i, j] == 3){
		        q.Enqueue(new int[]{i, j});
		    }
		    if(map[i, j] == 1){
		        result[i, j] =-1;
		    }
	    }
	}
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

    public void DropAllNewSpawnedRats(){
        RatScript currentRat;
        for(int i=0; i<RatList.GetLength(0); i++){
            currentRat = RatList[i].GetComponent<RatScript>();
            if(currentRat.newSpawned){
                int mapValue = -1;
            int dX = 0;
            int dY = 0;
            while(mapValue <=0 ){
                dX = Random.Range(1, foodMap.GetLength(0)-1);
                dY = Random.Range(1, foodMap.GetLength(1)-1);
                mapValue = foodMap[dX, dY];
            }
            Vector3 des = new Vector3(dX*10f, 10f, dY*10f);
            currentRat.AutoDropRatAtLocation(des);
            removeRatTrainCell(i);
            }
        }
    }

    public void ratReleased(int id){
        totalRatNumber++;
    }

    public void ratDeath(int id){
        deadRatNumber++;
    }

    public void gameOver(){
        //pcs.PauseGame();
        isGameOver=true;
        goms.showGameOverPanel(this);

    }

    public void sampleGameDataAndCheckGameOver(){
        timer = timer + Time.deltaTime;
        if(timer>= SamplingRate){
            timer = 0f;
            totalRatStack.AddLast(totalRatNumber);
            deadRatStack.AddLast(deadRatNumber);
            Debug.Log("Sampled data: " + deadRatStack);
            if(totalRatNumber> 0 && deadRatNumber == totalRatNumber && !isGameOver){
                gameOver();
            }   
        }
    }

    public void spawnBabyRat(RatScript rs){
        GameObject newRat = Instantiate(RatObject, rs.gameObject.transform.position, Quaternion.identity);
        newRat.gameObject.SendMessage("DownloadFoodMap",foodMap);
        newRat.gameObject.SendMessage("DownloadWaterMap", waterMap);
        newRat.transform.parent = this.transform;
    }

}
