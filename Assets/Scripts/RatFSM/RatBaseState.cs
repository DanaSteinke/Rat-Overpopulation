using UnityEngine;

public abstract class RatBaseState
{
    public abstract void EnterState(RatScript rs);
    
    public abstract void OnCollisionEnter(RatScript rs, Collision other);

    public abstract void Update(RatScript rs);
}
