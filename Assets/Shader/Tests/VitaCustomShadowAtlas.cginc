#ifndef VITA_CUSTOM_SHADOW_ATLAS_INCLUDED
#define VITA_CUSTOM_SHADOW_ATLAS_INCLUDED

sampler2D _CustomShadowAtlas;

/* Reserves directional globals for our fixed directional atlas slot. */
float4x4 _CustomDirWorldToShadow;
float4 _CustomDirShadowRect;
float4 _CustomDirShadowParams;

/* Declares spotlight atlas globals for the player light and three dynamic slots. */
float4x4 _CustomSpotWorldToShadow0;
float4x4 _CustomSpotWorldToShadow1;
float4x4 _CustomSpotWorldToShadow2;
float4x4 _CustomSpotWorldToShadow3;

float4 _CustomSpotShadowRect0;
float4 _CustomSpotShadowRect1;
float4 _CustomSpotShadowRect2;
float4 _CustomSpotShadowRect3;

float4 _CustomSpotPosRange0;
float4 _CustomSpotPosRange1;
float4 _CustomSpotPosRange2;
float4 _CustomSpotPosRange3;

float4 _CustomSpotDirCosOuter0;
float4 _CustomSpotDirCosOuter1;
float4 _CustomSpotDirCosOuter2;
float4 _CustomSpotDirCosOuter3;

float4 _CustomSpotColorStrength0;
float4 _CustomSpotColorStrength1;
float4 _CustomSpotColorStrength2;
float4 _CustomSpotColorStrength3;

float4 _CustomSpotShadowParams0;
float4 _CustomSpotShadowParams1;
float4 _CustomSpotShadowParams2;
float4 _CustomSpotShadowParams3;

/* Reports whether one atlas light is currently enabled. */
inline half IsAtlasLightEnabled(float4 shadowParams)
{
    return shadowParams.w > 0.5h ? 1.0h : 0.0h;
}

/* Checks whether projected UVs remain inside the 0..1 shadow region. */
inline half IsProjectedInside01(float2 uv)
{
    half2 inMin = step(float2(0.0h, 0.0h), uv);
    half2 inMax = step(uv, float2(1.0h, 1.0h));
    return inMin.x * inMin.y * inMax.x * inMax.y;
}

/* Provides a tiny safety clamp for reciprocal operations. */
inline half SafeRcp(half v)
{
    return 1.0h / max(v, 1e-4h);
}

/* Provides a cheap fourth-power helper for future shaping if needed. */
inline half Pow4Fast(half x)
{
    half x2 = x * x;
    return x2 * x2;
}

/* Maps smoothness to a cheap specular power for our custom spotlight term. */
inline half SmoothnessToSpecPowerFast(half smoothness)
{
    return lerp(8.0h, 64.0h, smoothness);
}

/* Projects world position into shadow UVZ space before atlas remap. */
inline float3 ProjectWorldToShadow01(float3 worldPos, float4x4 worldToShadow)
{
    float4 shadowPos = mul(worldToShadow, float4(worldPos, 1.0));
    float invW = 1.0 / max(shadowPos.w, 1e-5);
    return shadowPos.xyz * invW;
}

/* Remaps one projected shadow UV into a specific atlas tile. */
inline float2 RemapShadowUVToAtlas(float2 shadowUV01, float4 atlasRectScaleOffset)
{
    return shadowUV01 * atlasRectScaleOffset.xy + atlasRectScaleOffset.zw;
}

/* Samples the raw atlas depth value at one atlas UV. */
inline half SampleAtlasShadowRaw(float2 atlasUV)
{
    return tex2D(_CustomShadowAtlas, atlasUV).r;
}

/* Performs a one-tap depth compare against our atlas shadow data. */
inline half SampleAtlasShadowCompare(
    float3 shadowPos01,
    float4 atlasRectScaleOffset,
    half depthBias)
{
    half inside = IsProjectedInside01((half2)shadowPos01.xy);
    if (inside <= 0.0h)
        return 1.0h;

    float2 atlasUV = RemapShadowUVToAtlas(shadowPos01.xy, atlasRectScaleOffset);

    half storedDepth = SampleAtlasShadowRaw(atlasUV);
    half receiverDepth = (half)shadowPos01.z;

    return ((receiverDepth - depthBias) <= storedDepth) ? 1.0h : 0.0h;
}

/* Computes a cheap squared range falloff for one spotlight. */
inline half ComputeSpotRangeAttenuation(float3 lightPos, float3 worldPos, half range)
{
    half3 toLight = (half3)(lightPos - worldPos);
    half distSq = dot(toLight, toLight);
    half rangeSq = range * range;

    half atten = saturate(1.0h - distSq * SafeRcp(rangeSq));
    return atten * atten;
}

/* Computes a spotlight cone term from forward direction and surface-to-light vector. */
inline half ComputeSpotConeAttenuation(half3 L, half3 lightDir, half cosOuter)
{
    half cosAngle = dot(-L, lightDir);
    half denom = max(1e-4h, 1.0h - cosOuter);
    return saturate((cosAngle - cosOuter) / denom);
}

/* Computes combined spotlight cone and range attenuation. */
inline half ComputeSpotCombinedAttenuation(
    float3 worldPos,
    float4 spotPosRange,
    float4 spotDirCosOuter)
{
    half3 lightPos = (half3)spotPosRange.xyz;
    half range = (half)spotPosRange.w;
    half3 lightDir = normalize((half3)spotDirCosOuter.xyz);
    half cosOuter = (half)spotDirCosOuter.w;

    half3 toLight = lightPos - (half3)worldPos;
    half invLen = rsqrt(max(dot(toLight, toLight), 1e-4h));
    half3 L = toLight * invLen;

    half rangeAtten = ComputeSpotRangeAttenuation(lightPos, worldPos, range);
    half coneAtten = ComputeSpotConeAttenuation(L, lightDir, cosOuter);

    return rangeAtten * coneAtten;
}

