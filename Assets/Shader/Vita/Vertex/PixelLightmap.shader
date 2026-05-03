Shader "Vita/Standard Mobile PixelLit_Manual_Fixed"
{
    Properties
    {
        _MainTex ("Albedo (RGB)", 2D) = "white" {}
        _BumpMap ("Normal Map", 2D) = "bump" {}
        _Metallic ("Metallic", Range(0,1)) = 0.5
        _Roughness ("Roughness", Range(0,1)) = 0.5
        _Cutoff ("Alpha cutoff",Range(0,1)) = 0.5
    }
    SubShader
    {
        Tags
        {
            "RenderType"="Opaque"
        }
        LOD 300

        //------------------------------------------------
        // 1) Shadow caster
        Pass
        {
            Name "ShadowCaster"
            Tags
            {
                "LightMode"="ShadowCaster"
            }
            CGPROGRAM
            #pragma vertex vert_shadow
            #pragma fragment frag_shadow
            #pragma multi_compile_shadowcaster
            #include "UnityCG.cginc"

            struct v2f
            {
                V2F_SHADOW_CASTER;
                float2 uv : TEXCOORD0;
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            half _Cutoff;

            v2f vert_shadow(appdata_full v)
            {
                v2f o;
                UNITY_INITIALIZE_OUTPUT(v2f, o);
                TRANSFER_SHADOW_CASTER(o);
                o.uv = TRANSFORM_TEX(v.texcoord, _MainTex);
                return o;
            }

            fixed4 frag_shadow(v2f i) : SV_Target
            {
                fixed4 c = tex2D(_MainTex, i.uv);
                clip(c.a - _Cutoff);
                SHADOW_CASTER_FRAGMENT(i);
            }
            ENDCG
        }

        //------------------------------------------------
        // 2) Main directional pixel-light pass
        Pass
        {
            Name "ForwardBase"
            Tags
            {
                "LightMode"="ForwardBase"
            }
            Blend One Zero

            CGPROGRAM
            #pragma vertex vertBase
            #pragma fragment fragBase
            #pragma multi_compile_fog
            #pragma multi_compile_instancing
            #pragma multi_compile_fwdadd_fullshadows
            #pragma target 3.0

            #include "UnityCG.cginc"
            #include "AutoLight.cginc"          // unity_LightPosition[], unity_LightColor[], etc.
            #include "UnityShadowLibrary.cginc" // SHADOW_COORDS, SHADOW_ATTENUATION

            sampler2D _MainTex, _BumpMap;
            float4 _MainTex_ST, _BumpMap_ST;
            half _Metallic, _Roughness, _Cutoff;

            // Inlined GGX/Disney PBR
            half3 ComputePBRLight(int idx, half3 eyePos, half3 normal)
            {
                half3 L = unity_LightPosition[idx].xyz;
                half att = 1.5h;

                #if defined(POINT) || defined(SPOT)
                L -= eyePos * unity_LightPosition[idx].w;
                half d2 = dot(L, L);
                att /= (1.0h + unity_LightAtten[idx].z * d2);
                if (unity_LightPosition[idx].w != 0.0h && d2 > unity_LightAtten[idx].w)
                    att = 0.0h;
                L *= rsqrt(d2);

                #if defined(SPOT)
                half rho = max(dot(L, unity_SpotDirection[idx].xyz), 0.0h);
                half spotA = (rho - unity_LightAtten[idx].x) * unity_LightAtten[idx].y;
                att *= saturate(spotA);
                #endif
                #endif

                // Diffuse
                half NdotL = max(dot(normal, L), 0.0h);
                half3 diff = (1.0h - _Metallic) * att * NdotL * unity_LightColor[idx].rgb;

                // Specular (GGX)
                half3 V = normalize(-eyePos);
                half3 H = normalize(V + L);
                half NdotV = max(dot(normal, V), 0.0h);
                half NdotH = max(dot(normal, H), 0.0h);
                half VdotH = max(dot(V, H), 0.0h);

                half r = 1.0h - _Roughness;
                half a2 = r * r;
                half denom = (NdotH * NdotH * (a2 - 1.0h) + 1.0h);
                denom = UNITY_PI * denom * denom;
                half D = a2 / max(denom, 0.001h);

                half k = (r + 1.0h) * (r + 1.0h) / 8.0h;
                half Gv = NdotV / (NdotV * (1.0h - k) + k);
                half Gl = NdotL / (NdotL * (1.0h - k) + k);
                half G = Gv * Gl;

                half F0 = lerp(0.04h, 1.0h, _Metallic);
                half F = F0 + (1.0h - F0) * pow(1.0h - VdotH, 5.0h);

                half3 spec = att * (D * G * F) / (4.0h * NdotL * NdotV + 0.001h)
                    * unity_LightColor[idx].rgb;

                return diff + spec;
            }

            struct appdataBase
            {
                float4 vertex : POSITION;
                float3 normal : NORMAL;
                float4 tangent: TANGENT;
                float2 uv : TEXCOORD0;
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            struct v2fBase
            {
                float4 pos : SV_POSITION;
                float2 uv : TEXCOORD0;
                float3 eyePos : TEXCOORD1;
                float3 worldN : TEXCOORD2;
                float4 worldTangent : TEXCOORD3;
                float3 worldPos : TEXCOORD4; // <- new
                UNITY_FOG_COORDS(5)
                SHADOW_COORDS(6)
                UNITY_VERTEX_OUTPUT_STEREO
            };

            v2fBase vertBase(appdataBase v)
            {
                v2fBase o;
                UNITY_SETUP_INSTANCE_ID(v);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);

                o.pos = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                o.eyePos = mul(UNITY_MATRIX_MV, v.vertex).xyz;
                o.worldN = UnityObjectToWorldNormal(v.normal);
                o.worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;

                float3 t = UnityObjectToWorldDir(v.tangent.xyz);
                o.worldTangent = float4(t, v.tangent.w);

                UNITY_TRANSFER_FOG(o, o.pos);
                TRANSFER_SHADOW(o);
                return o;
            }

            fixed4 fragBase(v2fBase i) : SV_Target
            {
                half3 albedo = tex2D(_MainTex, i.uv).rgb;
                half3 nTS = UnpackNormal(tex2D(_BumpMap, i.uv));

                // reconstruct normal
                half3 T = normalize(i.worldTangent.xyz);
                half3 B = normalize(cross(i.worldN, T)) * i.worldTangent.w;
                half3 N = normalize(i.worldN);
                half3 worldN = normalize(nTS.x * T + nTS.y * B + nTS.z * N);

                // ambient
                half3 color = UNITY_LIGHTMODEL_AMBIENT.xyz;

                // main pixel-light
                color += ComputePBRLight(0, i.eyePos, worldN);

                // shadows & cookie
                half sh = 1; //SHADOW_ATTENUATION(i);
                UNITY_LIGHT_ATTENUATION(atten, i, i.worldPos);
                color *= sh * atten;

                fixed4 outCol = fixed4(color * albedo, 1);
                UNITY_APPLY_FOG(i.fogCoord, outCol);
                return outCol;
            }
            ENDCG
        }

        //------------------------------------------------
        // 3) ForwardAdd (extra lights)
        Pass
        {
            Name "ForwardAdd"
            Tags
            {
                "LightMode"="ForwardAdd"
            }
            Blend One One

            CGPROGRAM
            #pragma vertex vertAdd
            #pragma fragment fragAdd
            #pragma multi_compile_fwdadd_fullshadows
            #pragma target 3.0

            #include "UnityCG.cginc"
            #include "AutoLight.cginc"
            #include "UnityShadowLibrary.cginc"

            sampler2D _BumpMap;
            float4 _BumpMap_ST;
            half _Metallic, _Roughness;

            struct appdataAdd
            {
                float4 vertex : POSITION;
                float3 normal : NORMAL;
                float4 tangent: TANGENT;
                float2 uv : TEXCOORD0;
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            struct v2fAdd
            {
                float4 pos : SV_POSITION;
                float3 eyePos : TEXCOORD0;
                float3 worldN : TEXCOORD1;
                float4 worldTangent : TEXCOORD2;
                float3 worldPos : TEXCOORD3; // <- new
                UNITY_FOG_COORDS(4)
                SHADOW_COORDS(5)
                UNITY_VERTEX_OUTPUT_STEREO
            };

            // Inlined GGX/Disney PBR
            half3 ComputePBRLight(int idx, half3 eyePos, half3 normal)
            {
                half3 L = unity_LightPosition[idx].xyz;
                half att = 1.5h;

                #if defined(POINT) || defined(SPOT)
                L -= eyePos * unity_LightPosition[idx].w;
                half d2 = dot(L, L);
                att /= (1.0h + unity_LightAtten[idx].z * d2);
                if (unity_LightPosition[idx].w != 0.0h && d2 > unity_LightAtten[idx].w)
                    att = 0.0h;
                L *= rsqrt(d2);

                #if defined(SPOT)
                half rho = max(dot(L, unity_SpotDirection[idx].xyz), 0.0h);
                half spotA = (rho - unity_LightAtten[idx].x) * unity_LightAtten[idx].y;
                att *= saturate(spotA);
                #endif
                #endif

                // Diffuse
                half NdotL = max(dot(normal, L), 0.0h);
                half3 diff = (1.0h - _Metallic) * att * NdotL * unity_LightColor[idx].rgb;

                // Specular (GGX)
                half3 V = normalize(-eyePos);
                half3 H = normalize(V + L);
                half NdotV = max(dot(normal, V), 0.0h);
                half NdotH = max(dot(normal, H), 0.0h);
                half VdotH = max(dot(V, H), 0.0h);

                half r = 1.0h - _Roughness;
                half a2 = r * r;
                half denom = (NdotH * NdotH * (a2 - 1.0h) + 1.0h);
                denom = UNITY_PI * denom * denom;
                half D = a2 / max(denom, 0.001h);

                half k = (r + 1.0h) * (r + 1.0h) / 8.0h;
                half Gv = NdotV / (NdotV * (1.0h - k) + k);
                half Gl = NdotL / (NdotL * (1.0h - k) + k);
                half G = Gv * Gl;

                half F0 = lerp(0.04h, 1.0h, _Metallic);
                half F = F0 + (1.0h - F0) * pow(1.0h - VdotH, 5.0h);

                half3 spec = att * (D * G * F) / (4.0h * NdotL * NdotV + 0.001h)
                    * unity_LightColor[idx].rgb;

                return diff + spec;
            }

            v2fAdd vertAdd(appdataAdd v)
            {
                v2fAdd o;
                UNITY_SETUP_INSTANCE_ID(v);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);

                o.pos = UnityObjectToClipPos(v.vertex);
                o.eyePos = mul(UNITY_MATRIX_MV, v.vertex).xyz;
                o.worldN = UnityObjectToWorldNormal(v.normal);
                o.worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;

                float3 t = UnityObjectToWorldDir(v.tangent.xyz);
                o.worldTangent = float4(t, v.tangent.w);

                UNITY_TRANSFER_FOG(o, o.pos);
                TRANSFER_SHADOW(o);
                return o;
            }

            fixed4 fragAdd(v2fAdd i) : SV_Target
            {
                half3 nTS = UnpackNormal(tex2D(_BumpMap, UNITY_PROJ_COORD(i.pos)));
                half3 T = normalize(i.worldTangent.xyz);
                half3 B = normalize(cross(i.worldN, T)) * i.worldTangent.w;
                half3 N = normalize(i.worldN);
                half3 worldN = normalize(nTS.x * T + nTS.y * B + nTS.z * N);

                // extra light
                half3 color = ComputePBRLight(0, i.eyePos, worldN);

                // shadows & cookie
                half sh = 1; //SHADOW_ATTENUATION();
                UNITY_LIGHT_ATTENUATION(atten, i, i.worldPos);
                color *= sh * atten;

                return fixed4(color, 0);
            }
            ENDCG
        }

        //------------------------------------------------
        // 4) Meta pass
        Pass
        {
            Name "META"
            Tags
            {
                "LightMode"="Meta"
            }
            Cull Off
            CGPROGRAM
            #pragma vertex vert_meta
            #pragma fragment frag_meta
            #include "UnityStandardMeta.cginc"
            ENDCG
        }
    }

    Fallback "Legacy Shaders/Diffuse"
}