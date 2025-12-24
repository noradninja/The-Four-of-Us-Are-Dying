using UnityEngine;
using System.Collections.Generic;

public class WindZoneManager : MonoBehaviour
{
    private static readonly int WindDirectionID   = Shader.PropertyToID("_WindDirection");
    private static readonly int WindStrengthID    = Shader.PropertyToID("_WindStrength");
    private static readonly int WindTurbulenceID  = Shader.PropertyToID("_WindTurbulence");
    private static readonly int WindPulseID       = Shader.PropertyToID("_WindPulse");

    private List<Renderer> windRenderers = new List<Renderer>();
    private WindZone[] windZones;

    void Start()
    {
        windZones = FindObjectsOfType<WindZone>();
        FindWindReactiveObjects();
    }

    void Update()
    {
        foreach (Renderer r in windRenderers)
        {
            if (!r) continue;

            Vector3 pos = r.bounds.center;
            WindZone wz = FindNearestWindZone(pos);
            if (!wz) continue;

            MaterialPropertyBlock mpb = new MaterialPropertyBlock();
            r.GetPropertyBlock(mpb);

            mpb.SetVector(WindDirectionID, wz.transform.forward);
            mpb.SetFloat(WindStrengthID, wz.windMain);
            mpb.SetFloat(WindTurbulenceID, wz.windTurbulence);
            mpb.SetFloat(WindPulseID, wz.windPulseMagnitude);

            r.SetPropertyBlock(mpb);
        }
    }

    void FindWindReactiveObjects()
    {
        Renderer[] allRenderers = FindObjectsOfType<Renderer>();

        foreach (Renderer r in allRenderers)
        {
            var materials = r.sharedMaterials;
            foreach (Material mat in materials)
            {
                if (mat != null && mat.IsKeywordEnabled("_WIND_ON"))
                {
                    windRenderers.Add(r);
                    break;
                }
            }
        }
    }

    WindZone FindNearestWindZone(Vector3 position)
    {
        WindZone nearest = null;
        float minDistSq = float.MaxValue;

        foreach (var wz in windZones)
        {
            float distSq = (wz.transform.position - position).sqrMagnitude;
            if (distSq < minDistSq)
            {
                minDistSq = distSq;
                nearest = wz;
            }
        }

        return nearest;
    }
}
