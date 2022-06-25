Shader "Vita/PBR BlinnPhong"
{
Properties {
	_MainTex("Albedo", 2D) = "white" {}
	_MetalnessMap("MOAR Map", 2D) = "white" {}
	_Normal("NormalMap", 2D) = "white" {}
	_BumpScale("Scale", Range(-2.0, 2.0)) = 1
	_Color ("Main Color", Color) = (1,1,1,1)                    //diffuse Color
	_SpecularColor ("Specular Color", Color) = (1,1,1,1)        //Specular Color (Not Used)
	_Glossiness("Smoothness",Range(0,0.99)) = 1                    //My Smoothness
	_Metallic("Metalness",Range(0.0,1)) = 0                    //My Metal Value      

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

half G1V(half NdotV, half k)
{
	return 1.0/(NdotV*(1.0-k)+k);
}

half SpecGGX(half3 NdotL, half3 NdotH, half3 NdotV, half3 LdotH, half roughness, half F0 )
{
	half SqrRoughness = roughness*roughness;
	
	// Geom term
	half RoughnessPow4 = SqrRoughness*SqrRoughness;
	half pi = 3.14159;
	half denom = NdotH * NdotH *(RoughnessPow4-1.0) + 0.6;
	half D = RoughnessPow4/(pi * denom * denom);

	// Fresnel term 
	half LdotH5 = 1.0-LdotH;
	LdotH5 = LdotH5*LdotH5*LdotH5*LdotH5*LdotH5;
	half F = F0 + (1.0-F0)*(LdotH5);

	// Vis term 
	half k = SqrRoughness/2.0;
	half Vis = G1V(NdotL,k)*G1V(NdotV,k);

	half specular = NdotL * D * F * Vis;

	return specular;
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
	fixed3 normal = UnpackScaleNormal((tex2D(_Normal, i.uv0)), _BumpScale);
	half3 normalDirection = i.normalDir * normal;
	half3 lightDirection = normalize(lerp(_WorldSpaceLightPos0.xyz, _WorldSpaceLightPos0.xyz 
																	- i.posWorld.xyz,_WorldSpaceLightPos0.w));

	half3 viewDirection = normalize(_WorldSpaceCameraPos.xyz - i.posWorld.xyz);
	half3 viewReflectDirection = normalize(reflect( -viewDirection, normalDirection ));
	half3 halfDirection = normalize(viewDirection+lightDirection);

	half NdotL = max(0.0,dot(normalDirection, lightDirection));
	half NdotH = max(0.0,dot(normalDirection, halfDirection));
	half NdotV = max(0.0,dot(normalDirection, viewDirection));
	half VdotH = max(0.0,dot(viewDirection, halfDirection));
	half LdotH = max(0.0, dot(lightDirection, halfDirection));

	half attenuation = LIGHT_ATTENUATION(i);
	half3 attenColor = attenuation * _LightColor0.rgb;

//basic inputs
	half3 diffuseColor = _Color.rgb * tex2D(_MainTex, i.uv0);
	half metalness = _Metallic + tex2D(_MetalnessMap, i.uv0).r;
	half occlusion = tex2D(_MetalnessMap, i.uv0).g;
	half roughness = 1- (_Glossiness * _Glossiness);   // 1 - smoothness*smoothness
	roughness = roughness * roughness;
	half4 reflectionSample = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0,viewReflectDirection, roughness * 10);
	half3 reflection = DecodeHDR (reflectionSample, unity_SpecCube0_HDR);
	metalness = (metalness * roughness * reflection);
	//reflection = reflection/8;

// Compute light contribution
	half Diffuse = NdotL;
//SpecGGX(half3 NdotL, half3 NdotH, half3 NdotV, half3 LdotH, half roughness, half F0 )
	half Spec = SpecGGX(NdotL, NdotH, NdotV, LdotH, roughness, metalness);

// Fresnel
	half3 baseFresnel =  (1 - saturate(dot(normalDirection, viewDirection))); // per vert fresnel
	half3 Fresnel = Pow4(baseFresnel);

//NdotV = pow(1.0-NdotV,5.0);
//	half Fresnel = metalness + (1.0-metalness)*(NdotV);

// Tint lights
	half3 SpecColor = Spec *  _LightColor0.rgb;
	half3 DiffColor = diffuseColor * _LightColor0.rgb;


//PRB Functs
//	half3 NDF = SpecColor;
//	NDF *= GaussianNormalDistribution(roughness, NdotH); // Gaussian NDF
//
//	half GSF = 1;
//	GSF *= CookTorrenceGeometricShadowingFunction (NdotL, NdotV, VdotH, NdotH); // Cook-Torrence NDF

//PBR
	half3 specularity = 1;
	half4 sh = half4(ShadeSH9(half4(normal,1)),1.0);
	half3 lightSum =  max(((DiffColor + SpecColor)*(1.0-half3(0.4, 0.4, 0.4)) ),half3(0.0,0.0,0.0));


	half3 lightingModel = ((SpecColor + DiffColor) + (Fresnel * reflection)) * 0.65;
	lightingModel += NdotL;
	half3 contrib;
//	#if defined(LIGHTMAP_ON)
	half3 lm =  DecodeLightmap(UNITY_SAMPLE_TEX2D(unity_Lightmap, i.uv1));
	//contrib = lm * occlusion;
//	#else

	contrib = sh;// * Occlusion;
//	#endif
	half4 finalDiffuse = half4(lightingModel,1);
	
	UNITY_APPLY_FOG(i.fogCoord, finalDiffuse);// apply fog
//	return half4(DiffColor,1);
	return half4(SpecColor + DiffColor + (Fresnel * reflection),1) * (NdotL) ;
//	return half4(SpecColor  + (Fresnel + metalness) + DiffColor,1);
//	return half4(lightSum + (Fresnel * reflection * sh),1);
//	return half4 (lightSum,1);
//	return half4(SpecColor,1);

	return finalDiffuse;
}
ENDCG
		}
	}
	Fallback "Standard"
}
/*
const half cDetailNormalPower = 0.3;

half3 gv3View = half3(0.0,0.0,-1.0);
half3 gv3LightDir = half3(0.0,0.0,-1.0);
half3  _LightColor0.rgb = half3(1.0,1.0,1.0);


half G1V(half NdotV, half k)
{
	return 1.0/(NdotV*(1.0-k)+k);
}

half SpecGGX(half3 N, half3 V, half3 L, half roughness, half F0 )
{
	half SqrRoughness = roughness*roughness;

	half3 H = normalize(V+L);

	half NdotL = clamp(dot(N,L),0.0,1.0);
	half NdotV = clamp(dot(N,V),0.0,1.0);
	half NdotH = clamp(dot(N,H),0.0,1.0);
	half LdotH = clamp(dot(L,H),0.0,1.0);

	// Geom term
	half RoughnessPow4 = SqrRoughness*SqrRoughness;
	half pi = 3.14159;
	half denom = NdotH * NdotH *(RoughnessPow4-1.0) + 1.0;
	half D = RoughnessPow4/(pi * denom * denom);

	// Fresnel term 
	half LdotH5 = 1.0-LdotH;
    LdotH5 = LdotH5*LdotH5*LdotH5*LdotH5*LdotH5;
	half F = F0 + (1.0-F0)*(LdotH5);

	// Vis term 
	half k = SqrRoughness/2.0;
	half Vis = G1V(NdotL,k)*G1V(NdotV,k);

	half specular = NdotL * D * F * Vis;
    
	return specular;
}

half3 GetGIReflexion(in half3 Normal, in half Roughness)
{
    half3 R0 = texture (iChannel1,reflect(-Normal,gv3View) ).rgb;
    half3 R1 = texture (iChannel2,reflect(-Normal,gv3View) ).rgb;
    return mix ( R0, R1, Roughness );
}

half3 Sphere( in vec2 uv, in vec2 center, in half radius, in half roughness, in half metalness )
{        
    vec2 delta = center-uv;
    
    half l = dot ( delta, delta);     
    
    half sqrRadius = radius*radius;
        
    l = ((sqrRadius - l) / sqrRadius);
    l = max ( l, 0.0 );     
    
    half IsInSphere = 1.0-step(l,0.0);
    delta = delta;
    
    // Compute normal
    half3 normal = half3(delta.xy/radius,radius-sqrt(l));
    normal = normalize ( normal );   
    
    // Generate UV from normal
    vec2 texUV = normal.xy/normal.z;    
    texUV = texUV+vec2(0.5,0.5);        
    half3 textureColor = texture(iChannel0,texUV).rgb;
    
    // Use albedo R as a tangent space normal map
    normal.xyz += textureColor.r * cDetailNormalPower;
    normal = normalize ( normal );    

    // Compute light contribution
    half Diffuse = dot ( normal, gv3LightDir );
    half Spec = SpecGGX(normal,gv3View,gv3LightDir,roughness,metalness);
     
    // Fresnel
    half NdotV = clamp(dot(normal,gv3View),0.0,1.0);
	NdotV = pow(1.0-NdotV,5.0);    
	half Fresnel = metalness + (1.0-metalness)*(NdotV);

    // Tint lights
    half3 SpecColor = Spec *  _LightColor0.rgb;
    half3 DiffColor = Diffuse *  _LightColor0.rgb * (1.0 - Fresnel);
    
    // Add GI
    const half	cAmbientMin = 0.04;    
    half		ambient = cAmbientMin * (IsInSphere);    
    half3		ColorAmbient = half3(ambient,ambient,ambient);
    half3		GIReflexion = GetGIReflexion ( normal, roughness );
    
    
    ColorAmbient = GIReflexion * cAmbientMin;
        
    half3 lightSum = max(((DiffColor + SpecColor)*(1.0-cAmbientMin) ),half3(0.0,0.0,0.0));
       
    return ( lightSum + ColorAmbient + ( Fresnel * GIReflexion ) ) * IsInSphere;
      
}

void mainImage( out vec4 fragColor, in vec2 fragCoord )
{	    
    // Compute normalized UV
    vec2 uv = fragCoord.xy / iResolution.xy;    
    // Adapt coord to aspect ratio
    uv = uv * vec2(1.0,iResolution.y/iResolution.x);
    
    
    // Rotate light
    gv3LightDir = half3(sin(iTime),cos(iTime)+0.2,cos(iTime));
    gv3LightDir = normalize (gv3LightDir);
        
    // Compute all spheres lighting
    half3 color = half3(0.0,0.0,0.0);	
    for ( half Roughness=0.05; Roughness<1.0; Roughness+=0.1)
    {
        for ( half metalness=0.05; metalness<1.0; metalness+=0.1)
        {
            const half Radius = 0.04;
            color += Sphere ( uv,vec2( Roughness , metalness*0.8 ), Radius, Roughness, metalness );
        }
    }    
    
    
	fragColor = vec4 (color,1.0);
}
*/