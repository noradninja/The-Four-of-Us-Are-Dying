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
        _NormalMap   ("Normal Map",       2D) = "bump"  {}
        _MOARMap     ("MOAR (RGBA)",      2D) = "white" {}
        _NormalHeight("Normal Height", Range(0.1, 2.0)) = 1.0
        _Metallic    ("Base Metallic", Range(0, 1))   = 0.0
        _Cutoff      ("Alpha Cutoff",   Range(0, 1))   = 0.0
        _Roughness   ("Base Roughness",Range(0, 1))   = 0.5
        _Cube        ("Reflection Cubemap", Cube)     = "_Skybox" {}
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

            sampler2D _MOARMap;
            float4   _MOARMap_ST;
            fixed    _Cutoff;
            float    _Mode;

            v2f vert_shadow(appdata v)
            {
                v2f o;
                UNITY_SETUP_INSTANCE_ID(v);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
                TRANSFER_SHADOW_CASTER(o);
                o.uv = TRANSFORM_TEX(v.uv, _MOARMap);
                return o;
            }

            float4 frag_shadow(v2f i) : SV_Target
            {
                if (_Mode == 1)
                {
                    fixed4 clipMask = tex2D(_MOARMap, i.uv);
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

            #pragma multi_compile_fwdbase nolightmap nodirlightmap nodynlightmap novertexlight
            #pragma multi_compile_instancing
            #pragma multi_compile _ _ALPHATEST_ON _ALPHABLEND_ON _ALPHAPREMULTIPLY_ON

              #include "UnityCG.cginc"
            #include "UnityShaderVariables.cginc"
            #include "LightingCalculations.cginc"   // Updated GGX
            #include "AutoLight.cginc"
            #include "Lighting.cginc"

            sampler2D _MainTex;
            sampler2D _MOARMap;
            samplerCUBE _Cube;
            float4   _MainTex_ST;

            float  _Cutoff;
            float  _Mode;
            float  _Roughness;
            float  _Metallic;

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
                float3 worldNormal       : TEXCOORD3;
                float  ndotl        : TEXCOORD4;
                float  ndoth        : TEXCOORD5;
                float3 preDiffuse   : TEXCOORD6;
                float3 preSpecular  : TEXCOORD7;
                float4 worldRefl    : TEXCOORD8;
                UNITY_SHADOW_COORDS(9)
                UNITY_VERTEX_OUTPUT_STEREO
            };

            v2f vert(appdata v)
            {
                UNITY_SETUP_INSTANCE_ID(v);
                v2f o;

                // World positions & normals
                o.worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
                o.worldNormal   = normalize(UnityObjectToWorldNormal(v.normal));

                // Clip space
                o.pos = UnityObjectToClipPos(v.vertex);

                // UVs
                o.uv  = TRANSFORM_TEX(v.uv, _MainTex);
                o.uv1 = v.uv1 * unity_LightmapST.xy + unity_LightmapST.zw;

                // Light and view
                float3 Ldir = normalize(_WorldSpaceLightPos0.xyz);
                float3 Vdir = normalize(_WorldSpaceCameraPos - o.worldPos);

                // Dot products
                o.ndotl = saturate(dot(o.worldNormal, Ldir));
                float3 H = normalize(Vdir + Ldir);
                o.ndoth = saturate(dot(o.worldNormal, H));

                // Precompute lighting with placeholder values
                float3 albedoColor = float3(1,1,1);
                float  roughnessVal = saturate(1 - (_Roughness * 0.5));
                float  metallicVal  = _Metallic;

                o.preDiffuse  = DisneyDiffuse(o.ndotl, albedoColor, _LightColor0.rgb);
                o.preSpecular = GGXSpecular_PBR(o.worldNormal, Vdir, Ldir, albedoColor, metallicVal, roughnessVal, _LightColor0.rgb * 0.5);

                // Vertex reflection vector
                float3 refl = reflect(-Vdir, o.worldNormal);
                o.worldRefl = float4(refl, 0.0);

                UNITY_TRANSFER_SHADOW(o, o.uv1);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
                return o;
            }

            half4 frag(v2f i) : SV_Target
            {
                UNITY_SETUP_INSTANCE_ID(i);

                // Sample MOAR and albedo
                half4 moar = tex2D(_MOARMap, i.uv * _MainTex_ST.xy + _MainTex_ST.zw);
                half4 alb  = tex2D(_MainTex, i.uv * _MainTex_ST.xy + _MainTex_ST.zw);

                // Cutout
                if (_Mode == 1)
                    clip(moar.b - _Cutoff);

                // Texture-based properties
                float  roughnessVal = saturate(1 - (_Roughness * moar.a));
                float  metallicVal  = moar.r;

                // Baked lightmap
                half3 baked = DecodeLightmap(UNITY_SAMPLE_TEX2D(unity_Lightmap, i.uv1)).rgb;
                // 5) Shadow & attenuation
                UNITY_LIGHT_ATTENUATION(attenuation, i, i.worldPos.xyz);
                half3 rtTint    = unity_ShadowColor.rgb;
                half  nl        = saturate(dot(i.worldNormal.xyz, _WorldSpaceLightPos0.xyz));
               
                // Final diffuse: use precomputed and modulate
                half3 diff = i.preDiffuse;
                diff = ((diff + alb.rgb) + 0.25);

                // 7) Indirect mask
                half indirect   = saturate(1 - (baked.b + baked.r * baked.g));
                half3 shaded    = nl * attenuation;
                half3 combined  = max(shaded - indirect, rtTint);

                // 8) Final diffuse combination
                half3 finalCol = lerp(combined, diff, indirect);
                finalCol       = finalCol * diff * moar.g;
                // Final specular: modulated by specFactor and metallic
                half3 spec = i.preSpecular * moar.a * roughnessVal * 1.5;
                half3 rgb = ((finalCol + spec) * baked);
                // Cube reflection
                half4 cuberef  = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0, i.worldRefl.xyz, roughnessVal * 4.0);
                half3 skyCol    = DecodeHDR(cuberef, unity_SpecCube0_HDR);
                rgb        += skyCol * (metallicVal * moar.r);
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
