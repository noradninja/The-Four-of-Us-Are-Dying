Shader "Vita/PerVertDepth"
{
	Properties
	{
		_MainTex ("Texture", 2D) = "white" {}
	}
	SubShader
	{
		Tags { "RenderType"="Opaque" }
		LOD 100

		Pass
		{
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			// make fog work
			#pragma multi_compile_fog
			
			#include "UnityCG.cginc"

			struct appdata
			{
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
				
			};

			struct v2f
			{
				float2 uv : TEXCOORD0;
				UNITY_FOG_COORDS(1)
				float4 vertex : SV_POSITION;
				float depth : TEXCOORD1;
			};

			sampler2D _MainTex;
			float4 _MainTex_ST;
			
			v2f vert(appdata_base v) {
                 v2f o;
                 o.vertex = UnityObjectToClipPos(v.vertex);
                 o.depth = -mul(UNITY_MATRIX_MV, v.vertex).z / _ProjectionParams.w;    // _ProjectionParams.w = 1/far
                 return o;
             }
 
             half4 frag(v2f i) : COLOR {
                 fixed invert = i.depth;
                 return fixed4(invert, invert, invert, 1);
             }
			ENDCG
		}
	}
}
