// Upgrade NOTE: replaced tex2D unity_Lightmap with UNITY_SAMPLE_TEX2D

// Upgrade NOTE: replaced tex2D unity_Lightmap with UNITY_SAMPLE_TEX2D

// Upgrade NOTE: replaced tex2D unity_Lightmap with UNITY_SAMPLE_TEX2D

// Upgrade NOTE: commented out 'float4 unity_LightmapST', a built-in variable
// Upgrade NOTE: commented out 'sampler2D unity_Lightmap', a built-in variable

// Upgrade NOTE: commented out 'float4 unity_LightmapST', a built-in variable
// Upgrade NOTE: commented out 'sampler2D unity_Lightmap', a built-in variable

// Upgrade NOTE: replaced tex2D unity_Lightmap with UNITY_SAMPLE_TEX2D

// Upgrade NOTE: commented out 'fixed4 unity_LightmapST', a built-in variable

// Upgrade NOTE: commented out 'fixed4 unity_LightmapST', a built-in variable

// Upgrade NOTE: commented out 'fixed4 unity_LightmapST', a built-in variable
// Upgrade NOTE: replaced tex2D unity_Lightmap with UNITY_SAMPLE_TEX2D

Shader "Vita/PBRShader"
{
Properties
{
    _MainTex("Albedo", 2D) = "white" {}
_MetalnessMap("MOAR Map", 2D) = "white" {}
_Normal("NormalMap", 2D) = "white" {}
_BumpScale("Scale", Range(-2.0, 2.0)) = 1

_Metalness("Metalness", Range(0.0, 1)) = 0.5
_Roughness("Roughness", Range(0.0, 1)) = 1

_Specular("Specular", Color) = (1,1,1,1)
}
SubShader
{
    LOD 100
    Pass
{
    Name "FORWARD"
    Tags{
    "RenderType" = "Opaque"
    "LightMode" = "ForwardBase"
}
ZWrite On
ZTest LEqual
Blend One Zero
CGPROGRAM
#pragma vertex vert
#pragma fragment frag
#pragma target 3.0
#pragma multi_compile LIGHTMAP_ON LIGHTMAP_OFF
#pragma multi_compile_fwdbase
#pragma shader_feature _ _SPECULARHIGHLIGHTS_OFF
#pragma shader_feature _ _GLOSSYREFLECTIONS_OFF
#include "UnityCG.cginc"
#include "AutoLight.cginc"
#include "UnityPBSLighting.cginc"


struct appdata
{
    fixed4 vertex : POSITION;
    fixed2 uv0 : TEXCOORD0;
    fixed2 uv1 : TEXCOORD1;
    fixed3 normal : NORMAL;
    fixed4 tangent : TANGENT;//切线方向
};


//顶点着色器输出
struct v2f
{
    fixed4 vertex : SV_POSITION;
    float2 uv0 : TEXCOORD0;
    float2 uv1 : TEXCOORD1;
    fixed4 TtoW0 : TEXCOORD2;
    fixed4 TtoW1 : TEXCOORD3;
    fixed4 TtoW2 : TEXCOORD4;
    fixed3 normal : NORMAL;
    LIGHTING_COORDS(5,6)
    half3 worldPos : TEXCOORD7;
    half3 worldNormal : TEXCOORD8;
};

sampler2D _MainTex;
sampler2D _Normal;
sampler2D _MetalnessMap;
fixed _BumpScale;


fixed _Metalness;
fixed _Roughness;

fixed3 _Specular;
float4 _MainTex_ST;


//定义顶点着色器
 v2f vert(appdata v)
{
    v2f o;

    o.vertex = UnityObjectToClipPos(v.vertex);
    o.uv0 = TRANSFORM_TEX(v.uv0, _MainTex);
    fixed3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
    fixed3 worldNormal = UnityObjectToWorldNormal(v.normal);
    fixed3 worldTangent = UnityObjectToWorldDir(v.tangent.xyz);
    fixed3 worldBinormal = cross(worldNormal, worldTangent) * v.tangent.w;
    o.TtoW0 = fixed4(worldTangent.x, worldBinormal.x, worldNormal.x, worldPos.x);
    o.TtoW1 = fixed4(worldTangent.y, worldBinormal.y, worldNormal.y, worldPos.y);
    o.TtoW2 = fixed4(worldTangent.z, worldBinormal.z, worldNormal.z, worldPos.z);
    o.uv1 = v.uv1.xy * unity_LightmapST.xy + unity_LightmapST.zw;
    o.normal = v.normal;
    o.worldPos = worldPos;
    o.worldNormal = worldNormal;
    TRANSFER_VERTEX_TO_FRAGMENT(o);
    return o;
}

//NDF- Gaussian
float GaussianNormalDistribution(float roughness, float NdotH)
{
    float roughnessSqr = roughness*roughness;
    float thetaH = acos(NdotH);
    return exp(-thetaH*thetaH/roughnessSqr);
}
//计算法线分布函数D（法向量，半角向量，粗糙度）

fixed DistributionGGX(fixed3 N, fixed3 H, fixed roughness)
{
fixed a = roughness * roughness;
fixed a2 = a * a;
fixed NdotH = max(dot(N, H), 0.0);
fixed NdotH2 = NdotH*NdotH;

fixed nom = a2;//分子
fixed denom = (NdotH2 * (a2 - 1.0) + 1.0);
denom = UNITY_PI * denom * denom;//分母

return nom / denom;
}

//计算几何遮蔽函数G1（向量与法向量夹角值，粗糙度）
fixed GeometrySchlickGGX(fixed NdotV, fixed roughness)
{
fixed r = (roughness + 1.0);
fixed k = (r * r) / 8.0;

fixed nom = NdotV;
fixed denom = NdotV * (1.0 - k) + k;

return nom / denom;
}

//计算双向几何遮蔽函数G（法向量，视线方向，入射方向，粗糙度）
fixed GeometrySmith(fixed3 N, fixed3 V, fixed3 L, fixed roughness)
{
fixed NdotV = max(dot(N, V), 0.0);
fixed NdotL = max(dot(N, L), 0.0);
fixed ggx2 = GeometrySchlickGGX(NdotV, roughness);
fixed ggx1 = GeometrySchlickGGX(NdotL, roughness);

return ggx1 * ggx2;
}


fixed4 frag(v2f v) : SV_Target
{
    fixed4 albedo = tex2D(_MainTex, v.uv0);//采样固有色贴图

    fixed3 normal = UnpackScaleNormal((tex2D(_Normal, v.uv0)), _BumpScale);
    half3 normalWorld = v.worldNormal;

    fixed4 Metalness = tex2D(_MetalnessMap, v.uv0).r;//采样金属度贴图
    Metalness *= _Metalness;
    fixed4 Roughness = tex2D(_MetalnessMap, v.uv0).a;//采样金属度贴图
    Roughness *= _Roughness;
    fixed4 Occlusion = tex2D(_MetalnessMap, v.uv0).g;//采样金属度贴图
    fixed3 viewDir =  normalize(_WorldSpaceCameraPos.xyz - v.worldPos.xyz);//视角方向

    fixed3 lightDir = normalize(_WorldSpaceLightPos0.xyz);//灯光方向


    fixed3 halfDir = normalize(viewDir + lightDir);//fixed方向
    half3 worldViewDir = normalize(UnityWorldSpaceViewDir(v.worldPos)); //Direction of ray from the camera towards the object surface
    half3 reflectDir = reflect(-worldViewDir, v.worldNormal); // Direction of ray after hitting the surface of object
    float4 reflectionSample = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0,reflectDir, Roughness * 10);
    float3 reflection = DecodeHDR (reflectionSample, unity_SpecCube0_HDR);
    reflection *= Metalness;
    float NdotH =  max(0.0,dot( normal, halfDir));
    fixed NDF = // DistributionGGX(normal, halfDir, Roughness);//Cook-Torrance 的d项
                 GaussianNormalDistribution(Roughness,NdotH); // Gaussian NDF

    fixed G = GeometrySmith(normal, viewDir, lightDir, Roughness);//Cook-Torrance 的g项

    fixed3 fresnel =  Pow4(1 - saturate(dot(normalWorld, -viewDir)));
    fixed3 specular = NDF * G / (4.0 * max(dot(normal, viewDir), 0.0) * max(dot(normal, lightDir), 0.0) + 0.001);//镜面反射部分 ps：+0.001是为了防止除零错误

    specular += lerp(specular,reflection,fresnel);
    //specular *= Occlusion;

    fixed3 kD = (1.0 - fresnel) * (1.0 - Metalness);//漫反射比例

    //fixed4 sh = fixed4(ShadeSH9(fixed4(normal,1)),1.0);

    fixed3 Final = (albedo + specular + kD) * _LightColor0.xyz * (max(dot(normal, lightDir), 0.0)) + (0.25* fresnel)* Occlusion;//镜面反射及diffuse部分整合

//    #if defined(LIGHTMAP_ON)
    fixed3 contrib;
    fixed3 lm =  DecodeLightmap(UNITY_SAMPLE_TEX2D(unity_Lightmap, v.uv1.xy));
    contrib = lm * 2;
//    #else
//    contrib = sh;
//    #endif
   // return half4((fresnel + fresnel) *  reflection,1);
    return fixed4(Final * contrib,1) + 0.125 * albedo;
}
ENDCG
}

//Additive pass
//Pass
//{
//    Name "FORWARD_DELTA"
//    Tags{
//
//    "RenderType" = "Opaque"
//    "LightMode" = "ForwardAdd"
//}
//Fog { Color (0,0,0,0) } // in additive pass fog should be black
//ZWrite Off
//ZTest LEqual
//Blend One One
//CGPROGRAM
//#pragma vertex vert
//#pragma fragment frag
//#pragma multi_compile LIGHTMAP_ON LIGHTMAP_OFF
//#pragma multi_compile_fwdadd_fullshadows
//#pragma shader_feature _ _SPECULARHIGHLIGHTS_OFF
//
//#include "UnityCG.cginc"
//#include "AutoLight.cginc"
//#include "UnityPBSLighting.cginc"
//struct appdata
//{
//    fixed4 vertex : POSITION;
//    fixed2 uv0 : TEXCOORD0;
//    fixed2 uv1 : TEXCOORD1;
//    fixed3 normal : NORMAL;
//    fixed4 tangent : TANGENT;//切线方向
//};
//
//
////顶点着色器输出
//struct v2f
//{
//    fixed4 vertex : SV_POSITION;
//    float2 uv0 : TEXCOORD0;
//    float2 uv1 : TEXCOORD1;
//    fixed4 TtoW0 : TEXCOORD2;
//    fixed4 TtoW1 : TEXCOORD3;
//    fixed4 TtoW2 : TEXCOORD4;
//    fixed3 normal : NORMAL;
//    LIGHTING_COORDS(5,6)
//    fixed3 worldPos : TEXCOORD7;
//};
//
//sampler2D _MainTex;
//sampler2D _Normal;
//sampler2D _MetalnessMap;
//fixed _BumpScale;
//
//fixed _Metalness;
//fixed _Roughness;
//
//fixed3 _Specular;
//float4 _MainTex_ST;
//
//
//v2f vert(appdata v)
//{
//    v2f o; 
//
//    o.vertex = UnityObjectToClipPos(v.vertex);
//    o.uv0 = TRANSFORM_TEX(v.uv0, _MainTex);
//    fixed3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
//    fixed3 worldNormal = UnityObjectToWorldNormal(v.normal);
//    fixed3 worldTangent = UnityObjectToWorldDir(v.tangent.xyz);
//    fixed3 worldBinormal = cross(worldNormal, worldTangent) * v.tangent.w;
//
//    o.TtoW0 = fixed4(worldTangent.x, worldBinormal.x, worldNormal.x, worldPos.x);
//    o.TtoW1 = fixed4(worldTangent.y, worldBinormal.y, worldNormal.y, worldPos.y);
//    o.TtoW2 = fixed4(worldTangent.z, worldBinormal.z, worldNormal.z, worldPos.z);
//    TRANSFER_SHADOW(o);
//    return o;
//}
//
////NDF- Gaussian
//float GaussianNormalDistribution(float roughness, float NdotH)
//{
//    float roughnessSqr = roughness*roughness;
//    float thetaH = acos(NdotH);
//    return exp(-thetaH*thetaH/roughnessSqr);
//}
//
//fixed DistributionGGX(fixed3 N, fixed3 H, fixed roughness)
//{
//fixed a = roughness*roughness;
//fixed a2 = a*a;
//fixed NdotH = max(dot(N, H), 0.0);
//fixed NdotH2 = NdotH*NdotH;
//
//fixed nom = a2;
//fixed denom = (NdotH2 * (a2 - 1.0) + 1.0);
//denom = UNITY_PI * denom * denom;
//
//return nom / denom;
//}
//
//fixed GeometrySchlickGGX(fixed NdotV, fixed roughness)
//{
//fixed r = (roughness + 1.0);
//fixed k = (r*r) / 8.0;
//
//fixed nom = NdotV;
//fixed denom = NdotV * (1.0 - k) + k;
//
//return nom / denom;
//}
//
//fixed GeometrySmith(fixed3 N, fixed3 V, fixed3 L, fixed roughness)
//{
//fixed NdotV = max(dot(N, V), 0.0);
//fixed NdotL = max(dot(N, L), 0.0);
//fixed ggx2 = GeometrySchlickGGX(NdotV, roughness);
//fixed ggx1 = GeometrySchlickGGX(NdotL, roughness);
//
//return ggx1 * ggx2;
//}
//
//fixed4 frag(v2f v) : SV_Target
//{
//    fixed shadow = SHADOW_ATTENUATION(v);
//    fixed3 worldPos = fixed3(v.TtoW0.w, v.TtoW1.w, v.TtoW2.w);
//
//    fixed4 albedo = tex2D(_MainTex, v.uv0);
//
//
//    fixed3 normal = UnpackScaleNormal((tex2D(_Normal, v.uv0)), _BumpScale);
//    half3 normalWorld = UnityObjectToWorldNormal(v.normal);
//
//    fixed4 Metalness = tex2D(_MetalnessMap, v.uv0).r;//采样金属度贴图
//    _Metalness *= Metalness;
//    fixed4 Roughness = tex2D(_MetalnessMap, v.uv0).a;//采样金属度贴图
//    _Roughness *= Roughness;
//    fixed4 Occlusion = tex2D(_MetalnessMap, v.uv0).g;//采样金属度贴图
//    fixed3 viewDir =  normalize(v.worldPos - _WorldSpaceCameraPos);//视角方向
//
//    #if defined(POINT) || defined(POINT_COOKIE) || defined(SPOT)
//    fixed3 lightDir = normalize(_WorldSpaceLightPos0.xyz - worldPos);
//    #else
//    fixed3 lightDir  = _WorldSpaceLightPos0.xyz;
//    #endif
//
//
//    fixed3 lightVec = _WorldSpaceLightPos0.xyz - worldPos;
//    #if defined (POINT)
//    fixed3 lightCoord = mul(unity_WorldToLight, fixed4(worldPos, 1)).xyz;
//    fixed atten = tex2D(_LightTexture0, dot(lightCoord, lightCoord).rr).UNITY_ATTEN_CHANNEL;
//    #elif defined (SPOT)
//    fixed4 lightCoord = mul(unity_WorldToLight, fixed4(worldPos, 1));
//    fixed atten = (lightCoord.z > 0) * tex2D(_LightTexture0, lightCoord.xy / lightCoord.w + 0.5).w * tex2D(_LightTextureB0, dot(lightCoord, lightCoord).rr).UNITY_ATTEN_CHANNEL;
//    #else
//    fixed atten = 1.0;
//    #endif
//
//
//    fixed3 halfDir = normalize(viewDir + lightDir);//fixed方向
//
//    fixed3 reflectDir = normalize(reflect(-viewDir,v.normal));//反射方向
//    fixed3 reflection = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0,reflectDir,_Roughness * 5).rgb;//反射目标
//
//    fixed NDF = //DistributionGGX(normal, halfDir, Roughness);//Cook-Torrance 的d项
//                GaussianNormalDistribution(Roughness, dot(normal, halfDir)); // Gaussian NDF   
//    fixed G = GeometrySmith(normal, viewDir, lightDir, Roughness);//Cook-Torrance 的g项
//
//    fixed3 fresnel =  Pow4(1 - saturate(dot(normalWorld, -viewDir)));
//
//    fixed3 specular = NDF * G * fresnel / (4.0 * max(dot(normal, viewDir), 0.0) * max(dot(normal, lightDir), 0.0) + 0.001);//镜面反射部分 ps：+0.001是为了防止除零错误
//
//    specular += lerp(specular,reflection,fresnel);
//    specular *= Occlusion;
//
//    fixed3 kD = (1.0 - fresnel) * (1.0 - Metalness);//漫反射比例
//
//    fixed4 sh = fixed4(ShadeSH9(fixed4(normal,1)),1.0);
//
//    fixed3 Final = (albedo + specular) * shadow * atten/4 * _LightColor0.xyz * (max(dot(normal, lightDir), 0.0));//反射及diffuse部分整合
//   // Final *= DecodeLightmap(UNITY_SAMPLE_TEX2D(unity_Lightmap, v.uv1));
//    return  fixed4(Final,1.0);//补个环境反射的光
//}
//    ENDCG
//}
// ------------------------------------------------------------------
//  Shadow rendering pass
Pass {
    Name "ShadowCaster"
    Tags { "LightMode" = "ShadowCaster" }

ZWrite On ZTest LEqual

CGPROGRAM
#pragma target 3.0

//#pragma shader_feature _ _ALPHATEST_ON _ALPHABLEND_ON _ALPHAPREMULTIPLY_ON
//#pragma shader_feature _METALLICGLOSSMAP
//#pragma shader_feature _SMOOTHNESS_TEXTURE_MainTex_CHANNEL_A
#pragma skip_variants SHADOWS_SOFT
#pragma multi_compile_shadowcaster

#pragma vertex vertShadowCaster
#pragma fragment fragShadowCaster

#include "UnityStandardShadow.cginc"

ENDCG
}

// ------------------------------------------------------------------
// Extracts information for lightmapping, GI (emission, albedo, ...)
// This pass it not used during regular rendering.
//Pass
//{
//    Name "META"
//    Tags { "LightMode"="Meta" }
//
//Cull Off
//
//CGPROGRAM
//#pragma vertex vert_meta
//#pragma fragment frag_meta
//
//#pragma shader_feature _EMISSION
//#pragma shader_feature _METALLICGLOSSMAP
//#pragma shader_feature _ _SMOOTHNESS_TEXTURE_MainTex_CHANNEL_A
//#pragma shader_feature ___ _DETAIL_MULX2
//#pragma shader_feature EDITOR_VISUALIZATION
//
//#include "UnityStandardMeta.cginc"
//ENDCG
//}

}
   // FallBack "Standard"
}
