// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'


Shader "Lighting/Crepuscular Rays" {
	Properties{
		_MainTex("Base (RGB)", 2D) = "white" {}
		_BlurTex("BlurTex (RGB)", 2D) = "white" {}
		_NumSamples("Number of Samples", Range(0, 1024)) = 128
		_Density("Density", Range(0, 1)) = 1.0
		_Weight("Weight", Range(0, 2)) = 1.0
		_Decay("Decay", Range(0, 1)) = 1.0
		_Exposure("Exposure", Range(0, 1)) = 1.0
		//_Parameter("Kernel Offset", Range(0, 5)) = 1.0
		_Contrast("Contrast", Range(1, 5)) = 1.0
		
		}
		CGINCLUDE
		#include "UnityCG.cginc"
		#pragma 

		uniform sampler2D_half _MainTex;
		uniform sampler2D_half _BlurTex;
		uniform sampler2D _CameraDepthTexture;
		half3 _LightPos;
		half _NumSamples;
		half _Density;
		half _Weight;
		half _Decay;
		half _Exposure;
		half _Contrast;
		uniform half4 _Parameter;
		uniform half4 _MainTex_TexelSize;
		half4 _MainTex_ST;

		struct appdata
		{
			float4 pos : POSITION;
			float2 uv : TEXCOORD0;
		};

		struct v2f 
		{
			float4 pos : SV_POSITION;
			float2 uv  : TEXCOORD0;
		};

		struct v2f_withBlurCoordsSGX 
		{
			float4 pos : SV_POSITION;
			half2 uv : TEXCOORD0;
			half4 offs[3] : TEXCOORD1;
		};

		static const half curve[7] = { 0.0205, 0.0855, 0.232, 0.324, 0.232, 0.0855, 0.0205 };  // gauss'ish blur weights
		


////////////// accumulator for rays  /////////////////
		v2f vert( appdata v )
			{
				v2f o;
				o.pos = UnityObjectToClipPos (v.pos);
				o.uv = v.uv;
				return o;
			}
			
			
		half4 frag(v2f i) : COLOR
			{
				// Calculate vector from pixel to light source in screen space.
				half4 light = half4(_LightPos.xyz,1);
				half2 deltaTexCoord = (0,0);
				
				if (_LightPos.y > 7){
					light = half4(_LightPos.x, 7, _LightPos.z,1);
				}

				// get our y vector direction, and swap the direction the coordinates are plotted based on that
				// so that it looks correct regardless of current camera rotation
				if (light.y < 0){
					deltaTexCoord = (i.uv + light.xy);
				}
				
				if (light.y > 0){
					deltaTexCoord = (i.uv - light.xy);
				}
			
				
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
					//half depth = Linear01Depth(tex2D(_CameraDepthTexture, uv).r);
					// Apply sample attenuation scale/decay factors.
					sample *= illuminationDecay * (_Weight/ _NumSamples*4);
					sample *= 5;
					// Accumulate combined color.
					color += sample;
					// Update exponential decay factor.
					illuminationDecay *= _Decay;
				}
				//drop color
				color = (color.r + color.g + color.b)/3;
				// Output final color with a further scale control factor.
				return max(half4(color * _Exposure, 1), 0.125f);
			}
/////////////// SGX Horizontal Blur /////////////////////////////		
		v2f_withBlurCoordsSGX vertBlurHorizontalSGX (appdata_img v)
			{
				v2f_withBlurCoordsSGX o;
				o.pos = UnityObjectToClipPos(v.vertex);
				
				o.uv = UnityStereoScreenSpaceUVAdjust(v.texcoord.xy, _MainTex_ST);

				half offsetMagnitude = _MainTex_TexelSize.x * _Parameter.x;
				o.offs[0] = UnityStereoScreenSpaceUVAdjust(v.texcoord.xyxy + offsetMagnitude * half4(-3.0h, 0.0h, 3.0h, 0.0h), _MainTex_ST);
				o.offs[1] = UnityStereoScreenSpaceUVAdjust(v.texcoord.xyxy + offsetMagnitude * half4(-2.0h, 0.0h, 2.0h, 0.0h), _MainTex_ST);
				o.offs[2] = UnityStereoScreenSpaceUVAdjust(v.texcoord.xyxy + offsetMagnitude * half4(-1.0h, 0.0h, 1.0h, 0.0h), _MainTex_ST);

				return o; 
			}
