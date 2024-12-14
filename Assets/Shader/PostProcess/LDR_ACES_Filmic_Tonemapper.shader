Shader "Vita/LDR_ACES_Filmic_Tonemapper"
{
	Properties
	{
		_MainTex ("Texture", 2D) = "white" {}
		[Toggle(COLOR_GRADING_ENABLE)] _colorGrading ("Color Grading", Float) = 0
		[Toggle(TONE_MAPPING_ENABLE)] _toneMapping ("Tonemapping", Float) = 0
		_exposure ("Exposure", Range(0,2)) = 1
		_gradingColor ("Grading Color", Color) = (1,1,1,1)
	}
	SubShader
	{
		Tags { "RenderType"="Opaque" }
		LOD 100

		Pass
		{
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#include "UnityCG.cginc"

			struct appdata
			{
				half4 vertex : POSITION;
				half2 uv : TEXCOORD0;
			};

			struct v2f
			{
				half2 uv : TEXCOORD0;
				half4 vertex : SV_POSITION;
			};

			sampler2D _MainTex;
			half4 _MainTex_ST;
			half4 _gradingColor;
			half _colorGrading;
			half _toneMapping;
			v2f vert (appdata v)
			{
				v2f o;
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				return o;
			}
			// 
			half _exposure;
			half3 aces_approx(half3 inputColor)
			{
			    inputColor *= 1.0625f;
			    half a = 2.51f;
			    half b = 0.03f;
			    half c = 2.43f;
			    half d = 0.59f;
			    half e = 0.14f;
			    return clamp((inputColor*(a*inputColor+b))/(inputColor*(c*inputColor+d)+e), 0.0h, 1.0h);
			}
			const half3x3 preToneMapXform =
			{
			     0.575961650,  0.344143820,  0.079952030,
			     0.070806820,  0.827392350,  0.101774690,
			     0.028035252,  0.131523770,  0.840242300
			};
			const half3x3 postToneMapXform =
			{
			     1.666954300, -0.601741150, -0.065202855,
			    -0.106835220,  1.237778600, -0.130948950,
			    -0.004142626, -0.087411870,  1.091555000
			};

			fixed4 frag (v2f i) : SV_Target
			{
				// sample the texture, in this case the src color buffer
				half4 col = tex2D(_MainTex, i.uv);
				half3 outputColor;
				half3 WorkingColor = mul(_exposure, col);
				if (_colorGrading)//color graded
				{
					WorkingColor = WorkingColor + _gradingColor * 0.066f;
				}
				else //no color grading
				{
					WorkingColor = WorkingColor;
				}

				if (_toneMapping)
				{
					WorkingColor = aces_approx(WorkingColor); //tonemap
				}
				else
				{
					WorkingColor = WorkingColor;
				}
				outputColor = WorkingColor;
				
				return half4(outputColor,1);
			}
			
			ENDCG
		}
	}
}

/*
// This multiplier corresponds to "ExposureCompensation=1" and disabled auto exposure
const float ExposureMultiplier = 1.4;

const float3x3 preToneMapXform =
{
     0.575961650,  0.344143820,  0.079952030,
     0.070806820,  0.827392350,  0.101774690,
     0.028035252,  0.131523770,  0.840242300
};
const float3x3 exposedPreToneMapXform = ExposureMultiplier * preToneMapXform;
const float3x3 postToneMapXform =
{
     1.666954300, -0.601741150, -0.065202855,
    -0.106835220,  1.237778600, -0.130948950,
    -0.004142626, -0.087411870,  1.091555000
};

// Transform color spaces, perform blue correction and pre desaturation
float3 WorkingColor = mul(exposedPreToneMapXform, LinearColor);

// Apply tonemapping curve
// Narkowicz 2016, "ACES Filmic Tone Mapping Curve"
// https://knarkowicz.wordpress.com/2016/01/06/aces-filmic-tone-mapping-curve/
const float a = 2.51;
const float b = 0.03;
const float c = 2.43;
const float d = 0.59;
const float e = 0.14;
WorkingColor = saturate((WorkingColor * (a * WorkingColor + b)) / (WorkingColor * (c * WorkingColor + d) + e));

// Transform color spaces, apply blue correction and post desaturation
return mul( postToneMapXform, WorkingColor );*/