Shader "Vita/VFX/Crepuscupular Setup"
{
	Properties
	{
		_TintColor ("Tint Color", Color) = (.5, .5, .5, .5)
		[IntRange] _StencilRef ("Stencil Ref", Range(0,255)) = 0
	}
	SubShader
	{
		Stencil{
			Ref [_StencilRef]
			Comp Equal
			Pass Replace
		}
		Tags { "Queue" = "Transparent" "IgnoreProjector" = "True"}
		// No culling or depth
		Cull Off ZWrite Off ZTest Always
		Blend One One
		Pass
		{
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			
			#include "UnityCG.cginc"

			struct appdata
			{
				half4 vertex : POSITION;
				half2 uv : TEXCOORD0;
			};

			struct v2f
			{
				half2 uv : TEXCOORD0;
				half4 vertex : SV_POSITION;
			};

			v2f vert (appdata v)
			{
				v2f o;
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.uv = v.uv;
				return o;
			}
			
			fixed4 _TintColor;
			UNITY_DECLARE_DEPTH_TEXTURE(_CameraDepthTexture);
			fixed4 frag (v2f i) : SV_Target
			{
				fixed4 col = fixed4(0,0,0,1);
				return col;
			}
			ENDCG
		}
	}
}
