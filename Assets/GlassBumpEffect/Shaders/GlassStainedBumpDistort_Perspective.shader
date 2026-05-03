Shader "Vita/Glass_NoGrabPass_Lightmapped"
{
    Properties
    {
        _BumpAmt ("Distortion", Range(0,128)) = 10
        _TintColor ("Tint Color", Color) = (.5, .5, .5, .5)
        _BumpMap ("Normalmap", 2D) = "bump" {}
        _AlphaMap ("Alpha Map (r)", 2D) = "white" {}
        [Toggle(USE_LIGHTMAP)] _UseLightmap("Lightmapped", Float) = 0
        _LightmapInfluence ("Lightmap Influence", Range(0,1)) = 1
        _ReflectionNormalStrength ("Reflection Normal Strength", Range(0,2)) = 0.35
        _ReflectionMip ("Reflection Mip", Range(0,6)) = 1
        _ReflectionStrength ("Reflection Strength", Range(0,2)) = 1
    }

    SubShader
    {
        Tags
        {
            "Queue"="Transparent" "RenderType"="Transparent"
        }

        Blend SrcAlpha OneMinusSrcAlpha
        ZWrite Off
        Cull Off

        Pass
        {
            Name "BASE"
            Tags
            {
                "LightMode"="Always"
            }

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma multi_compile_fog
            #pragma multi_compile __ USE_LIGHTMAP

            #include "UnityCG.cginc"

            struct appdata_t
            {
                float4 vertex : POSITION;
                half3 normal : NORMAL;
                float2 mainTexCoord: TEXCOORD0;
                float2 uv2 : TEXCOORD1; //lightmap uv channel
            };

            struct v2f
            {
                float4 vertex : SV_POSITION;
                float4 uvgrab : TEXCOORD0;
                float2 uvbump : TEXCOORD1;
                half3 worldRefl : TEXCOORD2;
                #if defined(USE_LIGHTMAP)
                float2 uvLM : TEXCOORD3;
                #endif
                UNITY_FOG_COORDS(4)
            };

            half _BumpAmt;
            float4 _BumpMap_ST;
            half4 _TintColor;
            float4 _GlobalGrabTexture_TexelSize;
            half _LightmapInfluence;
            half _ReflectionNormalStrength;
            half _ReflectionMip;
            half _ReflectionStrength;
            sampler2D _GlobalGrabTexture;
            sampler2D _BumpMap;
            sampler2D _AlphaMap;


            v2f vert(appdata_t v)
            {
                v2f o;

                half3 worldPos = mul(unity_ObjectToWorld, half4(v.vertex)).xyz;
                half3 worldViewDir = normalize(UnityWorldSpaceViewDir(worldPos));
                half3 worldNormal = UnityObjectToWorldNormal(v.normal);
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uvgrab = ComputeScreenPos(o.vertex);
                o.uvbump = TRANSFORM_TEX(v.mainTexCoord, _BumpMap);
                // Base reflection remains vertex-normal based.
                // The fragment shader bends this with the normal map for cheap glass detail.
                o.worldRefl = reflect(-worldViewDir, worldNormal);
                #if defined(USE_LIGHTMAP)
                o.uvLM = v.uv2 * unity_LightmapST.xy + unity_LightmapST.zw;
                #endif
                UNITY_TRANSFER_FOG(o, o.vertex);
                return o;
            }

            inline half3 SampleLightmapRGB(float2 uvLM)
            {
                half4 lm = UNITY_SAMPLE_TEX2D(unity_Lightmap, uvLM);
                return DecodeLightmap(lm);
            }

            half4 frag(v2f i) : SV_Target
            {
                #if UNITY_SINGLE_PASS_STEREO
                i.uvgrab.xy = TransformStereoScreenSpaceTex(i.uvgrab.xy, i.uvgrab.w);
                #endif

                // full normal-map unpack instead of XY-only sampling.
                // We still use XY for grab distortion, but now also reuse it for reflection bending.
                half3 tangentNormal = UnpackNormal(tex2D(_BumpMap, i.uvbump));
                half2 bump = tangentNormal.xy;
                half2 offset = bump * _BumpAmt * _GlobalGrabTexture_TexelSize.xy;
                #ifdef UNITY_Z_0_FAR_FROM_CLIPSPACE
                i.uvgrab.xy = offset * UNITY_Z_0_FAR_FROM_CLIPSPACE(i.uvgrab.z) + i.uvgrab.xy;
                #else
                i.uvgrab.xy = offset * i.uvgrab.z + i.uvgrab.xy;
                #endif
                const half alpha = tex2D(_AlphaMap, i.uvbump).r;
                half4 col = tex2Dproj(_GlobalGrabTexture, UNITY_PROJ_COORD(i.uvgrab));
                half4 tint = _TintColor;
                col *= tint;
                col.a = tint.a * alpha;

                #if defined(USE_LIGHTMAP)
                half3 lm = SampleLightmapRGB(i.uvLM);
                half3 lmMul = lerp(half3(1, 1, 1), lm, _LightmapInfluence);
                col.rgb *= lmMul;
                #endif

                // Cheap normal-map-influenced reflection.
                // This avoids passing a full TBN matrix while still letting the normal map perturb the sky color.
                half3 refl = normalize(i.worldRefl);
                refl.xy += tangentNormal.xy * _ReflectionNormalStrength;
                refl = normalize(refl);
                half4 skyData = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0, refl, _ReflectionMip);
                half3 skyColor = DecodeHDR(skyData, unity_SpecCube0_HDR);
                col.rgb += skyColor * _ReflectionStrength;

                UNITY_APPLY_FOG(i.fogCoord, col);
                return col;
            }
            ENDCG
        }
    }

    Fallback Off
}