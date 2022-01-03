Shader "Vita/Lightmapped Vertlit Wind Foliage" {
	Properties {
		_MainTex("Base (RGB)", 2D) = "white" { }
		_Cutoff ("Alpha cutoff", Range(0,1)) = 0.5
		_wind_dir ("Wind Direction", Vector) = (0.5,0.05,0.5,0)
        _wind_size ("Wind Wave Size", range(5,50)) = 15
		_leaves_wiggle_disp ("Leaves Wiggle Displacement", float) = 0.07
        _leaves_wiggle_speed ("Leaves Wiggle Speed", float) = 0.01
		_influence ("Influence", range(0,1)) = 1
		[Toggle(AMBIENT_ON)] _AmbientOn("Ambient Lighting", Float) = 0
	}

	SubShader {
	Tags { "Queue"="AlphaTest" "IgnoreProjector"="True" "RenderType"="TransparentCutout" } //I know this is weird but it's a workaround for the Vita
		LOD 80
		ZWrite On
		Cull Off
		Blend One OneMinusSrcAlpha //because we are going to clip at the end
		
		
		// Non-lightmapped
		Pass {
			Tags { "LightMode" = "Vertex" }
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			
			#pragma multi_compile_fog
			// Compile specialized variants for when positional (point/spot) and spot lights are present
			#pragma multi_compile __ POINT SPOT

			#include "VertexLightmapCommon.cginc"
		

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
			#define CUSTOM_LIGHTMAPPED 1 
			#include "VertexLightmapCommon.cginc"
			#include "UnityCG.cginc"
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
            #include "UnityCG.cginc"
			
			struct v2f {
				V2F_SHADOW_CASTER;
				float2  uv : TEXCOORD0;
				UNITY_VERTEX_OUTPUT_STEREO
//				half3 normal : NORMAL;
			};
			struct appdata {
				half3 vertex : POSITION;
				half3 uv : TEXCOORD0;

			};

			
			uniform float4 _MainTex_ST;
			half4 _wind_dir;
			half _wind_size;
			half _leaves_wiggle_disp;
			half _leaves_wiggle_speed;
			half _influence;

			v2f vert( appdata v )
			{
				v2f o;
				half3 worldPos = mul (unity_ObjectToWorld, half4(v.vertex, 1) ).xyz;
				//Leaf Movement and Wiggle
				( (v.vertex.x += cos(_Time.z * v.vertex.x * _leaves_wiggle_speed + (worldPos.x/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.x * _influence), //x
				(v.vertex.y += sin(_Time.w * v.vertex.y * _leaves_wiggle_speed + (worldPos.y/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.y * _influence),   //y
				(v.vertex.z += cos(_Time.z * v.vertex.z * _leaves_wiggle_speed + (worldPos.z/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.z * _influence) ); //z
								

				UNITY_SETUP_INSTANCE_ID(v);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
				TRANSFER_SHADOW_CASTER(o);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				return o;
			}

			uniform sampler2D _MainTex;
			uniform fixed _Cutoff;

			float4 frag( v2f i ) : SV_Target
			{
				fixed4 texcol = tex2D( _MainTex, i.uv );
				clip( texcol.a - _Cutoff );

				SHADOW_CASTER_FRAGMENT(i);
			}
            ENDCG
        }
	}
	Fallback "Vita/Standard Mobile"
}
