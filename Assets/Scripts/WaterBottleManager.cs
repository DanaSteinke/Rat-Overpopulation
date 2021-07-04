using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaterBottleManager : MonoBehaviour
{
    public WaterBottleScript[,] waterBottleScriptMap;
    public MapGeneratorScript mgs;
    public int[,] mazeMap;
    public int unitNumber;
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
                if(hit.collider.name.StartsWith("waterBottle_")){
                    WaterBottleScript wbs = hit.collider.gameObject.GetComponent<WaterBottleScript>();
                    wbs.RefillWaterBottle();
                }
            }
        }
    }
    public void ReloadMap(){

    }

    public void UpdateWaterBottleScriptMap(WaterBottleScript[,] wbsMap){
        waterBottleScriptMap = wbsMap;
        mazeMap = mgs.getMap();
        unitNumber = mgs.unitNumber;
    }

    public int[] GetWaterBottleIDByRatLocation(Vector3 ratPosition){
        int[] bottleID = new int[2];
        int ratX = (int)Mathf.Floor(ratPosition.x/10f);
        int ratY = (int)Mathf.Floor(ratPosition.z/10f);

        int unitCol = mazeMap.GetLength(1)/16;

        int unitID = (ratX-2)/16*unitCol + (ratY-2)/16;
        unitID = unitID >= unitNumber ? unitID - unitCol : unitID;
        bottleID[0] = unitID;
        bottleID[1] = Random.Range(0, 4);

        return bottleID;
    }

    public Vector3 GetWaterBottlePositionByBottleID(int[] bottleID){
        WaterBottleScript wbs = waterBottleScriptMap[bottleID[0], bottleID[1]];
        return wbs.gameObject.transform.position;
    }

    public bool ReduceWaterAmountByBottleID(int[] bottleID){
        WaterBottleScript wbs = waterBottleScriptMap[bottleID[0], bottleID[1]];
        return wbs.RatDrinking();
    }

    public void SetWaterBottleIsClickable(){
        for(int i=0; i<waterBottleScriptMap.GetLength(0); i++){
            for(int j=0; j<waterBottleScriptMap.GetLength(1); j++){
                WaterBottleScript wbs = waterBottleScriptMap[i,j];
                GlobalScript.SetLayerRecursively(wbs.gameObject, 0);
            }
        }
    }
}
