Shader "Vita/VertexLit_Backdrop"
{
    Properties
    {
        _Color ("Main Color", Color) = (1,1,1,1)
        _SpecColor ("Spec Color", Color) = (1,1,1,0)
        _Emission ("Emissive Color", Color) = (0,0,0,0)
        [PowerSlider(5.0)] _Shininess ("Shininess", Range (0.1, 1)) = 0.7
        _MainTex ("Base (RGB) Trans (A)", 2D) = "white" {}
        _Cutoff ("Alpha cutoff", Range(0,1)) = 0.5
    }

    SubShader
    {
        Tags
        {
            "Queue"="Transparent-100"
            "IgnoreProjector"="True"
            "RenderType"="TransparentCutout"
        }

        LOD 100

        /* 
            We draw the geometry before regular transparent objects, but we do not
            write depth. This lets world geometry and light cones render over it.
        */

        Pass
        {
            Tags
            {
                "LightMode" = "Vertex"
            }

            ZWrite Off
            ZTest LEqual
            Alphatest Greater [_Cutoff]
            AlphaToMask True
            ColorMask RGB

            Material
            {
                Diffuse [_Color]
                Ambient [_Color]
                Shininess [_Shininess]
                Specular [_SpecColor]
                Emission [_Emission]
            }

            Lighting On
            SeparateSpecular On

            SetTexture [_MainTex]
            {
            Combine texture * primary DOUBLE, texture * primary
            }
        }

        Pass
        {
            Tags
            {
                "LightMode" = "VertexLM"
            }

            ZWrite Off
            ZTest LEqual
            AlphaToMask On
            ColorMask RGB

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma target 2.0
            #pragma multi_compile_fog

            #include "UnityCG.cginc"

            #define USING_FOG (defined(FOG_LINEAR) || defined(FOG_EXP) || defined(FOG_EXP2))

            float4 unity_Lightmap_ST;
            float4 _MainTex_ST;

            struct appdata
            {
                float3 pos : POSITION;
                half4 color : COLOR;
                float3 uv1 : TEXCOORD1;
                float3 uv0 : TEXCOORD0;
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            struct v2f
            {
                fixed4 color : COLOR0;
                float2 uv0 : TEXCOORD0;
                float2 uv1 : TEXCOORD1;
                float2 uv2 : TEXCOORD2;

                #if USING_FOG
                fixed fog : TEXCOORD3;
                #endif

                float4 pos : SV_POSITION;
                UNITY_VERTEX_OUTPUT_STEREO
            };

            v2f vert(appdata IN)
            {
                v2f o;

                UNITY_SETUP_INSTANCE_ID(IN);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);

                half4 color = IN.color;
                float3 eyePos = UnityObjectToViewPos(IN.pos);

                o.color = saturate(color);

                o.uv0 = IN.uv1.xy * unity_LightmapST.xy + unity_LightmapST.zw;
                o.uv1 = IN.uv1.xy * unity_Lightmap_ST.xy + unity_Lightmap_ST.zw;
                o.uv2 = IN.uv0.xy * _MainTex_ST.xy + _MainTex_ST.zw;

                #if USING_FOG
                float fogCoord = length(eyePos.xyz);
                UNITY_CALC_FOG_FACTOR_RAW(fogCoord);
                o.fog = saturate(unityFogFactor);
                #endif

                o.pos = UnityObjectToClipPos(IN.pos);
                return o;
            }

            sampler2D _MainTex;
            fixed4 _Color;
            fixed _Cutoff;

            fixed4 frag(v2f IN) : SV_Target
            {
                half4 bakedColorTex = UNITY_SAMPLE_TEX2D(unity_Lightmap, IN.uv0.xy);
                half4 bakedColor = half4(DecodeLightmap(bakedColorTex), 1.0);

                fixed4 tex = tex2D(_MainTex, IN.uv2.xy);

                fixed4 col;
                col.rgb = tex.rgb * bakedColor.rgb * _Color.rgb;
                col.a = tex.a * IN.color.a * _Color.a;

                clip(col.a - _Cutoff);

                #if USING_FOG
                col.rgb = lerp(unity_FogColor.rgb, col.rgb, IN.fog);
                #endif

                return col;
            }
            ENDCG
        }
    }

    Fallback Off
}