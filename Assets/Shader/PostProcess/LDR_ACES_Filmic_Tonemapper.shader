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
			    half a = 5.0f;
			    half b = 0.03f;
			    half c = 2.43f;
			    half d = 0.59f;
			    half e = 0.14f;
			    return clamp((inputColor*(a*inputColor+b))/(inputColor*(c*inputColor+d)+e), 0.0h, 1.0h);
			}
			
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