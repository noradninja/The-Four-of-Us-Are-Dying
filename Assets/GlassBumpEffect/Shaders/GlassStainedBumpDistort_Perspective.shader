// Upgrade NOTE: commented out 'float4 unity_LightmapST', a built-in variable
// Upgrade NOTE: commented out 'sampler2D unity_Lightmap', a built-in variable
// Upgrade NOTE: replaced tex2D unity_Lightmap with UNITY_SAMPLE_TEX2D

Shader "FX/Glass/Stained BumpDistort/Perspective_NoGrabPass_Lightmapped"
{
    Properties
    {
        _BumpAmt   ("Distortion", Range(0,128)) = 10
        _TintColor ("Tint Color", Color) = (.5, .5, .5, .5)
        _BumpMap   ("Normalmap", 2D) = "bump" {}
        _AlphaMap  ("Alpha Map (r)", 2D) = "white" {}
        [Toggle(USE_LIGHTMAP)] _UseLghtmap("Lightmapped", Float) = 0

        // ADDED: controls how strongly baked lighting affects the glass
        _LightmapInfluence ("Lightmap Influence", Range(0,1)) = 1
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

            // ADDED: compile variants with and without lightmap support
            // Use: material keyword "USE_LIGHTMAP" (enable per-material or via shader_feature if you prefer)
            #pragma multi_compile __ USE_LIGHTMAP

            #include "UnityCG.cginc"

            struct appdata_t
            {
                float4 vertex   : POSITION;
                float2 texcoord : TEXCOORD0;

                // ADDED: lightmap UV channel (Unity lightmaps are typically UV2 in DCC, TEXCOORD1 in shader)
                float2 uv2      : TEXCOORD1;
            };

            struct v2f
            {
                float4 vertex : SV_POSITION;
                float4 uvgrab : TEXCOORD0;   // screen pos (proj)
                float2 uvbump : TEXCOORD1;

                // ADDED: pass lightmap UVs to fragment
                #if defined(USE_LIGHTMAP)
                    float2 uvLM : TEXCOORD2;
                #endif

                UNITY_FOG_COORDS(3)
            };

            half _BumpAmt;
            float4 _BumpMap_ST;
            half4 _TintColor;

            // Set from C# once per frame
            sampler2D _GlobalGrabTexture;
            float4    _GlobalGrabTexture_TexelSize;

            sampler2D _BumpMap;
            sampler2D _AlphaMap;

            // ADDED: lightmap inputs
            half _LightmapInfluence;
            #if defined(USE_LIGHTMAP)
                // sampler2D unity_Lightmap;
                // float4 unity_LightmapST;
            #endif

            v2f vert (appdata_t v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uvgrab = ComputeScreenPos(o.vertex);
                o.uvbump = TRANSFORM_TEX(v.texcoord, _BumpMap);

                // ADDED: transform lightmap UV with unity_LightmapST
                #if defined(USE_LIGHTMAP)
                    o.uvLM = v.uv2 * unity_LightmapST.xy + unity_LightmapST.zw;
                #endif

                UNITY_TRANSFER_FOG(o,o.vertex);
                return o;
            }

            // ADDED: decode function for Unity lightmaps (RGBM/dLDR depending on platform)
            // UnityCG provides DecodeLightmap(). Using it keeps platform specifics correct.
            inline half3 SampleLightmapRGB(float2 uvLM)
            {
                half4 lm = UNITY_SAMPLE_TEX2D(unity_Lightmap, uvLM);
                return DecodeLightmap(lm);
            }

            half4 frag (v2f i) : SV_Target
            {
                #if UNITY_SINGLE_PASS_STEREO
                    i.uvgrab.xy = TransformStereoScreenSpaceTex(i.uvgrab.xy, i.uvgrab.w);
                #endif

                // Normal map XY only (no need to reconstruct Z)
                half2 bump = (tex2D(_BumpMap, i.uvbump).ag * 2.0h - 1.0h);

                half2 offset = bump * _BumpAmt * _GlobalGrabTexture_TexelSize.xy;

                // Perspective-ish scaling
                #ifdef UNITY_Z_0_FAR_FROM_CLIPSPACE
                    i.uvgrab.xy = offset * UNITY_Z_0_FAR_FROM_CLIPSPACE(i.uvgrab.z) + i.uvgrab.xy;
                #else
                    i.uvgrab.xy = offset * i.uvgrab.z + i.uvgrab.xy;
                #endif

                const half alpha = tex2D(_AlphaMap, i.uvbump).r;

                half4 col = tex2Dproj(_GlobalGrabTexture, UNITY_PROJ_COORD(i.uvgrab));

                // Your existing tint logic
                half4 tint = _TintColor;
                col *= tint * 1.9h;
                col.a = tint.a * alpha;

                // ADDED: multiply by baked lightmap lighting (optional per keyword)
                #if defined(USE_LIGHTMAP)
                    half3 lm = SampleLightmapRGB(i.uvLM);

                    // Influence lets you blend between unlit glass (0) and fully lightmapped (1)
                    half3 lmMul = lerp(half3(1,1,1), lm, _LightmapInfluence);

                    col.rgb *= lmMul;
                #endif

                UNITY_APPLY_FOG(i.fogCoord, col);
                return col;
            }
            ENDCG
        }
    }

    Fallback Off
}