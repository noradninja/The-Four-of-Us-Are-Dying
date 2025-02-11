Shader "Vita/Deferred/StandardPBR"
{
    Properties 
    {
        _MainTex ("Albedo (RGB)", 2D) = "white" {}
        _Metallic ("Metallic", Range(0, 1)) = 0.5
        _Roughness ("Roughness", Range(0, 1)) = 0.5
        _BumpMap ("Normal Map (RGB)", 2D) = "bump" {}
        _BumpScale("Scale", Range(-2,2)) = 1.0
    }
    SubShader 
    {
        Tags {"Queue"="Geometry" "RenderType"="Opaque"}
        LOD 200

        // **Deferred Rendering Pass**
        CGPROGRAM
        #pragma surface surf VitaGGX addshadow noshadowmask exclude_path:deferred
        #pragma target 3.0

        sampler2D _MainTex;
        sampler2D _BumpMap;
        sampler2D _SSGITexture;
        samplerCUBE _GlobalReflectionProbe; // Reflection Cubemap
        fixed _Metallic;
        fixed _Roughness;
        fixed _BumpScale;
        fixed _ReflectionIntensity;

        struct VitaSurfaceOutput
        {
            half3 Albedo;
            half3 Normal;
            half3 Emission;
            half Metallic;
            half Roughness;
            half Alpha;
        };

        // Fresnel-based Reflection Calculation
        inline half3 ComputeReflection(half3 viewDir, half3 normal, half metalness, half roughness)
        {
            half3 reflectionVector = reflect(-viewDir, normal);
            half3 reflectionColor = texCUBE(_GlobalReflectionProbe, reflectionVector).rgb;

            // Fresnel Effect Calculation
            half fresnel = pow(1.0 - max(dot(viewDir, normal), 0.0), 5.0);
            fresnel = lerp(0.04, 1.0, fresnel);

            // Adjust reflection intensity based on roughness and metalness
            half reflectivity = lerp(fresnel, 1.0, metalness);
            reflectionColor *= reflectivity * (1.0 - roughness);

            return reflectionColor;
        }

        inline half4 LightingVitaGGX(VitaSurfaceOutput s, half3 lightDir, half3 viewDir, half atten, float2 uv)
        {
            half3 H = normalize(viewDir + lightDir);
            half3 N = normalize(s.Normal);
            half NoV = max(0.0, dot(N, viewDir));
            half NoL = max(0.0, dot(N, lightDir));
            half NoH = max(0.0, dot(N, H));
            half VoH = max(0.0, dot(viewDir, H));

            half alpha = s.Roughness * s.Roughness;
            half alpha2 = alpha * alpha;
            half D = alpha2 / max(UNITY_PI * (NoH * NoH * alpha2 + (1 - NoH * NoH)), 0.001);

            half3 F0 = lerp(half3(0.04, 0.04, 0.04), s.Albedo, s.Metallic);
            half3 F = F0 + (1 - F0) * pow(1.0 - VoH, 5.0);

            half k = alpha * 0.5;
            half G = NoV / (NoV * (1.0 - k) + k);

            half3 Specular = (D * F * G) / max(4.0 * NoV * NoL, 0.001);
            half3 Diffuse = s.Albedo * (1 - s.Metallic);

            // Sample SSGI for indirect lighting
            half3 IndirectGI = tex2D(_SSGITexture, uv).rgb;

            // Compute Reflection
            half3 reflection = ComputeReflection(viewDir, N, s.Metallic, s.Roughness);

            // Blend Reflection with GI
            half3 color = (Diffuse + Specular) * _LightColor0.rgb * NoL * atten + IndirectGI;
            color = lerp(color, reflection, s.Metallic * _ReflectionIntensity);

            return half4(color, s.Alpha);
        }

        struct Input {
            float2 uv_MainTex;
        };

        void surf (Input IN, inout VitaSurfaceOutput o) {
            fixed4 col = tex2D (_MainTex, IN.uv_MainTex);
            fixed4 norm = tex2D(_BumpMap, IN.uv_MainTex);

            o.Albedo = col.rgb;
            o.Metallic = _Metallic;
            o.Roughness = _Roughness;
            o.Normal = UnpackScaleNormal(norm, _BumpScale);
            o.Alpha = 1.0;
        }
        ENDCG
        
        // **Forward Rendering Pass (Scene View)**
        Pass
        {
            Tags { "LightMode"="ForwardBase" }
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma target 3.0
            #include "UnityCG.cginc"
            #include "AutoLight.cginc"
            #include "UnityPBSLighting.cginc"

            sampler2D _MainTex;
            sampler2D _BumpMap;
            sampler2D _SSGITexture;
            samplerCUBE _GlobalReflectionProbe;
            fixed _Metallic;
            fixed _Roughness;
            fixed _BumpScale;
            fixed _ReflectionIntensity;

            struct v2f {
                float4 pos : SV_POSITION;
                float2 uv : TEXCOORD0;
                float3 worldNormal : TEXCOORD1;
                float3 worldPos : TEXCOORD2;
                float3 viewDir : TEXCOORD3;
                LIGHTING_COORDS(4, 5)
            };
            inline half3 ComputeReflection(half3 viewDir, half3 normal, half metalness, half roughness)
            {
            half3 reflectionVector = reflect(-viewDir, normal);
            half3 reflectionColor = texCUBE(_GlobalReflectionProbe, reflectionVector).rgb;

            // Fresnel Effect Calculation
            half fresnel = pow(1.0 - max(dot(viewDir, normal), 0.0), 5.0);
            fresnel = lerp(0.04, 1.0, fresnel);

            // Adjust reflection intensity based on roughness and metalness
            half reflectivity = lerp(fresnel, 1.0, metalness);
            reflectionColor *= reflectivity * (1.0 - roughness);

            return reflectionColor;
            }
            
            v2f vert(appdata_tan v) {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.uv = v.texcoord;
                o.worldNormal = UnityObjectToWorldNormal(v.normal);
                o.worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
                o.viewDir = normalize(_WorldSpaceCameraPos - o.worldPos);
                TRANSFER_VERTEX_TO_FRAGMENT(o);
                return o;
            }

            half4 frag(v2f i) : SV_Target
            {
                fixed4 col = tex2D(_MainTex, i.uv);
                fixed3 baseNormal = normalize(i.worldNormal);
                fixed4 normalMap = tex2D(_BumpMap, i.uv);
                fixed3 N = normalize(UnpackScaleNormal(normalMap, _BumpScale));
                N = normalize(N * 0.5 + baseNormal * 0.5);

                fixed3 V = normalize(i.viewDir);
                fixed3 L = normalize(_WorldSpaceLightPos0.xyz);

                half NoV = max(0.0, dot(N, V));
                half NoL = max(0.0, dot(N, L));
                half3 H = normalize(V + L);
                half NoH = max(0.0, dot(N, H));
                half VoH = max(0.0, dot(V, H));

                half alpha = _Roughness * _Roughness;
                half alpha2 = alpha * alpha;
                half D = alpha2 / max(UNITY_PI * (NoH * NoH * alpha2 + (1 - NoH * NoH)), 0.001);

                half3 F0 = lerp(half3(0.04, 0.04, 0.04), col.rgb, _Metallic);
                half3 F = F0 + (1 - F0) * pow(1.0 - VoH, 5.0);

                half k = alpha * 0.5;
                half G = NoV / (NoV * (1.0 - k) + k);

                half3 Specular = (D * F * G) / max(4.0 * NoV * NoL, 0.001);
                half3 Diffuse = col.rgb * (1 - _Metallic);

                half3 IndirectGI = tex2D(_SSGITexture, i.uv).rgb;
                half3 reflection = ComputeReflection(V, N, _Metallic, _Roughness);

                UNITY_LIGHT_ATTENUATION(atten, i, i.worldPos);

                half3 finalColor = (Diffuse + Specular) * _LightColor0.rgb * NoL * atten + IndirectGI;
                finalColor = lerp(finalColor, reflection, _Metallic * _ReflectionIntensity);

                return half4(finalColor, 1.0);
            }
            ENDCG
        }
    } 
}
