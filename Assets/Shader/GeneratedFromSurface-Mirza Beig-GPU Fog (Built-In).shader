/*Please do support www.bitshiftprogrammer.com by joining the facebook page : fb.com/BitshiftProgrammer
Legal Stuff:
This code is free to use no restrictions but attribution would be appreciated.
Any damage caused either partly or completly due to usage this stuff is not my responsibility*/
Shader "Vita/ColouredFog"
{
	Properties
	{
		_MainTex ("Texture", 2D) = "white" {}
		_ColorLookUp("Fog Colour Look Up", 2D) = "white"{}
		_FogSpread("Fog Spread", Float) = 10.0
	}
	SubShader
	{
		Cull Off ZWrite Off ZTest Always
		Pass
		{
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#include "UnityCG.cginc"

			struct appdata
			{
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
			};

			struct v2f
			{
				float2 uv : TEXCOORD0;
				float4 vertex : SV_POSITION;
				float4 scrPos : TEXCOORD1;
			};

			v2f vert (appdata v)
			{
				v2f o;
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.scrPos = ComputeScreenPos(o.vertex);
				o.uv = v.uv;
				return o;
			}
			
			sampler2D _MainTex;
			sampler2D _CameraDepthTexture;
			sampler1D _ColorLookUp;
			half _FogSpread;

			#define IF(a, b, c) lerp(b, c, step((fixed) (a), 0));

			fixed4 frag (v2f i) : SV_Target
			{
				fixed3 col = tex2D(_MainTex, i.uv);
				float zsample = SAMPLE_DEPTH_TEXTURE(_CameraDepthTexture, i.uv);
				float depth = Linear01Depth(zsample);
				depth = clamp(depth * _FogSpread, 0, 1) * IF(depth < 1.0, 1, 0);
				col *= tex1D(_ColorLookUp, depth);
				return fixed4(col,1.0);
			}
			ENDCG
		}
	}
}