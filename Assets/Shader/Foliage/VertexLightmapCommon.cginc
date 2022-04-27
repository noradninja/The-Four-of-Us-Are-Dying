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

// Compute attenuation & illumination from one light
half3 computeOneLight(int idx, half3 eyePosition, half3 eyeNormal) {

	half3 dirToLight = unity_LightPosition[idx].xyz;
	half att = 1.0h;

	#if defined(POINT) || defined(SPOT)
		dirToLight -= eyePosition * unity_LightPosition[idx].w;
		
		// distance attenuation
		half distSqr = dot(dirToLight, dirToLight);
		att /= (1.0h + unity_LightAtten[idx].z * distSqr);

		if (unity_LightPosition[idx].w != 0.0h &&
			distSqr > unity_LightAtten[idx].w) 
			att = 0.0h; // set to 0 if outside of range

		dirToLight *= rsqrt(distSqr);

	#if defined(SPOT)
		// spot angle attenuation
		half rho = max(dot(dirToLight, unity_SpotDirection[idx].xyz), 0.0h);
		half spotAtt = (rho - unity_LightAtten[idx].x) * unity_LightAtten[idx].y;
		att *= saturate(spotAtt);
	#endif

	#endif
		att *= 0.5h; // passed v light colors are 2x brighter than what used to be v FFP

	const half NdotL = max(dot(eyeNormal, dirToLight), 0.0h);
		
		// diffuse
	const half3 color = att * NdotL * unity_LightColor[idx].rgb;

		return min(color, 1.0);
}

// uniforms
int4 unity_VertexLightParams; // x: light count, y: zero, z: one (y/z needed by d3d9 vs loop instruction)
sampler2D _MainTex;
half4 _MainTex_ST;
half _Cutoff;
half4 _wind_dir;
half _wind_size;
half _leaves_wiggle_disp;
half _leaves_wiggle_speed;
half _influence;


// pos shader input data
struct appdata {
	half3 pos : POSITION;
	half3 normal : NORMAL;
	half3 uv0 : TEXCOORD0;
	half3 uv1 : TEXCOORD1;
};

// pos-to-fragment interpolators
struct v2f {
	half4 pos : SV_POSITION;
	half4 color : COLOR0;
	half2 uv0 : TEXCOORD0;
	half2 uv1 : TEXCOORD1;
	half4 screenPosition : TEXCOORD2;
	
	#if USING_FOG
            UNITY_FOG_COORDS(3)
	#endif


};

// pos shader
v2f vert(appdata v) {

	v2f o;
	UNITY_INITIALIZE_OUTPUT(v2f, o);

	half3 worldPos = mul (unity_ObjectToWorld, half4(v.pos, 1.0h) ).xyz;
	const half3 eyePos = mul(UNITY_MATRIX_MV, half4(v.pos, 1.0h) ).xyz;
	const half3 eyeNormal = normalize(mul( (half3x3)UNITY_MATRIX_IT_MV, v.normal).xyz);
	const half dotProduct = 1 - saturate ( dot(v.normal, eyeNormal) );
 	

	//Leaf Movement and Wiggle
	( (v.pos.x += cos(_Time.z * v.pos.x * _leaves_wiggle_speed + (worldPos.x/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.x * _influence), //x
	(v.pos.y += sin(_Time.w * v.pos.y * _leaves_wiggle_speed + (worldPos.y/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.y * _influence),   //y
	(v.pos.z += sin(cos(_Time.y * v.pos.z * _leaves_wiggle_speed + (worldPos.z/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.z * _influence) )); //z
                    
	// pos lighting
	half4 color = half4(0, 0, 0, 1);

	#if defined(AMBIENT_ON) || !defined(CUSTOM_LIGHTMAPPED)
		color.rgb = glstate_lightmodel_ambient.rgb;
	#endif

	for (int il = 0; il < LIGHT_LOOP_LIMIT; ++il) {
		color.rgb += computeOneLight(il, eyePos, eyeNormal);
	}
	color.rgb += smoothstep(0.0h, 1.0h, dotProduct) * 0.15h;
	o.color = saturate(color);
		
	// compute texture coordinates
	o.uv0 = v.uv0.xy * _MainTex_ST.xy + _MainTex_ST.zw;

	#if defined(CUSTOM_LIGHTMAPPED)
		o.uv1 = v.uv1.xy * unity_LightmapST.xy + unity_LightmapST.zw;
	#endif
	o.pos = UnityObjectToClipPos(v.pos);
	o.screenPosition = ComputeScreenPos(o.pos);
	
	
	UNITY_TRANSFER_FOG(o,o.pos);

	return o;

}

// fragment shader
fixed4 frag(v2f v) : SV_Target {
	const half4 posLighting = v.color;
	UNITY_EXTRACT_FOG(v);
	#if defined(CUSTOM_LIGHTMAPPED)
	const half4 lightmap = UNITY_SAMPLE_TEX2D(unity_Lightmap, v.uv1.xy);

	#if CUSTOM_LIGHTMAPPED == 1
	const half4 lighting = (lightmap * 0.25h) + posLighting;
	#endif

	#else
	const half4 lighting = posLighting;
	#endif

	const half4 diffuse = tex2D(_MainTex, v.uv0.xy);
		half4 col = (diffuse * lighting);

		clip(col.a - _Cutoff);	
		#if USING_FOG
        	UNITY_APPLY_FOG(v.fogCoord, col);
    	#endif
	
		
	
	return col;
}