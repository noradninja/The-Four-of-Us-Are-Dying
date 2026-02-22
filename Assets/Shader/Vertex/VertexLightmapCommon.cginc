#include "UnityCG.cginc"
#include "HLSLSupport.cginc"
#include "UnityShaderVariables.cginc"
#include "UnityShaderUtilities.cginc"
#include "AutoLight.cginc"
#include "Lighting.cginc"
#include "UnityShadowLibrary.cginc"

#include "UnityStandardConfig.cginc"
#include "UnityPBSLighting.cginc"
#include "UnityStandardUtils.cginc"
#include "UnityGBuffer.cginc"
#include "UnityStandardBRDF.cginc"

#define USING_FOG (defined(FOG_LINEAR) || defined(FOG_EXP) || defined(FOG_EXP2))
// ES2.0 can not do loops with non-constant-expression iteration counts :(
#if defined(SHADER_API_GLES)
    #define LIGHT_LOOP_LIMIT 8.0h
#else
    #define LIGHT_LOOP_LIMIT unity_VertexLightParams.x
#endif

// uniforms
int4 unity_VertexLightParams; // x: light count, y: zero, z: one (needed for d3d9)
sampler2D _MainTex;
sampler2D _MetallicGlossMap;
half4 _MainTex_ST;
half _Cutoff;
half4 _wind_dir;
half _wind_size;
half _leaves_wiggle_disp;
half _leaves_wiggle_speed;
half _influence;
half _LeavesOn;
half _AlphaOn;
uniform half _Metallic;
uniform half _Roughness;

half3 computeOneLight(int idx, half3 eyePosition, half3 eyeNormal)
{
    half3 dirToLight = unity_LightPosition[idx].xyz;
    half att = 1.5h;
    #if defined(POINT) || defined(SPOT)
        dirToLight -= eyePosition * unity_LightPosition[idx].w;
        // distance attenuation
        half distSqr = dot(dirToLight, dirToLight);
        att /= (1.0h + unity_LightAtten[idx].z * distSqr);
        if (unity_LightPosition[idx].w != 0.0h &&
            distSqr > unity_LightAtten[idx].w)
            att = 0.0h; // light is out of range
        dirToLight *= rsqrt(distSqr);
        
        #if defined(SPOT)
            // spot angle attenuation
            half rho = max(dot(dirToLight, unity_SpotDirection[idx].xyz), 0.0h);
            half spotAtt = (rho - unity_LightAtten[idx].x) * unity_LightAtten[idx].y;
            att *= saturate(spotAtt);
        #endif
    #endif

    // Diffuse contribution: scale by (1 - metal)
    const half NdotL = max(dot(eyeNormal, dirToLight), 0.0h);
    const half3 diffuse = (1.0h - _Metallic) * att * NdotL * unity_LightColor[idx].rgb;

    // --- GGX Specular Contribution ---
    half3 V = normalize(-eyePosition);       // view vector in eye-space
    half3 H = normalize(V + dirToLight);       // half vector between view and light

    half NdotV = max(dot(eyeNormal, V), 0.0h);
    half NdotH = max(dot(eyeNormal, H), 0.0h);
    half VdotH = max(dot(V, H), 0.0h);

    half r =1 - _Roughness;
    half a2 = r * r; // squared roughness

    // GGX Normal Distribution Function (D)
    half denom = (NdotH * NdotH * (a2 - 1.0h) + 1.0h);
    denom = 3.14159h * denom * denom;
    half D = a2 / max(denom, 0.001h);

    // Geometry term (G) using Schlick-GGX approximation
    half k = (r + 1.0h) * (r + 1.0h) / 8.0h;
    half G_L = NdotL / (NdotL * (1.0h - k) + k);
    half G_V = NdotV / (NdotV * (1.0h - k) + k);
    half G = G_L * G_V;

    // Fresnel term (F) using Schlick's approximation
    half F0 = lerp(0.04h, 0.9h, _Metallic);
    half F = F0 + (1.0h - F0) * pow(1.0h - VdotH, 5.0h);

    // Combine specular term (division by 4*NdotL*NdotV)
    half specNumerator = D * F * G;
    half specDenom = max(4.0h * NdotL * NdotV, 0.001h);
    half specularTerm = specNumerator / specDenom;
    half3 specular = att * specularTerm * unity_LightColor[idx].rgb;

    return min(diffuse + specular, 1.0);
}

// Vertex input structure
struct appdata {
    half3 pos : POSITION;
    half3 normal : NORMAL;
    half4 color : COLOR0;
    half3 uv0 : TEXCOORD0;
    half3 uv1 : TEXCOORD1;
};

// Vertex-to-fragment interpolators
struct v2f {
    half4 pos : SV_POSITION;
    half2 uv0 : TEXCOORD0;
    half2 uv1 : TEXCOORD1;
    half4 screenPosition : TEXCOORD2;
    half4 color : COLOR;
    half3 worldRefl : TEXCOORD3;
    half fresnel  : TEXCOORD4;  // New: Fresnel factor
    
