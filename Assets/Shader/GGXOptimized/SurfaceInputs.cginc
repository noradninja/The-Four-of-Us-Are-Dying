#ifndef SURFACE_INPUTS_INCLUDED
#define SURFACE_INPUTS_INCLUDED

sampler2D _MainTex;
sampler2D _BumpMap;
sampler2D _MetallicGlossMap;
sampler2D _BRDFLUT;

fixed _GlossFloor;
fixed _GlossCeil;
uniform float _Cutoff;

// Debug UI
uniform float _DebugLighting;
uniform float _DebugAlbedo;
uniform float _DebugSpecular;
uniform float _DebugAO;
uniform float _DebugRoughness;
uniform float _DebugReflection;

float3 UnpackNormalRG(float2 rg)
{
    float3 normal;
    normal.xy = rg * 2.0 - 1.0;
    normal.z = sqrt(saturate(1.0 - dot(normal.xy, normal.xy)));
    return normalize(normal);
}

float4 SampleMRA(float2 uv)
{
    return tex2D(_MetallicGlossMap, uv); // r = metallic, g = AO, b = alpha, a = roughness
}


float remapRoughness(float rough)
{
    return lerp(_GlossFloor, _GlossCeil, rough);
}

float3 ApplyDebug(float3 lighting, float3 albedo, float3 spec, float ao, float rough, float3 reflection)
{
    return
        _DebugAlbedo    ? albedo :
        _DebugSpecular  ? spec :
        _DebugAO        ? ao.xxx :
        _DebugRoughness ? rough.xxx :
        _DebugReflection? reflection :
        lighting * _DebugLighting;
}

void AlphaClipFromMRA(float2 uv)
{
    float alpha = tex2D(_MetallicGlossMap, uv).b;
    clip(alpha - _Cutoff);
}

#endif
