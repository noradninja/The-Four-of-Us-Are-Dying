Shader "Vita/Lightmapped Vertlit" {
	Properties {
		_MainTex("Base (RGB)", 2D) = "white" { }
		
		[Toggle(AMBIENT_ON)] _AmbientOn("Ambient Lighting", Float) = 0
	}

	SubShader {
	Tags { "Queue"="Geometry"} //I know this is weird but it's a workaround for the Vita
		LOD 80
		ZWrite On
		Cull Off
		Blend One One //because we are going to clip at the end
	
		
		// Non-lightmapped
		Pass {
			Tags { "LightMode" = "Vertex" }
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			
			#pragma multi_compile_fog
			// Compile specialized variants for when positional (point/spot) and spot lights are present
			#pragma multi_compile __ POINT SPOT
			#pragma multi_compile __ LOD_FADE_CROSSFADE
			#include "VertexLightmapCommon.cginc"
			#include "UnityCG.cginc"
			#include "UnityStandardConfig.cginc"
			#include "UnityPBSLighting.cginc" // TBD: remove
			#include "UnityStandardUtils.cginc"
		

			ENDCG
		}
	
		// Lightmapped
		Pass {
			Tags { "LightMode" = "VertexLM" }
		
      
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag	
			#pragma multi_compile_fog
			// Compile specialized variants for when positional (point/spot) and spot lights are present
			#pragma multi_compile __ POINT SPOT
			#pragma multi_compile __ AMBIENT_ON
			#pragma multi_compile __ LOD_FADE_CROSSFADE
			#define CUSTOM_LIGHTMAPPED 1 
			#include "VertexLightmapCommon.cginc"
			#include "UnityCG.cginc"
			#include "UnityCG.cginc"
			#include "UnityStandardConfig.cginc"
			#include "UnityPBSLighting.cginc" // TBD: remove
			#include "UnityStandardUtils.cginc"
			#define _ALPHATEST_ON

			ENDCG
		}

		Pass{
            Tags {"LightMode"="ShadowCaster"}

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma multi_compile_shadowcaster
			#pragma multi_compile_fog
			#pragma multi_compile __ LOD_FADE_CROSSFADE
            #include "UnityCG.cginc"
			#include "UnityCG.cginc"
			#include "UnityStandardConfig.cginc"
			#include "UnityPBSLighting.cginc" // TBD: remove
			#include "UnityStandardUtils.cginc"
			
			struct v2f {
				V2F_SHADOW_CASTER;
				float2  uv : TEXCOORD0;
				UNITY_VERTEX_OUTPUT_STEREO
			};
			struct appdata {
				half3 vertex : POSITION;
				half3 uv : TEXCOORD0;

			};

			
			uniform float4 _MainTex_ST;
		

			v2f vert( appdata v )
			{
				v2f o;
				
				UNITY_SETUP_INSTANCE_ID(v);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
				TRANSFER_SHADOW_CASTER(o);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				return o;
			}

			uniform sampler2D _MainTex;

			float4 frag( v2f i ) : SV_Target
			{
				SHADOW_CASTER_FRAGMENT(i);
			}
            ENDCG
        }
	}
	//Fallback "Vita/Standard Mobile"
}