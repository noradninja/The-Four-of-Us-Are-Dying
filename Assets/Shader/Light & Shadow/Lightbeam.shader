// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Lighting/Lightbeam" {
	Properties {
		_Color ("Color", Color) = (1,1,1,1)
		_MainTex ("Base (RGB)", 2D) = "white" {}
		_Width ("Width", Float) = 8.71
		_Tweak ("Tweak", Float) = 0.65
		_InvFade ("Soft Particles Factor", Range(0.01,3.0)) = 1.0
		[IntRange] _StencilRef ("Stencil Ref", Range(0,255)) = 0
	}
	
	SubShader {
		Tags { "Queue" = "Transparent" "IgnoreProjector" = "True"}
		Stencil{
			WriteMask [_StencilRef]
		}
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
			half4 _Color;
			half _Width;
			half _Tweak;

			// struct appdata_full  {
            //     float4 vertex : POSITION;
            //     fixed4 color : COLOR;
            //     float2 uv : TEXCOORD0;
            //     UNITY_VERTEX_INPUT_INSTANCE_ID
            // };

			struct v2f 
			{
			    half4 vertex : SV_POSITION;
			    half4 uv : TEXCOORD0;
				half4 color : COLOR;
			    half4 falloffUVs : TEXCOORD1;
			    half4 screenPos : TEXCOORD2;
				#ifdef SOFTPARTICLES_ON
                	half4 projPos : TEXCOORD3;
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
				half3 refVector = mul(rotation, normalize(ObjSpaceViewDir(v.vertex)));

				const half z = sqrt((refVector.z + _Tweak) * _Width);
				const half x = (refVector.x / z) + 0.5;
				const half y = (refVector.y / z) + 0.5;

				half2 uv1 = half2(x, v.texcoord.y);
				half2 uv2 = half2(x, y);
				o.falloffUVs = half4(uv1, uv2);
				
				o.screenPos = ComputeScreenPos(o.vertex);
				COMPUTE_EYEDEPTH(o.screenPos.z);
			
               	 	o.projPos = ComputeScreenPos (o.vertex);
                	COMPUTE_EYEDEPTH(o.projPos.z);
              

				//o.color = v.color * _Color;

			    return o;
			}
			
			UNITY_DECLARE_DEPTH_TEXTURE(_CameraDepthTexture);
            half _InvFade;

			half4 frag( v2f i ) : COLOR
			{			
				const half falloff1 = tex2D(_MainTex, i.falloffUVs.xy).r;
				const half falloff2 = tex2D(_MainTex, i.falloffUVs.zw).g;
				
				half4 c = _Color;
				c.a *= falloff1 * falloff2;
			//soft intersections
					const half sceneZ = LinearEyeDepth (SAMPLE_DEPTH_TEXTURE_PROJ(_CameraDepthTexture, UNITY_PROJ_COORD(i.projPos)));
					const half partZ = i.projPos.z;
					const half fade = saturate (_InvFade * (sceneZ-partZ));
					c.a *= fade;
        	// Fade when near the camera
			c.a *=  saturate(i.screenPos.z * 0.2);

			    return c;
			}
			
			ENDCG
		}
	}
}