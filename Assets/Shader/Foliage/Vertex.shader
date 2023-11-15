Shader "Vita/Vertlit Wind Foliage" {
	Properties {
		_MainTex("Base (RGB)", 2D) = "white" { }
		_MOAR("MOAR (RGBA)", 2D) = "white" { }
		_Cutoff ("Alpha cutoff", Range(0,1)) = 0.5
		_wind_dir ("Wind Direction", Vector) = (0.5,0.05,0.5,0)
        _wind_size ("Wind Wave Size", range(5,50)) = 15
		_leaves_wiggle_disp ("Leaves Wiggle Displacement", float) = 0.07
        _leaves_wiggle_speed ("Leaves Wiggle Speed", float) = 0.01
		_influence ("Influence", range(0,1)) = 1
		_Time ("Time", Vector) =(0,0,0,0)
		[Toggle(ALPHA_ON)] _SeparateAlpha("Seperate Alpha", Float) = 1
		[Toggle(WIGGLE_ON)] _LeavesOn("Leaf Movment", Float) = 1
		[Toggle(VERTEXLIGHT_ON)] _VertLightOn("Vertex Lighting", Float) = 0
		[Toggle(CUSTOM_LM)] _CustomLM("Lightmap",Float) = 1
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
			#pragma target 3.0
			#pragma multi_compile_fog
			// Compile specialized variants for when positional (point/spot) and spot lights are present
			#pragma multi_compile __ POINT SPOT
			#pragma multi_compile _ LOD_FADE_CROSSFADE
			#include "VertexLightmapCommon.cginc"
			#include "UnityCG.cginc"
			#include "UnityStandardConfig.cginc"
			#include "UnityPBSLighting.cginc" // TBD: remove
			#include "UnityStandardUtils.cginc"
			ENDCG
		}

		Pass{
            Tags {"LightMode"="ShadowCaster"}

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
			#pragma target 3.0
            #pragma multi_compile_shadowcaster
			#pragma multi_compile_fog
			#pragma multi_compile _ LOD_FADE_CROSSFADE
            #include "UnityCG.cginc"
			#include "UnityCG.cginc"
			#include "UnityStandardConfig.cginc"
			#include "UnityPBSLighting.cginc" // TBD: remove
			#include "UnityStandardUtils.cginc"
			
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
            half _LeavesOn;

			v2f vert( appdata v )
			{
				v2f o;
				half3 worldPos = mul (unity_ObjectToWorld, half4(v.vertex, 1) ).xyz;
				if(_LeavesOn)
					{
						//Leaf Movement and Wiggle
						( (v.vertex.x += cos(_Time.z * v.vertex.x * _leaves_wiggle_speed + (worldPos.x/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.x * _influence), //x
						(v.vertex.y += sin(_Time.w * v.vertex.y * _leaves_wiggle_speed + (worldPos.y/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.y * _influence),   //y
						(v.vertex.z += sin(cos(_Time.y * v.vertex.z * _leaves_wiggle_speed + (worldPos.z/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.z * _influence)) ); //z
					}			

				UNITY_SETUP_INSTANCE_ID(v);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
				TRANSFER_SHADOW_CASTER(o);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				return o;
			}

			uniform sampler2D _MainTex;
            uniform sampler2D _MOAR;
			uniform half _Cutoff;
            float _SeparateAlpha;

			float4 frag( v2f i ) : SV_Target
			{
			   // Calculate custom alpha
                	if(!_SeparateAlpha)
					{
						half alpha = tex2D( _MainTex, i.uv.xy).a;
						clip( alpha - _Cutoff );
                		// Output
						return alpha;
					}
					else
					{
						half alpha = tex2D( _MOAR, i.uv.xy*8).b;
						clip( alpha - _Cutoff );
						// Output
						return alpha;
					}

				SHADOW_CASTER_FRAGMENT(i);
			}
            ENDCG
        }
		 Pass
        {
            // Alpha map enabled Bakery-specific meta pass
			
            Name "META_BAKERY"

            Tags {"LightMode"="Meta"}
            Cull Off
            CGPROGRAM
			 
            #include "UnityStandardMeta.cginc"

            // Include Bakery meta pass
            #include "Assets/Bakery/BakeryMetaPass.cginc"

            uniform sampler2D _MOAR;
		    float _SeparateAlpha;
            
            float4 frag_customMeta (v2f_bakeryMeta i): SV_Target
            {
                UnityMetaInput o;
                UNITY_INITIALIZE_OUTPUT(UnityMetaInput, o);

                // Output custom alpha to Bakery
                if (unity_MetaFragmentControl.w)
                {
                    // Calculate custom alpha
                	if(!_SeparateAlpha)
					{
						half alpha = tex2D( _MainTex, i.uv.xy).a;
						clip( alpha - _Cutoff );
                		// Output
						return alpha;
					}
					else
					{
						half alpha = tex2D( _MOAR, i.uv.xy*8).b;
						clip( alpha - _Cutoff );
						// Output
						return alpha;
					}
                }

                // Regular Unity meta pass
                o.Albedo = tex2D(_MainTex, i.uv);
                return UnityMetaFragment(o);
            }

            // Must use vert_bakerymt vertex shader
            #pragma vertex vert_bakerymt
            #pragma fragment frag_customMeta
            ENDCG
        }
	}
	Fallback "Vita/Standard Mobile"
}