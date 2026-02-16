using System.Collections;
using UnityEngine;

public class PointOfInterest : MonoBehaviour
{
    public bool isActiveObject;
    public GameObject player;
    public GameObject headObject;
    public GameObject headLookObject;

    void Start()
    {
        if (POIManager.instance != null)
        {
            POIManager.instance.RegisterPOI(this.gameObject);
        }
    }

    void OnDisable()
    {
        if (POIManager.instance != null)
        {
            POIManager.instance.UnregisterPOI(this.gameObject);
        }
    }

    void Update()
    {
        if (isActiveObject)
        {
            POILook(headObject.transform, this.transform, 2.0f);
        }
        else
        {
            POILook(headObject.transform, headLookObject.transform, 0.25f);
        }
    }

    private void POILook(Transform objectToRotateTransform, Transform objectToLookAtTransform, float rate)
    {
        Vector3 targetDirection = objectToLookAtTransform.position - objectToRotateTransform.position;
        float singleStep = rate * Time.deltaTime;
        Vector3 newDirection =
            Vector3.RotateTowards(objectToRotateTransform.forward, targetDirection, singleStep, 0.0f);
        Debug.DrawRay(objectToRotateTransform.position, newDirection, Color.magenta);
        objectToRotateTransform.rotation = Quaternion.LookRotation(newDirection);
    }

    void OnDrawGizmos()
    {
#if UNITY_EDITOR
        Gizmos.color = Color.gray;
        Gizmos.DrawIcon(transform.position, "Light_Flare.tga", true);
#endif
    }
}