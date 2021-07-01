using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class MapGeneratorScript : MonoBehaviour
{
public GameObject[] mazeWall;
public GameObject MainMaze;
public GameObject floorObject;
public GameObject foodBowlModel;
public GameObject waterBottleModel;
public NavMeshSurface surface;

public FoodManager fm;

public float xOS = 10;
public float yOS = 0.1f;
public float zOS = 10;
public int unitNumber;
public int ratNumber;
public int[,] defaultmap = new int [,]{
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, 
	{1, 0, 0, 0, 1, 1, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 1, 0, 1},
	{1, 1, 0, 0, 0, 1, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 1, 1, 1, 1, 1},
	{1, 0, 1, 0, 0, 1, 1, 1, 1, 1},
	{1, 0, 1, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 1, 0, 0, 0, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 2, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	};
public int[,] map;
public int[,] bedroomUnit = new int[,]{
{1, 1, 1, 0},
{1, 0, 1, 0},
{1, 0, 1, 0},
{0, 0, 0, 0},
};
public int[,] livingRoomUnit = new int[,]{
{1, 1, 1, 0, 1, 1, 1, 0},
{1, 3, 0, 0, 0, 3, 1, 0},
{1, 0, 0, 0, 0, 0, 1, 0},
{0, 0, 0, 2, 0, 0, 0, 0},
{1, 0, 0, 0, 0, 0, 1, 0},
{1, 3, 0, 0, 0, 3, 1, 0},
{1, 1, 1, 0, 1, 1, 1, 0},
{0, 0, 0, 0, 0, 0, 0, 0},
};
public static int Wall_Code = 1;
public static int Food_Bowl_Code = 2;
public static int Water_Bottle_Code = 3;
//1 is bedroom 2 is living room
//each is 4x4
public int[,] unitPattern = new int[,]{
{1, 1, 1, 1},
{1, 2, 0, 1},
{1, 0, 0, 1},
{1, 1, 1, 1},
};

public Dictionary<string, FoodBowlScript> foodScriptDictionary = new Dictionary<string, FoodBowlScript>();

	void Awake(){
		unitNumber = PlayerPrefs.GetInt("Unit_Number") == 0 ? 1 : PlayerPrefs.GetInt("Unit_Number");
		ratNumber = PlayerPrefs.GetInt("Rat_Number") == 0 ? 10 : PlayerPrefs.GetInt("Rat_Number");
		//Debug.Log(unitNumber + " " + ratNumber);
		map = renderMazeMap(unitNumber);
	}
    // Start is called before the first frame update
    void Start()
    {
        MainMaze = GameObject.Find("MainMaze");
	
		//map = defaultmap;

		generateMaze(map);

		GlobalScript.SetLayerRecursively(this.gameObject, 2);

		fm.UpdateFoodScriptDic(foodScriptDictionary);
		fm.SetFoodBowlIsClickable();


		surface.BuildNavMesh();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void generateMaze(int[,] map){
	int row = map.GetLength(0);
	int col = map.GetLength(1);
	for(int i=0; i<row; i++){
	    for(int j=0; j<col; j++){
			if(map[i, j] == Wall_Code){
		    	createMazeWall(i, j);
			} else if(map[i,j] == Food_Bowl_Code) {
				createFoodBowl(i, j);
			} else if(map[i, j] == Water_Bottle_Code){
				createWaterBottle(i, j);
			}
	    }
	}
	createFloor(map);
    }

    void createMazeWall(int i, int j){
	Vector3 position = new Vector3(i*xOS, 5.5f, j*zOS);
	GameObject wall = Instantiate(mazeWall[0], position, Quaternion.identity);
	wall.name = "Wall_" + i + "_" + j;
	wall.transform.parent = this.transform;
    }

    void createFloor(int[,] map){
	
	/*GameObject floor = GameObject.CreatePrimitive(PrimitiveType.Cube);
	floor.transform.localScale = new Vector3(map.GetLength(0)*xOS, 1, map.GetLength(1)*zOS);
	floor.transform.position = new Vector3((map.GetLength(0)-1)*xOS/2, 0.0f, (map.GetLength(1)-1)*zOS/2); 
*/

	Vector3 position = new Vector3((map.GetLength(0)-1)*xOS/2, 0.0f, (map.GetLength(1)-1)*zOS/2);
	GameObject floor = GameObject.Instantiate(floorObject, position, Quaternion.identity);
	floor.transform.localScale = new Vector3 (map.GetLength(0)*xOS, 1, map.GetLength(1)*zOS);
	floor.transform.parent = this.transform;
    }

	void createFoodBowl(int i, int j){
		Vector3 position = new Vector3(i*xOS, 2f, j*zOS);
		GameObject foodBowlObject = Instantiate(foodBowlModel, position, Quaternion.identity);
		foodBowlObject.name = "foodbowl_"+i+"_"+j;
		foodBowlObject.transform.parent = this.transform;
		FoodBowlScript foodScript = foodBowlObject.GetComponent<FoodBowlScript>();
		Debug.Log("food amount = " + foodScript.foodAmount);
		foodScriptDictionary.Add(foodBowlObject.name, foodScript);
	}

	void createWaterBottle(int i, int j){
		Vector3 position = new Vector3(i*xOS, 15f, j*zOS);
		GameObject waterBottleObject = Instantiate(waterBottleModel, position, Quaternion.identity);
		waterBottleObject.name = "waterBottle_"+i+"_"+j;
		waterBottleObject.transform.parent = this.transform;
	}

    public int[,] getMap(){
		return map;
    }

	public int[,] renderMazeMap(int unitNumber){
		int floorSqrt = (int)Mathf.Floor(Mathf.Sqrt(unitNumber));
		int ceilSqrt = floorSqrt + 1;
		int rows = 0;
		int cols = 0;
		int x = 0;
		int y = 0;
		if(unitNumber==floorSqrt*floorSqrt){
			x = floorSqrt;
			y=x;
		}else if(unitNumber < floorSqrt*ceilSqrt){
			x = floorSqrt;
			y = ceilSqrt;
		} else {
			x = ceilSqrt;
			y = x;
		}
		rows = x*16+4;
		cols = y*16+4;

		int[,] result = new int[rows, cols];
		for(int i=0; i<x; i++){
			for(int j=0; j<y; j++){
				for(int ip = 0; ip<unitPattern.GetLength(0); ip++){
					for(int jp = 0; jp<unitPattern.GetLength(1); jp++){
						if(unitPattern[ip, jp] == 1){
							for(int ib = 0; ib<bedroomUnit.GetLength(0); ib++){
								for(int jb = 0; jb<bedroomUnit.GetLength(1); jb++){
									result[2+i*16 + ip*4 + ib, 2+j*16 + jp*4 + jb] = bedroomUnit[ib, jb];
								}
							}
						} else if(unitPattern[ip, jp]==2){
							for(int il = 0; il<livingRoomUnit.GetLength(0); il++){
								for(int jl = 0; jl<livingRoomUnit.GetLength(1); jl++){
									result[2+i*16 + ip*4 + il, 2+j*16 + jp*4 + jl] = livingRoomUnit[il, jl];
								}
							}
						}
					}
				}
			}
		}
		for(int i=0; i<rows; i++){
			for(int j=0; j<cols; j++){
				if(i==0 || j==0 || i==rows-1 || j==cols-1){
					result[i, j] = 1;
				}
			}
		}
		return result;

	}
}
