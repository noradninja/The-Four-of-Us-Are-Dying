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
    _Albedo("Albedo", 2D) = "white" {}
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
    Tags{
    "RenderType" = "Opaque"
    "LightMode" = "ForwardBase"
}
CGPROGRAM
#pragma vertex vert
#pragma fragment frag
#pragma target 3.0
#pragma multi_compile LIGHTMAP_ON LIGHTMAP_OFF
#pragma multi_compile_fwdbase
#include "UnityCG.cginc"
#include "AutoLight.cginc"
#include "UnityPBSLighting.cginc"
struct appdata
{
    fixed4 vertex : POSITION;
    fixed2 uv : TEXCOORD0;
    fixed2 uv1 : TEXCOORD1;
    fixed3 normal : NORMAL;
    fixed4 tangent : TANGENT;//切线方向
};

//顶点着色器输出
struct v2f
{
    fixed4 vertex : SV_POSITION;
    fixed2 uv : TEXCOORD0;
    fixed2 uv1 : TEXCOORD6;
    fixed4 TtoW0 : TEXCOORD1;
    fixed4 TtoW1 : TEXCOORD2;
    fixed4 TtoW2 : TEXCOORD3;
    LIGHTING_COORDS(4,5)
};
// These are prepopulated by Unity
// sampler2D unity_Lightmap;
// float4 unity_LightmapST;
sampler2D _Albedo;
sampler2D _Normal;
sampler2D _MetalnessMap;
fixed _BumpScale;

fixed _Metalness;
fixed _Roughness;

fixed _key;

fixed3 _Specular;
samplerCUBE _Cubemap;

fixed4 _Albedo_ST;