/* Evaluates a lightweight direct diffuse/specular response for our atlas spotlights. */
inline half3 EvaluateAtlasSpotDirectBRDF(
    FragmentCommonData s,
    half3 L,
    half3 lightColor,
    half intensity)
{
    half3 N = normalize((half3)s.normalWorld);
    half3 V = normalize((half3)(-s.eyeVec));
    half3 H = normalize(L + V);

    half NdotL = saturate(dot(N, L));
    if (NdotL <= 0.0h)
        return half3(0.0h, 0.0h, 0.0h);

    half NdotH = saturate(dot(N, H));
    half specPower = SmoothnessToSpecPowerFast((half)s.smoothness);

    half spec = pow(NdotH, specPower);

    half3 diffuseTerm = s.diffColor * NdotL;
    half3 specularTerm = s.specColor * spec * NdotL;

    return (diffuseTerm + specularTerm) * lightColor * intensity;
}

/* Evaluates one custom spotlight using atlas shadowing and lightweight direct lighting. */
inline half3 EvaluateCustomSpotAtlasLight(
    FragmentCommonData s,
    float4x4 worldToShadow,
    float4 shadowRect,
    float4 spotPosRange,
    float4 spotDirCosOuter,
    float4 spotColorStrength,
    float4 shadowParams)
{
    half enabled = IsAtlasLightEnabled(shadowParams);
    if (enabled <= 0.0h)
        return half3(0.0h, 0.0h, 0.0h);

    half shadowStrength = (half)shadowParams.x;
    half depthBias = (half)shadowParams.y;
    half normalBias = (half)shadowParams.z;

    half3 biasedWorldPos = (half3)s.posWorld + normalize((half3)s.normalWorld) * normalBias;

    half3 lightPos = (half3)spotPosRange.xyz;
    half3 lightColor = (half3)spotColorStrength.rgb;
    half intensity = (half)spotColorStrength.a;

    half3 toLight = lightPos - biasedWorldPos;
    half invLen = rsqrt(max(dot(toLight, toLight), 1e-4h));
    half3 L = toLight * invLen;

    half atten = ComputeSpotCombinedAttenuation(biasedWorldPos, spotPosRange, spotDirCosOuter);
    if (atten <= 0.0h)
        return half3(0.0h, 0.0h, 0.0h);

    float3 shadowPos01 = ProjectWorldToShadow01(biasedWorldPos, worldToShadow);
    half shadow = SampleAtlasShadowCompare(shadowPos01, shadowRect, depthBias);

    half shadowFactor = lerp(1.0h, shadow, shadowStrength);
    if (shadowFactor <= 0.0h)
        return half3(0.0h, 0.0h, 0.0h);

    half3 lit = EvaluateAtlasSpotDirectBRDF(s, L, lightColor, intensity);
    return lit * atten * shadowFactor;
}

/* Evaluates the player spotlight atlas slot. */
inline half3 EvaluateCustomSpotAtlasLight0(FragmentCommonData s)
{
    return EvaluateCustomSpotAtlasLight(
        s,
        _CustomSpotWorldToShadow0,
        _CustomSpotShadowRect0,
        _CustomSpotPosRange0,
        _CustomSpotDirCosOuter0,
        _CustomSpotColorStrength0,
        _CustomSpotShadowParams0
    );
}

/* Evaluates dynamic spotlight slot 1. */
inline half3 EvaluateCustomSpotAtlasLight1(FragmentCommonData s)
{
    return EvaluateCustomSpotAtlasLight(
        s,
        _CustomSpotWorldToShadow1,
        _CustomSpotShadowRect1,
        _CustomSpotPosRange1,
        _CustomSpotDirCosOuter1,
        _CustomSpotColorStrength1,
        _CustomSpotShadowParams1
    );
}

/* Evaluates dynamic spotlight slot 2. */
inline half3 EvaluateCustomSpotAtlasLight2(FragmentCommonData s)
{
    return EvaluateCustomSpotAtlasLight(
        s,
        _CustomSpotWorldToShadow2,
        _CustomSpotShadowRect2,
        _CustomSpotPosRange2,
        _CustomSpotDirCosOuter2,
        _CustomSpotColorStrength2,
        _CustomSpotShadowParams2
    );
}

/* Evaluates dynamic spotlight slot 3. */
inline half3 EvaluateCustomSpotAtlasLight3(FragmentCommonData s)
{
    return EvaluateCustomSpotAtlasLight(
        s,
        _CustomSpotWorldToShadow3,
        _CustomSpotShadowRect3,
        _CustomSpotPosRange3,
        _CustomSpotDirCosOuter3,
        _CustomSpotColorStrength3,
        _CustomSpotShadowParams3
    );
}

/* Sums all custom atlas spotlight contributions for the current surface. */
inline half3 EvaluateAllCustomSpotAtlasLights(FragmentCommonData s)
{
    half3 c = half3(0.0h, 0.0h, 0.0h);
    c += EvaluateCustomSpotAtlasLight0(s);
    c += EvaluateCustomSpotAtlasLight1(s);
    c += EvaluateCustomSpotAtlasLight2(s);
    c += EvaluateCustomSpotAtlasLight3(s);
    return c;
}

#endif
