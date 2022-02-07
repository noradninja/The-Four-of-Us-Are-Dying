Shader "Hidden/FastMobileBloom"
{
	Properties
	{
		_MainTex ("Base (RGB)", 2D) = "white" {}
		_BloomTex ("Bloom (RGB)", 2D) = "black" {}
	}
CGINCLUDE
#include "UnityCG.cginc"
uniform sampler2D _MainTex;
uniform half4 _MainTex_TexelSize;
uniform	half4 _MainTex_ST;

uniform half2 _ThresholdParams;
uniform half  _Spread;

uniform sampler2D _BloomTex;
uniform half _BloomIntensity;

struct v2fCombineBloom
{
	float4 pos : SV_POSITION; 
	half2  uv  : TEXCOORD0;
#if UNITY_UV_STARTS_AT_TOP
	half2  uv2 : TEXCOORD1;
#endif
};	

struct v2fBlurDown
{
	float4 pos  : SV_POSITION;
	half2  uv0  : TEXCOORD0;
	half4  uv12 : TEXCOORD1;
	half4  uv34 : TEXCOORD2;
};



v2fBlurDown vertBlurDown(appdata_img v)
{
	v2fBlurDown o;
	o.pos = UnityObjectToClipPos(v.vertex);
	o.uv0 = UnityStereoScreenSpaceUVAdjust(v.texcoord.xy, _MainTex_ST);
	o.uv12.xy = UnityStereoScreenSpaceUVAdjust(v.texcoord.xy + half2( 1.0h,  1.0h) * _MainTex_TexelSize.xy * _Spread, _MainTex_ST);
	o.uv12.zw = UnityStereoScreenSpaceUVAdjust(v.texcoord.xy + half2(-1.0h,  1.0h) * _MainTex_TexelSize.xy * _Spread, _MainTex_ST);
	o.uv34.xy = UnityStereoScreenSpaceUVAdjust(v.texcoord.xy + half2(-1.0h, -1.0h) * _MainTex_TexelSize.xy * _Spread, _MainTex_ST);
	o.uv34.zw = UnityStereoScreenSpaceUVAdjust(v.texcoord.xy + half2( 1.0h, -1.0h) * _MainTex_TexelSize.xy * _Spread, _MainTex_ST);
return o;
}



v2fCombineBloom vertCombineBloom(appdata_img v)
{
	v2fCombineBloom o;
	
	o.pos = UnityObjectToClipPos(v.vertex);
	o.uv = UnityStereoScreenSpaceUVAdjust(v.texcoord, _MainTex_ST);
#if UNITY_UV_STARTS_AT_TOP
	o.uv2 = o.uv;
	if (_MainTex_TexelSize.y < 0.0)
		o.uv.y = 1.0 - o.uv.y;
#endif

return o;
}

fixed4 fragBlurDownFirstPass(v2fBlurDown i) : SV_Target
{
	fixed4 col0 = tex2D(_MainTex, i.uv0);
	fixed4 col1 = tex2D(_MainTex, i.uv12.xy);
	fixed4 col2 = tex2D(_MainTex, i.uv12.zw);
	fixed4 col3 = tex2D(_MainTex, i.uv34.xy);
	fixed4 col4 = tex2D(_MainTex, i.uv34.zw);

	fixed4 col = col0 + col1*0.25 + col2*0.25 + col3*0.25 + col4*0.25;
	col = col * 0.5;
	col = col + _ThresholdParams.y;

	col = max(col, 0.0);
return col;
}


fixed4 fragCombineBloom(v2fCombineBloom i) : SV_Target
{
#if UNITY_UV_STARTS_AT_TOP
	fixed4 col = tex2D(_MainTex,  i.uv2);
	return col + tex2D(_BloomTex, i.uv) * _BloomIntensity;
#else
	fixed4 col = tex2D(_MainTex,  i.uv);
	return col + tex2D(_BloomTex, i.uv) * _BloomIntensity;
#endif
}

ENDCG
	SubShader
	{
		Cull Off ZWrite Off ZTest Always

		//initial downscale and threshold
		Pass
		{
CGPROGRAM
#pragma vertex vertBlurDown
#pragma fragment fragBlurDownFirstPass
ENDCG
		}

		//final bloom
		Pass
		{
CGPROGRAM
#pragma vertex vertCombineBloom
#pragma fragment fragCombineBloom
ENDCG
		}
	}
}