//定义顶点着色器
v2f vert(appdata v)
{
    v2f o;

    o.vertex = UnityObjectToClipPos(v.vertex);
    o.uv = TRANSFORM_TEX(v.uv, _Albedo);
    fixed3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
    fixed3 worldNormal = UnityObjectToWorldNormal(v.normal);
    fixed3 worldTangent = UnityObjectToWorldDir(v.tangent.xyz);
    fixed3 worldBinormal = cross(worldNormal, worldTangent) * v.tangent.w;//计算世界坐标系下的副切线方向
    //转换矩阵本身也包含信息如：worldpos
    //切线到世界坐标的转换矩阵
    o.TtoW0 = fixed4(worldTangent.x, worldBinormal.x, worldNormal.x, worldPos.x);
    o.TtoW1 = fixed4(worldTangent.y, worldBinormal.y, worldNormal.y, worldPos.y);
    o.TtoW2 = fixed4(worldTangent.z, worldBinormal.z, worldNormal.z, worldPos.z);
    o.uv1 = v.uv1.xy * unity_LightmapST.xy + unity_LightmapST.zw;
    TRANSFER_VERTEX_TO_FRAGMENT(o);
    return o;
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

//计算菲涅尔方程F（法向量与视线方向的夹角，法向量与视线方向夹角为90度时的反射率）
fixed3 fresnelSchlick(fixed3 N, fixed3 V, fixed3 F0)
{
    fixed cosTheta = max(dot(N, V), 0.0);
    return F0 + (1.0 - F0) * pow(1.0 - cosTheta, 10.0);
}

//定义片段着色器
fixed4 frag(v2f i) : SV_Target
{
    fixed3 worldPos = fixed3(i.TtoW0.w, i.TtoW1.w, i.TtoW2.w);//获取世界坐标

    fixed4 albedo = tex2D(_Albedo, i.uv);//采样固有色贴图


//获得切线坐标下的法线
    fixed3 normal = UnpackScaleNormal((tex2D(_Normal, i.uv)), _BumpScale);
////应用缩放，并计算出z分量的值
 //   normal.xyz *= _BumpScale;
//    normal.z = sqrt(1.0 - saturate(dot(normal.xy, normal.xy)));
////将法线转换到世界坐标
//    normal = normalize(fixed3(dot(i.TtoW0.xyz, normal), dot(i.TtoW1.xyz, normal), dot(i.TtoW2.xyz, normal)));
//
//    normal = normalize(fixed3(i.TtoW0.z, i.TtoW1.z, i.TtoW2.z));


    fixed4 Metalness = tex2D(_MetalnessMap, i.uv).r;//采样金属度贴图
    _Metalness *= Metalness;
    fixed4 Roughness = tex2D(_MetalnessMap, i.uv).a;//采样金属度贴图
    _Roughness *= Roughness;
    fixed3 viewDir = normalize(UnityWorldSpaceViewDir(worldPos));//视角方向

//fixed3 lightDir = normalize(_WorldSpaceLightPos0.xyz);//灯光方向
    fixed3 lightDir = normalize(UnityWorldSpaceLightDir(worldPos));

    fixed3 fixedDir = normalize(viewDir + lightDir);//fixed方向

    fixed3 reflectDir = normalize(reflect(-viewDir,normal));//反射方向
    fixed3 reflection = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0,reflectDir,_Roughness * 5).rgb;//反射目标

    fixed NDF = DistributionGGX(normal, fixedDir, _Roughness);//Cook-Torrance 的d项

    fixed G = GeometrySmith(normal, viewDir, lightDir, _Roughness);//Cook-Torrance 的g项

    fixed3 F0 = lerp(fixed3(0.04, 0.04, 0.04), albedo, _Metalness);//金属与非金属的区别
    fixed3 fresnel = fresnelSchlick(normal, viewDir, F0);//菲涅尔项

    fixed3 specular = NDF * G * fresnel / (4.0 * max(dot(normal, viewDir), 0.0) * max(dot(normal, lightDir), 0.0) + 0.001);//镜面反射部分 ps：+0.001是为了防止除零错误

    specular += lerp(specular,reflection,fresnel);

    fixed3 kD = (1.0 - fresnel) * (1.0 - Metalness);//漫反射比例

    fixed4 sh = fixed4(ShadeSH9(fixed4(normal,1)),1.0);

    fixed3 Final = (kD + albedo + specular) * _LightColor0.xyz * (max(dot(normal, lightDir), 0.0) + 0.25);//镜面反射及diffuse部分整合
    Final *= DecodeLightmap(UNITY_SAMPLE_TEX2D(unity_Lightmap, i.uv1));
    return  fixed4(Final,1.0) + 0.5h * sh * albedo;//补个环境反射的光
}
ENDCG
}

