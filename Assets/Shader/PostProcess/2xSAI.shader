Shader "Custom/CheapUpscalingTriangulation"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
    }

    SubShader
    {
        Tags { "RenderType"="Opaque" }
        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"

            sampler2D _MainTex;
            float2 _textureSize;

            struct v2f
            {
                float4 pos : SV_POSITION;
                float2 uv : TEXCOORD0;
                float2 screenCoords : TEXCOORD1;
                float2 c05 : TEXCOORD2;
                float2 c06 : TEXCOORD3;
                float2 c09 : TEXCOORD4;
                float2 c10 : TEXCOORD5;
            };

            v2f vert(appdata_full v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.uv = v.texcoord;
                _textureSize = float2(400,230);
                float2 coords = o.uv * 1.00006103515625;
                o.screenCoords = coords * _textureSize - float2(0.5, 0.5);
                o.c05 = (o.screenCoords + float2(0.0, 0.0)) / _textureSize;
                o.c06 = (o.screenCoords + float2(1.0, 0.0)) / _textureSize;
                o.c09 = (o.screenCoords + float2(0.0, 1.0)) / _textureSize;
                o.c10 = (o.screenCoords + float2(1.0, 1.0)) / _textureSize;

                return o;
            }

            float luma(float3 v)
            {
                return dot(v, float3(0.299, 0.587, 0.114));
            }

            float3 blend(float3 a, float3 b, float t)
            {
                return lerp(a, b, t);
            }

            float3 tri(float2 pxCoords)
            {
                float3 ws;
                ws.x = pxCoords.y - pxCoords.x;
                ws.y = 1.0 - ws.x;
                ws.z = (pxCoords.y - ws.x) / (ws.y + 0.02);
                return ws;
            }

            float3 quad(float2 pxCoords)
            {
                return float3(pxCoords.x, pxCoords.x, pxCoords.y);
            }

            bool hasDiagonal(float a, float b, float c, float d)
            {
                return distance(a, d) * 2.0 < distance(b, c);
            }

            struct Pixel
            {
                float3 p0;
                float3 p1;
                float3 p2;
                float3 p3;
            };

            struct Pattern
            {
                Pixel pixels;
                bool tri;
                float2 coords;
            };

            Pattern pattern0(Pixel pixels, float2 pxCoords)
            {
                Pattern result;
                result.pixels = pixels;
                result.tri = false;
                result.coords = pxCoords;
                return result;
            }

            Pattern pattern1(Pixel pixels, float2 pxCoords)
            {
                Pattern result;
                if (pxCoords.y > pxCoords.x)
                {
                    result.pixels.p0 = pixels.p0;
                    result.pixels.p1 = pixels.p2;
                    result.pixels.p2 = pixels.p2;
                    result.pixels.p3 = pixels.p3;
                    result.coords = float2(pxCoords.x, pxCoords.y);
                }
                else
                {
                    result.pixels.p0 = pixels.p0;
                    result.pixels.p1 = pixels.p1;
                    result.pixels.p2 = pixels.p1;
                    result.pixels.p3 = pixels.p3;
                    result.coords = float2(pxCoords.y, pxCoords.x);
                }
                result.tri = true;
                return result;
            }

            fixed4 frag(v2f i) : SV_Target
            {
                float3 t05 = tex2D(_MainTex, i.c05).rgb;
                float3 t06 = tex2D(_MainTex, i.c06).rgb;
                float3 t09 = tex2D(_MainTex, i.c09).rgb;
                float3 t10 = tex2D(_MainTex, i.c10).rgb;

                float l05 = luma(t05);
                float l06 = luma(t06);
                float l09 = luma(t09);
                float l10 = luma(t10);

                // ✅ Corrected Struct Initialization
                Pixel pixels;
                pixels.p0 = t05;
                pixels.p1 = t06;
                pixels.p2 = t09;
                pixels.p3 = t10;

                bool d05_10 = hasDiagonal(l05, l06, l09, l10);
                bool d06_09 = hasDiagonal(l06, l05, l10, l09);

                float2 pxCoords = frac(i.screenCoords);

                if (d06_09)
                {
                    Pixel tempPixels;
                    tempPixels.p0 = pixels.p1;
                    tempPixels.p1 = pixels.p0;
                    tempPixels.p2 = pixels.p3;
                    tempPixels.p3 = pixels.p2;
                    pixels = tempPixels;

                    pxCoords.x = 1.0 - pxCoords.x;
                }

                Pattern pattern;
                if (d05_10 || d06_09)
                {
                    pattern = pattern1(pixels, pxCoords);
                }
                else
                {
                    pattern = pattern0(pixels, pxCoords);
                }

                float3 weights;
                if (pattern.tri)
                {
                    weights = tri(pattern.coords);
                }
                else
                {
                    weights = quad(pattern.coords);
                }

                float3 finalColor = blend(
                    blend(pattern.pixels.p0, pattern.pixels.p1, weights.x),
                    blend(pattern.pixels.p2, pattern.pixels.p3, weights.y),
                    weights.z
                );

                return float4(finalColor, 1.0);
            }
            ENDCG
        }
    }
}
