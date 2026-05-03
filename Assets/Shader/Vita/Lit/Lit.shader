Shader "Vita/Lit"
{
    Properties
    {
        [HideInInspector]_SrcBlend ("_SrcBlend", Float) = 1
        [HideInInspector]_DstBlend ("_DstBlend", Float) = 0
        [HideInInspector]_ZWrite ("_ZWrite", Float) = 1

        [Enum(Opaque,0,AlphaTest,1)] _Mode("Rendering Mode", Float) = 0
        [Enum(Off,0,Front,1,Back,2)] _Cull("Cull Mode", Float) = 2

        _MainTex("Albedo (RGB)", 2D) = "white" {}
        _BumpMap ("Normal Map", 2D) = "bump" {}
        _AltBumpMap ("Alt Normal Map", 2D) = "bump" {}
        _BumpScale("Normal Strength", Range(-5, 5)) = 1.0
        _CrossFade("Normal Crossfade", Range(0, 1)) = 0.0
        _UseAltBump("Use Crossfade", Float) = 0

        _MetallicGlossMap("MOAR (RGBA)", 2D) = "white" {}
        _Metallic("Base Metallic", Range(0, 1)) = 0.5
        _Roughness("Base Smoothness", Range(0, 1)) = 0.5

        _Cutoff("Alpha Cutoff", Range(0, 1)) = 0.0
        _InvertFillLight("Invert Fill Light", Range(0, 1)) = 0.0
        _FadeDistance("Fade Distance", Float) = 0.75
        _AlphaTiling("Alpha Tiling", Float) = 1.0
    }

    SubShader
    {
        Tags
        {
            "RenderType"="Opaque" "Queue"="Geometry"
        }
        LOD 200

        Pass
        {
            Name "FORWARD"
            Tags
            {
                "LightMode"="ForwardBase"
            }

            ZWrite [_ZWrite]
            Blend [_SrcBlend] [_DstBlend]
            Cull [_Cull]

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma target 3.0

            #pragma multi_compile_fwdbase
            #pragma multi_compile _ _ALPHATEST_ON _ALPHABLEND_ON _ALPHAPREMULTIPLY_ON
            #pragma multi_compile REFLECTIONS _
            #pragma multi_compile SPECULAR _
            #pragma multi_compile _ WIND
            #pragma shader_feature _ NORMALMAP
            #pragma shader_feature _ METALLICGLOSSMAP

            #include "UnityCG.cginc"
            #include "UnityShaderVariables.cginc"
            #include "LightingCalculations.cginc"
            #include "AutoLight.cginc"
            #include "Lighting.cginc"

            sampler2D _MainTex;
            float4 _MainTex_ST;

            sampler2D _BumpMap;
            sampler2D _AltBumpMap;

            #ifdef METALLICGLOSSMAP
            sampler2D _MetallicGlossMap;
            #endif

            sampler2D _CustomSpotShadowMap;
            float4x4 _CustomSpotMatrix;
            sampler2D _CustomSpotCookie;

            float3 _CustomSpotPosition;
            float3 _CustomSpotDirection;
            float _CustomSpotRange;
            float _CustomSpotAngle;
            float _CustomSpotIntensity;
            float3 _CustomSpotColor;
            float _CustomSpotEnabled;

            float _InvertFillLight;
            float _Metallic;
            float _Roughness;
            float _Cutoff;
            float _Mode;
            float _FadeDistance;
            float _AlphaTiling;
            float _BumpScale;
            float _CrossFade;
            float _UseAltBump;

            struct appdata
            {
                float4 vertex : POSITION;
                float3 normal : NORMAL;
                float4 tangent : TANGENT;
                float2 uv : TEXCOORD0;
                float2 uv1 : TEXCOORD1;
            };

            struct v2f
            {
                float4 pos : SV_POSITION;
                float4 uv : TEXCOORD0;
                float3 worldPos : TEXCOORD1;
                float3 worldNormal : TEXCOORD2;
                float2 lighting : TEXCOORD3;
                float3 reflectVec : TEXCOORD4;
                float3 spotCoord : TEXCOORD5;
                float3 lightDirTangent : TEXCOORD6;
                float3 viewDirTangent : TEXCOORD7;

                UNITY_SHADOW_COORDS(8)
            };

            v2f vert(appdata v)
            {
                v2f o;
                UNITY_INITIALIZE_OUTPUT(v2f, o);

                float4 vertex = v.vertex;
                float3 worldPos = mul(unity_ObjectToWorld, vertex).xyz;
                float3 worldNormal = normalize(UnityObjectToWorldNormal(v.normal));

                #ifdef WIND
                vertex = WindVertexDeformation(vertex, worldPos, 0.25, 3.0, 0.05, float3(1, 1, 1), 1.0, _Time);
                worldPos = mul(unity_ObjectToWorld, vertex).xyz;
                worldNormal = normalize(UnityObjectToWorldNormal(v.normal));
                #endif

                float3 viewDir = normalize(_WorldSpaceCameraPos - worldPos);
                float3 lightDir = normalize(_WorldSpaceLightPos0.xyz);

                float3 worldTangent = normalize(UnityObjectToWorldDir(v.tangent.xyz));
                float3 worldBinormal = normalize(cross(worldNormal, worldTangent) * v.tangent.w);
                float3x3 TBN = float3x3(worldTangent, worldBinormal, worldNormal);

                o.lightDirTangent = mul(TBN, lightDir);
                o.viewDirTangent = mul(TBN, viewDir);

                float nl = dot(worldNormal, lightDir);
                float vertexDiffuse = StandardLikeDiffuse(nl);

                float vertexSpec = 0.0h;

                #ifdef SPECULAR
                vertexSpec = GGXSpecular_Optimized(worldNormal, viewDir, lightDir, 1.0h, _Metallic, _Roughness);
                #endif

                o.pos = UnityObjectToClipPos(vertex);
                o.uv = float4(v.uv, v.uv1 * unity_LightmapST.xy + unity_LightmapST.zw);

                o.worldPos = worldPos;
                o.worldNormal = worldNormal;
                o.reflectVec = reflect(-viewDir, worldNormal);
                o.lighting = float2(vertexDiffuse, vertexSpec);

                o.spotCoord = mul(_CustomSpotMatrix, float4(worldPos, 1.0)).xyw;

                TRANSFER_SHADOW(o);

                return o;
            }

            float4 frag(v2f i) : SV_Target
            {
                float4 tex = tex2D(_MainTex, i.uv.xy);
                float3 albedo = tex.rgb;

                float metallic = _Metallic;
                float roughness = _Roughness;
                float ao = 1.0h;
                float alphaChannel = 1.0h;
                float a = 1.0h;

                #ifdef METALLICGLOSSMAP
                float4 moar = tex2D(_MetallicGlossMap, i.uv.xy);

                float2 alphaUV = i.uv.xy * _AlphaTiling;
                alphaChannel = tex2D(_MetallicGlossMap, alphaUV).b;

                metallic = saturate(_Metallic * moar.r);
                ao = saturate(moar.g);

                /* We treat MOAR.a as smoothness so our material response stays closer to Unity Standard. */
                float smoothness = saturate(_Roughness * moar.a);
                roughness = max((1.0h - smoothness) * (1.0h - smoothness), 0.002h);
                #else
                float smoothness = saturate(_Roughness);
                roughness = max((1.0h - smoothness) * (1.0h - smoothness), 0.002h);
                #endif

                #ifdef _ALPHATEST_ON
                clip(alphaChannel - _Cutoff);
                #endif

                #ifdef _ALPHABLEND_ON
                a = alphaChannel;
                #endif

                #ifdef _ALPHAPREMULTIPLY_ON
                a = alphaChannel;
                #endif

                float3 baked = 1.0h;

                #ifdef LIGHTMAP_ON
                baked = DecodeLightmap(UNITY_SAMPLE_TEX2D(unity_Lightmap, i.uv.zw));
                #endif

                float oneMinusReflectivity = 1.0h - lerp(0.04h, 1.0h, metallic);
                float3 diffuseColor = albedo * oneMinusReflectivity;
                float3 specColor = lerp(0.04h, albedo, metallic);

                float diff = i.lighting.x;
                float spec = 0.0h;

                #ifdef SPECULAR
                spec = i.lighting.y;
                #endif

                float3 normalMap = normalize(i.worldNormal);

                #ifdef NORMALMAP
                float3 normal1 = UnpackNormal(tex2D(_BumpMap, i.uv.xy));
                normalMap = normal1;

                if (_UseAltBump > 0.0h)
                {
                    float3 normal2 = UnpackNormal(tex2D(_AltBumpMap, i.uv.xy));
                    float blend = saturate(_CrossFade);
                    normalMap = normalize(lerp(normal1, normal2, blend.xxx));
                }

                normalMap.xy *= _BumpScale * 4;
                normalMap = normalize(normalMap);

                /*
                    We square the tangent-space normal response so our fake per-pixel
                    normal detail darkens more like Standard without moving the full BRDF
                    into the fragment shader.
                */
                float roughnessBoost = lerp(0.0h, 0.05h, roughness);
                float normalNdotL = saturate(dot(normalMap, normalize(i.lightDirTangent)));
                float normalContrast = normalNdotL * normalNdotL;
                normalContrast *= normalContrast;

                float baseMinDiffuse = 0.04h;
                float minDiffuse = baseMinDiffuse + roughnessBoost;
                float modDiffuse = max(normalContrast, minDiffuse);

                diff *= modDiffuse;

                float modSpec = max(dot(normalMap, normalize(i.lightDirTangent)), 0.0h);
                spec *= saturate(modSpec);
                #endif

                UNITY_LIGHT_ATTENUATION(attenuation, i, i.worldPos.xyz);

                float3 directDiffuse = diffuseColor * _LightColor0.rgb * diff * attenuation * ao;
                float3 directSpecular = specColor * _LightColor0.rgb * spec * attenuation;

                float3 indirectDiffuse = diffuseColor * baked * ao;

                float3 specIBL = 0.0h;

                #ifdef REFLECTIONS
                /*
                    We use a gentler probe mip range than roughness * 16 so reflections
                    remain visible across more of the smoothness range.
                */
                float probeMip = roughness * 12.0h;
                float4 cuberef = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0, i.reflectVec, probeMip);
                specIBL = DecodeHDR(cuberef, unity_SpecCube0_HDR);
                #endif

                /*
                    We add a Standard-like grazing Fresnel response for reflection probes.
                    This makes reflection visibility increase at shallow viewing angles
                    instead of feeling like an all-or-nothing metallic toggle.
                */
                float smoothnessForFresnel = saturate(1.0h - sqrt(roughness));
                float3 viewDirForFresnel = normalize(_WorldSpaceCameraPos.xyz - i.worldPos.xyz);
                float NdotV = saturate(dot(normalize(i.worldNormal), viewDirForFresnel));

                float oneMinusNdotV = 1.0h - NdotV;
                float fresnel = oneMinusNdotV * oneMinusNdotV;
                fresnel *= fresnel * oneMinusNdotV;

                float3 grazingSpecColor = saturate(specColor + smoothnessForFresnel);
                float3 fresnelSpec = lerp(specColor, grazingSpecColor, fresnel);

                float3 indirectSpecular = specIBL * fresnelSpec;

                float3 spot = 0.0h;

                /*
                    We leave the custom spotlight-cookie path disabled while we verify the native
                    ForwardBase + ForwardAdd lighting path.
                */
                /*
                float4 proj = mul(_CustomSpotMatrix, float4(i.worldPos, 1.0));
                float2 cookieUV = proj.xy / proj.w * 0.5 + 0.5;

                float isValid = step(0.0h, proj.z) * step(0.001h, proj.w) *
                                step(0.0h, cookieUV.x) * step(cookieUV.x, 1.0h) *
                                step(0.0h, cookieUV.y) * step(cookieUV.y, 1.0h);

                float cookieSample = tex2D(_CustomSpotCookie, cookieUV).a;
                float cookieEnable = step(0.5h, _CustomSpotEnabled);
                float cookieMask = isValid * cookieSample * cookieEnable;
                float3 lightColor = _CustomSpotIntensity * _CustomSpotColor * 0.5h * cookieEnable;
                spot = cookieMask * lightColor;
                */

                float rimDot = abs(dot(normalMap, -i.lightDirTangent));
                float rimFlip = lerp(rimDot, 1.0h - rimDot, saturate(_InvertFillLight));
                float rimBase = rimFlip;

                float rimExponent = lerp(1.0h, 3.0h, saturate(roughness));
                rimBase = pow(saturate(rimBase), rimExponent);

                float lightDot = saturate(dot(normalMap, normalize(i.lightDirTangent)));
                rimBase *= 1.0h - lightDot;

                float minRim = 0.125h;
                rimBase = max(rimBase, minRim);

                float3 rimColor = half3(0, 0, 0);

                float3 final = directDiffuse + directSpecular + indirectDiffuse + indirectSpecular;

                final += spot;
                final += rimColor;

                return float4(final, a);
            }
            ENDCG
        }

        Pass
        {
            Name "FORWARD_ADD"
            Tags
            {
                "LightMode"="ForwardAdd"
            }

            ZWrite Off
            Blend One One
            Cull [_Cull]

            CGPROGRAM
            #pragma vertex vertAdd
            #pragma fragment fragAdd
            #pragma target 3.0

            #pragma multi_compile_fwdadd_fullshadows
            #pragma multi_compile _ _ALPHATEST_ON _ALPHABLEND_ON _ALPHAPREMULTIPLY_ON
            #pragma multi_compile SPECULAR _
            #pragma multi_compile _ WIND
            #pragma shader_feature _ NORMALMAP
            #pragma shader_feature _ METALLICGLOSSMAP

            #include "UnityCG.cginc"
            #include "UnityShaderVariables.cginc"
            #include "LightingCalculations.cginc"
            #include "AutoLight.cginc"
            #include "Lighting.cginc"

            sampler2D _MainTex;
            float4 _MainTex_ST;

            sampler2D _BumpMap;
            sampler2D _AltBumpMap;

            #ifdef METALLICGLOSSMAP
            sampler2D _MetallicGlossMap;
            #endif

            float _Metallic;
            float _Roughness;
            float _Cutoff;
            float _Mode;
            float _AlphaTiling;
            float _BumpScale;
            float _CrossFade;
            float _UseAltBump;

            struct appdataAdd
            {
                float4 vertex : POSITION;
                float3 normal : NORMAL;
                float4 tangent : TANGENT;
                float2 uv : TEXCOORD0;
            };

            struct v2fAdd
            {
                float4 pos : SV_POSITION;
                float2 uv : TEXCOORD0;
                float3 worldPos : TEXCOORD1;
                float2 lighting : TEXCOORD2;
                float3 lightDirTangent : TEXCOORD3;

                UNITY_SHADOW_COORDS(4)
            };

            v2fAdd vertAdd(appdataAdd v)
            {
                v2fAdd o;
                UNITY_INITIALIZE_OUTPUT(v2fAdd, o);

                float4 vertex = v.vertex;
                float3 worldPos = mul(unity_ObjectToWorld, vertex).xyz;
                float3 worldNormal = normalize(UnityObjectToWorldNormal(v.normal));

                #ifdef WIND
                vertex = WindVertexDeformation(vertex, worldPos, 0.25, 3.0, 0.05, float3(1, 1, 1), 1.0, _Time);
                worldPos = mul(unity_ObjectToWorld, vertex).xyz;
                worldNormal = normalize(UnityObjectToWorldNormal(v.normal));
                #endif

                float3 viewDir = normalize(_WorldSpaceCameraPos - worldPos);
                float3 lightDir = normalize(UnityWorldSpaceLightDir(worldPos));

                float3 worldTangent = normalize(UnityObjectToWorldDir(v.tangent.xyz));
                float3 worldBinormal = normalize(cross(worldNormal, worldTangent) * v.tangent.w);
                float3x3 TBN = float3x3(worldTangent, worldBinormal, worldNormal);

                o.lightDirTangent = mul(TBN, lightDir);

                float nl = dot(worldNormal, lightDir);
                float vertexDiffuse = StandardLikeDiffuse(nl);

                float vertexSpec = 0.0h;

                #ifdef SPECULAR
                vertexSpec = GGXSpecular_Optimized(worldNormal, viewDir, lightDir, 1.0h, _Metallic, _Roughness);
                #endif

                o.pos = UnityObjectToClipPos(vertex);
                o.uv = v.uv;
                o.worldPos = worldPos;
                o.lighting = float2(vertexDiffuse, vertexSpec);

                TRANSFER_SHADOW(o);

                return o;
            }

            float4 fragAdd(v2fAdd i) : SV_Target
            {
                float4 tex = tex2D(_MainTex, i.uv.xy);
                float3 albedo = tex.rgb;

                float metallic = _Metallic;
                float roughness = _Roughness;
                float ao = 1.0h;
                float alphaChannel = 1.0h;

                #ifdef METALLICGLOSSMAP
                float4 moar = tex2D(_MetallicGlossMap, i.uv.xy);

                float2 alphaUV = i.uv.xy * _AlphaTiling;
                alphaChannel = tex2D(_MetallicGlossMap, alphaUV).b;

                metallic = saturate(_Metallic * moar.r);
                ao = saturate(moar.g);

                float smoothness = saturate(_Roughness * moar.a);
                roughness = max((1.0h - smoothness) * (1.0h - smoothness), 0.002h);
                #else
                float smoothness = saturate(_Roughness);
                roughness = max((1.0h - smoothness) * (1.0h - smoothness), 0.002h);
                #endif

                #ifdef _ALPHATEST_ON
                clip(alphaChannel - _Cutoff);
                #endif

                float oneMinusReflectivity = 1.0h - lerp(0.04h, 1.0h, metallic);
                float3 diffuseColor = albedo * oneMinusReflectivity;
                float3 specColor = lerp(0.04h, albedo, metallic);

                float diff = i.lighting.x;
                float spec = 0.0h;

                #ifdef SPECULAR
                spec = i.lighting.y;
                #endif

                #ifdef NORMALMAP
                float3 normal1 = UnpackNormal(tex2D(_BumpMap, i.uv.xy));
                float3 normalMap = normal1;

                if (_UseAltBump > 0.0h)
                {
                    float3 normal2 = UnpackNormal(tex2D(_AltBumpMap, i.uv.xy));
                    float blend = saturate(_CrossFade);
                    normalMap = normalize(lerp(normal1, normal2, blend.xxx));
                }

                normalMap.xy *= _BumpScale * 4;
                normalMap = normalize(normalMap);

                /*
                    We use the same exaggerated tangent-space normal response in ForwardAdd
                    so extra realtime lights match the base pass normal-map behavior.
                */
                float roughnessBoost = lerp(0.0h, 0.05h, roughness);
                float normalNdotL = saturate(dot(normalMap, normalize(i.lightDirTangent)));
                float normalContrast = normalNdotL * normalNdotL;
                normalContrast *= normalContrast;

                float baseMinDiffuse = 0.04h;
                float minDiffuse = baseMinDiffuse + roughnessBoost;
                float modDiffuse = max(normalContrast, minDiffuse);

                diff *= modDiffuse;

                float modSpec = max(dot(normalMap, normalize(i.lightDirTangent)), 0.0h);
                spec *= saturate(modSpec);
                #endif

                UNITY_LIGHT_ATTENUATION(attenuation, i, i.worldPos.xyz);

                float3 directDiffuse = diffuseColor * _LightColor0.rgb * diff * attenuation * ao;
                float3 directSpecular = specColor * _LightColor0.rgb * spec * attenuation;

                float3 final = directDiffuse + directSpecular;

                return float4(final, 0.0h);
            }
            ENDCG
        }

        Pass
        {
            Tags
            {
                "LightMode" = "ShadowCaster"
            }
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

            struct v2f
            {
                V2F_SHADOW_CASTER;
                float2 uv : TEXCOORD1;
                UNITY_VERTEX_OUTPUT_STEREO
            };

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };

            sampler2D_float _MetallicGlossMap;
            float4 _MetallicGlossMap_ST;
            float _Cutoff;
            float _Mode;

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

        Pass
        {
            Name "META"
            Tags
            {
                "LightMode" = "Meta"
            }
            Cull Off

            CGPROGRAM
            #pragma vertex vert_meta
            #pragma fragment frag_meta
            #include "UnityStandardMeta.cginc"
            ENDCG
        }
    }

    FallBack "Diffuse"
    //CustomEditor "VitaLitShaderGUI"
}