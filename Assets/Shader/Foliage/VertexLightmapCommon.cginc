#include "UnityCG.cginc"
#include "HLSLSupport.cginc"
#include "UnityShaderVariables.cginc"
#include "UnityShaderUtilities.cginc"
#include "AutoLight.cginc"
#include "Lighting.cginc"
#include "UnityShadowLibrary.cginc"

#define USING_FOG (defined(FOG_LINEAR) || defined(FOG_EXP) || defined(FOG_EXP2))
// ES2.0 can not do loops with non-constant-expression iteration counts :(
#if defined(SHADER_API_GLES)
#define LIGHT_LOOP_LIMIT 8
#else
#define LIGHT_LOOP_LIMIT unity_VertexLightParams.x
#endif

// Compute attenuation & illumination from one light
half3 computeOneLight(int idx, half3 eyePosition, half3 eyeNormal) {

	half3 dirToLight = unity_LightPosition[idx].xyz;
	half att = 1.0;

	#if defined(POINT) || defined(SPOT)
		dirToLight -= eyePosition * unity_LightPosition[idx].w;
		
		// distance attenuation
		half distSqr = dot(dirToLight, dirToLight);
		att /= (1.0 + unity_LightAtten[idx].z * distSqr);

		if (unity_LightPosition[idx].w != 0 &&
			distSqr > unity_LightAtten[idx].w) 
			att = 0.0; // set to 0 if outside of range

		dirToLight *= rsqrt(distSqr);

	#if defined(SPOT)
		// spot angle attenuation
		half rho = max(dot(dirToLight, unity_SpotDirection[idx].xyz), 0.0);
		half spotAtt = (rho - unity_LightAtten[idx].x) * unity_LightAtten[idx].y;
		att *= saturate(spotAtt);
	#endif

	#endif
		att *= 0.5; // passed v light colors are 2x brighter than what used to be v FFP

		half NdotL = max(dot(eyeNormal, dirToLight), 0.0);
		
		// diffuse
		half3 color = att * NdotL * unity_LightColor[idx].rgb;

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


// vertex shader input data
struct appdata {
	half3 vertex : POSITION;
	half3 normal : NORMAL;
	half3 uv0 : TEXCOORD0;
	half3 uv1 : TEXCOORD1;
};

// vertex-to-fragment interpolators
struct v2f {
	half4 vertex : SV_POSITION;
	half4 color : COLOR0;
	half2 uv0 : TEXCOORD0;
	half2 uv1 : TEXCOORD1;


	#if USING_FOG
            UNITY_FOG_COORDS(3)
	#endif

};

// vertex shader
v2f vert(appdata v) {

	v2f o;

	half3 worldPos = mul (unity_ObjectToWorld, half4(v.vertex, 1) ).xyz;
	half3 eyePos = mul(UNITY_MATRIX_MV, half4(v.vertex, 1) ).xyz;
	half3 eyeNormal = normalize(mul( (half3x3)UNITY_MATRIX_IT_MV, v.normal).xyz);
	//half3 viewDir = normalize(ObjSpaceViewDir(v.vertex));
 	half dotProduct = 1 - saturate ( dot(v.normal, eyeNormal) );
 	half rimWidth = 1;

	//Leaf Movement and Wiggle
	( (v.vertex.x += cos(_Time.z * v.vertex.x * _leaves_wiggle_speed + (worldPos.x/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.x * _influence), //x
	(v.vertex.y += sin(_Time.w * v.vertex.y * _leaves_wiggle_speed + (worldPos.y/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.y * _influence),   //y
	(v.vertex.z += cos(_Time.z * v.vertex.z * _leaves_wiggle_speed + (worldPos.z/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.z * _influence) ); //z
                    
	// vertex lighting
	half4 color = half4(0, 0, 0, 1);

	#if defined(AMBIENT_ON) || !defined(CUSTOM_LIGHTMAPPED)
		color.rgb = glstate_lightmodel_ambient.rgb;
	#endif

	for (int il = 0; il < LIGHT_LOOP_LIMIT; ++il) {
		color.rgb += computeOneLight(il, eyePos, eyeNormal);
	}
	color.rgb += smoothstep(1 - rimWidth, 1.0, dotProduct) * .15f;
	o.color = saturate(color);
		
	// compute texture coordinates
	o.uv0 = v.uv0.xy * _MainTex_ST.xy + _MainTex_ST.zw;

	#if defined(CUSTOM_LIGHTMAPPED)
		o.uv1 = v.uv1.xy * unity_LightmapST.xy + unity_LightmapST.zw;
	#endif

	// transform position
	o.vertex = UnityObjectToClipPos(v.vertex);
	
	UNITY_TRANSFER_FOG(o,o.vertex);

	return o;

}

// fragment shader
fixed4 frag(v2f v) : SV_Target {

	half4 vertexLighting = v.color;
	UNITY_EXTRACT_FOG(v);
	#if defined(CUSTOM_LIGHTMAPPED)
		half4 lightmap = UNITY_SAMPLE_TEX2D(unity_Lightmap, v.uv1.xy);

	#if CUSTOM_LIGHTMAPPED == 1
		half4 lighting = (lightmap * 0.25f) + vertexLighting;
	#endif

	#else
		half4 lighting = vertexLighting;
	#endif
		
		half4 diffuse = tex2D(_MainTex, v.uv0.xy);
		half4 col = (diffuse * lighting);
		col.a = diffuse.a;
		clip(col.a - _Cutoff);
		UNITY_APPLY_FOG(v.fogCoord, col);

		
	
		return col;
}