/////////////// SGX Vertical Blur /////////////////////////////		
		v2f_withBlurCoordsSGX vertBlurVerticalSGX (appdata_img v)
			{
				v2f_withBlurCoordsSGX o;
				o.pos = UnityObjectToClipPos(v.vertex);
				
				o.uv = half4(UnityStereoScreenSpaceUVAdjust(v.texcoord.xy, _MainTex_ST),1,1);

				half offsetMagnitude = _MainTex_TexelSize.y * _Parameter.x;
				o.offs[0] = UnityStereoScreenSpaceUVAdjust(v.texcoord.xyxy + offsetMagnitude * half4(0.0h, -3.0h, 0.0h, 3.0h), _MainTex_ST);
				o.offs[1] = UnityStereoScreenSpaceUVAdjust(v.texcoord.xyxy + offsetMagnitude * half4(0.0h, -2.0h, 0.0h, 2.0h), _MainTex_ST);
				o.offs[2] = UnityStereoScreenSpaceUVAdjust(v.texcoord.xyxy + offsetMagnitude * half4(0.0h, -1.0h, 0.0h, 1.0h), _MainTex_ST);

				return o; 
			}
///////////// SGX Frag  //////////////////////////////////////
		half4 fragBlurSGX ( v2f_withBlurCoordsSGX i ) : SV_Target
			{
				half2 uv = i.uv.xy;
				
				half4 color = tex2D(_MainTex, i.uv) * curve[3];
				
				for( int l = 0; l < 3; l++ )  
				{   
					half4 tapA = tex2D(_MainTex, i.offs[l].xy);
					half4 tapB = tex2D(_MainTex, i.offs[l].zw); 
					color += (tapA + tapB) * curve[l];
				}
				return color;
			}
/////////////// Composition /////////////////////////////
		v2f vertFinal(appdata i)
			{
				v2f o = (v2f)0;
				UNITY_INITIALIZE_OUTPUT(v2f, o);
				o.pos = UnityObjectToClipPos(i.pos);
				o.uv = (i.uv);
				return o;
			}
			
		half4 fragFinal(v2f i) : SV_Target
			{
				fixed4 col = tex2D(_MainTex, i.uv);
				fixed4 sample = tex2D(_BlurTex, i.uv);
				fixed contrast = _Contrast;
				//add our ray greyscale samples at + 50% brightness to the main image 
				return  (((col) + (sample * 0.55h))- 0.5h) * contrast + 0.5h;
			}
		ENDCG

////// Passes /////////////////////////////////////////////////////
	SubShader {
		ZTest Always
		Cull Off
		//0- Calculate low resolution rays
		Pass { 
				CGPROGRAM
				#pragma vertex vert
				#pragma fragment frag
				#pragma fragmentoption ARB_precision_hint_fastest
				ENDCG
			}
			//1- vertical blur
		Pass {
				CGPROGRAM 
				#pragma vertex vertBlurVerticalSGX
				#pragma fragment fragBlurSGX
				#pragma fragmentoption ARB_precision_hint_fastest
				ENDCG
			}	
			
		//2- Horizontal Blur
		Pass {		
				CGPROGRAM	
				#pragma vertex vertBlurHorizontalSGX
				#pragma fragment fragBlurSGX
				#pragma fragmentoption ARB_precision_hint_fastest
				ENDCG
			}
		Pass //3- Composition 
		{
			CGPROGRAM
			#pragma vertex vertFinal
			#pragma fragment fragFinal
			#pragma fragmentoption ARB_precision_hint_fastest
			ENDCG
		}
	}
}