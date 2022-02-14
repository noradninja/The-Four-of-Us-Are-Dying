// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'


Shader "Custom/CrepuscularRays" {
	Properties{
		_MainTex("Base (RGB)", 2D) = "white" {}
		_BlurTex("Base (RGB)", 2D) = "white" {}
		_NumSamples("Number of Damples", Range(0, 1024)) = 128
		_Density("Density", Range(0, 1)) = 1.0
		_Weight("Weight", Range(0, 1)) = 1.0
		_Decay("Decay", Range(0, 1)) = 1.0
		_Exposure("Exposure", Range(0, 1)) = 1.0
	}
	SubShader {
		Pass { //0- Calculate low resolution rays
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			
			#include "UnityCG.cginc"

			uniform sampler2D_half _MainTex;
				uniform sampler2D_half _BlurTex;
			uniform sampler2D _CameraDepthTexture;
			half3 _LightPos;
			half _NumSamples;
			half _Density;
			half _Weight;
			half _Decay;
			half _Exposure;

			struct appdata{
				float4 pos : POSITION;
				float2 uv : TEXCOORD0;
			};

			struct v2f {
				float4 pos : SV_POSITION;
				float2 uv  : TEXCOORD0;
			};

			v2f vert( appdata v ){
				v2f o;
				o.pos = UnityObjectToClipPos (v.pos);
				o.uv = v.uv;
				return o;
			}
			
			half4 frag(v2f i) : COLOR{
				// Calculate vector from pixel to light source in screen space.
				half4 light = half4(_LightPos.xyz,1);
				half2 deltaTexCoord = (i.uv - light.xy);
				// Divide by number of samples and scale by control factor.
				deltaTexCoord *= 1.0f / _NumSamples * _Density;
				// Store initial sample.
				half2 uv = i.uv;
				half3 color = tex2D(_MainTex, uv);
				//half depth = Linear01Depth(tex2D(_CameraDepthTexture, uv).r);
				// Set up illumination decay factor.
				half illuminationDecay = 1.0f;
				// Evaluate summation from Equation 3 NUM_SAMPLES iterations.
				for (int i = 0; i < _NumSamples; i++)
				{
					// Step sample location along ray.
					uv -= deltaTexCoord;
					// Retrieve sample at new location.
					half3 sample = tex2D(_MainTex, uv);
					half depth = Linear01Depth(tex2D(_CameraDepthTexture, uv).r);
					// Apply sample attenuation scale/decay factors.
					sample *= illuminationDecay * (_Weight/ _NumSamples);
					sample *= depth;
					// Accumulate combined color.
					color += sample;
					// Update exponential decay factor.
					illuminationDecay *= _Decay;
				}
				color = (color.r + color.g+color.b)/3;
				// Output final color with a further scale control factor.
				return half4(color * _Exposure, 1);
			}
		ENDCG
		}
		Pass //1- Composition 
		{
			CGPROGRAM
			#pragma vertex vertFinal
			#pragma fragment fragFinal
			#pragma fragmentoption ARB_precision_hint_fastest

			uniform sampler2D_half _MainTex;
			uniform sampler2D_half _BlurTex;

				struct appdata
			{
				float4 pos : POSITION;
				float2 uv : TEXCOORD0;
			};

			struct v2f {
				float4 pos : SV_POSITION;
				float2 uv  : TEXCOORD0;
			};

			v2f vertFinal(appdata i)
			{
				v2f o = (v2f)0;
				UNITY_INITIALIZE_OUTPUT(v2f, o);
				o.pos = UnityObjectToClipPos(i.pos);
				o.uv = (i.uv);
				return o;
			}
			
			fixed4 fragFinal(v2f i) : SV_Target
			{
				fixed4 col = tex2D(_MainTex, i.uv);
				fixed4 sample = tex2D(_BlurTex, i.uv);
				//add our ray greyscale samples at + 50% brightness to the main image 
				return  (col) + (sample * 0.5h);
			}
			ENDCG
		}
	}
}