Shader "Vita/BlackOnly"
{
    Properties
    {
        _MainTex("Base (RGB)", 2D) = "white" { }
        _MetallicGlossMap("MOAR (RGBA)", 2D) = "white" { }
        _Cutoff ("Alpha cutoff", Range(0,1)) = 0.5

        _wind_dir ("Wind Direction", Vector) = (0.5,0.05,0.5,0)
        _wind_size ("Wind Wave Size", range(5,50)) = 15
        _leaves_wiggle_disp ("Leaves Wiggle Displacement", float) = 0.07
        _leaves_wiggle_speed ("Leaves Wiggle Speed", float) = 0.01
        _influence ("Influence", range(0,1)) = 1

        [Toggle(ALPHA_ON)]  _AlphaOn("Seperate Alpha", Float) = 1
        [Toggle(WIGGLE_ON)] _LeavesOn("Leaf Movment", Float) = 1
    }

    SubShader
    {
        Tags { "IgnoreProjector"="True" }
        LOD 10

        ZWrite On
        ZTest LEqual
        Cull Back
        Blend One Zero // opaque output (we clip instead)

        Pass
        {
            Tags { "LightMode"="Always" } // simple unlit pass

            CGPROGRAM
            #pragma target 3.0
            #pragma vertex vert
            #pragma fragment frag

            // Keep these so your manager can still drive the same toggles/keywords if desired
            #pragma multi_compile __ ALPHA_ON
            #pragma multi_compile __ WIGGLE_ON
            #pragma multi_compile_fog
            #include "UnityCG.cginc"
            #define USING_FOG (defined(FOG_LINEAR) || defined(FOG_EXP) || defined(FOG_EXP2))
            
            sampler2D _MainTex;
            sampler2D _MetallicGlossMap;
            float4 _MainTex_ST;

            half _Cutoff;
            float _AlphaOn;
            half _LeavesOn;

            half4 _wind_dir;
            half _wind_size;
            half _leaves_wiggle_disp;
            half _leaves_wiggle_speed;
            half _influence;

            struct appdata
            {
                float4 vertex : POSITION;
                half4  color  : COLOR0;
                float2 uv     : TEXCOORD0;
            };

            struct v2f
            {
                float4 pos : SV_POSITION;
                float2 uv  : TEXCOORD0;
                #if USING_FOG
                    UNITY_FOG_COORDS(1)
                #endif
            };
            
            v2f vert(appdata v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.uv  = TRANSFORM_TEX(v.uv, _MainTex);
                UNITY_TRANSFER_FOG(o, o.pos);
                return o;
            }

            fixed4 frag(v2f v) : SV_Target
            {
                UNITY_EXTRACT_FOG(v);
                // Cutout behavior matches your ShadowCaster pass:
                if (_AlphaOn < 0.5f)
                {
                    fixed4 texcol = tex2D(_MainTex, v.uv);
                    clip(texcol.a - _Cutoff);
                }
                else
                {
                    fixed4 texcol = tex2D(_MetallicGlossMap, v.uv);
                    clip(texcol.b - _Cutoff);
                }
                half4 col = half4(0.125h, 0.125h, 0.125h, 1.h);
                #if USING_FOG
                    UNITY_APPLY_FOG(v.fogCoord, col);
                #endif
                // Solid black
                return col;
            }
            ENDCG
        }
    }

    Fallback Off
}