//Additive pass
Pass
{
    Tags{
    "RenderType" = "Opaque"
    "LightMode" = "ForwardAdd"
}
Blend One One
CGPROGRAM
#pragma vertex vert
#pragma fragment frag
#pragma multi_compile LIGHTMAP_ON LIGHTMAP_OFF
#pragma multi_compile_fwdadd_fullshadows
#include "UnityCG.cginc"
#include "AutoLight.cginc"
#include "UnityPBSLighting.cginc"
struct appdata
{
    fixed4 vertex : POSITION;
    fixed2 uv : TEXCOORD0;
    fixed2 uv1 : TEXCOORD1;
    fixed3 normal : NORMAL;
    fixed4 tangent : TANGENT;//切线方向
};

//顶点着色器输出
struct v2f
{
    fixed4 vertex : SV_POSITION;
    fixed2 uv : TEXCOORD0;
    fixed2 uv1 : TEXCOORD6;
    fixed4 TtoW0 : TEXCOORD1;
    fixed4 TtoW1 : TEXCOORD2;
    fixed4 TtoW2 : TEXCOORD3;
    LIGHTING_COORDS(4,5)
};

sampler2D _Albedo;
sampler2D _Normal;
sampler2D _MetalnessMap;
fixed _BumpScale;

fixed _Metalness;
fixed _Roughness;

fixed _key;

fixed3 _Specular;
samplerCUBE _Cubemap;

fixed4 _Albedo_ST;


v2f vert(appdata v)
{
    v2f o;

    o.vertex = UnityObjectToClipPos(v.vertex);
    o.uv = TRANSFORM_TEX(v.uv, _Albedo);
    fixed3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
    fixed3 worldNormal = UnityObjectToWorldNormal(v.normal);
    fixed3 worldTangent = UnityObjectToWorldDir(v.tangent.xyz);
    fixed3 worldBinormal = cross(worldNormal, worldTangent) * v.tangent.w;
    //转换矩阵本身也包含信息如：worldpos
    //切线到世界坐标的 转换矩阵
    o.TtoW0 = fixed4(worldTangent.x, worldBinormal.x, worldNormal.x, worldPos.x);
    o.TtoW1 = fixed4(worldTangent.y, worldBinormal.y, worldNormal.y, worldPos.y);
    o.TtoW2 = fixed4(worldTangent.z, worldBinormal.z, worldNormal.z, worldPos.z);
    TRANSFER_SHADOW(o);
    return o;
}

fixed DistributionGGX(fixed3 N, fixed3 H, fixed roughness)
{
fixed a = roughness*roughness;
fixed a2 = a*a;
fixed NdotH = max(dot(N, H), 0.0);
fixed NdotH2 = NdotH*NdotH;

fixed nom = a2;
fixed denom = (NdotH2 * (a2 - 1.0) + 1.0);
denom = UNITY_PI * denom * denom;

return nom / denom;
}

fixed GeometrySchlickGGX(fixed NdotV, fixed roughness)
{
fixed r = (roughness + 1.0);
fixed k = (r*r) / 8.0;

fixed nom = NdotV;
fixed denom = NdotV * (1.0 - k) + k;

return nom / denom;
}

fixed GeometrySmith(fixed3 N, fixed3 V, fixed3 L, fixed roughness)
{
fixed NdotV = max(dot(N, V), 0.0);
fixed NdotL = max(dot(N, L), 0.0);
fixed ggx2 = GeometrySchlickGGX(NdotV, roughness);
fixed ggx1 = GeometrySchlickGGX(NdotL, roughness);

return ggx1 * ggx2;
}

//计算菲涅尔方程F（法向量与视线方向的夹角，法向量与视线方向夹角为90度时的反射率）
fixed3 fresnelSchlick(fixed3 N, fixed3 V, fixed3 F0)
{
    fixed cosTheta = max(dot(N, V), 0.0);
    return F0 + (1.0 - F0) * pow(1.0 - cosTheta,10.0);
}


fixed4 frag(v2f i) : SV_Target
{
    fixed shadow = SHADOW_ATTENUATION(i);
    fixed3 worldPos = fixed3(i.TtoW0.w, i.TtoW1.w, i.TtoW2.w);

    fixed4 albedo = tex2D(_Albedo, i.uv);//采样固有色贴图

//获得切线坐标下的法线
    fixed3 normal = UnpackScaleNormal((tex2D(_Normal, i.uv)), _BumpScale);
//    normal.z = sqrt(1.0 - saturate(dot(normal.xy, normal.xy)));
////将法线转换到世界坐标
//    normal = normalize(fixed3(dot(i.TtoW0.xyz, normal), dot(i.TtoW1.xyz, normal), dot(i.TtoW2.xyz, normal)));
//
//    normal = normalize(fixed3(i.TtoW0.z, i.TtoW1.z, i.TtoW2.z));

    fixed4 Metalness = tex2D(_MetalnessMap, i.uv).r;//采样金属度贴图
    _Metalness *= Metalness;
    fixed4 Roughness = tex2D(_MetalnessMap, i.uv).a;//采样金属度贴图
    _Roughness *= Roughness;
    fixed3 viewDir = normalize(UnityWorldSpaceViewDir(worldPos));//视角方向

    #if defined(POINT) || defined(POINT_COOKIE) || defined(SPOT)
    fixed3 lightDir = normalize(_WorldSpaceLightPos0.xyz - worldPos);
    #else
    fixed3 lightDir  = _WorldSpaceLightPos0.xyz;
    #endif


//    #ifndef USING_LIGHT_MULTI_COMPILE
//    fixed atten = 1.0;
//    #else
//    fixed atten = 1.0 / (length(_WorldSpaceLightPos0.xyz - worldPos));
//    #endif
//fixed3 lightCoord = mul(unity_WorldToLight, fixed4(worldPos, 1)).xyz;
    fixed3 lightVec = _WorldSpaceLightPos0.xyz - worldPos;
    #if defined (POINT)
    fixed3 lightCoord = mul(unity_WorldToLight, fixed4(worldPos, 1)).xyz;
    fixed atten = tex2D(_LightTexture0, dot(lightCoord, lightCoord).rr).UNITY_ATTEN_CHANNEL;
    #elif defined (SPOT)
    fixed4 lightCoord = mul(unity_WorldToLight, fixed4(worldPos, 1));
    fixed atten = (lightCoord.z > 0) * tex2D(_LightTexture0, lightCoord.xy / lightCoord.w + 0.5).w * tex2D(_LightTextureB0, dot(lightCoord, lightCoord).rr).UNITY_ATTEN_CHANNEL;
    #else
    fixed atten = 1.0;
    #endif


    fixed3 fixedDir = normalize(viewDir + lightDir);//fixed方向

    fixed3 reflectDir = normalize(reflect(-viewDir,normal));//反射方向
    fixed3 reflection = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0,reflectDir,_Roughness * 5).rgb;//反射目标

    fixed3 F0 = lerp(fixed3(0.04,0.04,0.04), albedo, _Metalness);//金属与非金属的区别
    fixed3 fresnel = fresnelSchlick(normal, viewDir, F0);//菲涅尔项

    fixed NDF = DistributionGGX(normal, fixedDir, _Roughness);//Cook-Torrance 的d项

    fixed G = GeometrySmith(normal, viewDir, lightDir, _Roughness);//Cook-Torrance 的g项

    fixed3 specular = NDF * G * fresnel / (4.0 * max(dot(normal, viewDir), 0.0) * max(dot(normal, lightDir), 0.0) + 0.001);//反射部分 ps：+0.001是为了防止除零错误

    specular += lerp(specular,reflection,fresnel);

    fixed3 kD = (1.0 - fresnel) * (1.0 - Metalness);//漫反射比例

//fixed4 sh = fixed4(ShadeSH9(fixed4(normal,1)),1.0);

    fixed3 Final = (kD + albedo + specular) * shadow * atten/4 * _LightColor0.xyz * (max(dot(normal, lightDir), 0.0));//反射及diffuse部分整合
//    Final *= DecodeLightmap(UNITY_SAMPLE_TEX2D(unity_Lightmap, i.uv1));
    return  fixed4(Final,1.0);//补个环境反射的光
}
    ENDCG
}
// ------------------------------------------------------------------
//  Shadow rendering pass
Pass {
    Name "ShadowCaster"
    Tags { "LightMode" = "ShadowCaster" }

ZWrite On ZTest LEqual

CGPROGRAM
#pragma target 3.0

#pragma shader_feature _ _ALPHATEST_ON _ALPHABLEND_ON _ALPHAPREMULTIPLY_ON
#pragma shader_feature _METALLICGLOSSMAP
#pragma shader_feature _SMOOTHNESS_TEXTURE_ALBEDO_CHANNEL_A
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
//#pragma shader_feature _ _SMOOTHNESS_TEXTURE_ALBEDO_CHANNEL_A
//#pragma shader_feature ___ _DETAIL_MULX2
//#pragma shader_feature EDITOR_VISUALIZATION
//
//#include "UnityStandardMeta.cginc"
//ENDCG
//}

}
    FallBack "Standard"
}
