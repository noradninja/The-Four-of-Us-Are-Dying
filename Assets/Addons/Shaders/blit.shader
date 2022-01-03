// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Custom/blit" {
    Properties {
		_MainTex ("Base (RGB)", 2D) = "white" {}
		//_InvFade ("Soft Particles Factor", Range(0.01,3.0)) = 1.0
    }
	SubShader {
   		Tags { "Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent" }
		ZWrite Off
		//ZTest Always
		Cull Off
		Blend SrcAlpha OneMinusSrcAlpha // alpha blending
		
        Pass {
            CGPROGRAM

            #pragma vertex vert
            #pragma fragment frag
 			#pragma target 2.0
 			#pragma multi_compile_fog
			#pragma multi_compile LIGHTMAP_OFF LIGHTMAP_ON
 			#include "UnityCG.cginc"

            uniform sampler2D _MainTex;

 			struct appdata_custom {
				float4 vertex : POSITION;
				float4 texcoord : TEXCOORD0;
				fixed4 color : COLOR;
			};

 			struct v2f {
 				float4 vertex : SV_POSITION;
				float2 texcoord : TEXCOORD0;
 				fixed4 color : COLOR;
			#ifndef LIGHTMAP_OFF
            	half2 uvLM : TEXCOORD1;
            #endif 
            	UNITY_FOG_COORDS(2)
 			};
   
            v2f vert(appdata_custom v)
            {
            	v2f o;
			    o.vertex = UnityObjectToClipPos(float4(v.vertex.xyz, 1));
				o.texcoord = MultiplyUV(UNITY_MATRIX_TEXTURE0,
										float4(v.texcoord.xy, 0, 0));
				o.texcoord = v.texcoord.xy;
            	o.color = v.color;
			#ifndef LIGHTMAP_OFF
            	o.uvLM = v.texcoord.xy * unity_LightmapST.xy + unity_LightmapST.zw;
            #endif
            	UNITY_TRANSFER_FOG(o,o.vertex);
            	return o;
            }

            fixed4 frag(v2f i) : SV_Target
            {
				half4 col = tex2D(_MainTex, i.texcoord) * i.color;
				#ifndef LIGHTMAP_OFF
            	fixed3 lm = DecodeLightmap (UNITY_SAMPLE_TEX2D(unity_Lightmap, i.uvLM.xy));
				col.rgb *= lm;
				#endif
				return col;
            }

            ENDCG
        }
    }
}
