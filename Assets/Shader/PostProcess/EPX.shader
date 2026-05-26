Shader "Vita/PostScale2x"
{
    Properties
    {
        _MainTex ("Source", 2D) = "black" {}
        _Threshold ("Threshold", Float) = 0.125
    }

    SubShader
    {
        Cull Off
        ZWrite Off
        ZTest Always
        Fog
        {
            Mode Off
        }

        Pass
        {
            CGPROGRAM
            #pragma vertex vert_img
            #pragma fragment frag
            #include "UnityCG.cginc"

            sampler2D _MainTex;
            float4 _MainTex_TexelSize;
            float _Threshold;

            bool Similar(fixed4 a, fixed4 b)
            {
                fixed3 d = a.rgb - b.rgb;
                return dot(d, d) <= _Threshold * _Threshold;
            }

            fixed4 frag(v2f_img i) : SV_Target
            {
                float2 texel = _MainTex_TexelSize.xy;

                fixed4 B = tex2D(_MainTex, i.uv + float2(0, texel.y));
                fixed4 D = tex2D(_MainTex, i.uv + float2(-texel.x, 0));
                fixed4 E = tex2D(_MainTex, i.uv);
                fixed4 F = tex2D(_MainTex, i.uv + float2(texel.x, 0));
                fixed4 H = tex2D(_MainTex, i.uv + float2(0, -texel.y));

                float2 sub = frac(i.uv * _MainTex_TexelSize.zw * 2.0);

                bool left = sub.x < 0.5;
                bool bottom = sub.y < 0.5;

                if (!Similar(B, H) && !Similar(D, F))
                {
                    if (left && !bottom)
                        return Similar(D, B) ? D : E;

                    if (!left && !bottom)
                        return Similar(B, F) ? F : E;

                    if (left && bottom)
                        return Similar(D, H) ? D : E;

                    if (!left && bottom)
                        return Similar(H, F) ? F : E;
                }

                return E;
            }
            ENDCG
        }
    }

    Fallback Off
}