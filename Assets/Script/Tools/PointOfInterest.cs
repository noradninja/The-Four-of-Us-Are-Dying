using UnityEngine;

public class PointOfInterest : MonoBehaviour
{
    void Start()
    {
        if (POIManager.instance != null)
        {
            POIManager.instance.RegisterPOI(this);
        }
    }

    private void OnEnable()
    {
        if (POIManager.instance != null) POIManager.instance.RegisterPOI(this);
    }

    void OnDisable()
    {
        if (POIManager.instance != null)
        {
            POIManager.instance.UnregisterPOI(this);
        }
    }

    private void OnDestroy()
    {
        if (POIManager.instance != null)
        {
            POIManager.instance.UnregisterPOI(this);
        }
    }

    void OnDrawGizmos()
    {
#if UNITY_EDITOR
        Gizmos.color = Color.gray;
        Gizmos.DrawIcon(transform.position, "Light_Flare.tga", true);
#endif
    }
}