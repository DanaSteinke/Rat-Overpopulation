using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FoodManager : MonoBehaviour
{
public MapGeneratorScript mg;
public RatManager rms;
public int[,] foodMap;

public Dictionary<string, FoodBowlScript> foodScriptDictionary = new Dictionary<string, FoodBowlScript>();


    // Start is called before the first frame update
    void Start()
    {

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
			Debug.Log("key" + entry.Key);
			FoodBowlScript fs = entry.Value;
			GlobalScript.SetLayerRecursively(fs.gameObject,0);
		}
	}

	public bool reduceFoodAmountByFoodBowlName(string fbn){
		FoodBowlScript fs = null;
        if(foodScriptDictionary.TryGetValue(fbn, out fs)){
			return fs.RatEating();
		}
		return false;
	}

	public void ReloadMap(){
		rms.UpdateMazeMapByFoodBowls(foodScriptDictionary);
	}

    
}
