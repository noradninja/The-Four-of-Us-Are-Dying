Shader "Vita/Lit (per-vertex)" 
{
    Properties
    {
        [HideInInspector]_SrcBlend ("_SrcBlend", Float) = 1
        [HideInInspector]_DstBlend ("_DstBlend", Float) = 0
        [HideInInspector]_ZWrite   ("_ZWrite",   Float) = 1

        [Enum(Opaque,0,AlphaTest,1)]
        _Mode        ("Rendering Mode", Float) = 0
        [Enum(Off,0,Front,1,Back,2)]
        _Cull        ("Cull Mode", Float) = 2

        _MainTex     ("Albedo (RGB)",     2D) = "white" {}
        _BumpMap   ("Normal Map",       2D) = "bump"  {}
        _MetallicGlossMap     ("MOAR (RGBA)",      2D) = "white" {}
        _NormalHeight("Normal Height", Range(0.1, 2.0)) = 1.0
        _Metallic    ("Base Metallic", Range(0, 1))   = 0.0
        _Cutoff      ("Alpha Cutoff",   Range(0, 1))   = 0.0
        _Roughness   ("Base Roughness",Range(0, 1))   = 0.5
        _FadeDistance    ("Fade Distance",    Float)         = 20.0
    }

    SubShader
    {
        Tags { "RenderType" = "Opaque" "Queue" = "Geometry" }
        LOD 200

        //===============================
        // 0) Shadow Caster Pass
        //===============================
        Pass
        {
            Tags { "LightMode" = "ShadowCaster" }
            ZWrite On
            ColorMask 0
            Cull [_Cull]

            CGPROGRAM
            #pragma vertex vert_shadow
            #pragma fragment frag_shadow
            #pragma target 3.0

            #pragma multi_compile_shadowcaster
            #pragma multi_compile_fog
            #pragma multi_compile _ LOD_FADE_CROSSFADE

            #include "UnityCG.cginc"
            #include "UnityPBSLighting.cginc"
            #include "UnityShadowLibrary.cginc"

            struct v2f
            {
                V2F_SHADOW_CASTER;
                float2 uv       : TEXCOORD1;
                UNITY_VERTEX_OUTPUT_STEREO
            };

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv     : TEXCOORD0;
            };

            sampler2D_half _MetallicGlossMap;
            float4   _MetallicGlossMap_ST;
            fixed    _Cutoff;
            float    _Mode;

            v2f vert_shadow(appdata v)
            {
                v2f o;
                UNITY_SETUP_INSTANCE_ID(v);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
                TRANSFER_SHADOW_CASTER(o);
                o.uv = TRANSFORM_TEX(v.uv, _MetallicGlossMap);
                return o;
            }

            float4 frag_shadow(v2f i) : SV_Target
            {
                if (_Mode == 1)
                {
                    fixed4 clipMask = tex2D(_MetallicGlossMap, i.uv);
                    clip(clipMask.b - _Cutoff);
                }
                SHADOW_CASTER_FRAGMENT(i);
            }
            ENDCG
        }


        //===============================
        // 1) ForwardBase Pass (vertex‐based lighting with MOAR modulation, adjusted specular)
        //===============================
        Pass
        {
            Name "FORWARD"
            Tags { "LightMode" = "ForwardBase" "Queue" = "Geometry" }

            Blend [_SrcBlend] [_DstBlend]
            ZWrite [_ZWrite]
            ZTest LEqual
            Cull [_Cull]

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma target 3.0

            #pragma multi_compile_fwdbase nodirlightmap nodynlightmap novertexlight
            #pragma multi_compile_instancing
            #pragma multi_compile _ _ALPHATEST_ON _ALPHABLEND_ON _ALPHAPREMULTIPLY_ON
            #pragma multi_compile _ LIGHTMAP_ON

            #include "UnityCG.cginc"
            #include "UnityShaderVariables.cginc"
            #include "LightingCalculations.cginc"
            #include "AutoLight.cginc"
            #include "Lighting.cginc"

            sampler2D_half _MainTex;
            sampler2D_half _MetallicGlossMap;
            samplerCUBE _Cube;
            float4   _MainTex_ST;

            float  _Cutoff;
            float  _Mode;
            float  _Roughness;
            float  _Metallic;
            float _FadeDistance;

            struct appdata
            {
                float4 vertex  : POSITION;
                float3 normal  : NORMAL;
                float2 uv      : TEXCOORD0;
                float2 uv1     : TEXCOORD1;
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            struct v2f
            {
                float4 pos          : SV_POSITION;
                float2 uv           : TEXCOORD0;
                float2 uv1          : TEXCOORD1;
                float3 worldPos     : TEXCOORD2;
                float3 worldNormal  : TEXCOORD3;
                float  ndotl        : TEXCOORD4;
                float  ndoth        : TEXCOORD5;
                UNITY_SHADOW_COORDS(6)
                UNITY_VERTEX_OUTPUT_STEREO
            };

            v2f vert(appdata v)
            {
                UNITY_SETUP_INSTANCE_ID(v);
                v2f o;

                // World positions & normals
                o.worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
                o.worldNormal = normalize(UnityObjectToWorldNormal(v.normal));

                // Clip space
                o.pos = UnityObjectToClipPos(v.vertex);

                // UVs (MainTex)
                o.uv  = TRANSFORM_TEX(v.uv, _MainTex);
                o.uv1 = v.uv1 * unity_LightmapST.xy + unity_LightmapST.zw;

                // Dot products
                float3 Ldir = normalize(_WorldSpaceLightPos0.xyz);
                o.ndotl = saturate(dot(o.worldNormal, Ldir));
                float3 Vdir = normalize(_WorldSpaceCameraPos - o.worldPos);
                float3 H = normalize(Vdir + Ldir);
                o.ndoth = saturate(dot(o.worldNormal, H));

                UNITY_TRANSFER_SHADOW(o, o.uv1);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
                return o;
            }

            half4 frag(v2f i) : SV_Target
            {
                UNITY_SETUP_INSTANCE_ID(i);

                // Sample MOAR and Albedo
                half4 moar = tex2D(_MetallicGlossMap, i.uv);
                half4 alb  = tex2D(_MainTex, i.uv);
                if (_Mode == 1)
                    clip(moar.b - _Cutoff);

                // Compute per-pixel roughness and metallic
                half roughnessVal = saturate(1 - (_Roughness * moar.a));
                half metallicVal  = moar.r;

                // Baked lightmap (unchanged)
                #ifdef LIGHTMAP_ON
                    half3 baked = DecodeLightmap(UNITY_SAMPLE_TEX2D(unity_Lightmap, i.uv1)).rgb;
                #else
                    half3 baked = _LightColor0;
                #endif

                // Shadow & attenuation using per-vertex normal and ndotl
                UNITY_LIGHT_ATTENUATION(attenuation, i, i.worldPos.xyz);
                float dist = length(_WorldSpaceCameraPos - i.worldPos.xyz);
                half  nl     = saturate(dot(i.worldNormal.xyz, _WorldSpaceLightPos0.xyz));
                float fade = saturate(dist / _FadeDistance);
                attenuation = lerp(nl * attenuation, 1.0h, fade);
                half3 rtTint = unity_ShadowColor.rgb;
                half3 shaded = attenuation;

                 // 4) Diffuse
                half3 diff = DisneyDiffuse(nl, alb.rgb, _LightColor0.rgb);
                diff = diff + alb.rgb;                
                half3 diffuseTerm = diff * shaded * baked * moar.g;

                // 5) Specular
                half3 Ldir = normalize(_WorldSpaceLightPos0.xyz);
                half3 Vdir = normalize(_WorldSpaceCameraPos - i.worldPos.xyz);
                half  NdotV = saturate(dot(i.worldNormal.xyz, Vdir));
                half  NdotL = saturate(dot(i.worldNormal.xyz, Ldir));
                half3 H     = normalize(Vdir + Ldir);
                half  NdotH = saturate(dot(i.worldNormal.xyz, H));

                half  D = DistributionGGX(NdotH, roughnessVal);
                half  G = GeometrySmith(NdotV, NdotL, roughnessVal);
                half  denom = max(NdotV * NdotL, 0.00025h);
                half  mult  = G * D / denom;

                half3 F0  = lerp(half3(0.04h, 0.04h, 0.04h), alb.rgb, metallicVal);
                half3 F   = FresnelSchlick(saturate(dot(Vdir, H)), F0);
                half3 specColor = F * mult * _LightColor0.rgb;
                specColor *= moar.g;

                half3 lit = diffuseTerm + specColor;

                // 6) Add baked lightmap on albedo
                half3 lmContrib = baked * alb.rgb;
                half3 rgb       = lit * lmContrib;

                // Cubemap reflection
                if (metallicVal > 0.0h)
                {
                    half4 cuberef = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0, i.worldNormal, roughnessVal * 12.0h);
                    half3 skyCol   = DecodeHDR(cuberef, unity_SpecCube0_HDR);
                    rgb += skyCol * (metallicVal * moar.g * baked);
                }

                // Alpha
                half alpha = moar.b;
                if (_Mode == 3)
                    rgb *= alpha;
                half outA = (_Mode == 0 || _Mode == 1) ? 1.0 : alpha;

                return half4(rgb, outA);
            }
            ENDCG
        }

        //===============================
        // 2) Meta Pass
        //===============================
        Pass
        {
            Name "META"
            Tags { "LightMode" = "Meta" }
            Cull Off

            CGPROGRAM
            #pragma vertex vert_meta
            #pragma fragment frag_meta
            #include "UnityStandardMeta.cginc"
            ENDCG
        }
    }

    Fallback "Diffuse"
    CustomEditor "VitaLitShaderGUI"
}