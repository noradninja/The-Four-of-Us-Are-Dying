// Upgrade NOTE: replaced tex2D unity_Lightmap with UNITY_SAMPLE_TEX2D

// Upg
Shader "Vita/Forward/CustomBIRP"
{
    Properties
    {
        _MainTex           ("Albedo (RGB)",                      2D) = "white" {}
        _NormalMap         ("Normal Map",                        2D) = "bump"  {}
        _MOARMap           ("MOAR: M(R) AO(G) A(B) R(A)",        2D) = "white" {}
        [NoScaleOffset]_ParallaxMap ("Height Map (R)",           2D) = "black" {}
        _ParallaxStrength  ("Parallax Strength",    Range(0,0.1)) = 0.02
        _NormalHeight      ("Normal Height",        Range(0.1,2)) = 1.0
        _Metallic          ("Base Metallic",       Range(0,1))   = 0.0
        _Roughness         ("Base Roughness",      Range(0,1))   = 0.5
        _Cutoff            ("Alpha Cutoff",        Range(0,1))   = 0.5
        _DebugSpecular     ("Enable Specular",               Float) = 1.0
    }

    SubShader
    {
        Tags { "RenderType"="Opaque" "Queue"="Geometry" }
        LOD 200

        //=================================================
        // 1) ForwardBase: Directional light + shadows only
        //=================================================
        Pass
        {
            Name "FORWARD"
            Tags { "LightMode"="ForwardBase" }

            CGPROGRAM
            // core includes for transforms, lighting macros, cookie vars, etc.
            #include "UnityCG.cginc"
            #include "UnityShaderVariables.cginc"
            #include "LightingCalculations.cginc"
            #include "AutoLight.cginc"
            #include "Lighting.cginc"

            #pragma vertex vert
            #pragma fragment fragBase
            #pragma multi_compile_fwdbase
            #pragma multi_compile_instancing

            sampler2D _MainTex, _NormalMap, _MOARMap, _ParallaxMap;
            float4   _MainTex_ST, _NormalMap_ST, _MOARMap_ST;
            float    _ParallaxStrength, _NormalHeight;
            float    _Metallic, _Roughness, _Cutoff, _DebugSpecular;

            struct appdata {
                float4 vertex  : POSITION;
                float3 normal  : NORMAL;
                float4 tangent : TANGENT;
                float2 uv      : TEXCOORD0;
                half3 uv1      : TEXCOORD1;
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            struct v2f {
                float4 pos       : SV_POSITION;
                float3 worldPos  : TEXCOORD0;
                float3 normal    : TEXCOORD1;
                float4 tangent   : TEXCOORD2;
                float2 uv        : TEXCOORD3;
                float3 viewDir   : TEXCOORD4;
                UNITY_LIGHTING_COORDS(5,6)
                float2 uv1       : TEXCOORD7;
                half3 worldRefl : TEXCOORD8;
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            v2f vert(appdata v)
            {
                v2f o;
                UNITY_SETUP_INSTANCE_ID(v);

                o.pos      = UnityObjectToClipPos(v.vertex);
                o.worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
                o.normal   = UnityObjectToWorldNormal(v.normal);
                o.tangent  = v.tangent;
                o.uv       = TRANSFORM_TEX(v.uv, _MainTex);
                o.uv1 = v.uv1.xy * unity_LightmapST.xy + unity_LightmapST.zw;
                o.viewDir  = _WorldSpaceCameraPos - o.worldPos;
                float3 worldViewDir = normalize(UnityWorldSpaceViewDir(o.worldPos));
                float3 worldNormal = UnityObjectToWorldNormal(o.normal);
                o.worldRefl = reflect(-worldViewDir, worldNormal);
                UNITY_TRANSFER_LIGHTING(o, v.vertex);
                return o;
            }

            half4 fragBase(v2f i) : SV_Target
            {
                UNITY_SETUP_INSTANCE_ID(i);

                // Material unpack
                half4 MOAR = tex2D(_MOARMap, i.uv * _MOARMap_ST.xy + _MOARMap_ST.zw);
                half4 alb  = tex2D(_MainTex, i.uv * _MainTex_ST.xy + _MainTex_ST.zw);
                half3 nmap = ExtractNormal(
                    tex2D(_NormalMap, i.uv * _NormalMap_ST.xy + _NormalMap_ST.zw),
                    _NormalHeight
                );

                half  metalness = _Metallic * MOAR.r + 0.001;
                half  occlusion = MOAR.g;
                half  alpha     = MOAR.b;
                half  roughness = ((1-_Roughness * MOAR.a) * 12); //mult by scalar till I like it
                // Reconstruct world normal
                half3 binorm = cross(i.normal, i.tangent.xyz)
                             * (i.tangent.w * unity_WorldTransformParams.w);
                half3 N = normalize(
                    nmap.x * i.tangent.xyz +
                    nmap.y * binorm         +
                    nmap.z * i.normal
                );

                // View & grazing
                half3 V = normalize(_WorldSpaceCameraPos - i.worldPos);
                float f = saturate(1.0 - dot(i.normal, V));
                float g = 1.0 - (1.0 - f) * (1.0 - f) * 0.13; // quadratic approximation emphasizing grazing
                half3 grazingAngle = g;
               // Fresnel-Schlick approximation (grazingAngle already precomputed)
                float3 F0 = metalness;
                float3 FR = lerp(F0, 1.0, grazingAngle);
                // Directional light + shadows
                UNITY_LIGHT_ATTENUATION(atten, i, i.worldPos);
                atten += 0.25;
                half3 Ld = normalize(_WorldSpaceLightPos0.xyz);
                half  nl = max(0, dot(N, Ld));

                // BRDF
                half3 diff = DisneyDiffuse(nl, alb.rgb, _LightColor0.rgb);
                //this is commented out because we really only need diffuse 
                /*half3 spec = GGXSpecular(N, V, Ld, i.worldPos,
                                  _WorldSpaceLightPos0.xyz,
                                  _LightColor0.rgb,
                                  roughness, FR);*/
                half3 lm = DecodeLightmap(UNITY_SAMPLE_TEX2D(unity_Lightmap, i.uv1));
                half4 skyData = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0, i.worldRefl, roughness);
                half3 skyColor = DecodeHDR(skyData, unity_SpecCube0_HDR);
                // Combine
                half3 col =  ( ( (diff * lm) * atten + (skyColor * FR) ) * 0.5 ) * occlusion;

                clip(alpha - _Cutoff);
                return half4(col, alpha);
            }
            ENDCG
        }

        
        Pass
        {
            Name "META"
            Tags { "LightMode"="Meta" }

            Cull Off

            CGPROGRAM
            #pragma vertex vert_meta
            #pragma fragment frag_meta

            #pragma shader_feature _EMISSION
            #pragma shader_feature _METALLICGLOSSMAP
            #pragma shader_feature _ _SMOOTHNESS_TEXTURE_ALBEDO_CHANNEL_A
            #pragma shader_feature ___ _DETAIL_MULX2
            #pragma shader_feature EDITOR_VISUALIZATION

            #include "UnityStandardMeta.cginc"
            ENDCG
        }
    }

    FallBack "Diffuse"
}
