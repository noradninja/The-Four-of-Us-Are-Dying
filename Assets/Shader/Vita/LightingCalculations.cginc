// LightingCalculations.cginc

#include <HLSLSupport.cginc>

/////////////////////DIFFUSE//////////////////////////////////////

// Disney Diffuse optimized
half3 DisneyDiffuse(half nl, half3 color){

    // Lambert
    half3 colorSq = color + color;
    half invPI = 0.3183102;
    half3 diffTerm = (colorSq * invPI) * (nl * 0.75 + 0.5);
    return diffTerm;
}

// Subsurface scattering minimized
half3 SubsurfaceScatteringDiffuse(half3 normal, half3 viewDir, half3 lightDir, half3 position, half3 lightPosition, half3 lightColor, half3 albedo, half roughness)
{
    half nl = saturate(dot(normal, lightDir));
    half3 sumDir = normalize(viewDir + lightDir);
    half scatter = pow(saturate(dot(normal, sumDir)), roughness * 16.h + 1.h);
    return lerp(albedo, albedo + lightColor, scatter) * nl;
}

/////////////////////SPECULAR//////////////////////////////////////

static const half PI_INV = 0.318309886h;

// GGX Distribution
half DistributionGGX_Simple(half NdotH, half roughness)
{
    half a = roughness * roughness;
    half NdotH2 = NdotH * NdotH;
    half denom = (NdotH2 * (a * a - 1.h) + 1.h);
    half D = (a * a) * PI_INV / (denom * denom);
    // Prevent the microfacet distribution from dropping to zero, providing a smoother lobe edge
    return max(D, 0.001h);
}

// Geometry Schlick-GGX
half GeometrySchlickGGX_Simple(half NdotV, half roughness)
{
    half r = roughness + 1.h;
    half k = (r * r) * 0.125h;
    return NdotV / (NdotV * (1.h - k) + k);
}

// Smith geometry
half GeometrySmith_Simple(half NdotV, half NdotL, half roughness)
{
    return GeometrySchlickGGX_Simple(NdotV, roughness) * GeometrySchlickGGX_Simple(NdotL, roughness);
}

// Fresnel Schlick
half3 FresnelSchlick_Simple(half VdotH, half3 F0)
{
    return F0 + (1.h - F0) * pow(1.h - VdotH, 5.h);
}

// GGX Specular optimized
half3 GGXSpecular_Optimized(
    half3 normal,
    half3 viewDir,
    half3 lightDir,
    half3 albedo,
    half  metallic,
    half  roughness,
    half3 lightColor
)
{
    half3 H = normalize(viewDir + lightDir);
    half NdotV = dot(normal, viewDir);
    half NdotL = dot(normal, lightDir);
    half VdotH = dot(viewDir, H);

    half G = GeometrySmith_Simple(NdotV, NdotL, roughness);
    half D = DistributionGGX_Simple(dot(normal, H), roughness);
    half denom = max(NdotV * NdotL, 0.5);
    half mult = (G * D) / denom;

    half3 F0 = lerp(half3(0.04h, 0.04h, 0.04h), albedo, metallic);
    half3 F = FresnelSchlick_Simple(VdotH, F0);

    return F * mult * lightColor;
}

// Anisotropic Specular optimized
half3 AnisotropicSpecular(
    half3 viewDir,
    half3 lightDir,
    half3 normal,
    half3 tangent,
    half roughness,
    half3 specTint,
    half3 lightColor
)
{
    // Compute half-vector
    half3 H = normalize(viewDir + lightDir);
    // Tangent and bitangent basis
    half3 T = normalize(tangent);
    half3 B = normalize(cross(normal, T));
    // Project H onto tangent space
    half Ht = dot(H, T);
    half Hb = dot(H, B);
    half NdotH = saturate(dot(normal, H));
    // Compute anisotropic distribution (simple GTR approximation)
    half alpha = roughness * roughness;
    half beta = alpha * (1.h + Ht * Ht / (Hb * Hb + 0.0001h));
    half D = alpha / (PI_INV * (beta * beta) * pow(NdotH, 4.h));
    // Geometry term (Schlick-GGX approximation)
    half NdotV = saturate(dot(normal, viewDir));
    half NdotL = saturate(dot(normal, lightDir));
    half G = GeometrySmith_Simple(NdotV, NdotL, roughness);
    // Fresnel
    half VdotH = saturate(dot(viewDir, H));
    half3 F0 = specTint;
    half3 F = FresnelSchlick_Simple(VdotH, F0);
    half denom = max(NdotV * NdotL, 0.00025);
    return (D * G / denom) * F * lightColor;
}

// Retroreflective Specular optimized
half3 RetroreflectiveSpecular(
    half3 viewDir,
    half3 normal,
    half roughness,
    half3 retroTint
)
{
    // Reflection direction
    half3 R = reflect(-viewDir, normal);
    half NdotR = saturate(dot(normal, R));
    // Simple lobe based on roughness
    half m = roughness * 0.5h + 0.5h;
    half intensity = pow(NdotR, 1.h / m);
    return retroTint * intensity;
}

/////////////////////UTILITIES//////////////////////////////////////

half3 ExtractNormal (half4 packednormal, half bumpScale) {
    half3 normal;
    normal.xy = (packednormal.wy * 2.h - 1.h);
    normal.xy *= bumpScale;
    normal.z = sqrt(1.h - saturate(dot(normal.xy, normal.xy)));
    return normal;
}

half CalculateSpotlightFalloff(half3 lightDir, half3 spotAxis, half spotAngle)
{
    half cosAngle = dot(normalize(lightDir), normalize(spotAxis));
    return smoothstep(cos(spotAngle * 0.5h), 1.h, cosAngle);
}

half3 DecodeHDR(in half4 rgbm)
{
    return rgbm.rgb * rgbm.a * 16.h;
}

half4 WindVertexDeformation(half4 vertex, half3 worldPos, half _leaves_wiggle_speed, half _wind_size, half _leaves_wiggle_disp, half3 _wind_dir, half _influence, half4 _time)
{
    vertex.x += cos(_time.z * vertex.x * _leaves_wiggle_speed + (worldPos.x/_wind_size)) * _leaves_wiggle_disp * _wind_dir.x * _influence;
    vertex.y += sin(_time.w * vertex.y * _leaves_wiggle_speed + (worldPos.y/_wind_size)) * _leaves_wiggle_disp * _wind_dir.y * _influence;
    vertex.z += sin(cos(_time.y * vertex.z * _leaves_wiggle_speed + (worldPos.z/_wind_size))) * _leaves_wiggle_disp * _wind_dir.z * _influence;
    return vertex;
}