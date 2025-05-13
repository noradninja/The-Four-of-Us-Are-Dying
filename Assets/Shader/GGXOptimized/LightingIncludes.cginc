#ifndef GGX_LIGHTING_INCLUDED
#define GGX_LIGHTING_INCLUDED

inline half Pow5(half x)
{
    half x2 = x * x;
    return x2 * x2 * x;
}

float3 FresnelSchlick(float3 F0, float VdotH)
{
    return F0 + (1.0 - F0) * Pow5(1.0 - VdotH);
}

#endif
