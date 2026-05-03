///////////////////// DIFFUSE MODELS ///////////////////////////

/* We replace the previous Disney-like diffuse with a Standard-style
   energy-conserving Lambert term to better match Unity Standard. */
half StandardLikeDiffuse(half nl)
{
    return saturate(nl);
}

half3 SubsurfaceScatteringDiffuse(half3 normal, half3 viewDir, half3 lightDir, half3 position, half3 lightPosition,
                                  half3 lightColor, half3 albedo, half roughness)
{
    half nl = saturate(dot(normal, lightDir));
    half3 sumDir = normalize(viewDir + lightDir);
    half scatter = pow(saturate(dot(normal, sumDir)), roughness * 16.h + 1.h);
    return lerp(albedo, albedo + lightColor, scatter) * nl;
}

///////////////////// SPECULAR MODELS ///////////////////////////

static const half PI_INV = 0.318310886h;

half DistributionGGX_Simple(half NdotH, half roughness)
{
    half a = roughness * roughness;
    half NdotH2 = NdotH * NdotH;
    half denom = (NdotH2 * (a * a - 1.h) + 1.h);
    return max((a * a) * PI_INV / (denom * denom), 0.001h);
}

half GeometrySchlickGGX_Simple(half NdotV, half roughness)
{
    half r = roughness + 1.h;
    half k = (r * r) * 0.125h;
    return NdotV / (NdotV * (1.h - k) + k);
}

half GeometrySmith_Simple(half NdotV, half NdotL, half roughness)
{
    return GeometrySchlickGGX_Simple(NdotV, roughness) * GeometrySchlickGGX_Simple(NdotL, roughness);
}

half FresnelSchlick_Simple(half VdotH, half metallic)
{
    half F0 = lerp(0.04h, 0.9h, metallic);
    return F0 + (1.0h - F0) * pow(1.0h - VdotH, 5.0h);
}

half GGXSpecular_Optimized(half3 normal, half3 viewDir, half3 lightDir, half3 albedo, half metallic, half roughness)
{
    half3 H = normalize(viewDir + lightDir);
    half NdotV = saturate(dot(normal, viewDir));
    half NdotL = saturate(dot(normal, lightDir));
    half VdotH = saturate(dot(viewDir, H));

    half G = GeometrySmith_Simple(NdotV, NdotL, roughness);
    half D = DistributionGGX_Simple(saturate(dot(normal, H)), roughness);
    half denom = max(NdotV * NdotL, 0.5h);
    half mult = (G * D) / denom;

    half F = FresnelSchlick_Simple(VdotH, metallic);

    return F * mult;
}

///////////////////// REFLECTIONS ///////////////////////////

/* We leave reflections mostly intact, but they will now be
   combined correctly in the final lighting stage. */
half3 SampleReflectionCubemap(half3 normal, half roughness, half metallic)
{
    half4 tex = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0, normal, roughness * 12.0h);
    return DecodeHDR(tex, unity_SpecCube0_HDR) * metallic;
}

///////////////////// WIND ///////////////////////////

half4 WindVertexDeformation(half4 vertex, half3 worldPos, half wiggleSpeed, half windSize, half wiggleDisp,
                            half3 windDir, half influence, half4 time)
{
    #if defined(_WIND_ON)
    vertex.x += cos(time.z * vertex.x * wiggleSpeed + (worldPos.x / windSize)) * wiggleDisp * windDir.x * influence;
    vertex.y += sin(time.w * vertex.y * wiggleSpeed + (worldPos.y / windSize)) * wiggleDisp * windDir.y * influence;
    vertex.z += sin(cos(time.y * vertex.z * wiggleSpeed + (worldPos.z / windSize))) * wiggleDisp * windDir.z *
        influence;
    #endif
    return vertex;
}
