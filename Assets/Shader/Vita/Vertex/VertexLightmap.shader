Shader "Vita/Standard Mobile VertexLit" {
	Properties {
		_MainTex("Base (RGB)", 2D) = "white" { }
		_MetallicGlossMap("MOAR (RGBA)", 2D) = "white" { }
		_Metallic ("Metallic", Range(0,1)) = 0.5
		_Roughness ("Roughness", Range(0,1)) = 0.5
		_Cutoff ("Alpha cutoff", Range(0,1)) = 0.5
		_wind_dir ("Wind Direction", Vector) = (0.5,0.05,0.5,0)
        _wind_size ("Wind Wave Size", range(5,50)) = 15
		_leaves_wiggle_disp ("Leaves Wiggle Displacement", float) = 0.07
        _leaves_wiggle_speed ("Leaves Wiggle Speed", float) = 0.01
		_influence ("Influence", range(0,1)) = 1
		[Toggle(ALPHA_ON)] _AlphaOn("Seperate Alpha", Float) = 1
		[Toggle(WIGGLE_ON)] _LeavesOn("Leaf Movment", Float) = 1
		[Toggle(AMBIENT_ON)] _AmbientOn("Ambient Lighting", Float) = 0
	}

	SubShader {
	Tags { "IgnoreProjector"="True" "Queue" = "Geometry"} //I know this is weird but it's a workaround for the Vita
		LOD 80
		ZWrite On
		Cull Back
		Blend One Zero //because we are going to clip at the end

		// Non-lightmapped
		Pass
		{
			Tags { "LightMode" = "Vertex" }
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#pragma target 3.0
			#pragma multi_compile_fog
			// Compile specialized variants for when positional (point/spot) and spot lights are present
			#pragma multi_compile __ POINT SPOT
			#pragma multi_compile _ LOD_FADE_CROSSFADE
			#include "VertexLightmapCommon.cginc"
			#include "UnityCG.cginc"
			#include "HLSLSupport.cginc"
			#include "UnityShaderVariables.cginc"
			#include "UnityShaderUtilities.cginc"
			#include "AutoLight.cginc"


		

		ENDCG
		}
	
		// Lightmapped
		Pass
		{
			Tags { "LightMode" = "VertexLM" }
			
			Cull Off
			
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag	
			#pragma target 3.0
			#pragma multi_compile_fog
			// Compile specialized variants for when positional (point/spot) and spot lights are present
			#pragma multi_compile __ POINT SPOT
			#pragma multi_compile __ AMBIENT_ON
			#pragma multi_compile _ LOD_FADE_CROSSFADE
			#define CUSTOM_LIGHTMAPPED 1 
			#include "VertexLightmapCommon.cginc"
			#include "UnityCG.cginc"
			#include "HLSLSupport.cginc"
			#include "UnityShaderVariables.cginc"
			#include "UnityShaderUtilities.cginc"
			#include "AutoLight.cginc"
	
	
	
		ENDCG
		}
	        // Extracts information for lightmapping, GI (emission, albedo, ...)
	        // This pass it not used during regular rendering.
       Pass
	        {
	            Name "META"
	            Tags { "LightMode"="Meta" }

	            Cull Off

	            CGPROGRAM
	            #pragma vertex vert_meta
	            #pragma fragment frag_meta

	            #pragma shader_feature _EMISSION
	            #pragma shader_feature _METALLICGLOSSMAP
	            #pragma shader_feature _ _SMOOTHNESS_TEXTURE_ALBEDO_CHANNEL_A
	            #pragma shader_feature ___ _DETAIL_MULX2
	            #pragma shader_feature EDITOR_VISUALIZATION

	            #include "UnityStandardMeta.cginc"
	            ENDCG
	        }
		Pass
		{
	        Tags {"LightMode"="ShadowCaster"}

	        CGPROGRAM
	        #pragma vertex vert_shadow
	        #pragma fragment frag_shadow
			#pragma target 3.0
	        #pragma multi_compile_shadowcaster
			#pragma multi_compile_fog
			#pragma multi_compile _ LOD_FADE_CROSSFADE
	        #include "UnityCG.cginc"
			#include "UnityPBSLighting.cginc" // TBD: remove
			#include "UnityShadowLibrary.cginc"
			
			struct v2f {
				V2F_SHADOW_CASTER;
				float2  uv : TEXCOORD0;
				UNITY_VERTEX_OUTPUT_STEREO
	//				half3 normal : NORMAL;
			};
			struct appdata {
				half3 vertex : POSITION;
				half3 color : COLOR0;
				half3 uv : TEXCOORD0;
				

			};

			
			uniform float4 _MainTex_ST;
			half4 _wind_dir;
			half _wind_size;
			half _leaves_wiggle_disp;
			half _leaves_wiggle_speed;
			half _influence;
	        half _LeavesOn;

			v2f vert_shadow( appdata v )
			{
				v2f o;
				half3 worldPos = mul (unity_ObjectToWorld, half4(v.vertex, 1) ).xyz;
				half3 currentPos = v.vertex;
				half3 previousPos = currentPos;
				half3 nextPos = currentPos;
				if(_LeavesOn)
					{
						//Leaf Movement and Wiggle
						( (nextPos.x += sin(_Time.y * currentPos.x * _leaves_wiggle_speed + (worldPos.x/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.x * (_influence * v.color)), //x
						(nextPos.y += sin(_Time.y * currentPos.y * _leaves_wiggle_speed + (worldPos.y/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.y * (_influence * v.color)),   //y
						(nextPos.z += sin(_Time.y * currentPos.z * _leaves_wiggle_speed + (worldPos.z/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.z * (_influence * v.color))); //z
					}
				// Now interpolate using a factor (which might be based on a small time delta)
				float t = 0.5h; // or any other interpolation factor
				v.vertex = lerp(previousPos, nextPos, t);

				UNITY_SETUP_INSTANCE_ID(v);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
				TRANSFER_SHADOW_CASTER(o);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				return o;
			}

			uniform sampler2D _MainTex;
	        uniform sampler2D _MetallicGlossMap;
			uniform fixed _Cutoff;
	        float _AlphaOn;

			float4 frag_shadow( v2f i ) : SV_Target
			{
				if (!_AlphaOn)
				{
					fixed4 texcol = tex2D( _MainTex, i.uv );
					clip( texcol.a - _Cutoff );
				}
				else
				{
					fixed4 texcol = tex2D( _MetallicGlossMap, i.uv );
					clip( texcol.b - _Cutoff );
				}

				SHADOW_CASTER_FRAGMENT(i);
			}
		ENDCG
		}
	}
	Fallback "Legacy Shaders/Diffuse"
}