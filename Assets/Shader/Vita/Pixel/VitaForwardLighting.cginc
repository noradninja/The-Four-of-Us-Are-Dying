#ifndef VITA_FORWARD_LIGHTING_CGINC
#define VITA_FORWARD_LIGHTING_CGINC

//#include "UnityCG.cginc"
//#include "AutoLight.cginc"

// ----------------------------
// Tier-2, energy-balanced BRDF
// ----------------------------
inline half Vita_Fresnel_NdotV(half NdotV, half metallic)
{
    // Cheap Schlick-ish using N·V (vertex/pixel friendly)
    half F0 = lerp(0.04h, 0.9h, metallic);
    return F0 + (1.0h - F0) * (1.0h - NdotV);
}

inline half Vita_SpecStrength_Tier2(half roughness)
{
    // Very cheap "tightness" curve: (1 - r)^2
    half s = saturate(1.0h - roughness);
    return s * s;
}

// Evaluates ONE light contribution (diffuse + spec), already attenuated by caller
inline half3 Vita_EvaluateLight_Tier2(
    half3 N, half3 V, half3 L,
    half3 lightColor,
    half  attenuation,
    half  metallic,
    half  roughness
)
{
    half NdotL = max(dot(N, L), 0.0h);
    half NdotV = max(dot(N, V), 0.0h);

    // Fresnel = spec energy fraction
    half F = Vita_Fresnel_NdotV(NdotV, metallic);

    // Energy split
    half specEnergy = F;
    half diffEnergy = (1.0h - F) * (1.0h - metallic);

    // Diffuse (Lambert with energy balance)
    half3 diffuse = diffEnergy * NdotL * lightColor;

    // Tier-2 spec (stable per-pixel)
    half specStrength = Vita_SpecStrength_Tier2(roughness);
    half spec = (NdotL * NdotV) * specStrength * specEnergy;
    half3 specular = spec * lightColor;

    return (diffuse + specular) * attenuation;
}

#endif // VITA_FORWARD_LIGHTING_CGINC
