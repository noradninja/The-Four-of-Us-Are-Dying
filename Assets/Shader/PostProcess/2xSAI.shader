Shader "Unlit/2xSAI"
{
	Properties
	{
		_MainTex ("Texture", 2D) = "white" {}
		_TextureSize ("Texture SIze", Vector) = (720, 408, 0, 0)
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
			#pragma target 2.0
			
			#include "UnityCG.cginc"
		
			struct appdata
			{
				half4 vertex : POSITION;
				half2 uv : TEXCOORD0;
				half2 uv1 : TEXCOORD1;
			};

			struct v2f
			{
				half2 uv : TEXCOORD0;
				half2 uv1 : TEXCOORD1;
				half4 vertex : SV_POSITION;
			};
			sampler2D_half _MainTex;
			half4 _MainTex_TexelSize;
			half4 _MainTex_ST;
			Vector _TextureSize;
			
			v2f vert (appdata v)
			{
				v2f o;
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				const half2 offset = _MainTex_TexelSize.xy * 0.5h;
				o.uv1 = half4(v.uv + offset, v.uv + offset);
				return o;
			}
			
			half4 frag (v2f i) : SV_Target
			{
				// sample the texture
				half4 col = tex2D(_MainTex, i.uv);
				half2 texsize = Vector(_TextureSize.x, _TextureSize.y,0,0).xy;
				half dx = pow(texsize.x, -1.0h) * 0.5h;
				half dy = pow(texsize.y, -1.0h) * 0.5h;
				half3 dt = half3(1.0h,1.0h,1.0h);

				half3 c00 = tex2D(_MainTex, i.uv1 + half2(-dx, -dy)).xyz;
				half3 c20 = tex2D(_MainTex, half2(dx + i.uv1.x, -dy + i.uv1.y)).xyz;
				half3 c02 = tex2D(_MainTex, half2(-dx + i.uv1.x, dy + i.uv1.y)).xyz;
				half3 c22 = tex2D(_MainTex, i.uv1 + half2(dx, dy)).xyz;

				half m1=dot(abs(c00-c22),dt)+0.001h;
				half m2=dot(abs(c02-c20),dt)+0.001h;
				col = half4((m1*(c02+c20)+m2*(c22+c00))/(2.0h*(m1+m2)),1.0h);

				return col;
			}
			ENDCG
		}
	}
}