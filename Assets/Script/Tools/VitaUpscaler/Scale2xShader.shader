Shader "Vita/PresentScale2x"
{
    Properties
    {
        _MainTex ("Source", 2D) = "black" {}
        _Threshold ("Threshold", Float) = 0.05
    }

    SubShader
    {
        Tags
        {
            "Queue"="Overlay" "RenderType"="Opaque"
        }

        Pass
        {
            ZTest Always
            ZWrite Off
            Cull Off
            Lighting Off
            Fog
            {
                Mode Off
            }

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #include "UnityCG.cginc"

            sampler2D _MainTex;
            float4 _MainTex_TexelSize;
            float _Threshold;

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };

            struct v2f
            {
                float4 pos : SV_POSITION;
                float2 uv : TEXCOORD0;
            };

            v2f vert(appdata v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.uv = v.uv;
                return o;
            }

            bool Similar(fixed4 a, fixed4 b)
            {
                fixed3 d = a.rgb - b.rgb;
                return dot(d, d) <= _Threshold * _Threshold;
            }

            fixed4 frag(v2f i) : SV_Target
            {
                float2 texel = _MainTex_TexelSize.xy;

                float2 srcPixel = floor(i.uv * _MainTex_TexelSize.zw);
                float2 srcUV = (srcPixel + 0.5) * texel;

                fixed4 B = tex2D(_MainTex, srcUV + float2(0.0, texel.y));
                fixed4 D = tex2D(_MainTex, srcUV + float2(-texel.x, 0.0));
                fixed4 E = tex2D(_MainTex, srcUV);
                fixed4 F = tex2D(_MainTex, srcUV + float2(texel.x, 0.0));
                fixed4 H = tex2D(_MainTex, srcUV + float2(0.0, -texel.y));

                float2 subPixel = frac(i.uv * _MainTex_TexelSize.zw * 2.0);

                bool left = subPixel.x < 0.5;
                bool bottom = subPixel.y < 0.5;

                if (!Similar(B, H) && !Similar(D, F))
                {
                    if (left && !bottom)
                        return Similar(D, B) ? D : E;

                    if (!left && !bottom)
                        return Similar(B, F) ? F : E;

                    if (left && bottom)
                        return Similar(D, H) ? D : E;

                    return Similar(H, F) ? F : E;
                }

                return E;
            }
            ENDCG
        }
    }

    Fallback Off
}