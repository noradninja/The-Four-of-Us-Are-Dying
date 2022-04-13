Shader "SupGames/SSAO"
{
	Properties
	{
		_MainTex("Texture", 2D) = "white" {}
	}

	SubShader
	{
		CGINCLUDE
		#include "UnityCG.cginc"
		
		UNITY_DECLARE_SCREENSPACE_TEXTURE(_BlurTex);
		UNITY_DECLARE_SCREENSPACE_TEXTURE(_MainTex);
		UNITY_DECLARE_DEPTH_TEXTURE(_CameraDepthTexture);

		#define SAMPLE_DEPTH(uv) LinearEyeDepth(SAMPLE_DEPTH_TEXTURE(_CameraDepthTexture, uv));
		#define FAST True;
		half4 _CameraDepthTexture_TexelSize;
		half4 _MainTex_TexelSize;
		half _Intensity;
		half _Radius;
		half _BlurAmount;
		half _Area;

		struct appdata
		{
			float4 pos : POSITION;
			float2 uv : TEXCOORD0;
			UNITY_VERTEX_INPUT_INSTANCE_ID
		};

		struct v2f {
			float4 pos : SV_POSITION;
			float2 uv  : TEXCOORD0;
			UNITY_VERTEX_INPUT_INSTANCE_ID
			UNITY_VERTEX_OUTPUT_STEREO
		};

		struct v2fb
		{
			float4 pos  : SV_POSITION;
			float2  uv  : TEXCOORD0;
			float4  uv1  : TEXCOORD1;
			UNITY_VERTEX_INPUT_INSTANCE_ID
			UNITY_VERTEX_OUTPUT_STEREO
		};
		struct v2fs
		{
			float4 pos  : SV_POSITION;
			float4  uv  : TEXCOORD0;
			float4  uv1  : TEXCOORD1;
			float3  uv2  : TEXCOORD2;
			UNITY_VERTEX_INPUT_INSTANCE_ID
			UNITY_VERTEX_OUTPUT_STEREO
		};

		v2f vert(appdata i)
		{
			v2f o = (v2f)0;
			UNITY_SETUP_INSTANCE_ID(i);
			UNITY_INITIALIZE_OUTPUT(v2f, o);
			UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
			o.pos = UnityObjectToClipPos(i.pos);
			o.uv = UnityStereoTransformScreenSpaceTex(i.uv);
			return o;
		}


		v2fb vertb(appdata i)
		{
			v2fb o = (v2fb)0;
			// UNITY_SETUP_INSTANCE_ID(i);
			// UNITY_INITIALIZE_OUTPUT(v2fb, o);
			// UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
			// o.pos = UnityObjectToClipPos(i.pos);
			// float2 offset = _MainTex_TexelSize.xy * _BlurAmount;
			// o.uv = i.uv;
			// o.uv1 = float4(i.uv - offset, i.uv + offset);
			 return o;
		}

		v2fs verts(appdata i)
		{
			v2fs o = (v2fs)0;
			UNITY_SETUP_INSTANCE_ID(i);
			UNITY_INITIALIZE_OUTPUT(v2fs, o);
			UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
			o.pos = UnityObjectToClipPos(i.pos);
			o.uv = float4(i.uv, i.uv + (_CameraDepthTexture_TexelSize.xy));
			float a = 52.98292f * dot(float2(0.0671h, 0.00584h), floor(0.5h * i.uv * _ScreenParams.xy));
			float uv2 = frac(a + 0.11231h) * 2.0h - 1.0h;
			float uv3 = frac(a + 0.14844h) * 2.0h - 1.0h;
			float uv4 = frac(a + 0.13672h) * 2.0h - 1.0h;
			a *= 6.2832h;
			o.uv1 = _Radius * _Radius * float4(float2(-0.40825h, 0.40825h) * sqrt(1.0h - uv2 * uv2), float2(0.5h, -0.5h) * sqrt(1.0h - uv3 * uv3));
			o.uv2.xy = _Radius * _Radius * float2(-0.57735h, -0.57735h) * sqrt(1.0h - uv4 * uv4);
			o.uv2.z = a;
			return o;
		}

		float4 frag_ssao(v2fs i) : SV_Target
		{
			UNITY_SETUP_STEREO_EYE_INDEX_POST_VERTEX(i);
			const float3 offset = float3(_CameraDepthTexture_TexelSize.xy, 0.0h);

			float depth = SAMPLE_DEPTH(i.uv.xy);
			float depthu = SAMPLE_DEPTH(i.uv.xw);
			float depthr = SAMPLE_DEPTH(i.uv.zy);

			float3 pu = float3(offset.zy, depthu - depth);
			float3 pr = float3(offset.xz, depthr - depth);

			float3 normal = normalize(cross(pu, pr));

			float s = i.uv2.z;
			float c = i.uv2.z;

			float2 ray =  i.uv1.zw / depth;
			float difference = depth - SAMPLE_DEPTH(saturate(i.uv.xy + sign(dot(ray, normal.xy)) * ray));
			float occlusion = step(0.02h, difference) * (1.0h - smoothstep(0.02h, _Area, difference));
// #if !defined(FAST)
// 			ray = i.uv1.xy / depth;
// 			difference = depth - SAMPLE_DEPTH(saturate(i.uv.xy + sign(dot(ray, normal.xy)) * ray));
// 			occlusion += step(0.02h, difference) * (1.0h - smoothstep(0.02h, _Area, difference));

// 			ray =  i.uv2.xy / depth;
// 			difference = depth - SAMPLE_DEPTH(saturate(i.uv.xy + sign(dot(ray, normal.xy)) * ray));
// 			occlusion += step(0.02h, difference) * (1.0h - smoothstep(0.02h, _Area, difference));

// 			return 1.0h - _Intensity * occlusion * 0.3333h;
// #endif
			return 1.0h - _Intensity * occlusion;
		}

		fixed4 fragb(v2fb i) : SV_Target
		{
			UNITY_SETUP_STEREO_EYE_INDEX_POST_VERTEX(i);
			fixed4 col = UNITY_SAMPLE_SCREENSPACE_TEXTURE(_MainTex, i.uv);
			col.r *= 0.5h;
			col.r += UNITY_SAMPLE_SCREENSPACE_TEXTURE(_MainTex, i.uv1.xy).r * 0.125h;
			col.r += UNITY_SAMPLE_SCREENSPACE_TEXTURE(_MainTex, i.uv1.xw).r * 0.125h;
			col.r += UNITY_SAMPLE_SCREENSPACE_TEXTURE(_MainTex, i.uv1.zy).r * 0.125h;
			col.r += UNITY_SAMPLE_SCREENSPACE_TEXTURE(_MainTex, i.uv1.zw).r * 0.125h;
			return col;
		}

		fixed4 frag(v2f i) : SV_Target
		{
			UNITY_SETUP_STEREO_EYE_INDEX_POST_VERTEX(i);
			fixed4 col = UNITY_SAMPLE_SCREENSPACE_TEXTURE(_MainTex, i.uv);
			fixed4 ao = UNITY_SAMPLE_SCREENSPACE_TEXTURE(_BlurTex, i.uv);
			col.rgb *= ao.r;
			return col;
		}
		ENDCG

		Pass //0
		{
			ZTest Always Cull Off ZWrite Off
			Fog { Mode off }
			CGPROGRAM
			#pragma vertex verts
			#pragma fragment frag_ssao
			#pragma fragmentoption ARB_precision_hint_fastest
			#pragma shader_feature_local FAST
			ENDCG
		}

		Pass //1
		{
			ZTest Always Cull Off ZWrite Off
			Fog { Mode off }
			CGPROGRAM
			#pragma vertex vertb
			#pragma fragment fragb
			#pragma fragmentoption ARB_precision_hint_fastest
			ENDCG
		}

		Pass //2
		{
			ZTest Always Cull Off ZWrite Off
			Fog { Mode off }
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#pragma fragmentoption ARB_precision_hint_fastest
			ENDCG
		}
	}
}

