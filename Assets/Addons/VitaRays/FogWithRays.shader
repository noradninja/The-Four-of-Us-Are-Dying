Shader "Vita/Post/FogWithRays"
{
    Properties
    {
        _MainTex ("Source", 2D) = "white" {}
        _FogColor ("Fog Color", Color) = (0.5,0.5,0.5,1)
        _FogDensity ("Fog Density", Float) = 0.02
        _RayStrength ("Ray Strength", Float) = 1.0
        _RayFalloff ("Ray Falloff", Float) = 1.5
    }

    SubShader
    {
        ZTest Always
        ZWrite Off
        Cull Off
        Blend Off

        Pass
        {
            CGPROGRAM
            #pragma vertex vert_img
            #pragma fragment frag
            #pragma target 3.0

            #include "UnityCG.cginc"

            sampler2D _MainTex;

            float4 _FogColor;
            float _FogDensity;
            float _RayStrength;
            float _RayFalloff;

            float3 _MainLightDir;     // world
            float3 _MainLightColor;
            float4 _SunPos;           // viewport xy

            fixed4 frag (v2f_img i) : SV_Target
            {
                fixed4 col = tex2D(_MainTex, i.uv);

                // --- Approximate depth from clip Z (cheap) ---
                float depth = LinearEyeDepth(i.pos.z);
                float fog = saturate(depth * _FogDensity);

                // --- View direction reconstruction ---
                float2 uv = i.uv * 2.0 - 1.0;
                float3 viewDir = normalize(
                    mul(unity_CameraInvProjection, float4(uv, 1, 1)).xyz
                );

                // --- Ray alignment ---
                float rayAlign = saturate(dot(viewDir, _MainLightDir));
                rayAlign *= rayAlign;

                // --- Screen-space sun falloff ---
                float2 delta = i.uv - _SunPos.xy;
                float sunDist = length(delta);
                float sunFactor = saturate(1.0 - sunDist * _RayFalloff);

                float rays = fog * rayAlign * sunFactor * _RayStrength;

                float3 fogCol = lerp(col.rgb, _FogColor.rgb, fog);
                float3 rayCol = _MainLightColor * rays;

                return fixed4(fogCol + rayCol, col.a);
            }
            ENDCG
        }
    }
}
