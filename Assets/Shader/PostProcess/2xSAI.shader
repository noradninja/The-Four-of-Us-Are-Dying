Shader "Vita/EPXUpscaleNonPixelArt"
{
    Properties
    {
        _MainTex ("LowRes Texture", 2D) = "white" {}
        _InputRes ("Input Resolution", Vector) = (400,230,0,0)
        _OutputRes ("Output Resolution", Vector) = (640,368,0,0)
        // Threshold for treating two colors as equal (tweak as needed)
        _Threshold ("Threshold", Range(0,1)) = 0.75
        _HighThreshold ("Upper Threshold", Float) = 0.25
        _LowThreshold ("Lower Threshold", Float) = 0.25
    }
    SubShader
    {
        Pass
        {
            CGPROGRAM
            // Vertex and fragment entry points:
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"
            
            sampler2D _MainTex;
            float2 _InputRes;   // e.g. (400,230)
            float2 _OutputRes;  // e.g. (640,368)
            float _Threshold;   // Threshold for approximate equality
            float _LowThreshold;
            float _HighThreshold;
            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv     : TEXCOORD0;
            };
            
            struct v2f
            {
                float2 uv     : TEXCOORD0;
                float4 vertex : SV_POSITION;
            };
            
            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv     = v.uv;
                return o;
            }
            
          float4 SampleTex(float2 pixelPos)
{
    // Correct sampling at pixel centers
    float2 uv = (pixelPos + 0.5) / _InputRes;
    return tex2D(_MainTex, uv);
}

float4 SampleTexClamp(float2 pixelPos)
{
    pixelPos = clamp(pixelPos, float2(0.0, 0.0), _InputRes - 1.0);
    return SampleTex(pixelPos);
}

float4 frag(v2f i) : SV_Target
{
    /*
     *        B
     *      A P C
     *        D
     *
     *  ABCD are the neighbors of our current pixel P
     *  For each set of diagonal neighbors, smoothly blend the colors for a new set of pixels:
     *
     *      P1 P2
     *      P3 P4
     *
     *      which will replace pixel P when we upscale the screen 2x
     */
    float2 outCoord = i.uv * _OutputRes;
    float2 upscaledRes = _InputRes * 2.0;
    float2 scaleMapping = upscaledRes / _OutputRes;
    float2 upCoord = outCoord * scaleMapping;
    
    float2 srcCoord = upCoord / 2.0;
    float2 ipos = floor(srcCoord);
    float2 fpos = frac(srcCoord);
    
    //center and neighboring
    float4 P = SampleTexClamp(ipos);
    float4 A = SampleTexClamp(ipos + float2(-1, 0)); // Left
    float4 B = SampleTexClamp(ipos + float2(0, 1));  // Up
    float4 C = SampleTexClamp(ipos + float2(1, 0));  // Right
    float4 D = SampleTexClamp(ipos + float2(0, -1)); // Down
    
    //color differences
    float3 diffAB = A.rgb - B.rgb; //top left
    float3 diffBC = B.rgb - C.rgb; //top right
    float3 diffCD = C.rgb - D.rgb; //bottom right
    float3 diffDA = D.rgb - A.rgb; //bottom left
    
    //squared distances
    float thresholdSq = dot(_Threshold, _Threshold);
    float distAB = dot(diffAB, diffAB);
    float distBC = dot(diffBC, diffBC);
    float distCD = dot(diffCD, diffCD);
    float distDA = dot(diffDA, diffDA);
    
    //blending factors
    float blendAB = 1.0 - smoothstep(0.0, thresholdSq, distAB);
    float blendBC = 1.0 - smoothstep(0.0, thresholdSq, distBC);
    float blendCD = 1.0 - smoothstep(0.0, thresholdSq, distCD);
    float blendDA = 1.0 - smoothstep(0.0, thresholdSq, distDA);
    
    //lerp colors
    
    float4 P1 = lerp(P, (A + B) * 0.5, blendAB); // Top-left
    float4 P2 = lerp(P, (B + C) * 0.5, blendBC); // Top-right
    float4 P3 = lerp(P, (D + A) * 0.5, blendDA);  // Bottom-left
    float4 P4 = lerp(P, (C + D) * 0.5, blendCD); // Bottom-right
    
    // manual bilinear interpolation
    float2 t = smoothstep(_LowThreshold, _HighThreshold, fpos); //expose min and max ranges for precise edge transition
    float4 top = lerp(P1, P2, t.x);
    float4 bottom = lerp(P3, P4, t.x);
    float4 final = lerp(bottom, top, t.y);
    //_Threshold = _Threshold * 0.075;
    //return final;    
    return lerp(final, P, _Threshold); //bonus, mix with original pixel to preserve sharpness
}
            ENDCG
        }
    }
}
