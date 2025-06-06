Shader "Vita/Lit"
{
    Properties
    {
        // Serialize these so blend/ZWrite persist:
        [HideInInspector]_SrcBlend ("_SrcBlend", Float) = 1
        [HideInInspector]_DstBlend ("_DstBlend", Float) = 0
        [HideInInspector]_ZWrite   ("_ZWrite",   Float) = 1

        // Dropdowns:
        [Enum(Opaque,0,AlphaTest,1)]
        _Mode        ("Rendering Mode", Float) = 0
        [Enum(Off,0,Front,1,Back,2)]
        _Cull        ("Cull Mode", Float) = 2

        // Textures & scalars:
        _MainTex         ("Albedo (RGB)",     2D) = "white" {}
        _BumpMap         ("Normal Map",       2D) = "bump"  {}
        _MetallicGlossMap("MOAR (RGBA)",      2D) = "white" {}
        _NormalHeight    ("Normal Height",    Range(-2.0, 2.0)) = 1.0
        _Metallic        ("Base Metallic",    Range(0, 1))   = 0.0
        _Roughness       ("Base Roughness",   Range(0, 1))   = 0.5
        _Cutoff          ("Alpha Cutoff",     Range(0, 1))   = 0.0
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
            float4         _MetallicGlossMap_ST;
            float          _Cutoff;
            float          _Mode;

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
        // 1) ForwardBase Pass (vertex‐based lighting)
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
            #pragma fragment fragBase
            #pragma target 3.0

            #pragma multi_compile_fwdbase nodirlightmap nodynlightmap novertexlight
            #pragma multi_compile_instancing
            #pragma multi_compile _ _ALPHATEST_ON _ALPHABLEND_ON _ALPHAPREMULTIPLY_ON
            #pragma multi_compile _ LIGHTMAP_ON
            
            #include "LightingCalculations.cginc"
            #include "AutoLight.cginc"
            #include "Lighting.cginc"

            sampler2D_half _MainTex;
            sampler2D_half _BumpMap;
            sampler2D_half _MetallicGlossMap;
            float4         _MainTex_ST;

            float  _Cutoff;
            float  _Mode;
            float  _Metallic;
            float  _Roughness;
            float  _FadeDistance;

            struct appdata
            {
                float4 vertex  : POSITION;
                float3 normal  : NORMAL;
                float4 tangent : TANGENT;
                float2 uv      : TEXCOORD0;
                float2 uv1     : TEXCOORD1;
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            struct v2f
            {
                float4 pos          : SV_POSITION;
                float4 worldPos     : TEXCOORD0;
                float4 worldNormal  : TEXCOORD1;
                float4 worldRefl    : TEXCOORD2;
                float2 uv           : TEXCOORD3;
                UNITY_SHADOW_COORDS(4)
                float2 uv1          : TEXCOORD5;
                float4 tangent      : TEXCOORD6;
                UNITY_VERTEX_OUTPUT_STEREO
            };

            v2f vert(appdata v)
            {
                UNITY_SETUP_INSTANCE_ID(v);
                v2f o;

                float3 worldPosition = mul(unity_ObjectToWorld, v.vertex).xyz;
                o.pos         = UnityObjectToClipPos(v.vertex);
                o.worldPos    = float4(worldPosition, 1.0);

                float3 worldN  = UnityObjectToWorldNormal(v.normal);
                o.worldNormal = float4(worldN, 0.0);

                float3 viewDir = normalize(_WorldSpaceCameraPos - worldPosition);
                float3 refl    = reflect(-viewDir, worldN);
                o.worldRefl    = float4(refl, 0.0);

                o.uv   = TRANSFORM_TEX(v.uv, _MainTex);
                o.uv1  = v.uv1 * unity_LightmapST.xy + unity_LightmapST.zw;

                o.tangent = v.tangent;
                UNITY_TRANSFER_SHADOW(o, o.uv1);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);

                return o;
            }

            half4 fragBase(v2f i) : SV_Target
            {
                UNITY_SETUP_INSTANCE_ID(i);

                // 1) Sample MOAR and Albedo
                half4 moar = tex2D(_MetallicGlossMap, i.uv * _MainTex_ST.xy + _MainTex_ST.zw);
                half4 alb  = tex2D(_MainTex, i.uv * _MainTex_ST.xy + _MainTex_ST.zw);
                if (_Mode == 1)
                    clip(moar.b - _Cutoff);

                half roughnessVal = saturate(1 - (_Roughness * moar.a));
                half metallicVal  = _Metallic * moar.r;

                // 2) Baked lightmap
                #ifdef LIGHTMAP_ON
                    half3 baked = DecodeLightmap(UNITY_SAMPLE_TEX2D(unity_Lightmap, i.uv1)).rgb;
                #else
                    half3 baked = _LightColor0;
                #endif

                // 3) Shadow & attenuation with fade
       
                UNITY_LIGHT_ATTENUATION(attenuation, i, i.worldPos.xyz);
                float dist = length(_WorldSpaceCameraPos - i.worldPos.xyz);
                half  nl     = saturate(dot(i.worldNormal.xyz, _WorldSpaceLightPos0.xyz));
                float fade = saturate(dist / _FadeDistance);
                attenuation = lerp(attenuation, 1.0h, fade);
                half3 rtTint = unity_ShadowColor.rgb;
                half3 lightAtten = max(nl*attenuation, rtTint);

                // 4) Diffuse
                half3 diff = DisneyDiffuse(nl, alb.rgb);
                half3 diffuseTerm = diff;

                // 5) Specular
                half3 Ldir = normalize(_WorldSpaceLightPos0.xyz);
                half3 Vdir = normalize(_WorldSpaceCameraPos - i.worldPos.xyz);
                half  NdotV = saturate(dot(i.worldNormal.xyz, Vdir));
                half  NdotL = saturate(dot(i.worldNormal.xyz, Ldir));
                half3 H     = normalize(Vdir + Ldir);
                half  NdotH = saturate(dot(i.worldNormal.xyz, H));

                half  D = DistributionGGX_Simple(NdotH, roughnessVal);
                half  G = GeometrySmith_Simple(NdotV, NdotL, roughnessVal);
                half  denom = max(NdotV * NdotL, 0.5h);
                half  mult  =  D * G / denom;
                mult += 0.5h;
                half3 F0  = lerp(half3(0.05h, 0.05h, 0.05h), alb.rgb, metallicVal);
                half3 F   = FresnelSchlick_Simple(saturate(dot(Vdir, H)), F0);
                half3 specColor = F * mult;
                
                half3 lit = (diffuseTerm + specColor) * lightAtten;

                // 6) Add baked lightmap on albedo
                half3 lmContrib = baked;
                half3 rgb       = lit * lmContrib;

                // 7) Cubemap reflection
                half4 cuberef = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0, i.worldRefl.xyz, roughnessVal * 8.0h);
                half3 skyCol   = DecodeHDR(cuberef, unity_SpecCube0_HDR);
                rgb += skyCol * metallicVal;

                // 8) Alpha
                half a = 1;
                #ifdef _ALPHATEST_ON
                    clip (moar.b - _Cutoff);
                #endif

                #ifdef _ALPHABLEND_ON
                    a = moar.b;
                #endif

                #ifdef _ALPHAPREMULTIPLY_ON
                    a = moar.b;
                #endif
                
                return half4(rgb, a);
            }
            ENDCG
        }

        //===============================
        // 2) ForwardAdd Pass (spotlight + normal-map)
        //===============================
        Pass
        {
            Name "FORWARDADD"
            Tags { "LightMode" = "ForwardAdd" }

            Blend One One
            ZWrite Off
            ZTest LEqual
            Cull [_Cull]

            CGPROGRAM
            #pragma vertex vert_add
            #pragma fragment frag_add
            #pragma target 3.0

            #include "LightingCalculations.cginc"
            #include "AutoLight.cginc"
            #include "Lighting.cginc"
            #include "UnityShadowLibrary.cginc"

            #pragma multi_compile_fwdadd_fullshadows
            #pragma multi_compile _ _ALPHATEST_ON _ALPHABLEND_ON _ALPHAPREMULTIPLY_ON
            #pragma multi_compile_instancing
            #pragma skip_variants POINT POINT_COOKIE
            
            sampler2D_half _MainTex;
            sampler2D_half _BumpMap;
            sampler2D_half _MetallicGlossMap;
       
            float4 _MainTex_ST;
            float  _Cutoff;
            float  _Mode;
            float  _Metallic;
            float  _Roughness;
            float  _NormalHeight;

            struct appdata_add
            {
                float4 vertex    : POSITION;
                float3 normal    : NORMAL;
                float4 tangent   : TANGENT;
                float2 uv        : TEXCOORD0;
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            struct v2f_add
            {
                float4 pos         : SV_POSITION;
                float3 worldPos    : TEXCOORD0;
                float3 worldNormal : TEXCOORD1;
                float2 uv          : TEXCOORD2;
                float3 t2w0        : TEXCOORD3;   // world tangent
                float3 t2w1        : TEXCOORD4;   // world bitangent
                float3 t2w2        : TEXCOORD5;   // world normal
                UNITY_SHADOW_COORDS(6)
                UNITY_VERTEX_OUTPUT_STEREO
            };
            
            v2f_add vert_add (appdata_add v)
            {
                UNITY_SETUP_INSTANCE_ID(v);
                v2f_add o;

                float3 worldP = mul(unity_ObjectToWorld, v.vertex).xyz;
                o.pos      = UnityObjectToClipPos(v.vertex);
                o.worldPos = worldP;

                // World-space normal & tangent
                float3 N = UnityObjectToWorldNormal(v.normal);
                float3 T = UnityObjectToWorldDir(v.tangent.xyz);
                float3 B = cross(N, T) * v.tangent.w;   // handedness in v.tangent.w

                o.worldNormal = N;
                o.t2w0 = T;
                o.t2w1 = B;
                o.t2w2 = N;

                o.uv  = TRANSFORM_TEX(v.uv, _MainTex);
          
                UNITY_TRANSFER_SHADOW(o, o.pos);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
                return o;
            }
            half4 frag_add (v2f_add i) : SV_Target
            {
                UNITY_SETUP_INSTANCE_ID(i);

                // Sample & unpack the normal map (tangent space)
                half3 nTS = UnpackScaleNormal(tex2D(_BumpMap, i.uv), _NormalHeight);
                // Bring it to world space
                half3 nWS = normalize(
                      i.t2w0 * nTS.x +
                      i.t2w1 * nTS.y +
                      i.t2w2 * nTS.z);
                // From here on use nWS instead of i.worldNormal
                // Compute attenuation (Unity drives spot & cookie)
                UNITY_LIGHT_ATTENUATION(lightAtten, i, i.worldPos);
                
                // Sample MOAR and albedo
                half4 moar = tex2D(_MetallicGlossMap, i.uv);
                half4 alb  = tex2D(_MainTex, i.uv);
                if (_Mode == 1)
                    clip(moar.b - _Cutoff);

                half roughnessVal = saturate(1 - (_Roughness * moar.a));
                half metallicVal  = _Metallic * moar.r;
               // Vectors
                half3 Ldir = normalize(_WorldSpaceLightPos0.xyz);
                half3 Vdir = normalize(_WorldSpaceCameraPos - i.worldPos.xyz);
                half  NdotV = saturate(dot(nWS, Vdir));
                half  NdotL = saturate(dot(nWS, Ldir));
                half3 H     = normalize(Vdir + Ldir);
                half  NdotH = saturate(dot(i.worldNormal.xyz, H));

                // 4) Diffuse
                half3 diff = DisneyDiffuse(NdotL, alb.rgb);
                half3 diffuseTerm = diff * _LightColor0;

                // 5) Specular
                half  D = DistributionGGX_Simple(NdotH, roughnessVal);
                half  G = GeometrySmith_Simple(NdotV, NdotL, roughnessVal);
                half  denom = max(NdotV * NdotL, 0.5h);
                half  mult  =  D * G / denom;
                half3 F0  = lerp(half3(0.05h, 0.05h, 0.05h), alb.rgb, metallicVal);
                half3 F   = FresnelSchlick_Simple(saturate(dot(Vdir, H)), F0);
                half3 specColor = F * mult * _LightColor0;
                
                half3 lit = (diffuseTerm + specColor) * lightAtten;
                return half4 (lit, 0);
            }
            ENDCG
        }

        //===============================
        // 3) Meta Pass
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