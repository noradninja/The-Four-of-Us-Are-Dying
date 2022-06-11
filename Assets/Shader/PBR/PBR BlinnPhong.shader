Shader "Vita/PBR BlinnPhong"
{
Properties {
	_MainTex("Albedo", 2D) = "white" {}
	_MetalnessMap("MOAR Map", 2D) = "white" {}
	_Normal("NormalMap", 2D) = "white" {}
	_BumpScale("Scale", Range(-2.0, 2.0)) = 1
	_Color ("Main Color", Color) = (1,1,1,1)                    //diffuse Color
	_SpecularColor ("Specular Color", Color) = (1,1,1,1)        //Specular Color (Not Used)
	_Glossiness("Smoothness",Range(0,1)) = 1                    //My Smoothness
	_Metallic("Metalness",Range(0.5,1)) = 0                    //My Metal Value      

}
SubShader {

Pass {
Name "FORWARD"
Tags {
	"LightMode"="ForwardBase"
	"RenderType"="Opaque"
	"Queue"="Geometry"
}
CGPROGRAM
#pragma vertex vertbase
#pragma fragment fragbase
//#define UNITY_PASS_FORWARDBASE
//#define LIGHTMAP_ON
#include "UnityCG.cginc"
#include "AutoLight.cginc"
#include "Lighting.cginc"
#include "UnityPBSLighting.cginc"
#pragma multi_compile_fwdbase_fullshadows    
#pragma multi_compile LIGHTMAP_ON LIGHTMAP_OFF
#pragma target 3.0

//samplers
sampler2D _MainTex;
sampler2D _Normal;
sampler2D _MetalnessMap;

//interpolators
half _BumpScale;
half4 _Color;
half4 _SpecularColor;
half _Glossiness;
half _Metallic;
half4 _MainTex_ST;

//Functions

//NDF- Gaussian
half GaussianNormalDistribution(half roughness, half NdotH)
{
	half roughnessSqr = roughness*roughness;
	half thetaH = acos(NdotH);
	return exp(-thetaH*thetaH/roughnessSqr);
}

//GSF- Cook-Torrance
half CookTorrenceGeometricShadowingFunction (half NdotL, half NdotV,
half VdotH, half NdotH){
	half Gs = min(1.0, min(2*NdotH*NdotV / VdotH,
	2*NdotH*NdotL / VdotH));
	return  (Gs);
}

//Unity GI data
UnityGI GetUnityGI(half3 lightColor, half3 lightDirection, half3 normalDirection,half3 viewDirection,
half3 viewReflectDirection, half attenuation, half roughness, half3 worldPos){
	//Unity light Setup ::
	UnityLight light;
	light.color = lightColor;
	light.dir = lightDirection;
	light.ndotl = max(0.0h,dot( normalDirection, lightDirection));
	UnityGIInput d;
	d.light = light;
	d.worldPos = worldPos;
	d.worldViewDir = viewDirection;
	d.atten = attenuation;
	d.ambient = 0.0h;
	d.probeHDR[0] = unity_SpecCube0_HDR;
	d.probeHDR[1] = unity_SpecCube1_HDR;
	
	#if defined(UNITY_SPECCUBE_BLENDING) || defined(UNITY_SPECCUBE_BOX_PROJECTION)
	d.boxMin[0] = unity_SpecCube0_BoxMin; // .w holds lerp value for blending
	#endif
	#ifdef UNITY_SPECCUBE_BOX_PROJECTION
	d.boxMax[0] = unity_SpecCube0_BoxMax;
	d.probePosition[0] = unity_SpecCube0_ProbePosition;
	d.boxMax[1] = unity_SpecCube1_BoxMax;
	d.boxMin[1] = unity_SpecCube1_BoxMin;
	d.probePosition[1] = unity_SpecCube1_ProbePosition;
	#endif

	Unity_GlossyEnvironmentData ugls_en_data;
	ugls_en_data.roughness = roughness;
	ugls_en_data.reflUVW = viewReflectDirection;
	UnityGI gi = UnityGlobalIllumination(d, 1.0h, normalDirection, ugls_en_data );
	return gi;
}

struct VertexInput {
	half4 vertex : POSITION;       //local vertex position
	half3 normal : NORMAL;         //normal direction
	half4 tangent : TANGENT;       //tangent direction    
	half2 texcoord0 : TEXCOORD0;   //uv coordinates
	half2 texcoord1 : TEXCOORD1;   //lightmap uv coordinates
};

struct VertexOutput {
	half4 pos : SV_POSITION;              //screen clip space position and depth
	half2 uv0 : TEXCOORD0;                //uv coordinates
	half2 uv1 : TEXCOORD1;                //lightmap uv coordinates

//below we create our own variables with the texcoord semantic. 
	half3 normalDir : TEXCOORD2;          //normal direction   
	half3 posWorld : TEXCOORD3;          //world normal direction   
	half3 tangentDir : TEXCOORD4;
	half3 bitangentDir : TEXCOORD5;
	LIGHTING_COORDS(6,7)                   //this initializes the unity lighting and shadow
	UNITY_FOG_COORDS(8)                    //this initializes the unity fog
};

VertexOutput vertbase (VertexInput v) {
	VertexOutput o;
	o.uv0 = TRANSFORM_TEX(v.texcoord0, _MainTex); //albedo
	o.uv1 =  v.texcoord1.xy * unity_LightmapST.xy + unity_LightmapST.zw;
	o.normalDir = UnityObjectToWorldNormal(v.normal);
	o.tangentDir = normalize( mul( unity_ObjectToWorld, half4( v.tangent.xyz, 0.0 ) ).xyz );
	o.bitangentDir = normalize(cross(o.normalDir, o.tangentDir) * v.tangent.w);
	o.pos = UnityObjectToClipPos(v.vertex);
	o.posWorld = mul(unity_ObjectToWorld, v.vertex);
	UNITY_TRANSFER_FOG(o,o.pos);
	TRANSFER_VERTEX_TO_FRAGMENT(o)
	return o;
}



half4 fragbase(VertexOutput i) : COLOR {

// direction calculations
	half3 normalDirection = i.normalDir;
	half3 lightDirection = normalize(lerp(_WorldSpaceLightPos0.xyz, _WorldSpaceLightPos0.xyz 
																	- i.posWorld.xyz,_WorldSpaceLightPos0.w));

	half3 viewDirection = normalize(_WorldSpaceCameraPos.xyz - i.posWorld.xyz);
	half3 viewReflectDirection = normalize(reflect( -viewDirection, normalDirection ));
	half3 halfDirection = normalize(viewDirection+lightDirection);

	half NdotL = max(0.0,dot(normalDirection, lightDirection));
	half NdotH = max(0.0,dot(normalDirection, halfDirection));
	half NdotV = max(0.0,dot(normalDirection, viewDirection));
	half VdotH = max(0.0,dot(viewDirection, halfDirection));

	half attenuation = LIGHT_ATTENUATION(i);
	half3 attenColor = attenuation * _LightColor0.rgb;

//basic inputs
	half3 diffuseColor = _Color.rgb * tex2D(_MainTex, i.uv0);
	half metalness = _Metallic + tex2D(_MetalnessMap, i.uv0).r;
	half occlusion = tex2D(_MetalnessMap, i.uv0).g;
	half roughness = 1- (_Glossiness * _Glossiness);   // 1 - smoothness*smoothness
	roughness = roughness * roughness;

	half3 baseFresnel =  (1 - saturate(dot(normalDirection, viewDirection))); // per vert fresnel
	half3 Fresnel = Pow4(baseFresnel) * occlusion;


	half3 specColor = lerp(diffuseColor, _SpecularColor.rgb, Fresnel) * occlusion;

	half4 reflectionSample = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0,viewReflectDirection, roughness * 10);
	half3 reflection = DecodeHDR (reflectionSample, unity_SpecCube0_HDR);
	reflection *= metalness;

//PRB Functs
	half3 NDF = specColor;
	NDF *= GaussianNormalDistribution(roughness, NdotH); // Gaussian NDF

	half GSF = 1;
	GSF *= CookTorrenceGeometricShadowingFunction (NdotL, NdotV, VdotH, NdotH); // Cook-Torrence NDF

//PBR
	half3 specularity = (NDF * GSF) /4.0* ((  NdotL * NdotV));
	half3 lightingModel = ((diffuseColor + specularity + reflection) + Fresnel);
	lightingModel += NdotL;
	half3 contrib;
//	#if defined(LIGHTMAP_ON)
	half3 lm =  DecodeLightmap(UNITY_SAMPLE_TEX2D(unity_Lightmap, i.uv1));
	contrib = lm * occlusion;
//	#else
//	half4 sh = half4(ShadeSH9(half4(normal,1)),1.0);
//	contrib = sh;// * Occlusion;
//	#endif
	half4 finalDiffuse = half4(lightingModel * contrib,1);

	UNITY_APPLY_FOG(i.fogCoord, finalDiffuse);// apply fog
	//return half4(lightingModel,1);
	return finalDiffuse;
}
ENDCG
		}
	}
	Fallback "Standard"
}
