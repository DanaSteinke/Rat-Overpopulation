using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapGeneratorScript : MonoBehaviour
{
public GameObject[] mazeWall;
public GameObject MainMaze;
public float xOS = 10;
public float yOS = 10;
public int[,] map;
    // Start is called before the first frame update
    void Start()
    {
        MainMaze = GameObject.Find("MainMaze");
	map = new int [,]{
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, 
	{1, 0, 0, 0, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 1, 1, 1, 1, 1, 1},
	{1, 1, 0, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	};
	generateMaze(map);
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
		if(map[i, j] == 1){
		    createMazeWall(i, j);
		}
	    }
	}
	createFloor(map);
    }

    void createMazeWall(int i, int j){
	Vector3 position = new Vector3(i*xOS, 0.0f, j*yOS);
	GameObject wall = Instantiate(mazeWall[0], position, Quaternion.identity);
	wall.name = "Wall_" + i + "_" + j;
	wall.transform.parent = MainMaze.transform;
    }

    void createFloor(int[,] map){
	
	GameObject floor = GameObject.CreatePrimitive(PrimitiveType.Cube);
	floor.transform.localScale = new Vector3(map.GetLength(0)*xOS, 1, map.GetLength(1)*yOS);
	floor.transform.position = new Vector3((map.GetLength(0)-1)*xOS/2, 0.0f, (map.GetLength(1)-1)*yOS/2);
    }

    public int[,] getMap(){
	return map;
    }
}
