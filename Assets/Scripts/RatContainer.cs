using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RatContainer : MonoBehaviour
{
    public Rigidbody rb;
    public float thrust = 10f;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        rb.AddForce(Vector3.left*thrust);
    }
}
