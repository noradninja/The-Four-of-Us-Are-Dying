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
static const float4x4 ditherTable = float4x4
			(
				-4.0, 0.0, -3.0, 1.0,
				2.0, -2.0, 3.0, -1.0,
				-3.0, 1.0, -4.0, 0.0,
				3.0, -1.0, 2.0, -2.0
			);

float InterleavedGradientNoise( float2 iPos, float nullFloat){
	return frac( 52.9829189f * frac ((iPos.x * 0.06711056) + (iPos.y * 0.00583715)));
}

void ClipLOD (float2 positionCS, float fade) {
	#if defined(LOD_FADE_CROSSFADE)
		float dither = InterleavedGradientNoise(positionCS.xy, 0); 
		clip(fade + (fade < 0.0 ? dither : -dither));
	#endif
}


fixed find_closest(int x, int y, inout fixed col)
	{
    
		/* jave.lin :  Reference resources ： - https://blog.csdn.net/paris_he/article/details/40341233 - https://en.wikipedia.org/wiki/Ordered_dithering  Below  8x8  Origin of matrix ：  Let's start with one 2×2 The start of the matrix , as follows  M1 M1 = | 0 2 | | 3 1 |  One more  Un  matrix   All the elements are 1, also  Un  Matrix of  n == Mn  Of  n, namely ：U  The dimension of is equal to  M Of   as follows  M1  yes  2x2  Of , that  U1  It's also  2x2  Of , as follows  U1 = | 1 1 | | 1 1 |  Then set the following formula  M_{n+1} = | 4M_{n} 4M_{n}+2U | = | 4M_{n}+3U 4M_{n}+ U |  that  M2  It's the same as  M2 = | 4M1 4M1+2U1 | = | 4M1+3U1 4M1+ U1 |  Empathy  M3  as follows  M3 = | 4M2 4M2+2U2 | = | 4M2+3U2 4M2+ U2 | ...  After the explanation above , You can see the following  8x8  When , That's right.  M3  Of  */
		const int dither[8][8] = {
    
		{
     0,  32, 8,  40, 2,  34, 10, 42 }, /* 8x8 Bayer ordered dithering */
		{
     48, 16, 56, 24, 50, 18, 58, 26 }, /* pattern. Each input pixel */
		{
     12, 44, 4,  36, 14, 46, 6,  38 }, /* is scaled to the 0..63 range */
		{
     60, 28, 52, 20, 62, 30, 54, 22 }, /* before looking in this table */
		{
     3,  35, 11, 43, 1,  33, 9,  41 }, /* to determine the action. */
		{
     51, 19, 59, 27, 49, 17, 57, 25 },
		{
     15, 47, 7,  39, 13, 45, 5,  37 },
		{
     63, 31, 55, 23, 61, 29, 53, 21 } };

		fixed limit = (dither[x][y] + 1) / 256.0;
		//if (col < limit)
		// return 0.0;
		//return 1.0;
		//  Use  step  Optimize 

		// jave.lin : 
		//  If our texture format supports  R1G1B1, That is to say  RGB111 Words 
		//  Can be compressed to the original, only the original  1/8  size , But we haven't seen another format texture like this at present ( Because this effect is  30~50  The demand years ago was acceptable )
		return step(limit, col); //  Compress to  1 or 0
	}

// pos shader
v2f vert(appdata v) {

	v2f o;

	half3 worldPos = mul (unity_ObjectToWorld, half4(v.pos, 1) ).xyz;
	half3 eyePos = mul(UNITY_MATRIX_MV, half4(v.pos, 1) ).xyz;
	half3 eyeNormal = normalize(mul( (half3x3)UNITY_MATRIX_IT_MV, v.normal).xyz);
	//half3 viewDir = normalize(ObjSpaceViewDir(v.pos));
 	half dotProduct = 1 - saturate ( dot(v.normal, eyeNormal) );
 	half rimWidth = 1;

	//Leaf Movement and Wiggle
	( (v.pos.x += cos(_Time.z * v.pos.x * _leaves_wiggle_speed + (worldPos.x/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.x * _influence), //x
	(v.pos.y += sin(_Time.w * v.pos.y * _leaves_wiggle_speed + (worldPos.y/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.y * _influence),   //y
	(v.pos.z += cos(_Time.z * v.pos.z * _leaves_wiggle_speed + (worldPos.z/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.z * _influence) ); //z
                    
	// pos lighting
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
	o.pos = UnityObjectToClipPos(v.pos);
	o.screenPosition = ComputeScreenPos(o.pos);
	
	
	UNITY_TRANSFER_FOG(o,o.pos);

	return o;

}

// fragment shader
fixed4 frag(v2f v) : SV_Target {

	half4 posLighting = v.color;
	UNITY_EXTRACT_FOG(v);
	#if defined(CUSTOM_LIGHTMAPPED)
		half4 lightmap = UNITY_SAMPLE_TEX2D(unity_Lightmap, v.uv1.xy);

	#if CUSTOM_LIGHTMAPPED == 1
		half4 lighting = (lightmap * 0.25f) + posLighting;
	#endif

	#else
		half4 lighting = posLighting;
	#endif
		half2 screenPos = v.screenPosition.xy / v.screenPosition.w;	
		half4 diffuse = tex2D(_MainTex, v.uv0.xy);
		half4 col = (diffuse * lighting);


float2 xy = (v.uv0 * float2(4,4)) * 4;
		int x = int(fmod(xy.x, 8)); // jave.lin : return : 0, 1, 2, 3, 4, 5, 6, 7
		//return x / 7.0; // jave.lin :  level  7  Gray scale 
		int y = int(fmod(xy.y, 8)); // jave.lin : return : 0, 1, 2, 3, 4, 5, 6, 7
		//return y / 7.0; // jave.lin :  vertical  7  Gray scale 

		fixed4 lum = fixed4(0.299, 0.587, 0.114, 0);
		fixed grayscale = dot(col, lum);

		fixed final = find_closest(x, y, grayscale);
		col.a = diffuse.a;
		clip(col.a - _Cutoff);	
	
	#if USING_FOG
		UNITY_APPLY_FOG(v.fogCoord, col);
	#endif
		
	
	return col;
}