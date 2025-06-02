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
        _MainTex     ("Albedo (RGB)",     2D) = "white" {}
        _NormalMap   ("Normal Map",       2D) = "bump"  {}
        _MOARMap     ("MOAR (RGBA)",      2D) = "white" {}
        _NormalHeight("Normal Height", Range(0.1, 2.0)) = 1.0
        _Metallic    ("Base Metallic", Range(0, 1))   = 0.0
        _Roughness   ("Base Roughness",Range(0, 1))   = 0.5
        _Cutoff      ("Alpha Cutoff",   Range(0, 1))   = 0.0
    }

    SubShader
    {
        // Default tags (will be overridden by the GUI at edit time)
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
                #include "UnityPBSLighting.cginc"   // (TBD: remove if not needed)
                #include "UnityShadowLibrary.cginc"

                // Modified v2f: use float2 for uv
                struct v2f
                {
                    V2F_SHADOW_CASTER;           // expands to: float4 pos : SV_POSITION; UNITY_SHADOW_COORDS(…);
                    float2 uv       : TEXCOORD1; // use float2, not half3
                    UNITY_VERTEX_OUTPUT_STEREO
                };

                // Modified appdata: vertex must be float4, uv must be float2
                struct appdata
                {
                    float4 vertex : POSITION;  // was half3 – must be float4
                    float2 uv     : TEXCOORD0; // was half3 – must be float2
                    // (we can drop color if unused)
                };

                sampler2D _MOARMap;
                float4   _MOARMap_ST;	
                uniform fixed _Cutoff;
                float    _Mode;

                v2f vert_shadow(appdata v)
                {
                    v2f o;
                    UNITY_SETUP_INSTANCE_ID(v);
                    UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);

                    // This now works because v.vertex is float4
                    TRANSFER_SHADOW_CASTER(o);           

                    // Transform UV properly
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
        // 1) ForwardBase Pass (vertex‐based reflection)
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
            float4   _MainTex_ST;

            float  _Cutoff;
            float  _Mode;      // 0=Opaque, 1=AlphaTest, 2=Fade, 3=Transparent
            float  _Metallic;
            float  _Roughness;

            struct appdata
            {
                float4 vertex  : POSITION;
                float3 normal  : NORMAL;
                float4 tangent : TANGENT;
                float2 uv      : TEXCOORD0;
                float2 uv1     : TEXCOORD1;
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            // Convert all float3 varyings to float4 to avoid 3-coeff TEXCOORD at low indices:
            struct v2f
            {
                float4 pos          : SV_POSITION;
                float4 worldPos     : TEXCOORD0;   // was float3, now float4 (xyz = worldPos, w = 1)
                float4 worldNormal  : TEXCOORD1;   // was float3, now float4 (xyz = normal, w = 0)
                float4 worldRefl    : TEXCOORD2;   // was float3, now float4 (xyz = reflect vector, w = 0)
                float2 uv           : TEXCOORD3;
                UNITY_SHADOW_COORDS(4)
                float2 uv1          : TEXCOORD5;
                float4 tangent      : TEXCOORD6;   // okay as float4
                UNITY_VERTEX_OUTPUT_STEREO
            };

            v2f vert(appdata v)
            {
                UNITY_SETUP_INSTANCE_ID(v);
                v2f o;

                // 1) Compute clip‐space position and world position (xyz), set w=1
                float3 worldPosition = mul(unity_ObjectToWorld, v.vertex).xyz;
                o.pos         = UnityObjectToClipPos(v.vertex);
                o.worldPos    = float4(worldPosition, 1.0);

                // 2) Pass un‐perturbed world normal (xyz) into a float4 with w=0
                float3 worldN  = UnityObjectToWorldNormal(v.normal);
                o.worldNormal = float4(worldN, 0.0);

                // 3) Compute view direction in world space, build vertex reflection
                float3 viewDir = normalize(_WorldSpaceCameraPos - worldPosition);
                float3 refl    = reflect(-viewDir, worldN);
                o.worldRefl    = float4(refl, 0.0);

                // 4) UVs
                o.uv   = TRANSFORM_TEX(v.uv, _MainTex);
                o.uv1  = v.uv1 * unity_LightmapST.xy + unity_LightmapST.zw;

                // 5) Pass tangent & its sign
                o.tangent = v.tangent;

                UNITY_TRANSFER_SHADOW(o, o.uv1);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);

                return o;
            }

            half4 fragBase(v2f i) : SV_Target
            {
                UNITY_SETUP_INSTANCE_ID(i);

                // 1) Sample MOAR: R=Metallic, G=AO, B=AlphaCutout, A=Roughness
                half4 moar = tex2D(_MOARMap, i.uv * _MainTex_ST.xy + _MainTex_ST.zw);

                // 2) Cutout if Mode==1
                if (_Mode == 1)
                {
                    clip(moar.b - _Cutoff);
                }

                // 3) Sample Albedo
                half4 alb = tex2D(_MainTex, i.uv * _MainTex_ST.xy + _MainTex_ST.zw);

                // 4) Baked lightmap
                half3 baked = DecodeLightmap(UNITY_SAMPLE_TEX2D(unity_Lightmap, i.uv1)).rgb;

                // 5) Shadow & attenuation
                UNITY_LIGHT_ATTENUATION(attenuation, i, i.worldPos.xyz);
                half3 rtTint    = unity_ShadowColor.rgb;
                half  nl        = saturate(dot(i.worldNormal.xyz, _WorldSpaceLightPos0.xyz));

                // 6) Diffuse
                half3 diff = DisneyDiffuse(nl, alb.rgb, _LightColor0.rgb);
                diff = (diff + alb.rgb) + 0.25;

                // 7) Indirect mask
                half indirect   = saturate(1 - (baked.b + baked.r * baked.g));
                half3 shaded    = nl * attenuation;
                half3 combined  = max(shaded - indirect, rtTint);

                // 8) Final diffuse combination
                half3 finalCol = lerp(combined, diff, indirect);
                finalCol       = finalCol * diff * baked;

                // 9) Specular (GGX PBR uses per‐vertex normal from alpha channel of worldNormal float4)
                float3 albedoColor  = alb.rgb;
                float  metallicVal  = moar.r;
                float  roughnessVal = saturate(1 - _Roughness * moar.a) * 0.5;

                float3 Ldir = normalize(_WorldSpaceLightPos0.xyz);
                float3 Vdir = normalize(_WorldSpaceCameraPos - i.worldPos.xyz);

                // Extract per‐vertex normal from float4 (xyz)
                float3 Nvert = i.worldNormal.xyz;

                half3 spec = GGXSpecular_PBR(
                    Nvert,
                    Vdir,
                    Ldir,
                    albedoColor,
                    metallicVal,
                    roughnessVal,
                    _LightColor0.rgb
                );
                spec = spec * roughnessVal;
                // 10) Combine specular + diffuse
                half3 rgb = ((finalCol + spec) * moar.g);

                // 11) Cubemap reflection (vertex‐based from worldRefl float4):
                half4 cuberef  = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0, i.worldRefl.xyz, roughnessVal * 8.0);
                half3 skyCol    = DecodeHDR(cuberef, unity_SpecCube0_HDR);
                rgb            += skyCol * (metallicVal * moar.r);

                // 12) Alpha logic
                half a   = moar.b;
                if (_Mode == 3)
                {
                    rgb *= a; // premultiply
                }
                half outA = (_Mode == 0 || _Mode == 1) ? 1.0 : a;

                return half4(rgb, outA);
            }
            ENDCG
        }


        //===============================
        // 2) Meta Pass
        //===============================
         Pass
        {
            // Alpha map enabled Bakery-specific meta pass

            Name "META_BAKERY"

            Tags {"LightMode"="Meta"}
            Cull Off
            CGPROGRAM

            #include "UnityStandardMeta.cginc"

            // Include Bakery meta pass
            #include "BakeryMetaPass.cginc"

            sampler2D _MOARMap;
            float4   _MOARMap_ST;

            float4 frag_customMeta (v2f_bakeryMeta i): SV_Target
            {
                UnityMetaInput o;
                UNITY_INITIALIZE_OUTPUT(UnityMetaInput, o);

                // Output custom alpha to Bakery
                if (unity_MetaFragmentControl.w)
                {
                   // Sample MOAR's alpha (alpha = cutout)
                    half4 moar = tex2D(_MOARMap, i.uv);
                    clip(moar.b - _Cutoff);
                    return moar.b;
                }

                // Regular Unity meta pass
                o.Albedo = tex2D(_MainTex, i.uv);
                return UnityMetaFragment(o);
            }

            // Must use vert_bakerymt vertex shader
            #pragma vertex vert_bakerymt
            #pragma fragment frag_customMeta
            ENDCG
        }
    }

    Fallback "Diffuse"
    CustomEditor "VitaLitShaderGUI"
}
