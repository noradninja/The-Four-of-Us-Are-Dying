Shader "FX/Glass/Stained BumpDistort/Perspective_NoGrabPass"
{
    Properties
    {
        _BumpAmt   ("Distortion", Range(0,128)) = 10
        _TintColor ("Tint Color", Color) = (.5, .5, .5, .5)
        _BumpMap   ("Normalmap", 2D) = "bump" {}
        _AlphaMap  ("Alpha Map (r)", 2D) = "white" {}
    }

    SubShader
    {
        Tags { "Queue"="Transparent" "RenderType"="Transparent" }
        Blend SrcAlpha OneMinusSrcAlpha
        ZWrite Off
        Cull Off

        Pass
        {
            Name "BASE"
            Tags { "LightMode"="Always" }

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma multi_compile_fog
            #include "UnityCG.cginc"

            struct appdata_t
            {
                float4 vertex   : POSITION;
                float2 texcoord : TEXCOORD0;
            };

            struct v2f
            {
                float4 vertex : SV_POSITION;
                float4 uvgrab : TEXCOORD0;   // screen pos (proj)
                float2 uvbump : TEXCOORD1;
                UNITY_FOG_COORDS(2)
            };

            half _BumpAmt;
            float4 _BumpMap_ST;
            half4 _TintColor;

            // Set from C# once per frame
            sampler2D _GlobalGrabTexture;
            float4    _GlobalGrabTexture_TexelSize;

            sampler2D _BumpMap;
            sampler2D _AlphaMap;

            v2f vert (appdata_t v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uvgrab = ComputeScreenPos(o.vertex);              // instead of ComputeGrabScreenPos
                o.uvbump = TRANSFORM_TEX(v.texcoord, _BumpMap);
                UNITY_TRANSFER_FOG(o,o.vertex);
                return o;
            }

            half4 frag (v2f i) : SV_Target
            {
                #if UNITY_SINGLE_PASS_STEREO
                    i.uvgrab.xy = TransformStereoScreenSpaceTex(i.uvgrab.xy, i.uvgrab.w);
                #endif

                // Normal map XY only (no need to reconstruct Z)
                half2 bump = (tex2D(_BumpMap, i.uvbump).ag * 2.0h - 1.0h); // Unity normal maps often store XY in AG
                // If your normal map is standard DXT5nm, AG is correct. If not, swap to .rg.

                half2 offset = bump * _BumpAmt * _GlobalGrabTexture_TexelSize.xy;

                // Keep the same “perspective-ish” scaling behavior you had
                #ifdef UNITY_Z_0_FAR_FROM_CLIPSPACE
                    i.uvgrab.xy = offset * UNITY_Z_0_FAR_FROM_CLIPSPACE(i.uvgrab.z) + i.uvgrab.xy;
                #else
                    i.uvgrab.xy = offset * i.uvgrab.z + i.uvgrab.xy;
                #endif

                const half alpha = tex2D(_AlphaMap, i.uvbump).r;

                half4 col = tex2Dproj(_GlobalGrabTexture, UNITY_PROJ_COORD(i.uvgrab));
                half4 tint = _TintColor;

                col *= tint * 1.9h;
                col.a = tint.a * alpha;

                UNITY_APPLY_FOG(i.fogCoord, col);
                return col;
            }
            ENDCG
        }
    }

    Fallback Off
}
