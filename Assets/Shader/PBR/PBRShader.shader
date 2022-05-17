Shader "Vita/PBRShader"
{
    Properties
    {
        _MainTex ("Albedo Map", 2D) = "white" {}
        _NormalMap ("Normal Map", 2D) = "bump" {}
        _MOARMap ("Metal(R) Occlusion(G) Alpha(B) Rough(A) Map", 2D) = "black" {}
//        _MOARMap ("Roughness Map", 2D) = "black" {}
//        _OcclusionMap ("Occlusion Map", 2D) = "white" {}

        _AlbedoColor ("Albedo Color", Color) = (1.0, 1.0, 1.0, 1.0)
        _FresnelColor ("Fresnel Color (F0)", Color) = (1.0, 1.0, 1.0, 1.0)

        _Roughness ("Roughness", Range(0,1)) = 0
        _Metalness ("Metalness", Range(0,1)) = 0
        _Anisotropy ("Anisotropy", Range(0,1)) = 0
    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }

        Pass
        {
            // For directional light
            Tags { "LightMode"="ForwardBase" }

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma multi_compile_fwdbase
            #pragma target 2.0

            #include "UnityCG.cginc"
            #include "AutoLight.cginc"
            #include "Lighting.cginc"
            #include "PBRLib.cginc"

            #define ENV_MAP_MIP_LVL 14

            struct v_in 
            {
                half4 position : POSITION;
                half3 normal : NORMAL;
                half2 uv : TEXCOORD0;
                half4 tangent: TANGENT;
            };

            struct v_out 
            {
                half4 position : SV_POSITION;
                half2 uv : TEXCOORD0;
                half3 normal : TEXCOORD1;
                half3 tangent: TEXCOORD2;
                half3 bitangent: TEXCOORD3;
                half3 worldPos : TEXCOORD4;

                half3 tangentLocal: TEXCOORD5;
                half3 bitangentLocal: TEXCOORD6;
            };

            sampler2D _MainTex;
            sampler2D _NormalMap;
            sampler2D _MOARMap;
            //sampler2D_half _OcclusionMap;

            half3 _AlbedoColor;
            half3 _FresnelColor;

            half _Roughness;
            half _Metalness;
            half _Anisotropy;

            v_out vert (v_in v) 
            {
                v_out o;           
                o.uv = v.uv;
                o.position = UnityObjectToClipPos(v.position);
                o.worldPos = mul(unity_ObjectToWorld, v.position);

                // Normal mapping parameters
                o.tangent = normalize(mul(unity_ObjectToWorld, v.tangent).xyz);
                o.normal = normalize(UnityObjectToWorldNormal(v.normal));
                o.bitangent = normalize(cross(o.normal, o.tangent.xyz));

                o.tangentLocal = v.tangent;
                o.bitangentLocal = normalize(cross(v.normal, o.tangentLocal));
                return o;
            }

            half4 frag (v_out i) : SV_Target
            {
                if (_WorldSpaceLightPos0.w == 1)
                    return half4(0.0, 0.0, 0.0, 0.0);

                // Just for mapping the 2d texture onto a sphere
                half2 uv = i.uv;
                
                // VECTORS

                // Assuming this pass goes only for directional lights
                half3 lightVec =  normalize(_WorldSpaceLightPos0.xyz);

                half3 viewVec = normalize(_WorldSpaceCameraPos.xyz - i.worldPos);
                half3 halfVec = normalize(lightVec + viewVec);

                // Calculate the tangent matrix if normal mapping is applied
                half3x3 tangentMatrix = transpose(half3x3(i.tangent, i.bitangent, i.normal));
                half3 normal = mul(tangentMatrix, tex2D(_NormalMap, uv).xyz * 2 - 1);

                half3 reflectVec = -reflect(viewVec, normal);

                // DOT PRODUCTS
                half NdotL = max(dot(i.normal, lightVec), 0.0);
                half NdotH = max(dot(i.normal, halfVec), 0.0);
                half HdotV = max(dot(halfVec, viewVec), 0.0);
                half NdotV = max(dot(i.normal, viewVec), 0.0);
                half HdotT = dot(halfVec, i.tangentLocal);
                half HdotB = dot(halfVec, i.bitangentLocal);

                // TEXTURE SAMPLES
                half3 albedo = tex2D(_MainTex, uv);

                // PBR PARAMETERS
                
                // This assumes that the maximum param is right if both are supplied (range and map)
                //extract 0-1 values from packed map
                half roughness = saturate(max(_Roughness + EPS, tex2D(_MOARMap, uv)).a);
                half metalness = saturate(max(_Metalness + EPS, tex2D(_MOARMap, uv)).r);
                half occlusion = saturate(tex2D(_MOARMap, uv).g);

                half3 F0 = lerp(half3(0.04, 0.04, 0.04), _FresnelColor * albedo, metalness);

                half D = trowbridgeReitzNDF(NdotH, roughness);
                D = trowbridgeReitzAnisotropicNDF(NdotH, roughness, _Anisotropy, HdotT, HdotB);
                half3 F = fresnel(F0, NdotV, roughness);
                half G = schlickBeckmannGAF(NdotV, roughness) * schlickBeckmannGAF(NdotL, roughness);

                // DIRECT LIGHTING

                // Normals from normal map
                half lambertDirect = max(dot(normal, lightVec), 0.0);

                half3 directRadiance = _LightColor0.rgb * occlusion;

                // INDIRECT LIGHTING
                half3 diffuseIrradiance = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0, normal, UNITY_SPECCUBE_LOD_STEPS).rgb * occlusion;
                half3 specularIrradiance = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0, reflectVec, roughness * UNITY_SPECCUBE_LOD_STEPS).rgb * occlusion;

                // DIFFUSE COMPONENT
                half3 diffuseDirectTerm = lambertDiffuse(albedo) * (1 - F) * (1 - metalness) * _AlbedoColor;
                
                // SPECULAR COMPONENT
                half3 specularDirectTerm = G * D * F / (4 * NdotV * NdotL + EPS);

                // DIRECT BRDF OUTPUT
                half3 brdfDirectOutput = (diffuseDirectTerm + specularDirectTerm) * lambertDirect * directRadiance;

                // Add constant ambient (to boost the lighting, only temporary)
                half3 ambientDiffuse = diffuseIrradiance * lambertDiffuse(albedo) * (1 - F) * (1 - metalness);

                // For now the ambient specular looks quite okay, but it isn't physically correct
                // TODO: try importance sampling the NDF from the environment map (just for testing & performance measuring)
                // TODO: implement the split-sum approximation (UE4 paper)
                half3 ambientSpecular = specularIrradiance * F;

                return half4(gammaCorrection(brdfDirectOutput + ambientDiffuse + ambientSpecular), tex2D(_MOARMap, uv).b);
            }
            ENDCG
        }
    }
    FallBack "Standard"
}
