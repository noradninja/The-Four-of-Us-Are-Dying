/* Depth only shader for shadowcasting lights cam to be rendered into the atlas */
/* Bonus: Unlike UNITY, we actually fucking batch shadowcasters this way, can you believe it?*/

Shader "Hidden/AtlasShadowCaster"
{
    Properties
    {
        _MainTex ("Main Tex", 2D) = "white" {}
        _MetallicGlossMap ("Metallic Gloss Map", 2D) = "white" {}
        _Cutoff ("Alpha Cutoff", Range(0, 1)) = 0.5
    }

    SubShader
    {
        Tags
        {
            "RenderType" = "Opaque"
            "Queue" = "Geometry"
        }

        Cull Back
        ZWrite On
        ZTest LEqual
        ColorMask 0

        Pass
        {
            CGPROGRAM
            #pragma target 3.0
            #pragma vertex vert
            #pragma fragment frag

            #include "UnityCG.cginc"

            sampler2D _MainTex;
            float4 _MainTex_ST;
            sampler2D _MetallicGlossMap;
            float4 _MetallicGlossMap_ST;
            float _Cutoff;
            float4x4 _CustomShadowVP;

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

            /* Projects our caster geometry into the active light's shadow clip space. */
            v2f vert(appdata v)
            {
                v2f o;

                float4 worldPos = mul(unity_ObjectToWorld, v.vertex);
                o.pos = mul(_CustomShadowVP, worldPos);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                return o;
            }

            /* Applies our cutout test so masked geometry casts consistent atlas shadows. */
            void frag(v2f i)
            {
                float alphaMask = tex2D(_MetallicGlossMap, i.uv).b;
                clip(alphaMask - _Cutoff);
            }
            ENDCG
        }
    }

    FallBack Off
}