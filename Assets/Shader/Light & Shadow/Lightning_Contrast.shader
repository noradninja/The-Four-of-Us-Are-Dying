Shader "Vita/VFX/Lightning_Contrast"
{
	Properties
	{
		_TintColor ("Tint Color", Color) = (.5, .5, .5, .5)
		[IntRange] _StencilRef ("Stencil Ref", Range(0,255)) = 0
		[FloatRange] _Range ("Range", Range(0.1,2)) = 1.0
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
		Cull Back ZWrite Off ZTest Always
		Blend SrcAlpha OneMinusSrcAlpha
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
				float4 projPos : TEXCOORD3;
			};

			v2f vert (appdata v)
			{
				v2f o;
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.uv = v.uv;
				o.projPos = ComputeScreenPos (o.vertex);
                COMPUTE_EYEDEPTH(o.projPos.z);
				return o;
			}
			
			fixed4 _TintColor;
			float _Range;
			UNITY_DECLARE_DEPTH_TEXTURE(_CameraDepthTexture);
			fixed4 frag (v2f i) : SV_Target
			{
				float sceneZ = LinearEyeDepth (SAMPLE_DEPTH_TEXTURE_PROJ(_CameraDepthTexture, UNITY_PROJ_COORD(i.projPos)));
				fixed4 col = _TintColor * ((sceneZ -0.35f)*(pow(_Range, 2)));
				return col;
			}
			ENDCG
		}
	}
}
