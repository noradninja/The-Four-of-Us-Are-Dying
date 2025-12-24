Shader "Vita/Standard Mobile ForwardLit"
{
    Properties
    {
        _MainTex("Base (RGB)", 2D) = "white" {}
        _MetallicGlossMap("MOAR (RGBA)", 2D) = "white" {}
        _Metallic ("Metallic", Range(0,1)) = 0.5
        _Roughness ("Roughness", Range(0,1)) = 0.5
        _AlphaClip ("Alpha cutoff", Range(0,1)) = 0.5
        _wind_dir ("Wind Direction", Vector) = (0.5,0.05,0.5,0)
        _wind_size ("Wind Wave Size", Range(5,50)) = 15
        _leaves_wiggle_disp ("Leaves Wiggle Displacement", Float) = 0.07
        _leaves_wiggle_speed ("Leaves Wiggle Speed", Float) = 0.01
        _influence ("Influence", Range(0,1)) = 1
        [Toggle(ALPHA_ON)] _AlphaOn("Seperate Alpha", Float) = 1
        [Toggle(WIGGLE_ON)] _LeavesOn("Leaf Movment", Float) = 1
        [Toggle(AMBIENT_ON)] _AmbientOn("Ambient Lighting", Float) = 0
    }

    SubShader
    {
        Tags { "IgnoreProjector"="True" "Queue"="Geometry" "RenderType"="Opaque" }
        LOD 80
        ZWrite On
        Cull Back

        CGINCLUDE
        #include "UnityCG.cginc"
        #include "HLSLSupport.cginc"
        #include "UnityShaderVariables.cginc"
        #include "UnityShaderUtilities.cginc"
        #include "AutoLight.cginc"
        #include "Lighting.cginc"
        #include "UnityShadowLibrary.cginc"
        #include "VitaForwardLighting.cginc"

        sampler2D _MainTex;
        sampler2D _MetallicGlossMap;
        half4 _MainTex_ST;

        half _AlphaClip;
        half4 _wind_dir;
        half _wind_size;
        half _leaves_wiggle_disp;
        half _leaves_wiggle_speed;
        half _influence;
        half _LeavesOn;
        half _AlphaOn;

        half _Metallic;
        half _Roughness;

        struct appdata
        {
            half3 pos    : POSITION;
            half3 normal : NORMAL;
            half4 color  : COLOR0;
            half2 uv0    : TEXCOORD0;
            half2 uv1    : TEXCOORD1; // lightmap UVs when present
        };

        struct v2f
        {
            half4 pos        : SV_POSITION;
            half2 uv0        : TEXCOORD0;
            half2 uv1        : TEXCOORD1; // lightmap UVs
            half3 worldPos   : TEXCOORD2;
            half3 worldNorm  : TEXCOORD3;

            UNITY_FOG_COORDS(4)
           // UNITY_SHADOW_COORDS(5) // required for LIGHT_ATTENUATION()
        };

        inline half3 Vita_ApplyWind(appdata v, half3 worldPos)
        {
            half3 currentPos  = v.pos;
            half3 previousPos = currentPos;
            half3 nextPos     = currentPos;

            if (_LeavesOn)
            {
                // Note: v.color is half4; you were multiplying by v.color directly.
                // Here we use v.color.r as the per-vertex weight (adjust if you need another channel).
                half w = _influence * v.color.r;

                nextPos.x += sin(_Time.y * currentPos.x * _leaves_wiggle_speed + (worldPos.x / _wind_size))
                           * _leaves_wiggle_disp * _wind_dir.x * w;

                nextPos.y += sin(_Time.y * currentPos.y * _leaves_wiggle_speed + (worldPos.y / _wind_size))
                           * _leaves_wiggle_disp * _wind_dir.y * w;

                nextPos.z += sin(_Time.y * currentPos.z * _leaves_wiggle_speed + (worldPos.z / _wind_size))
                           * _leaves_wiggle_disp * _wind_dir.z * w;
            }

            // Keep your existing interpolation factor
            half t = 0.5h;
            return lerp(previousPos, nextPos, t);
        }

        v2f vert(appdata v)
        {
            v2f o;
            UNITY_INITIALIZE_OUTPUT(v2f, o);

            half3 worldPos0 = mul(unity_ObjectToWorld, half4(v.pos, 1.0h)).xyz;
            half3 deformed  = Vita_ApplyWind(v, worldPos0);

            o.pos      = UnityObjectToClipPos(deformed);

            half3 worldPos = mul(unity_ObjectToWorld, half4(deformed, 1.0h)).xyz;
            o.worldPos = worldPos;

            // World normal (normalize in frag; keep this cheap in vert)
            o.worldNorm = UnityObjectToWorldNormal(v.normal);

            o.uv0 = v.uv0 * _MainTex_ST.xy + _MainTex_ST.zw;
            o.uv1 = v.uv1 * unity_LightmapST.xy + unity_LightmapST.zw;

            UNITY_TRANSFER_FOG(o, o.pos);
           // UNITY_TRANSFER_SHADOW(o); // sets up attenuation/shadows for LIGHT_ATTENUATION()
            return o;
        }

        // Shared surface sampling helper (keeps passes consistent)
        inline void Vita_SampleSurface(
            half2 uv,
            out half4 albedo,
            out half4 moar,
            out half metallic,
            out half roughness,
            out half occlusion,
            out half alphaClipValue
        )
        {
            albedo = tex2D(_MainTex, uv);
            moar   = tex2D(_MetallicGlossMap, uv);

            // Your MOAR packing (adjust if your content differs):
            // moar.r = metallic, moar.g = AO, moar.b = cutout alpha, moar.a = roughness
            metallic  = saturate(_Metallic  * moar.r);
            roughness = saturate(_Roughness * moar.a);
            occlusion = saturate(moar.g);

            // Branchless cutout source selection:
            // _AlphaOn == 0 -> use albedo.a
            // _AlphaOn == 1 -> use moar.b
            alphaClipValue = lerp(albedo.a, moar.b, _AlphaOn);
        }

        ENDCG

        // -----------------------------
        // ForwardBase (main light + shadows + ambient/LM + reflections)
        // -----------------------------
        Pass
        {
            Name "FORWARD_BASE"
            Tags { "LightMode"="ForwardBase" }

            Blend One Zero
            ZWrite On

            CGPROGRAM
            #pragma target 3.0
            #pragma vertex vert
            #pragma fragment frag_base
            #pragma multi_compile_fwdbase
            #pragma multi_compile_fog
            #pragma multi_compile _ LOD_FADE_CROSSFADE
            #pragma multi_compile _ LIGHTMAP_ON
            #pragma multi_compile __ AMBIENT_ON

            fixed4 frag_base(v2f i) : SV_Target
            {
                UNITY_EXTRACT_FOG(i);

                half3 N = normalize(i.worldNorm);
                half3 V = normalize(_WorldSpaceCameraPos.xyz - i.worldPos);

                half4 albedo, moar;
                half metallic, roughness, occlusion, alphaClip;
                Vita_SampleSurface(i.uv0, albedo, moar, metallic, roughness, occlusion, alphaClip);

                // Cutout in base (and shadowcaster pass). If you truly want "opaque only", set _AlphaClip=0.
                clip(alphaClip - _AlphaClip);

                // Unity provides the current main light in _WorldSpaceLightPos0/_LightColor0
                half3 L = normalize(UnityWorldSpaceLightDir(i.worldPos));

                // Attenuation includes shadows when enabled in ForwardBase
                half atten = 1;//LIGHT_ATTENUATION(i);

                half3 lit = Vita_EvaluateLight_Tier2(N, V, L, _LightColor0.rgb, atten, metallic, roughness);

                // Ambient / probes (optional) + lightmap (optional)
                half3 ambientTerm = 0;

                #if defined(AMBIENT_ON) || !defined(LIGHTMAP_ON)
                    ambientTerm += UNITY_LIGHTMODEL_AMBIENT.rgb;
                #endif

                #if defined(LIGHTMAP_ON)
                    half4 lmTex = UNITY_SAMPLE_TEX2D(unity_Lightmap, i.uv1);
                    half3 lm = DecodeLightmap(lmTex);
                    // You previously used lm * 0.25 + vertex lighting.
                    // Here we add LM as an additional irradiance term (tune scale to taste).
                    ambientTerm += lm * 0.25h;
                #endif

                // Apply AO to ambient (cheap + effective)
                ambientTerm *= occlusion;

                // Reflection probe (ONLY in base pass)
                half3 worldRefl = reflect(-V, N);
                half mip = (1.0h - roughness) * 10.0h;
                half4 skyData = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0, worldRefl, mip);
                half3 skyColor = DecodeHDR(skyData, unity_SpecCube0_HDR);

                // Fresnel for reflections (cheap)
                half NdotV = saturate(dot(N, V));
                half fres  = Vita_Fresnel_NdotV(NdotV, metallic);

                // Compose
                half3 baseColor = albedo.rgb;

                // Direct lighting affects albedo
                half3 direct = baseColor * lit;

                // Ambient affects albedo (diffuse-only-ish)
                half3 indirect = baseColor * ambientTerm;

                // Reflections: scale by fresnel and (optionally) AO; you were also using moar.a and moar.g
                half3 refl = skyColor * fres * roughness * occlusion;

                fixed4 col = fixed4(direct + indirect + refl, alphaClip);

                UNITY_APPLY_FOG(i.fogCoord, col);
                return col;
            }
            ENDCG
        }

        // -----------------------------
        // ForwardAdd (extra pixel lights, additive, optional shadows)
        // -----------------------------
        Pass
        {
            Name "FORWARD_ADD"
            Tags { "LightMode"="ForwardAdd" }

            Blend One One
            ZWrite Off
            Cull Back

            CGPROGRAM
            #pragma target 3.0
            #pragma vertex vert
            #pragma fragment frag_add
            #pragma multi_compile_fwdadd_fullshadows
            #pragma multi_compile_fog
            #pragma multi_compile _ LOD_FADE_CROSSFADE

            fixed4 frag_add(v2f i) : SV_Target
            {
                UNITY_EXTRACT_FOG(i);

                half3 N = normalize(i.worldNorm);
                half3 V = normalize(_WorldSpaceCameraPos.xyz - i.worldPos);

                half4 albedo, moar;
                half metallic, roughness, occlusion, alphaClip;
                Vita_SampleSurface(i.uv0, albedo, moar, metallic, roughness, occlusion, alphaClip);

                // For cutout objects, you generally still clip in add so silhouettes match
                clip(alphaClip - _AlphaClip);

                half3 L = normalize(UnityWorldSpaceLightDir(i.worldPos));
                half atten = 1;//LIGHT_ATTENUATION(i);

                half3 lit = Vita_EvaluateLight_Tier2(N, V, L, _LightColor0.rgb, atten, metallic, roughness);

                // Add pass should contribute ONLY direct lighting (no ambient, no probes, no reflections)
                half3 add = albedo.rgb * lit;

                fixed4 col = fixed4(add, 0);

                // For additive pass fog, fade toward black (not scene fog color)
                UNITY_APPLY_FOG_COLOR(i.fogCoord, col, fixed4(0,0,0,0));
                return col;
            }
            ENDCG
        }

        // -----------------------------
        // ShadowCaster (keep your existing behavior, but make alpha selection branchless)
        // -----------------------------
        Pass
        {
            Name "ShadowCaster"
            Tags { "LightMode"="ShadowCaster" }
            ZWrite On

            CGPROGRAM
            #pragma target 3.0
            #pragma vertex vert_shadow
            #pragma fragment frag_shadow
            #pragma multi_compile_shadowcaster
            #pragma multi_compile _ LOD_FADE_CROSSFADE

            #include "UnityCG.cginc"

            struct v2f_shadow
            {
                V2F_SHADOW_CASTER;
                half2 uv : TEXCOORD0;
            };

            struct appdata_shadow
            {
                half3 vertex : POSITION;
                half3 normal : NORMAL;
                half4 color  : COLOR0;
                half2 uv     : TEXCOORD0;
            };

            v2f_shadow vert_shadow(appdata_shadow v)
            {
                v2f_shadow o;

                half3 worldPos0 = mul(unity_ObjectToWorld, half4(v.vertex, 1.0h)).xyz;

                // Reuse wind (same logic as base)
                half3 currentPos  = v.vertex;
                half3 previousPos = currentPos;
                half3 nextPos     = currentPos;

                if (_LeavesOn)
                {
                    half w = _influence * v.color.r;

                    nextPos.x += sin(_Time.y * currentPos.x * _leaves_wiggle_speed + (worldPos0.x / _wind_size))
                               * _leaves_wiggle_disp * _wind_dir.x * w;

                    nextPos.y += sin(_Time.y * currentPos.y * _leaves_wiggle_speed + (worldPos0.y / _wind_size))
                               * _leaves_wiggle_disp * _wind_dir.y * w;

                    nextPos.z += sin(_Time.y * currentPos.z * _leaves_wiggle_speed + (worldPos0.z / _wind_size))
                               * _leaves_wiggle_disp * _wind_dir.z * w;
                }

                half t = 0.5h;
                half3 deformed = lerp(previousPos, nextPos, t);
                v.vertex = deformed;

                TRANSFER_SHADOW_CASTER(o);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                return o;
            }

            fixed4 frag_shadow(v2f_shadow i) : SV_Target
            {
                half4 albedo = tex2D(_MainTex, i.uv);
                half4 moar   = tex2D(_MetallicGlossMap, i.uv);

                half alphaClip = lerp(albedo.a, moar.b, _AlphaOn);
                clip(alphaClip - _AlphaClip);

                SHADOW_CASTER_FRAGMENT(i);
            }
            ENDCG
        }

        // META pass (optional; keep if you bake lightmaps)
//        Pass
//        {
//            Name "META"
//            Tags { "LightMode"="Meta" }
//            Cull Off
//
//            CGPROGRAM
//            #pragma vertex vert_meta
//            #pragma fragment frag_meta
//
//            #pragma shader_feature _EMISSION
//            #pragma shader_feature _METALLICGLOSSMAP
//            #pragma shader_feature _ _SMOOTHNESS_TEXTURE_ALBEDO_CHANNEL_A
//            #pragma shader_feature ___ _DETAIL_MULX2
//            #pragma shader_feature EDITOR_VISUALIZATION
//
//            #include "UnityStandardMeta.cginc"
//            ENDCG
//        }
    }

    Fallback "Legacy Shaders/Diffuse"
}
