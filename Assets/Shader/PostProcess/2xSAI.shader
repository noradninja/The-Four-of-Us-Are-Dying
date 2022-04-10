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
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
			};

			struct v2f
			{
				float2 uv : TEXCOORD0;
				float4 vertex : SV_POSITION;
			};

			sampler2D _MainTex;
			float4 _MainTex_ST;
			Vector _TextureSize;
			
			v2f vert (appdata v)
			{
				v2f o;
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				return o;
			}
			
			fixed4 frag (v2f i) : SV_Target
			{
				// sample the texture
				fixed4 col = tex2D(_MainTex, i.uv);
				float2 texsize = Vector(_TextureSize.x, _TextureSize.y,0,0).xy;
				float dx = pow(texsize.x, -1.0) * 0.65;
				float dy = pow(texsize.y, -1.0) * 0.65;
				float3 dt = float3(1.0, 1.0, 1.0);

				float3 c00 = tex2D(_MainTex, i.uv + float2(-dx, -dy)).xyz;
				float3 c20 = tex2D(_MainTex, i.uv + float2(dx, -dy)).xyz;
				float3 c02 = tex2D(_MainTex, i.uv + float2(-dx, dy)).xyz;
				float3 c22 = tex2D(_MainTex, i.uv + float2(dx, dy)).xyz;

				float m1=dot(abs(c00-c22),dt)+0.001;
				float m2=dot(abs(c02-c20),dt)+0.001;
				col = float4((m1*(c02+c20)+m2*(c22+c00))/(2.0*(m1+m2)),1.0);

				return col;
			}
			ENDCG
		}
	}
}
/*
#if defined(VERTEX)
void main(
  float2 uv,
  float2 vertex,
  float4 Color,
  uniform float4x4 MVPMatrix,
  float4 out oPosition : POSITION,
  float2 out oTexCoord : TEXCOORD0
{
  oPosition = mul(float4(vertex, 0.0, 1.0), MVPMatrix);
  oTexCoord = uv;
}
#elif defined(FRAGMENT)
void main(
  uniform sampler2D _MainTex,
  uniform float2 TextureSize,
  float2 uv : uv0,
  float4 out oColor : COLOR
)
{
   float2 texsize = float4(TextureSize, 1.0 / TextureSize).xy;
   float dx = pow(texsize.x, -1.0) * 0.25;
   float dy = pow(texsize.y, -1.0) * 0.25;
   float3 dt = float3(1.0, 1.0, 1.0);

   float3 c00 = tex2D(_MainTex, uv + float2(-dx, -dy)).xyz;
   float3 c20 = tex2D(_MainTex, uv + float2(dx, -dy)).xyz;
   float3 c02 = tex2D(_MainTex, uv + float2(-dx, dy)).xyz;
   float3 c22 = tex2D(_MainTex, uv + float2(dx, dy)).xyz;

   float m1=dot(abs(c00-c22),dt)+0.001;
   float m2=dot(abs(c02-c20),dt)+0.001;

   oColor = float4((m1*(c02+c20)+m2*(c22+c00))/(2.0*(m1+m2)),1.0);
}
#endif
*/