// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Lightbeam/Lightbeam Inside" {
	Properties {
		_Color ("Color", Color) = (1,1,1,1)
		_MainTex ("Base (RGB)", 2D) = "white" {}
		_Width ("Width", Float) = 8.71
		_Tweak ("Tweak", Float) = 0.65
	}
	SubShader {
		Tags { "Queue" = "Transparent" "IgnoreProjector" = "True"}
		Pass {
			Cull front
			Blend SrcAlpha OneMinusSrcAlpha
			ZWrite Off
			ZTest LEqual
			Lighting Off
			
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#include "UnityCG.cginc"
			
			sampler2D_half _MainTex;
			half4 _Color;
			half _Width;
			half _Tweak;

			struct v2f 
			{
			    half4 pos : SV_POSITION;
			    half4 uv : TEXCOORD0;
			    half4 falloffUVs : TEXCOORD1;
			    half4 screenPos : TEXCOORD2;
			};
			
			v2f vert (appdata_tan v)
			{
			    v2f o;			    		
			    o.pos = UnityObjectToClipPos( v.vertex );
								
				// Generate the falloff texture UVs
				TANGENT_SPACE_ROTATION;
				half3 refVector = mul(rotation, normalize(ObjSpaceViewDir(v.vertex)));

				const half z = sqrt((refVector.z + _Tweak) * _Width);
				const half x = (refVector.x / z) + 0.5;
				const half y = (refVector.y / z) + 0.5;

				half2 uv1 = half2(x, v.texcoord.y);
				half2 uv2 = half2(x, y);
				o.falloffUVs = half4(uv1, uv2);
				
				o.screenPos = ComputeScreenPos(o.pos);
				COMPUTE_EYEDEPTH(o.screenPos.z);
								
			    return o;
			}
			
			
			half4 frag( v2f In ) : COLOR
			{			
				const half falloff1 = tex2D(_MainTex, In.falloffUVs.xy).r;
				const half falloff2 = tex2D(_MainTex, In.falloffUVs.zw).g;
				
				half4 c = _Color;
				c.a *= falloff1 * falloff2;

				// Fade when near the camera
				c.a *=  saturate(In.screenPos.z * 0.2);

			    return c;
			}
			
			ENDCG
		}
	} 
}
