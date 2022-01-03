/*Please do support www.bitshiftprogrammer.com by joining the facebook page : fb.com/BitshiftProgrammer
Legal Stuff:
This code is free to use no restrictions but attribution would be appreciated.
Any damage caused either partly or completly due to usage of this stuff is not my responsibility*/
Shader "Custom/Dither"
{
	Properties
	{
		_MainTex ("Texture", 2D) = "white" {}
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
			};

			v2f vert (appdata v)
			{
				v2f o;
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.uv = v.uv;
				return o;
			}
			
			sampler2D _MainTex;
			int _ColourDepth;
			float _DitherStrength;

			static const float4x4 ditherTable = float4x4
			(
				-4.0, 0.0, -3.0, 1.0,
				2.0, -2.0, 3.0, -1.0,
				-3.0, 1.0, -4.0, 0.0,
				3.0, -1.0, 2.0, -2.0
			);

			fixed4 frag (v2f i) : COLOR 
			{
				fixed4 col = tex2D(_MainTex,i.uv);
				uint2 pixelCoord = i.uv*_ScreenParams.xy; //warning that modulus is slow on integers, so use uint
				col += ditherTable[pixelCoord.x % 4.0][pixelCoord.y % 4.0] * _DitherStrength;
				//col = round(col * _ColourDepth) / _ColourDepth;
				return col;
			}
			ENDCG
		}
	}
}
