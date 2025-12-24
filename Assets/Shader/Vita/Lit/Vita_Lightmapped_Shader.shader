Shader "Vita/Lightmapped"
{
    Properties
    {
        [HideInInspector]_SrcBlend ("_SrcBlend", Float) = 1
        [HideInInspector]_DstBlend ("_DstBlend", Float) = 0
        [HideInInspector]_ZWrite   ("_ZWrite",   Float) = 1

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
        _EnableRimLight ("Enable Rim Light", Float) = 0.0
        _InvertFillLight("Invert Fill Light", Range(0, 1)) = 0.0
        _SwapRimDir ("Use View Direction for Rim", Float) = 0.0
        _FadeDistance("Fade Distance", Float) = 8.0
        _AlphaTiling("Alpha Tiling", Float) = 1.0
        _UseWind ("Use Wind", Float) = 1.0
        _wind_dir ("Wind Direction", Vector) = (0.5,0.05,0.5,0)
        _wind_size ("Wind Wave Size", Range(5,50)) = 15
        _leaves_wiggle_disp ("Leaves Wiggle Displacement", float) = 0.07
        _leaves_wiggle_speed ("Leaves Wiggle Speed", float) = 0.01
        _influence ("Influence", Range(0,1)) = 1
    }

    SubShader
    {
        Tags { "RenderType"="Opaque" "Queue"="Geometry" }
        LOD 200

        Pass
        {
            Name "FORWARD"
            Tags { "LightMode"="ForwardBase" }
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
            #pragma shader_feature _ RIMLIGHT

            #include "UnityCG.cginc"
            #include "UnityShaderVariables.cginc"
            #include "LightingCalculations.cginc"
            #include "AutoLight.cginc"
            #include "Lighting.cginc"

            sampler2D _MainTex;
            float4 _MainTex_ST;
            sampler2D _SpecularLUT;
            #ifdef NORMALMAP
            sampler2D _BumpMap;
            sampler2D _AltBumpMap;
            #endif
            #ifdef METALLICGLOSSMAP
            sampler2D _MetallicGlossMap;
            #endif
            sampler2D _CustomSpotShadowMap;
            sampler2D _CustomSpotCookie;
            float4x4 _CustomSpotMatrix;
            float4 _CustomSpotPacked[3];

            float _Metallic, _Roughness, _Cutoff, _Mode, _FadeDistance, _AlphaTiling, _BumpScale, _CrossFade, _UseAltBump;
            float _InvertFillLight, _SwapRimDir, _EnableRimLight;
            float3 _wind_dir;
            float _leaves_wiggle_disp, _leaves_wiggle_speed, _wind_size, _influence;

            struct appdata {
                float4 color : COLOR;
                float4 vertex : POSITION;
                float3 normal : NORMAL;
                float4 tangent : TANGENT;
                float2 uv : TEXCOORD0;
                float2 uv1 : TEXCOORD1;
            };

            struct v2f {
                float4 pos : SV_POSITION;
                float4 uv : TEXCOORD0;
                float3 worldPos : TEXCOORD1;
                half3 worldNormal : TEXCOORD2;
                half2 lighting : TEXCOORD3;
                half3 spotCoord : TEXCOORD4;
                half3 lightDirTangent : TEXCOORD5;
                UNITY_SHADOW_COORDS(6)
            };

            v2f vert(appdata v)
            {
                v2f o;
                UNITY_INITIALIZE_OUTPUT(v2f, o);

                float4 vertex = v.vertex;
                float3 worldNormal = normalize(UnityObjectToWorldNormal(v.normal));
                float3 worldPos = mul(unity_ObjectToWorld, vertex).xyz;
                float3 viewDir = normalize(_WorldSpaceCameraPos - worldPos);
                float3 worldTangent = UnityObjectToWorldDir(v.tangent.xyz);
                float3 worldBinormal = cross(worldNormal, worldTangent) * v.tangent.w;
                float3x3 TBN = float3x3(worldTangent, worldBinormal, worldNormal);
                float3 lightDir = normalize(_WorldSpaceLightPos0.xyz);
                half nl = dot(worldNormal, lightDir);
                half vertexDiffuse = DisneyDiffuse(nl, 1.0h) + UNITY_LIGHTMODEL_AMBIENT;

                #ifdef WIND
                    float monoVertColor = v.color.r + v.color.g + v.color.b;
                    vertex = WindVertexDeformation(vertex, _leaves_wiggle_speed, _wind_size, _leaves_wiggle_disp, _wind_dir, _influence, monoVertColor, _Time);
                #endif

                o.pos = UnityObjectToClipPos(vertex);
                o.uv = float4(v.uv, v.uv1 * unity_LightmapST.xy + unity_LightmapST.zw);
                o.worldPos = worldPos;
                o.worldNormal = worldNormal;
                o.lightDirTangent = mul(TBN, lightDir);
                o.lighting = half2(vertexDiffuse, 0);
                o.spotCoord = mul(_CustomSpotMatrix, float4(worldPos, 1.0)).xyw;
                TRANSFER_SHADOW(o);
                return o;
            }

            half4 frag(v2f i) : SV_Target
            {
                half3 normalMap = normalize(i.worldNormal);
                half4 tex = tex2D(_MainTex, i.uv.xy);
                half3 albedo = tex.rgb;
                half metallic = _Metallic;
                half roughness = 1.0 - _Roughness;
                half ao = 1.0h;
                half alphaChannel = 1.0h;
                half a = 1.0h;
                half3 baked = 1.0h;
                half3 viewDir = normalize(_WorldSpaceCameraPos - i.worldPos);
                half3 rimColor = 0;

                 #ifdef METALLICGLOSSMAP
                    half4 moar = tex2D(_MetallicGlossMap, i.uv.xy * _AlphaTiling);
                    metallic *= moar.r;
                    ao *= moar.g;
                    alphaChannel = moar.b;
                    roughness = 1.0 - _Roughness * moar.a;
                #endif

                roughness *= 8.0h;
                half diff = i.lighting.x;

                 UNITY_LIGHT_ATTENUATION(attenuation, i, i.worldPos.xyz);
                 half nl = saturate(dot(i.worldNormal, _WorldSpaceLightPos0.xyz));
                 half fade = saturate(distance(_WorldSpaceCameraPos, i.worldPos) / _FadeDistance);
                 attenuation = lerp(attenuation, 1.0h, fade);
                 half shadowBoost = lerp(0.0h, 1.0h, nl * attenuation);
                 half3 shaded = max(shadowBoost, albedo * baked + unity_ShadowColor.rgb);
                 half nv = saturate(dot(i.worldNormal, viewDir));
                 half2 lutUV = half2(nv, roughness);
                 half3 lut = tex2D(_SpecularLUT, lutUV);
                 //half spec = BlinnPhongSpecular_LUT(i.worldNormal, viewDir, i.lightDirTangent, lut);

                #ifdef _ALPHATEST_ON
                    clip(alphaChannel - _Cutoff);
                #endif
                #ifdef _ALPHABLEND_ON
                    a = alphaChannel;
                #endif
                #ifdef _ALPHAPREMULTIPLY_ON
                    a = alphaChannel;
                #endif

                #ifdef LIGHTMAP_ON
                    baked = DecodeLightmap(UNITY_SAMPLE_TEX2D(unity_Lightmap, i.uv.zw));
                #endif

                #ifdef NORMALMAP
                    half3 n1 = UnpackNormal(tex2D(_BumpMap, i.uv.xy));
                    half3 n2 = UnpackNormal(tex2D(_AltBumpMap, i.uv.xy));
                    half blend = saturate(_CrossFade);
                    half useAlt = step(0.01h, _UseAltBump);
                    normalMap = normalize(lerp(n1, n2, useAlt * blend));
                    normalMap.xy *= _BumpScale;
                    normalMap = normalize(normalMap);
                
                    half roughnessBoost = lerp(0.0h, 0.1h, roughness);
                    half minDiffuse = 0.15h + roughnessBoost;
                    diff *= saturate(max(dot(normalMap, normalize(i.lightDirTangent)), minDiffuse));
                    half minSpec = 0.15h + roughnessBoost;
                    spec *= saturate(max(dot(normalMap, normalize(i.lightDirTangent)), minSpec));
                #endif

                #ifdef REFLECTIONS
                    half3 reflectVec = reflect(-viewDir, normalMap);
                    half4 cuberef = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0, reflectVec, roughness);
                    half3 specIBL = DecodeHDR(cuberef, unity_SpecCube0_HDR);
                #else
                    half3 specIBL = 0;
                #endif

                #ifdef RIMLIGHT
                    float3 worldTangent = normalize(UnityObjectToWorldDir(float3(1, 0, 0)));
                    float3 worldBinormal = normalize(cross(i.worldNormal, worldTangent));
                    float3x3 TBN = float3x3(worldTangent, worldBinormal, i.worldNormal);
                    half3 viewDirTangent = mul(TBN, viewDir);
                
                    half rimDot = abs(dot(normalMap, -i.lightDirTangent));
                    half rimFlip = lerp(rimDot, 1.0h - rimDot, saturate(_InvertFillLight));
                    half rimBase = rimFlip;
                    half rimExp = lerp(0.0h, 0.75h, saturate(roughness));
                    rimBase = exp2(log2(saturate(rimBase)) * rimExp);
                    half lightDot = saturate(dot(normalMap, normalize(lerp(i.lightDirTangent, viewDirTangent, _SwapRimDir))));
                    rimBase *= 0.15h - lightDot;
                    rimBase = max(rimBase, 0.05h);
                    rimColor = rimBase * _EnableRimLight;
                #endif

               

                // Cookie projection
                half4 proj = mul(_CustomSpotMatrix, half4(i.worldPos, 1.0h));
                half2 cookieUV = proj.xy / proj.w * 0.5h + 0.5h;
                half isValid = step(0.0h, proj.z) * step(0.001h, proj.w) *
                               step(0.0h, cookieUV.x) * step(cookieUV.x, 1.0h) *
                               step(0.0h, cookieUV.y) * step(cookieUV.y, 1.0h);
                half cookieSample = tex2D(_CustomSpotCookie, cookieUV).a;
                half cookieEnable = step(0.5h, _CustomSpotPacked[2].a);
                half cookieMask = isValid * cookieSample * cookieEnable;
                float3 lightPos = _CustomSpotPacked[1].xyz;
                float cookieFade = saturate(1.0h - distance(i.worldPos, lightPos) / 5);
                cookieFade = smoothstep(0.0h, 1.0h, cookieFade);
                half3 spot = cookieMask * cookieFade * _CustomSpotPacked[0].w * _CustomSpotPacked[2].rgb * 0.5h;

                half3 vertexLight = (diff) * _LightColor0;
                half3 dynamicLighting = (vertexLight + spot) * ao  * shaded + rimColor;
                half3 baseColor = albedo;
                half3 final = (baseColor + specIBL) * baked * dynamicLighting;
                return half4(vertexLight, a);
            }
            ENDCG
        }
        Pass
            {
                Name "ShadowCaster"
                Tags { "LightMode" = "ShadowCaster" }

                ZWrite On
                ZTest LEqual
                Cull [_Cull]

                CGPROGRAM
                #pragma vertex vert
                #pragma fragment frag
                #pragma target 3.0

                #pragma multi_compile_shadowcaster
                #pragma multi_compile _ _ALPHATEST_ON

                #include "UnityCG.cginc"

                sampler2D _MetallicGlossMap;
                float4 _MainTex_ST;
                float _Cutoff;

                struct v2f {
                    V2F_SHADOW_CASTER;
                    float2 uv : TEXCOORD1;
                };

                v2f vert(appdata_base v)
                {
                    v2f o;
                    TRANSFER_SHADOW_CASTER_NORMALOFFSET(o)
                    o.uv = TRANSFORM_TEX(v.texcoord, _MainTex);
                    return o;
                }

                float4 frag(v2f i) : SV_Target
                {
                   #ifdef _ALPHATEST_ON
                        fixed4 tex = tex2D(_MetallicGlossMap, i.uv);
                        clip(tex.b - _Cutoff);
                   #endif
                    
                    SHADOW_CASTER_FRAGMENT(i)
                }
                ENDCG
            }
        }
    FallBack "Diffuse"
    CustomEditor "VitaLitShaderGUI"
}
