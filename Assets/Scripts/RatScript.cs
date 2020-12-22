using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RatScript : MonoBehaviour
{
    public int id;
    public Rigidbody rb;
    public RatManager rms;
    public GameObject rm;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        rm = GameObject.Find("RatManager");
        rms = rm.GetComponent<RatManager>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void objectDropped(){
        Debug.Log("Rat Dropped");
        rb.isKinematic = false;
        this.transform.parent = rm.transform;
        rms.removeRatTrainCell(id);
    }

    public void SetID(int i){
        id = i;
    }
}
