using UnityEngine;

public class POIHeadLookController : MonoBehaviour
{
    public Transform headObject;
    public Transform defaultLookTarget;

    public float poiLookRate = 2.0f;
    public float returnLookRate = 0.25f;

    private void Update()
    {
        if (headObject == null || defaultLookTarget == null)
            return;

        var target = defaultLookTarget;
        var rate = returnLookRate;

        if (POIManager.instance != null)
        {
            var poiTarget = POIManager.instance.GetCurrentLookTarget();

            if (poiTarget != null)
            {
                target = poiTarget;
                rate = poiLookRate;
            }
        }

        POILook(headObject, target, rate);
    }

    private void POILook(Transform objectToRotateTransform, Transform objectToLookAtTransform, float rate)
    {
        if (objectToRotateTransform == null || objectToLookAtTransform == null)
            return;

        var targetDirection = objectToLookAtTransform.position - objectToRotateTransform.position;

        if (targetDirection.sqrMagnitude <= 0.0001f)
            return;

        var singleStep = rate * Time.deltaTime;

        var newDirection = Vector3.RotateTowards(
            objectToRotateTransform.forward,
            targetDirection,
            singleStep,
            0.0f
        );

        Debug.DrawRay(objectToRotateTransform.position, newDirection, Color.magenta);
        objectToRotateTransform.rotation = Quaternion.LookRotation(newDirection);
    }
}