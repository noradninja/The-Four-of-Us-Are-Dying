Shader "Vita/Deferred/SSGI"
{
    Properties {
        _MainTex ("Base (RGB)", 2D) = "white" {}
    }
    SubShader {
        Tags { "Queue"="Overlay" }
        Pass {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"
            #include "UnityStandardBRDF.cginc" // Needed for reflection probes

            // Input Textures
            sampler2D _CameraDepthTexture;
            sampler2D _CameraGBuffer0; // Albedo
            sampler2D _CameraGBuffer1; // Normal
            sampler2D _CameraGBuffer2; // Lighting Buffer
            sampler2D _CameraGBuffer3; // Metallic & Roughness

            samplerCUBE _GlobalReflectionProbe; // Unity's Reflection Cubemap

            // Screen resolution
            float2 _ScreenSize;

            // SSGI Settings
            float _TraceDistance; // Max tracing distance
            int _SampleCount; // Number of samples per ray
            float _BlurStrength; // Post-processing blur strength
            float _ReflectionIntensity; // Reflection blend factor

            struct v2f {
                float4 pos : SV_POSITION;
                float2 uv : TEXCOORD0;
            };

            v2f vert(appdata_full v) {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.uv = v.texcoord;
                return o;
            }

            // Sample depth and reconstruct world position
            float3 GetWorldPos(float2 uv) {
                float depth = tex2D(_CameraDepthTexture, uv).r;
                float4 clipPos = float4(uv * 2.0 - 1.0, depth, 1.0);
                float4 viewPos = mul(unity_CameraInvProjection, clipPos);
                return viewPos.xyz / viewPos.w;
            }

            // Compute SSGI from neighboring pixels
            fixed3 ComputeSSGI(float2 uv, float3 normal) {
                fixed3 indirectLight = 0;

                for (int i = 0; i < 8; i++) {
                    // Generate random offset for sampling
                    float2 offset = (frac(sin(float2(i, uv.x * uv.y)) * 43758.5453) - 0.5) * _TraceDistance;
                    float2 sampleUV = uv + offset / _ScreenSize;

                    // Ensure sample is valid
                    if (sampleUV.x < 0 || sampleUV.y < 0 || sampleUV.x > 1 || sampleUV.y > 1) 
                        continue;

                    // Get sampled normal
                    float3 sampleNormal = tex2D(_CameraGBuffer1, sampleUV).rgb * 2 - 1;

                    // Ensure normal is facing correctly
                    if (dot(sampleNormal, normal) > 0.5) {
                        fixed3 sampleColor = tex2D(_CameraGBuffer0, sampleUV).rgb;
                        indirectLight += sampleColor;
                    }
                }

                return indirectLight / _SampleCount;
            }

            // Compute Bent Normal Approximation
            float3 ComputeBentNormal(float2 uv) {
                float3 bentNormal = 0;
                for (int i = 0; i < 4; i++) {
                    float2 offset = (frac(sin(float2(i, i * 3.14)) * 43758.5453) - 0.5) * 0.1;
                    bentNormal += tex2D(_CameraGBuffer1, uv + offset).rgb;
                }
                return normalize(bentNormal);
            }

            // Compute Fresnel for reflections
            half3 ComputeReflection(float3 viewDir, float3 normal, float2 uv, half metalness, half roughness) {
                float3 reflectionVector = reflect(-viewDir, normal);
                half3 reflectionColor = texCUBE(_GlobalReflectionProbe, reflectionVector).rgb;

                // Fresnel Effect
                float fresnel = pow(1.0 - max(dot(viewDir, normal), 0.0), 5.0);
                fresnel = lerp(0.04, 1.0, fresnel); // Mix between dielectric & metallic behavior

                // Roughness reduces reflection strength
                half reflectivity = lerp(fresnel, 1.0, metalness); // Metals reflect more
                reflectionColor *= reflectivity * (1.0 - roughness); 

                return reflectionColor;
            }

            fixed4 frag(v2f i) : SV_Target {
                float3 bentNormal = ComputeBentNormal(i.uv);
                fixed3 indirect = ComputeSSGI(i.uv, bentNormal);

                // Fetch G-Buffer Data
                fixed3 baseColor = tex2D(_CameraGBuffer0, i.uv).rgb;
                fixed3 baseLight = tex2D(_CameraGBuffer2, i.uv).rgb;
                fixed4 metalRough = tex2D(_CameraGBuffer3, i.uv); // Metallic & Roughness
                half metalness = metalRough.r;
                half roughness = metalRough.g;

                // Compute reflection
                float3 viewDir = normalize(_WorldSpaceCameraPos - GetWorldPos(i.uv));
                half3 reflection = ComputeReflection(viewDir, bentNormal, i.uv, metalness, roughness);

                // Final Color Computation
                fixed3 finalColor = baseLight + indirect;
                finalColor = lerp(finalColor, reflection, metalness * _ReflectionIntensity);

                return fixed4(finalColor, 1.0);
            }
            ENDCG
        }
    }
}
