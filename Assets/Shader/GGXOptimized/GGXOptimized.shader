// Upgrade NOTE: replaced '_LightMatrix0' with 'unity_WorldToLight'

// Upgrade NOTE: replaced '_LightMatrix0' with 'unity_WorldToLight'

// Upgrade NOTE: replaced '_LightMatrix0' with 'unity_WorldToLight'

// Upgrade NOTE: replaced '_LightMatrix0' with 'unity_WorldToLight'

// Upgrade NOTE: replaced '_LightMatrix0' with 'unity_WorldToLight'

Shader "Vita/Forward/GGXOptimized"
{
    Properties
    {
        _MainTex ("Albedo", 2D) = "white" {}
        _BumpMap ("Normal Map", 2D) = "bump" {}
        _MetallicGlossMap ("Metallic(R) AO(G) Alpha(B) Roughness(A)", 2D) = "white" {}
        _GlossFloor ("Min Roughness", Range(0.04, 0.5)) = 0.04
        _GlossCeil ("Max Roughness", Range(0.5, 1.0)) = 1.0
        _BRDFLUT ("GGX BRDF LUT", 2D) = "gray" {}
        _Cutoff ("Alpha Cutoff", Range(0,1)) = 0.5

        // Debug toggles
        _DebugLighting ("Show Lighting", Float) = 1
        _DebugAlbedo ("Show Albedo", Float) = 0
        _DebugSpecular ("Show Specular", Float) = 0
        _DebugAO ("Show AO", Float) = 0
        _DebugRoughness ("Show Roughness", Float) = 0
        _DebugReflection ("Show Reflection", Float) = 0
    }

    SubShader
    {
        Tags { "RenderType" = "Opaque" }
        LOD 300

       // UsePass "Vita/Forward/GGXOptimized/FORWARDBASE"
        Pass
        {
            Name "FORWARDBASE"
            Tags { "LightMode" = "ForwardBase" }
            Blend One Zero
            ZWrite On

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma multi_compile_fwdbase fullforwardshadows
            #pragma multi_compile LIGHTMAP_ON DIRLIGHTMAP_COMBINED DYNAMICLIGHTMAP_ON
            #pragma multi_compile_fog
            #pragma multi_compile _ALPHATEST_ON
            #include "UnityCG.cginc"
            #include "AutoLight.cginc"
            #include "UnityLightingCommon.cginc"
            #include "LightingIncludes.cginc"
            #include "SurfaceInputs.cginc"

            struct v2f {
                float4 pos : SV_POSITION;
                float2 uv : TEXCOORD0;
                float2 uv2 : TEXCOORD1;
                float3 worldPos : TEXCOORD2;
                float3 worldNormal : TEXCOORD3;
                float3 viewDir : TEXCOORD4;
                float3 tangentNormal : TEXCOORD5;
                UNITY_LIGHTING_COORDS(6,7)
                UNITY_FOG_COORDS(8)
            };

            struct appdata_full_tan {
                float4 vertex : POSITION;
                float3 normal : NORMAL;
                float4 tangent : TANGENT;
                float2 texcoord : TEXCOORD0;
                float2 texcoord1 : TEXCOORD1;
            };

            v2f vert(appdata_full_tan v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.uv = v.texcoord.xy;
                o.uv2 = v.texcoord1.xy;
                float3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
                o.worldPos = worldPos;
                o.worldNormal = UnityObjectToWorldNormal(v.normal);
                o.viewDir = UnityWorldSpaceViewDir(worldPos);

                TANGENT_SPACE_ROTATION;
                float3 tangentNormal = UnpackNormalRG(tex2Dlod(_BumpMap, float4(v.texcoord.xy, 0, 0)).ra);
                o.tangentNormal = normalize(mul(tangentNormal, rotation));
                TRANSFER_VERTEX_TO_FRAGMENT(o);
                UNITY_TRANSFER_FOG(o, o.pos);
                return o;
            }

            fixed4 frag(v2f i) : SV_Target
            {
                AlphaClipFromMRA(i.uv2);

                fixed4 albedo = tex2D(_MainTex, i.uv);
                float4 mra = SampleMRA(i.uv2);
                float3 normal = normalize(i.tangentNormal + i.worldNormal);

                float3 viewDir = normalize(i.viewDir);
                float3 lightDir = normalize(_WorldSpaceLightPos0.xyz);
                float3 halfVec = normalize(lightDir + viewDir);

                float roughness = remapRoughness(mra.a);
                float NdotV = saturate(dot(normal, viewDir));
                float2 brdfUV = float2(NdotV, roughness);
                float2 lut = tex2D(_BRDFLUT, brdfUV).rg;

                float3 F0 = lerp(0.04, albedo.rgb, mra.r);
                float3 F = FresnelSchlick(F0, dot(viewDir, halfVec));
                float3 specular = F * lut.x + lut.y;

                float NdotL = saturate(dot(normal, lightDir));
                UNITY_LIGHT_ATTENUATION(atten, i, i.worldPos);

                float3 ambient = ShadeSH9(float4(i.worldNormal, 1)) * mra.g;
                #ifdef LIGHTMAP_ON
                ambient = DecodeLightmap(UNITY_SAMPLE_TEX2D(unity_Lightmap, i.uv2)) * mra.b;
                #endif

                float3 reflection = UNITY_SAMPLE_TEXCUBE(unity_SpecCube0, reflect(-viewDir, normal)).rgb * F;

                float3 lighting = (albedo.rgb * NdotL + specular) * atten + ambient + reflection;
                UNITY_APPLY_FOG(i.fogCoord, lighting);
                lighting = ApplyDebug(lighting, albedo.rgb, specular, mra.b, roughness, reflection);
                return fixed4(lighting, 1.0);
            }
            ENDCG
        }
        Pass
        {
            Name "FORWARDADD"
            Tags { "LightMode" = "ForwardAdd" }
            Blend One One
            ZWrite Off

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma multi_compile_fwdadd_fullshadows
            #pragma multi_compile _ALPHATEST_ON
            #include "UnityCG.cginc"
            #include "AutoLight.cginc"
            #include "LightingIncludes.cginc"
            #include "SurfaceInputs.cginc"
            #include "UnityLightingCommon.cginc"

            // Required for spot light cookies
            UNITY_DECLARE_SHADOWMAP(unity_LightTexture0);   // Declares cookie/shadow map sampler
         
            struct v2f {
                float4 pos : SV_POSITION;
                float2 uv : TEXCOORD0;
                float2 uv2 : TEXCOORD1;
                float3 worldPos : TEXCOORD2;
                float3 worldNormal : TEXCOORD3;
                float4 posLight : TEXCOORD4;
                LIGHTING_COORDS(5,6)
            };

            struct appdata_full_tan {
                float4 vertex : POSITION;
                float3 normal : NORMAL;
                float4 tangent : TANGENT;
                float2 texcoord : TEXCOORD0;
                float2 texcoord1 : TEXCOORD1;
            
            };

            v2f vert(appdata_full_tan v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.uv = v.texcoord.xy;
                o.uv2 = v.texcoord1.xy;
                float3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
                o.worldPos = worldPos;
                o.worldNormal = UnityObjectToWorldNormal(v.normal);
                /*o.lightCookieUV = mul(unity_WorldToLight, float4(worldPos, 1.0));*/
                o.posLight = mul(unity_WorldToLight, o.worldPos);
                TRANSFER_VERTEX_TO_FRAGMENT(o);
                return o;
            }

           

            fixed4 frag(v2f i) : SV_Target
            {
                AlphaClipFromMRA(i.uv2);

                fixed4 albedo = tex2D(_MainTex, i.uv);
                float4 mra = SampleMRA(i.uv2);
                float3 normal = normalize(i.worldNormal + UnpackNormalRG(tex2D(_BumpMap, i.uv).ra));

                float3 viewDir = normalize(_WorldSpaceCameraPos - i.worldPos);
                float3 lightDir = normalize(_WorldSpaceLightPos0.xyz);
                float3 halfVec = normalize(lightDir + viewDir);

                float roughness = remapRoughness(mra.a);
                float NdotV = saturate(dot(normal, viewDir));
                float2 brdfUV = float2(NdotV, roughness);
                float2 lut = tex2D(_BRDFLUT, brdfUV).rg;

                float3 F0 = lerp(0.04, albedo.rgb, mra.r);
                float3 F = FresnelSchlick(F0, dot(viewDir, halfVec));
                float3 spec = F * lut.x + lut.y;

                // Spot light cookie projection
                float4 lightSpacePos = mul(unity_WorldToLight, float4(i.worldPos, 1.0));
                float cookieAttenuation = 1.0;
                if (0.0 == _WorldSpaceLightPos0.w) // directional light?
                {
                   cookieAttenuation = 1;
                }
                else if (1.0 != unity_WorldToLight[3][3]) 
                   // spotlight (i.e. not a point light)?
                {
                   cookieAttenuation = tex2D(_LightTexture0, 
                      i.posLight.xy / i.posLight.w 
                      + float2(0.5, 0.5)).a;
                }
                UNITY_LIGHT_ATTENUATION(atten, i, i.worldPos);

                float3 result = spec * atten * cookieAttenuation * saturate(dot(normal, lightDir));
                result = ApplyDebug(result, albedo.rgb, spec, mra.b, roughness, 0);
                return fixed4(result, 0);
            }
            ENDCG
        }

        Pass
        {
            Name "SHADOWCASTER"
            Tags { "LightMode" = "ShadowCaster" }
            ZWrite On

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma multi_compile_shadowcaster _ALPHATEST_ON
            #include "UnityCG.cginc"
            #include "SurfaceInputs.cginc"

            struct v2f {
                V2F_SHADOW_CASTER;
                float2 uv : TEXCOORD1;
            };

            v2f vert(appdata_base v)
            {
                v2f o;
                TRANSFER_SHADOW_CASTER_NORMALOFFSET(o)
                o.uv = v.texcoord.xy;
                return o;
            }

            float4 frag(v2f i) : SV_Target
            {
                AlphaClipFromMRA(i.uv);
                SHADOW_CASTER_FRAGMENT(i)
            }
            ENDCG
        }
    }
    FallBack "Diffuse"
}
