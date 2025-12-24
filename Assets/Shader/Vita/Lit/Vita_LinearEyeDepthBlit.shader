Shader "Hidden/Vita/LinearEyeDepthBlit"
{
    SubShader
    {
        Tags { "RenderType"="Opaque" "Queue"="Geometry-1" }
        Pass
        {
            Name "DepthOnly"
            Tags { "LightMode" = "DepthOnly" }
            ZWrite On
            ColorMask 0
            Cull Back

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma target 3.0
            #include "UnityCG.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
            };

            struct v2f
            {
                float4 pos : SV_POSITION;
                float  depth : TEXCOORD0;
            };

            v2f vert(appdata v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                // Compute linear depth from camera
                float3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
                float3 viewDir = UnityWorldSpaceViewDir(worldPos);
                o.depth = length(viewDir);
                return o;
            }

            fixed4 frag(v2f i) : SV_Target
            {
                // Output encoded linear depth (can also output raw i.depth if you're writing to RFloat)
                float depth = i.depth / _ProjectionParams.z; // Normalize to [0,1] using far clip
                return EncodeFloatRGBA(depth);
            }
            ENDCG
        }
    }
    Fallback Off
}