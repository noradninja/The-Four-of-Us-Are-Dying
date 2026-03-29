using System.Collections.Generic;
using UnityEngine;

public class POIManager : MonoBehaviour
{
    public static POIManager instance;

    public float activationRange = 10.0f;
    public Transform playerTransform;

    public List<PointOfInterest> poiList = new List<PointOfInterest>();

    [HideInInspector] public PointOfInterest activePOI;

    void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void Update()
    {
        if (playerTransform == null)
            return;

        PointOfInterest closest = null;
        var closestDistanceSqr = activationRange * activationRange;
        var playerPosition = playerTransform.position;

        for (var i = poiList.Count - 1; i >= 0; i--)
        {
            var poi = poiList[i];

            if (poi == null || !poi.isActiveAndEnabled)
            {
                poiList.RemoveAt(i);
                continue;
            }

            var distSqr = (poi.transform.position - playerPosition).sqrMagnitude;

            if (distSqr < closestDistanceSqr)
            {
                closestDistanceSqr = distSqr;
                closest = poi;
            }
        }

        activePOI = closest;
    }

    public void RegisterPOI(PointOfInterest poi)
    {
        if (poi == null)
            return;

        if (!poiList.Contains(poi))
        {
            poiList.Add(poi);
        }
    }

    public void UnregisterPOI(PointOfInterest poi)
    {
        if (poi == null)
            return;

        if (poiList.Contains(poi))
        {
            poiList.Remove(poi);
        }

        if (activePOI == poi)
        {
            activePOI = null;
        }
    }

    public Transform GetCurrentLookTarget()
    {
        if (activePOI != null)
            return activePOI.transform;

        return null;
    }
}