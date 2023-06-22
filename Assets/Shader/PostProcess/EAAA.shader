Shader "Vita/Edge-Aware Adaptive Anti-Aliasing"
{
	SubShader
	{
		Cull Off ZWrite Off ZTest Always
		Pass
		{
			Name "Edge-Aware Adaptive Anti-Aliasing"
			LOD 100
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag

			#define MIPMAP_LEVEL 2
			#define EDGE_THRESHOLD 0.1

			float EdgeDetection(sampler2D mainTex, float2 uv, float2 texelSize)
			{
				float4 centerColor = tex2D(mainTex, uv);
				float4 dx = ddx(centerColor);
				float4 dy = ddy(centerColor);
				float edgeFactor = max(dot(dx, dx), dot(dy, dy));
				edgeFactor = saturate((edgeFactor - EDGE_THRESHOLD) / (1.0 - EDGE_THRESHOLD));
				return edgeFactor;
			}

			float4 EdgeSmoothing(sampler2D mainTex, float2 uv, float2 texelSize, float edgeFactor)
			{
				float4 centerColor = tex2D(mainTex, uv);
				float2 offsets[4] = 
				{
					float2(-texelSize.x, -texelSize.y),
					float2(texelSize.x, -texelSize.y),
					float2(-texelSize.x,  texelSize.y),
					float2(texelSize.x,  texelSize.y)
				};

				float4 blendedColor = centerColor;
				for (int i = 0; i < 4; ++i)
				{
					float4 neighborColor = tex2D(mainTex, uv + offsets[i]);
					blendedColor += neighborColor * edgeFactor;
				}

				blendedColor /= (4.0 * edgeFactor + 1.0);
				return blendedColor;
			}

			struct appdata
			{
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
			};

			struct v2f
			{
				float2 uv : TEXCOORD0;
				float2 texelSize : TEXCOORD1;
				float4 vertex : SV_POSITION;
			};

			sampler2D _AntiAliasingTarget;
			float4 _AntiAliasingTarget_TexelSize;

			v2f vert(appdata v)
			{
				v2f o;
				o.vertex = float4(v.vertex.xy, 0.0, 1.0);
				o.uv = v.vertex.xy * 0.5 + 0.5;
				o.texelSize = _AntiAliasingTarget_TexelSize.xy;
				return o;
			}

			fixed4 frag(v2f i) : SV_Target
			{
				fixed edgeFactor = EdgeDetection(_AntiAliasingTarget, i.uv, i.texelSize);
				fixed4 color = EdgeSmoothing(_AntiAliasingTarget, i.uv, i.texelSize, edgeFactor);
				return color;
			}
			ENDCG
		}

	}
}
