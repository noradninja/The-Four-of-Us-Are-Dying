// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Lighting/Lightbeam" {
	Properties {
		_Color ("Color", Color) = (1,1,1,1)
		_MainTex ("Base (RGB)", 2D) = "white" {}
		_Width ("Width", Float) = 8.71
		_Tweak ("Tweak", Float) = 0.65
		_InvFade ("Soft Particles Factor", Range(0.01,3.0)) = 1.0
	}
	SubShader {
		Tags { "Queue" = "Transparent" "IgnoreProjector" = "True"}
		Pass {
			Cull Back
			Blend SrcAlpha OneMinusSrcAlpha
			ZWrite Off
			ZTest NotEqual
			Lighting Off
			
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#pragma multi_compile_particles
			#include "UnityCG.cginc"
			#define SOFTPARTICLES_ON 1
			sampler2D _MainTex;
			fixed4 _Color;
			fixed _Width;
			fixed _Tweak;

			// struct appdata_full  {
            //     float4 vertex : POSITION;
            //     fixed4 color : COLOR;
            //     float2 uv : TEXCOORD0;
            //     UNITY_VERTEX_INPUT_INSTANCE_ID
            // };

			struct v2f 
			{
			    float4 vertex : SV_POSITION;
			    float4 uv : TEXCOORD0;
				fixed4 color : COLOR;
			    float4 falloffUVs : TEXCOORD1;
			    float4 screenPos : TEXCOORD2;
				#ifdef SOFTPARTICLES_ON
                	float4 projPos : TEXCOORD3;
                #endif
				UNITY_VERTEX_OUTPUT_STEREO
			};
			
			v2f vert (appdata_full v)
			{
			    v2f o;
				UNITY_SETUP_INSTANCE_ID(v);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);	

			    o.vertex = UnityObjectToClipPos( v.vertex );
								
				// Generate the falloff texture UVs
				TANGENT_SPACE_ROTATION;
				float3 refVector = mul(rotation, normalize(ObjSpaceViewDir(v.vertex)));

				fixed z = sqrt((refVector.z + _Tweak) * _Width);
				fixed x = (refVector.x / z) + 0.5;
				fixed y = (refVector.y / z) + 0.5;

				fixed2 uv1 = float2(x, v.texcoord.y);
				fixed2 uv2 = float2(x, y);
				o.falloffUVs = fixed4(uv1, uv2);
				
				o.screenPos = ComputeScreenPos(o.vertex);
				COMPUTE_EYEDEPTH(o.screenPos.z);
			
               	 	o.projPos = ComputeScreenPos (o.vertex);
                	COMPUTE_EYEDEPTH(o.projPos.z);
              

				//o.color = v.color * _Color;

			    return o;
			}
			
			UNITY_DECLARE_DEPTH_TEXTURE(_CameraDepthTexture);
            float _InvFade;

			fixed4 frag( v2f i ) : COLOR
			{			
				fixed falloff1 = tex2D(_MainTex, i.falloffUVs.xy).r;
				fixed falloff2 = tex2D(_MainTex, i.falloffUVs.zw).g;
				
				fixed4 c = _Color;
				c.a *= falloff1 * falloff2;
			//soft intersections
					float sceneZ = LinearEyeDepth (SAMPLE_DEPTH_TEXTURE_PROJ(_CameraDepthTexture, UNITY_PROJ_COORD(i.projPos)));
					float partZ = i.projPos.z;
					float fade = saturate (_InvFade * (sceneZ-partZ));
					c.a *= fade;
        	// Fade when near the camera
			c.a *=  saturate(i.screenPos.z * 0.2);

			    return c;
			}
			
			ENDCG
		}
//		Pass
//        {
//            Tags {"LightMode"="ShadowCaster"}
//
//            CGPROGRAM
//            #pragma vertex vert
//            #pragma fragment frag
//            #pragma multi_compile_shadowcaster
//            #include "UnityCG.cginc"
//			
//            struct v2f { 
//                V2F_SHADOW_CASTER;
//				
//            };
//
//            v2f vert(appdata_base v)
//            {
//                v2f o;
//                TRANSFER_SHADOW_CASTER(o)
//                return o;
//            }
//
//            float4 frag(v2f i) : SV_Target
//            {
//                SHADOW_CASTER_FRAGMENT(i)
//            }
//            ENDCG
//        }
	} 
}
