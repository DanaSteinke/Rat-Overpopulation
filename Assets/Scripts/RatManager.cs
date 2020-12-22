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

    // Start is called before the first frame update
    void Start()
    {
        RatList = new GameObject[RatAmount];
        RatSpawnTrain = new GameObject[RatAmount];
        spawnRats();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void spawnRats(){
        GameObject RatTrain = new GameObject();
        RatTrain.transform.parent = this.transform;
        GameObject stopper = Instantiate(RatStopper, new Vector3(-10f, 10f, -10f), Quaternion.identity);

        for(int i=0; i<RatAmount; i++){
            Vector3 position = new Vector3((0+i)*10f, 10f, -10f);
            GameObject newRatCont = Instantiate(RatContainer, position, Quaternion.identity);
            newRatCont.transform.parent = RatTrain.transform;

            Transform rat = newRatCont.transform.GetChild(0);
            rat.gameObject.SendMessage("SetID", i);

            RatSpawnTrain[i] = newRatCont;
        }
    }

    public void removeRatTrainCell(int id){
        Debug.Log("remove Cell id: "+id);
        Destroy(RatSpawnTrain[id]);
        RatSpawnTrain[id] = null;
    }
}
