// Upgrade NOTE: replaced '_Object2World' with 'unity_ObjectToWorld'

// LightingCalculations.cginc

#include <HLSLSupport.cginc>

/////////////////////DIFFUSE//////////////////////////////////////

// Disney
half3 DisneyDiffuse(float nl, float3 color, float3 lightColor)
{
    float3 baseColor = color.rgb;
    // Lambert diffuse term
    float diffuse = max(0.0, nl);
    // Energy-conserving adjustment
    float3 adjustedDiffuse = diffuse * baseColor + ((baseColor / 3.14159));
    // Apply base color
    return adjustedDiffuse + baseColor;
}

// Subsurface scattering with edge glow
half3 SubsurfaceScatteringDiffuse(float3 normal, float3 viewDir, float3 lightDir, float3 position, float3 lightPosition, float3 lightColor, float3 albedo, float roughness)
{
    float nl = max(0.0, dot(normal, lightDir));
    float nv = max(0.0, dot(normal, viewDir));
    // Subsurface scattering parameters
    float3 absorptionColor = lightColor; // Adjust as needed
    float3 scatteringColor = albedo; // Adjust as needed
    float scatteringCoeff = 50000 / nl; // Adjust as needed
    // Calculate the distance the light travels through the material
    float3 h = normalize(viewDir + lightDir);
    half vh = pow(saturate(dot(nv, h)), scatteringCoeff);
 
    float3 sss = lerp(scatteringColor, scatteringColor + absorptionColor, vh);
    
    return sss;
}



/////////////////////SPECULAR//////////////////////////////////////

// GGX
half3 GGXSpecular(float3 normal, float3 viewDir, float3 lightDir, float3 position, float3 lightPosition, float3 lightColor, float roughness, float3 grazingAngle)
{
    float3 h = normalize(viewDir + lightDir);
    float nh = max(dot(normal, h), 0.001);
    float nv = max(dot(normal, viewDir), 0.001);
    float nl = max(dot(normal, lightDir), 0.001);

    float roughSq = roughness * roughness;

    float shininess = saturate(1.0 - roughness);
    float nhExp = pow(nh, lerp(0.1, 4.0, shininess)); // tighter falloff
    float D = nhExp * roughSq;


    // Smith G term approximation
    float G = saturate((2.0 * nh * nv) / dot(viewDir, h));

    // Fresnel-Schlick approximated with precomputed grazing term
    float3 F = grazingAngle;

    // Final specular BRDF
    float spec = (D * G) / max(.0 * nv * nl, 0.001);
    return F * spec;
}


// Anisotropic
half3 AnisotropicSpecular(float3 viewDir, float3 position, float3 normal, float3 lightPosition, float roughness, float3 grazingAngle)
{
    // Compute light direction
    float3 lightDir = normalize(lightPosition - position);
    // Compute half vector
    float3 halfVec = normalize(viewDir - lightDir);
    // Add a small offset to roughness to prevent division by zero
    roughness = roughness + 0.001;
    // Beckmann distribution term
    float dotNH = dot(normal, halfVec);
    float exponent = (dotNH * dotNH) / (roughness) + ((1.0 - dotNH * dotNH) / (roughness));
    float D = exp(-exponent * 1-roughness) / (1  * roughness * pow(dotNH, 2));
    // Fresnel-Schlick approximation
    float3 F = grazingAngle;
    // Anisotropic reflection model
    return D * F;
}

// Retroreflective
half3 RetroreflectiveSpecular(float3 viewDir, float3 normal, float roughness, float grazingAngle)
{
    // Calculate the reflection direction
    float3 reflectionDir = reflect(-viewDir, normal);

    // Calculate the angle between the reflection direction and the view direction
    float angle = grazingAngle;

    // Retroreflective specular model (simple cosine lobe)
    half3 retroReflection = max(0.1, dot(viewDir, reflectionDir));

    // Simulate refraction scattering by adding the color of the reflectionDir based on the grazing angle
    half3 refractionScattering = lerp(retroReflection, normalize(normal) + retroReflection, angle);

    // Combine retroreflection and refraction scattering
    return retroReflection + (refractionScattering * angle * roughness);
}

/////////////////////UTILITIES//////////////////////////////////////

// Unpack a normalmap and apply a scale factor
half3 ExtractNormal (half4 packednormal, half bumpScale) {
    half3 normal;
    normal.xy = (packednormal.wy * 2 - 1);
    normal.xy *= bumpScale;
    normal.z = sqrt(1.0 - saturate(dot(normal.xy, normal.xy)));
    return normal;
}
// Unpack two normals from a single image- .rg = normalA.xy, .ba = normalB.xy, both .z are analytically derived //TODO//
half3 ExtractPackedNormals (half4 packednormal, half bumpScale) {
    half3 normal;
    normal.xy = (packednormal.wy * 2 - 1);//this will change, need to look at dxtnm format
    normal.xy *= bumpScale;
    normal.z = sqrt(1.0 - saturate(dot(normal.xy, normal.xy)));
    return normal;
}
//combine two normal maps together using whiteout blending for contrast
half3 BlendTwoNormals (half3 n1, half3 n2) {
    return normalize(half3(n1.xy + n2.xy, n1.z * n2.z));
}
//spotlight falloff
float CalculateSpotlightFalloff(float3 lightDir, float3 spotAxis, float spotAngle)
{
    // Calculate the cosine of the angle between the light direction and the spotlight axis
    float cosAngle = dot(normalize(lightDir), normalize(spotAxis));
    // Use smoothstep to create a smooth falloff from the center to the edges of the spotlight cone
    float falloff = smoothstep(cos(spotAngle * 0.5), 1.0, cosAngle);
    return falloff;
}
// Decode RGBM encoded HDR values from a cubemap
float3 DecodeHDR(in float4 rgbm)
{
    return rgbm.rgb * rgbm.a * 16.0;
}
// Displace verts to simulate wind - we will eventually hook this up to wind zones and base those on the wind audio for ease of use by artists
half4 WindVertexDeformation(float4 vertex, float3 worldPos, float _leaves_wiggle_speed, float _wind_size, float _leaves_wiggle_disp, float3 _wind_dir, float _influence, float4 _time)
{
    // vertex surface movement and wiggle
    vertex.x += cos(_time.z * vertex.x * _leaves_wiggle_speed + (worldPos.x/_wind_size)) * _leaves_wiggle_disp * _wind_dir.x * _influence; //x
    vertex.y += sin(_time.w * vertex.y * _leaves_wiggle_speed + (worldPos.y/_wind_size)) * _leaves_wiggle_disp * _wind_dir.y * _influence; //y
    vertex.z += sin(cos(_time.y * vertex.z * _leaves_wiggle_speed + (worldPos.z/_wind_size)))* _leaves_wiggle_disp * _wind_dir.z * _influence; //z
    return vertex;
}
