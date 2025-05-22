using System.Collections.Generic;
using UnityEngine;

public class POIManager : MonoBehaviour
{
    public float activationRange = 10.0f;
    public Transform playerTransform;

    public List<GameObject> poiList = new List<GameObject>();
    private GameObject activePOI = null;

    public static POIManager instance;

    void Awake()
    {
        if (instance == null)
            instance = this;
        else
            Destroy(gameObject);
    }

    public void RegisterPOI(GameObject poi)
    {
        if (!poiList.Contains(poi))
            poiList.Add(poi);
    }

    public void UnregisterPOI(GameObject poi)
    {
        if (poiList.Contains(poi))
            poiList.Remove(poi);
    }

    void Update()
    {
        if (playerTransform == null)
            return;

        GameObject closest = null;
        float closestDistanceSqr = activationRange * activationRange;

        foreach (GameObject poi in poiList)
        {
            if (poi == null)
                continue;

            float distSqr = (poi.transform.position - playerTransform.position).sqrMagnitude;

            if (distSqr < closestDistanceSqr)
            {
                closestDistanceSqr = distSqr;
                closest = poi;
            }
        }

        if (closest != null)
        {
            if (activePOI != closest)
            {
                if (activePOI != null)
                    activePOI.GetComponent<PointOfInterest>().isActiveObject = false;

                activePOI = closest;
                activePOI.GetComponent<PointOfInterest>().isActiveObject = true;
            }

            // Optional: notify systems if needed (e.g., set PlayerStateController.InProximity = true)
        }
        else
        {
            if (activePOI != null)
            {
                activePOI.GetComponent<PointOfInterest>().isActiveObject = false;
                activePOI = null;
            }

            // Optional: notify systems if needed (e.g., PlayerStateController.Instance.SetInProximity(false))
        }
    }
}
