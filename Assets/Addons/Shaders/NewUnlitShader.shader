Shader "Unlit/Lightmapped"
{
	Properties
	{
		_MainTex ("Texture", 2D) = "white" {}
	}
	SubShader
	{
		Tags { "LIGHTMODE" = "VertexLM" "Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="AlphaTest" }
		ZWrite Off
		//ZTest Always
		Cull Off
		Blend SrcAlpha OneMinusSrcAlpha // alpha blending

		Pass
		{
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			// make fog work
			#pragma target 2.0
 			#pragma multi_compile_fog
			#pragma multi_compile LIGHTMAP_OFF LIGHTMAP_ON
			#include "UnityCG.cginc"

			struct appdata
			{
				float4 vertex : POSITION;
				float2 texcoord : TEXCOORD0;
            	float2 texcoord1 : TEXCOORD1;
			};

			struct v2f
			{
				float4 vertex : SV_POSITION;
				half2 texcoord : TEXCOORD0;
				#ifndef LIGHTMAP_OFF
				half2 uvLM : TEXCOORD1;
				#endif 
				UNITY_FOG_COORDS(2)
			};

			sampler2D _MainTex;
			float4 _MainTex_ST;
			
			v2f vert (appdata v)
			{
				v2f o;
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.texcoord = TRANSFORM_TEX(v.texcoord, _MainTex);
				#ifndef LIGHTMAP_OFF
            	o.uvLM = v.texcoord1.xy * unity_LightmapST.xy + unity_LightmapST.zw;
           		#endif
				UNITY_TRANSFER_FOG(o,o.vertex);
				return o;
			}
			
			fixed4 frag (v2f i) : SV_Target
			{
				// sample the texture
				fixed4 col = tex2D(_MainTex, i.texcoord);
				#ifndef LIGHTMAP_OFF
            	fixed3 lm = DecodeLightmap (UNITY_SAMPLE_TEX2D(unity_Lightmap, i.uvLM.xy));
				col.rgb *= lm;
				#endif
				// apply fog
				UNITY_APPLY_FOG(i.fogCoord, col);
				return col;
			}
			ENDCG
		}
Pass {
	Name "Caster"
	Tags { "LightMode" = "ShadowCaster" }

	CGPROGRAM
	#pragma vertex vert
	#pragma fragment frag
	#pragma target 2.0
	#pragma multi_compile_shadowcaster
	#pragma multi_compile_instancing // allow instanced shadow pass for most of the shaders
	#include "UnityCG.cginc"

		struct v2f {
			V2F_SHADOW_CASTER;
			float2  uv : TEXCOORD1;
			UNITY_VERTEX_OUTPUT_STEREO
		};

		uniform float4 _MainTex_ST;

		v2f vert( appdata_base v )
		{
			v2f o;
			UNITY_SETUP_INSTANCE_ID(v);
			UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
			TRANSFER_SHADOW_CASTER_NORMALOFFSET(o)
			o.uv = TRANSFORM_TEX(v.texcoord, _MainTex);
			return o;
		}

		uniform sampler2D _MainTex;
		uniform fixed _Cutoff;
		uniform fixed4 _Color;

		float4 frag( v2f i ) : SV_Target
		{
			fixed4 texcol = tex2D( _MainTex, i.uv );
			clip( texcol.a*_Color.a - _Cutoff );

			SHADOW_CASTER_FRAGMENT(i)
		}
		ENDCG
		}
	}
}
