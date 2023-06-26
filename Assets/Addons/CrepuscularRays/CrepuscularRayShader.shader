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
		_Parameter("Kernel Offset", Range(0, 4)) = 1.0
		_Contrast("Contrast", Range(1, 5)) = 1.0
		_PerpendicularFalloff("Perpendicular Falloff Rate", Range(0.01, 1)) = 1.0
		_CosAngle("Angle", Float) = 1
		[IntRange] _StencilRef ("Stencil Ref", Range(0,255)) = 0
		_TintColor ("Tint Color", Color) = (.5, .5, .5, .5)
		_FrameValue("Frame remainder", Float) = 0
		[IntRange] _Frequency ("Frequency", Range(1,15)) = 1
		_fogInfluence("Fog Influence", Range(0,2)) = 0.5
		_fogSpeed("Fog Speed", Float) = 10.0
	}
		CGINCLUDE
		#include "UnityCG.cginc"
		#pragma target 2.0

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
		half _LightY;
		half _CosAngle;
		half4 _TintColor;
		half _PerpendicularFalloff;
		int _Frequency;
		float _fogInfluence;
		half _fogSpeed;
		

		
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

		half rand(half2 co)
				{
				    const half a = 2.9898f;
				    const half b = 78.233f;
				    const half c = 28.5453f;
				    const half dt = dot(co.xy ,half2(a,b));
				    const half sn = cos(abs(dt/3.14f));
				    return cos(frac(sin(sn) * c)* ((_Time.w * _fogSpeed) * _fogInfluence));
				}	
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
				// Calculate floattor from pixel to light source in screen space.
				half4 light = half4(_LightPos.xyz,1);
				half2 deltaTexCoord = half2 (0,0);
				// get our y direction, and swap the direction the coordinates are plotted based on that
				// so that it looks correct regardless of current camera rotation- we decompose this
				//because it will not look right if we just add or subtract light.xy to i.uv
				deltaTexCoord = half2(light.y < 0.0h ? half2(i.uv.x + light.x, i.uv.y + light.y) : half2(i.uv.x - light.x, i.uv.y - light.y));

				// Divide by number of samples and scale by control factor.
				deltaTexCoord *= 1.0h / _NumSamples * _Density;
				
				// Store initial sample.
				half2 uv = i.uv;
				half3 color = tex2D(_MainTex, uv);
				
				// Set up illumination decay factor.
				half illuminationDecay = 1.0h;
				
				// Evaluate summation from Equation 3 NUM_SAMPLES iterations.
				float depth;
				half rate = _Frequency;
				
				for (int i = 1; i < _NumSamples + 1; i++)
				{
					// Step sample location along ray.
					uv -= deltaTexCoord;
					// Retrieve sample at new location.
					float sample = tex2D(_MainTex, uv);
					half randomFactor = rand(uv.yx)*_fogInfluence * _Contrast;
					float value = frac(i/rate);
					float cast = Linear01Depth(tex2D(_CameraDepthTexture, uv)).r;
					//calc depth value
					depth = float(value !=0 ? float(cast * 1.5f):float(cast * randomFactor));
					// Apply sample attenuation scale/decay factors.
					sample *= illuminationDecay * (_Weight/ _NumSamples*6) * depth;
					sample *= 2.5h;
					
					// Accumulate combined color.
					color += sample;
					// Update exponential decay factor.
					illuminationDecay *= _Decay;
				}
				// Output final color with a further scale control factor.
				return (max(half4(color * _Exposure, 1), 0.15h));
			}
/////////////// SGX Horizontal Blur /////////////////////////////		
		v2f_withBlurCoordsSGX vertBlurHorizontalSGX (appdata_img v)
			{
				v2f_withBlurCoordsSGX o;
				o.pos = UnityObjectToClipPos(v.vertex);
				
				o.uv = UnityStereoScreenSpaceUVAdjust(v.texcoord.xy, _MainTex_ST);

				const half offsetMagnitude = _MainTex_TexelSize.x * _Parameter.x;
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

				const half offsetMagnitude = _MainTex_TexelSize.y * _Parameter.x;
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
					const half4 tapA = tex2D(_MainTex, i.offs[l].xy);
					const half4 tapB = tex2D(_MainTex, i.offs[l].zw); 
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
				half4 light = half4(_LightPos.xyz,1);
				_CosAngle = 1- abs(cos(light.z));
				const fixed4 col = tex2D(_MainTex, i.uv);
				fixed4 sample = tex2D(_BlurTex, i.uv);
				const fixed contrast = _Contrast;
				//sample = sample.r + sample.g + sample.b;
				//sample *= 2.0h;
				const fixed4 finalSample = (((col) + (sample * 0.4h)) - 0.5h) * contrast + 0.445h; //final sampled color
				const fixed4 finalColor = (col + (col * 0.04h) - 0.01h); //final modulated base color
				//add our ray greyscale samples at - 25% brightness to the main image
				fixed4 blitColor = lerp(finalSample, finalColor, (1 - _CosAngle - _PerpendicularFalloff));//lerp (finalColor + 0.25, finalColor + 0.035h, normalizedLightY);
				return blitColor;
			}

		//
		v2f vertStencil(appdata v)
		{
				v2f o;
				o.pos = UnityObjectToClipPos (v.pos);
				o.uv = v.uv;
				return o;
		}
		half4 fragStencil (v2f i) : SV_Target
		{
			fixed4 col = _TintColor;
			return col;
		}
		
		ENDCG
	////// Passes /////////////////////////////////////////////////////
	SubShader {
		ZTest Always
		Cull Off
		//0- calculate low resolution rays
		
		Pass { 
				CGPROGRAM
				#pragma vertex vert
				#pragma fragment frag
				#pragma fragmentoption ARB_precision_hint_fastest
				ENDCG
			}
			//2- vertical blur
		Pass {
				CGPROGRAM 
				#pragma vertex vertBlurVerticalSGX
				#pragma fragment fragBlurSGX
				#pragma fragmentoption ARB_precision_hint_fastest
				ENDCG
			}	
			
		//3- horizontal Blur
		Pass {		
				CGPROGRAM	
				#pragma vertex vertBlurHorizontalSGX
				#pragma fragment fragBlurSGX
				#pragma fragmentoption ARB_precision_hint_fastest
				ENDCG
			}
		Pass //4- composition 
		{
        	CGPROGRAM
			#pragma vertex vertFinal
			#pragma fragment fragFinal
			#pragma fragmentoption ARB_precision_hint_fastest
			ENDCG
		}
		Pass { 
		Stencil{
			Ref [_StencilRef]
			Comp Equal
			Pass Keep
		}
				CGPROGRAM
				#pragma vertex vertStencil
				#pragma fragment fragStencil
				#pragma fragmentoption ARB_precision_hint_fastest
				ENDCG
			}
	}
}