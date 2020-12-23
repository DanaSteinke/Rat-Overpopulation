using UnityEngine;

public abstract class RatBaseState
{
    public abstract void EnterState(RatScript rs);

    public abstract void Update(RatScript rs);
}
