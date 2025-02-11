Shader "Vita/Upscaler/Toggleable"
{
    Properties
    {
        _MainTex ("Base (RGB)", 2D) = "white" {}
        [Range] _Epsillion ("Amount", Range(-1,1)) = 0.5
    }
    SubShader
    {
        Tags { "Queue"="Geometry" }
        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma target 3.0
            #include "UnityCG.cginc"

            sampler2D _MainTex;
            float2 _TexelSize;
            int _UseEpx = 0; // 1 = EPX, 0 = 2xSAI
            float _Epsillion; // Small threshold for color comparisons

            struct v2f
            {
                float4 pos : SV_POSITION;
                float2 uv : TEXCOORD0;
            };

            v2f vert(appdata_full v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.uv = v.texcoord;
                return o;
            }

            // **2xSAI Upscaling Function**
            fixed3 Upscale2xSAI(float2 uv)
            {
                // Sample 3x3 neighborhood pixels
                fixed3 A = tex2D(_MainTex, uv + float2(-_TexelSize.x, -_TexelSize.y)).rgb;
                fixed3 B = tex2D(_MainTex, uv + float2(0, -_TexelSize.y)).rgb;
                fixed3 C = tex2D(_MainTex, uv + float2(_TexelSize.x, -_TexelSize.y)).rgb;
                fixed3 D = tex2D(_MainTex, uv + float2(-_TexelSize.x, 0)).rgb;
                fixed3 E = tex2D(_MainTex, uv).rgb; // Center pixel
                fixed3 F = tex2D(_MainTex, uv + float2(_TexelSize.x, 0)).rgb;
                fixed3 G = tex2D(_MainTex, uv + float2(-_TexelSize.x, _TexelSize.y)).rgb;
                fixed3 H = tex2D(_MainTex, uv + float2(0, _TexelSize.y)).rgb;
                fixed3 I = tex2D(_MainTex, uv + float2(_TexelSize.x, _TexelSize.y)).rgb;

                // Edge detection & interpolation
                fixed3 result = E;
                if (distance(A, D) < _Epsillion && distance(A, G) > _Epsillion && distance(D, B) > _Epsillion) result = G + A * 0.05h;
                if (distance(B, D) < _Epsillion && distance(B, F) > _Epsillion && distance(D, H) > _Epsillion) result = C + B  * 0.05h;
                if (distance(C, B) < _Epsillion && distance(C, I) > _Epsillion && distance(B, F) > _Epsillion) result = I + F  * 0.05h;
                if (distance(F, H) < _Epsillion && distance(F, B) > _Epsillion && distance(H, D) > _Epsillion) result = D + H  * 0.05h;

                return result;
            }

            // **EPX Upscaling Function**
            fixed3 UpscaleEPX(float2 uv)
            {
                // Sample diagonal pixels
                fixed3 A = tex2D(_MainTex, uv + float2(-_TexelSize.x, -_TexelSize.y)).rgb;
                fixed3 C = tex2D(_MainTex, uv + float2(_TexelSize.x, -_TexelSize.y)).rgb;
                fixed3 E = tex2D(_MainTex, uv).rgb; // Center pixel
                fixed3 G = tex2D(_MainTex, uv + float2(-_TexelSize.x, _TexelSize.y)).rgb;
                fixed3 I = tex2D(_MainTex, uv + float2(_TexelSize.x, _TexelSize.y)).rgb;

                // Blend diagonals
                fixed3 result = E;
                if (distance(A, E) < _Epsillion && distance(C, E) < _Epsillion) result = (A + C) ;
                if (distance(G, E) < _Epsillion && distance(I, E) < _Epsillion) result = (G + I) ;

                return result;
            }

            fixed4 frag(v2f i) : SV_Target
            {
                int useEPX = _UseEpx; // Ensure `_UseEpx` is treated as a scalar
                fixed3 upscaledColor;

                // Select upscaling algorithm
                if (useEPX == 1)
                {
                    upscaledColor = UpscaleEPX(i.uv); // Correctly remap UVs
                }
                else
                {
                    upscaledColor = Upscale2xSAI(i.uv);
                }

                return fixed4(upscaledColor, 1.0);
            }
            ENDCG
        }
    }
}