    #if USING_FOG
        UNITY_FOG_COORDS(5)
    #endif
    SHADOW_COORDS(6)
};

// Main vertex shader: computes vertex lighting and shadow data
v2f vert(appdata v) {
    v2f o;
    UNITY_INITIALIZE_OUTPUT(v2f, o);

    half3 worldPos = mul(unity_ObjectToWorld, half4(v.pos, 1.0h)).xyz;
    const half3 eyePos = mul(UNITY_MATRIX_MV, half4(v.pos, 1.0h)).xyz;
    const half3 eyeNormal = normalize(mul((half3x3)UNITY_MATRIX_IT_MV, v.normal).xyz);
    const half dotProduct = 1 - saturate(dot(v.normal, eyeNormal));
    half moveColor = v.color.r + v.color.g + v.color.b;
    // --- Wind / leaf motion (wave-like, no "scaling") ---
 
    if(_LeavesOn)
    {
        _leaves_wiggle_speed *= _influence;
        //Leaf Movement and Wiggle
        ( (v.pos.x += moveColor * sin(_Time.z * v.pos.x * _leaves_wiggle_speed + (worldPos.x/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.x), //x
        (v.pos.y += moveColor * sin(_Time.w * v.pos.y * _leaves_wiggle_speed + (worldPos.y/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.y),   //y
        (v.pos.z += moveColor * sin(_Time.y * v.pos.z * _leaves_wiggle_speed + (worldPos.z/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.z) ); //z
    }              

    worldPos = mul(unity_ObjectToWorld, half4(v.pos, 1.0h)).xyz;

    half4 lightColor = half4(0,0,0,1);
    #if defined(AMBIENT_ON) || !defined(CUSTOM_LIGHTMAPPED)
        lightColor.rgb = glstate_lightmodel_ambient.rgb;
    #endif
    for (int il = 0; il < LIGHT_LOOP_LIMIT; ++il)
        lightColor.rgb += computeOneLight(il, eyePos, eyeNormal);
    lightColor.rgb += smoothstep(0.0h, 1.0h, dotProduct) * 0.15h;
    o.color = saturate(lightColor);
        
    o.uv0 = v.uv0.xy * _MainTex_ST.xy + _MainTex_ST.zw;
    #if defined(CUSTOM_LIGHTMAPPED)
        o.uv1 = v.uv1.xy * unity_LightmapST.xy + unity_LightmapST.zw;
    #endif
    o.pos = UnityObjectToClipPos(v.pos);
    o.screenPosition = ComputeScreenPos(o.pos);

    float3 worldViewDir = normalize(UnityWorldSpaceViewDir(worldPos));
    float3 worldNormal = UnityObjectToWorldNormal(v.normal);
    o.worldRefl = reflect(-worldViewDir, worldNormal);
    // Compute fresnel: higher value on grazing (when dot is low)
    o.fresnel = pow(1.0h - saturate(dot(worldNormal, worldViewDir)), 5.0h);
    UNITY_TRANSFER_FOG(o, o.pos);
    TRANSFER_SHADOW(o);
    return o;
}

// Main fragment shader
fixed4 frag(v2f v) : SV_Target {
    const half4 posLighting = v.color;
    UNITY_EXTRACT_FOG(v);
    #if defined(CUSTOM_LIGHTMAPPED)
        const half4 lightmap = UNITY_SAMPLE_TEX2D(unity_Lightmap, v.uv1.xy);
        half3 lm = DecodeLightmap(lightmap);
        #if CUSTOM_LIGHTMAPPED == 1
            const half4 lighting = half4(lm * 0.5h, 1) + posLighting;
        #endif
    #else
        const half4 lighting = 0.5h * posLighting ;
    #endif
    // Compute shadow attenuation (this value is used in the shadow receiver pass)
    fixed shadow = SHADOW_ATTENUATION(v);
    const half4 diffuse = tex2D(_MainTex, v.uv0.xy);
    const half4 moar = tex2D(_MetallicGlossMap, v.uv0.xy);
    half4 skyData = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0, v.worldRefl, (1 - moar.a) * 8);
    half3 skyColor = DecodeHDR(skyData, unity_SpecCube0_HDR);
    half3 diff = diffuse.rgb * shadow;//(diffuse.rgb, skyColor, moar.r) * shadow;
    half4 col = half4(((diff.rgb * lighting.rgb) + (skyColor * v.fresnel)) * moar.g, moar.b);

    if (!_AlphaOn) {
        fixed4 texcol = tex2D(_MainTex, v.uv0.xy);
        clip(texcol.a - _Cutoff);
    } else {
        fixed4 texcol = tex2D(_MetallicGlossMap, v.uv0.xy);
        clip(texcol.b - _Cutoff);
    }
    #if USING_FOG
        UNITY_APPLY_FOG(v.fogCoord, col);
    #endif
    return col;
}
