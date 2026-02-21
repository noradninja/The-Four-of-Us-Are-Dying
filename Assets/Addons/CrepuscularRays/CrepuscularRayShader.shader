// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Lighting/Crepuscular Rays"
{
    Properties
    {
        _MainTex("Base (RGB)", 2D) = "white" {}
        _BlurTex("BlurTex (RGB)", 2D) = "white" {}

        _NumSamples("Number of Samples", Range(0, 1024)) = 128

        _Density("Density", Range(0, 1)) = 1.0
        _Weight("Weight", Range(0, 2)) = 1.0
        _Decay("Decay", Range(0, 1)) = 1.0
        _Exposure("Exposure", Range(0, 1)) = 1.0
        _Parameter("Kernel Offset", Range(0, 4)) = 1.0

        _Contrast("Contrast", Range(1, 5)) = 1.0
        _PerpendicularFalloff("Perpendicular Falloff Rate", Range(0.01, 1)) = 1.0
        _CosAngle("Angle", Float) = 1

        [IntRange] _StencilRef("Stencil Ref", Range(0,255)) = 0
        _TintColor("Tint Color", Color) = (.5, .5, .5, .5)

        _FrameValue("Frame remainder", Float) = 0
        [IntRange] _Frequency("Frequency", Range(1,15)) = 1

        _fogInfluence("Fog Influence", Range(0,5)) = 0.5
        _fogSpeed("Fog Speed", Float) = 10.0
        [FloatRange] _Spread("Spread", Range(1.0, 5.0)) = 1.0

        // ===== DEBUG MODE =====
        [IntRange] _DebugMode("Debug Mode", Range(0,4)) = 0

        // ===== BIG SOFT NOISE =====
        _NoiseTex("Noise (R)", 2D) = "gray" {}
        _NoiseScale("Noise Scale", Range(0.05, 4.0)) = 0.35
        _NoiseStrength("Noise Strength", Range(0, 4)) = 0.5
        _NoiseScroll("Noise Scroll Base Dir (XY)", Vector) = (1.0, 0.4, 0, 0)
        _NoiseContrast("Noise Contrast", Range(0.25, 4)) = 1.0

        // ===== VIEW-SPACE STABILIZATION =====
        _ViewNoiseScale("View Noise Scale", Range(0.001, 0.25)) = 0.05
        _ViewSpaceMix("View Space Mix", Range(0, 1)) = 0.55

        // ===== CONVECTION FLOW =====
        _NoiseFlowSpeed("Noise Flow Speed", Range(0, 1)) = 0.08
        _NoiseFlowTurnSpeed("Noise Flow Turn Speed", Range(0, 1)) = 0.05
        _NoiseFlowWobble("Noise Flow Wobble", Range(0, 1)) = 0.12

        // Depth influence
        _NoiseDepthInfluence("Noise Depth Influence", Range(0, 1)) = 1.0
        _NoiseDepthPower("Noise Depth Power", Range(0.25, 8)) = 2.0
        _NoiseDepthInvert("Noise Depth Invert (0/1)", Range(0, 1)) = 0

        // stable time from C#
        _NoiseTime("Noise Time", Float) = 0

        // Influence (your range is 0.25..0.40)
        _influence("Influence", Float) = 0.25

        // ADDED: post-accumulation wobble strength (applies in final pass)
        _PostWobbleStrength("Post Wobble Strength", Range(0, 0.05)) = 0.01
    }

    CGINCLUDE
    #include "UnityCG.cginc"
    #pragma target 2.0

    #pragma multi_compile __ CREP_SAMPLES_4 CREP_SAMPLES_8 CREP_SAMPLES_16

    #if defined(CREP_SAMPLES_4)
        #define NUM_SAMPLES 4
    #elif defined(CREP_SAMPLES_8)
        #define NUM_SAMPLES 8
    #elif defined(CREP_SAMPLES_16)
        #define NUM_SAMPLES 16
    #else
        #define NUM_SAMPLES 8
    #endif

    uniform sampler2D_half _MainTex;
    uniform sampler2D_half _BlurTex;
    uniform sampler2D _CameraDepthTexture;

    uniform sampler2D_half _NoiseTex;
    half _NoiseScale;
    half _NoiseStrength;
    half4 _NoiseScroll;
    half _NoiseContrast;

    half _ViewNoiseScale;
    half _ViewSpaceMix;

    half _NoiseFlowSpeed;
    half _NoiseFlowTurnSpeed;
    half _NoiseFlowWobble;

    half _NoiseDepthInfluence;
    half _NoiseDepthPower;
    half _NoiseDepthInvert;

    half _influence;            // your 0.25..0.40
    half _PostWobbleStrength;   // ADDED

    half3 _LightPos;
    half _Density;
    half _Weight;
    half _Decay;
    half _Exposure;
    half _Contrast;
    uniform half4 _Parameter;
    uniform half4 _MainTex_TexelSize;
    half4 _MainTex_ST;
    half _CosAngle;
    half4 _TintColor;
    half _PerpendicularFalloff;

    half _DebugMode;

    // stable time (left as-is; not used for flow time per your request)
    float _NoiseTime;

    struct appdata
    {
        float4 pos : POSITION;
        float2 uv  : TEXCOORD0;
    };

    struct v2f
    {
        float4 pos : SV_POSITION;
        float2 uv  : TEXCOORD0;
    };

    struct v2f_kawase
    {
        float4 pos : SV_POSITION;
        half2  uv  : TEXCOORD0;
        half2  uv1 : TEXCOORD1;
        half2  uv2 : TEXCOORD2;
        half2  uv3 : TEXCOORD3;
        half2  uv4 : TEXCOORD4;
    };

    inline float3 ReconstructViewPos(float2 uv, float depth01)
    {
        float4 clip = float4(uv * 2.0f - 1.0f, depth01 * 2.0f - 1.0f, 1.0f);
        float4 view = mul(unity_CameraInvProjection, clip);
        view.xyz /= max(view.w, 1e-6f);
        return view.xyz;
    }

    inline float3 ViewToWorldPos(float3 viewPos)
    {
        float4 wp = mul(unity_CameraToWorld, float4(viewPos, 1.0));
        return wp.xyz;
    }

    // ADDED/CHANGED: monotonic mapping for influence in [0.25..0.40].
    // This controls BOTH drift speed and rotation rate, consistently.
    // The floor prevents the motion from "locking" at the low end.
    inline float GetInfluenceFlowMul()
    {
        float u = saturate(_influence * (1.0 / 0.35)); // 0.25..0.40 -> 0..1
        const float minMul = 0.35;
        const float maxMul = 1.0; // raise to 1.25 if you want 0.40 faster than current
        return lerp(minMul, maxMul, u);
    }

    inline float SampleStabilizedNoise(float2 uv, half depth01)
    {
        float2 nuv_screen = uv * _NoiseScale;

        float3 viewPos = ReconstructViewPos(uv, depth01);
        float3 worldPos = ViewToWorldPos(viewPos);

        // World anchored UVs (XZ plane)
        float2 nuv_world = worldPos.xz * _ViewNoiseScale;

        float vz = max(0.001f, abs(viewPos.z));
        nuv_world *= (1.0 / (1.0 + vz * 0.05));

        float2 nuv = lerp(nuv_screen, nuv_world, _ViewSpaceMix);

        // CHANGED: keep _Time.y, and apply influence to motion rate consistently
        float t = _Time.y;
        float flowMul = GetInfluenceFlowMul();

        float2 baseDir = _NoiseScroll.xy;
        float baseLen = max(1e-3, length(baseDir));
        baseDir *= (1.0 / baseLen);

        // CHANGED: rotation rate scales with influence
        float ang = t * (_NoiseFlowTurnSpeed * flowMul);
        float sa = sin(ang);
        float ca = cos(ang);

        float2 dir;
        dir.x = baseDir.x * ca - baseDir.y * sa;
        dir.y = baseDir.x * sa + baseDir.y * ca;

        // CHANGED: drift speed scales with influence
        float baseSpeed = _NoiseFlowSpeed * flowMul;

        // Linear drift through the field
        float2 drift = dir * (baseSpeed * t);

        // Bounded along-dir wiggle; phase speeds up with influence
        drift += dir * (baseSpeed * 0.15 * sin(t * (0.37 * flowMul)));

        // Sideways wobble; phase speeds up with influence (amplitude stays authored)
        float meander = _NoiseFlowWobble * sin(t * (0.23 * flowMul) + nuv.x * 1.7 + nuv.y * 1.3);
        float2 side = float2(-dir.y, dir.x);

        nuv += drift + side * meander;

        float n = tex2D(_NoiseTex, nuv).r;
        n = n * 2.0 - 1.0;

        n *= _NoiseContrast;
        n = clamp(n, -1.0, 1.0);

        float d = saturate(depth01);
        if (_NoiseDepthInvert > 0.5h) d = 1.0h - d;

        float depthW = pow(d, _NoiseDepthPower);
        float w = lerp(1.0, depthW, _NoiseDepthInfluence);

        return n * w;
    }

    // ADDED: post-accumulation UV warp computed from stabilized noise domain.
    // This is applied in fragFinal so it distorts the accumulated ray/shadow pattern.
    inline float2 SampleStabilizedWarp(float2 uv, half depth01)
    {
        float n0 = SampleStabilizedNoise(uv, depth01);
        float n1 = SampleStabilizedNoise(uv + float2(0.173, 0.127), depth01);

        float2 v = float2(n0, n1);

        // Keep warp "alive" at low influence using the same monotonic mapping.
        float flowMul = GetInfluenceFlowMul();

        return v * (_PostWobbleStrength * flowMul);
    }

    v2f vert(appdata v)
    {
        v2f o;
        o.pos = UnityObjectToClipPos(v.pos);
        o.uv  = v.uv;
        return o;
    }

    half4 frag(v2f i) : COLOR
    {
        float4 light = float4(_LightPos.xyz, 1);

        half b = step(0.0h, light.y);
        half s = 1.0h - 2.0h * b;

        half invSamples = (1.0h / (half)NUM_SAMPLES);

        half depth01 = Linear01Depth(tex2D(_CameraDepthTexture, i.uv)).r;
        half noise = SampleStabilizedNoise(i.uv, depth01);

        half densityMul = 1.0h + noise * _NoiseStrength;
        densityMul = clamp(densityMul, 0.25h, 2.0h);

        if (_DebugMode > 2.5h) // 3 or 4
        {
            half v = saturate((densityMul - 0.25h) * (1.0h / 1.75h));

            if (_DebugMode > 3.5h) // 4 = heatmap
            {
                half3 c = half3(
                    saturate(v * 3.0h - 1.0h),
                    saturate(1.0h - abs(v * 2.0h - 1.0h)),
                    saturate(1.0h - v * 3.0h)
                );
                return half4(c, 1);
            }
            else
            {
                return half4(v, v, v, 1);
            }
        }

        half2 deltaTexCoord = (i.uv + s * light.xy) * (_Density * invSamples);

        half2 uv = i.uv;

        half3 color = 1;
        half illuminationDecay = 1.0h;

        half sampleScale = (_Weight * 4.0h * invSamples) * 2.5h;
        sampleScale *= densityMul;

        half depth = depth01;

        UNITY_UNROLL
        for (int k = 0; k < NUM_SAMPLES; k++)
        {
            uv -= deltaTexCoord;

            if (uv.x <= 0.0h || uv.x >= 1.0h || uv.y <= 0.0h || uv.y >= 1.0h)
                break;

            half sample = tex2D(_MainTex, uv);
            sample *= illuminationDecay * depth * sampleScale;
            color += sample;

            illuminationDecay *= _Decay;
        }

        half4 fog = max(half4(color * _Exposure, 1), 0.15h);

        if (_DebugMode > 0.5h && _DebugMode < 1.5h) // 1: raw accumulation
            return fog;

        return fog;
    }

    v2f_kawase vertKawase(appdata_img v)
    {
        v2f_kawase o;
        o.pos = UnityObjectToClipPos(v.vertex);

        half2 uv = UnityStereoScreenSpaceUVAdjust(v.texcoord.xy, _MainTex_ST);
        o.uv = uv;

        half r = _Parameter.x;
        half2 d = (r + 0.5h) * _MainTex_TexelSize.xy;

        o.uv1 = uv + half2( d.x,  d.y);
        o.uv2 = uv + half2(-d.x,  d.y);
        o.uv3 = uv + half2( d.x, -d.y);
        o.uv4 = uv + half2(-d.x, -d.y);

        return o;
    }

    half4 fragKawase(v2f_kawase i) : SV_Target
    {
        half4 c1 = tex2D(_MainTex, i.uv1);
        half4 c2 = tex2D(_MainTex, i.uv2);
        half4 c3 = tex2D(_MainTex, i.uv3);
        half4 c4 = tex2D(_MainTex, i.uv4);
        return (c1 + c2 + c3 + c4) * 0.25h;
    }

    v2f vertFinal(appdata i)
    {
        v2f o = (v2f)0;
        UNITY_INITIALIZE_OUTPUT(v2f, o);
        o.pos = UnityObjectToClipPos(i.pos);
        o.uv  = i.uv;
        return o;
    }

    half4 fragFinal(v2f i) : SV_Target
    {
        // ADDED: post-accumulation wobble applied after accumulation + blur.
        // Warps UVs when sampling both _MainTex and _BlurTex, affecting ray shadows.
        half depth01 = Linear01Depth(tex2D(_CameraDepthTexture, i.uv)).r;
        float2 warp = 0;//SampleStabilizedWarp(i.uv, depth01);
        float2 uvW = i.uv + warp;

        if (_DebugMode > 1.5h && _DebugMode < 2.5h) // 2: after blur
            return tex2D(_BlurTex, uvW);

        half4 light = half4(_LightPos.xyz, 1);
        _CosAngle = 1 - abs(cos(light.z));

        fixed4 col = tex2D(_MainTex, uvW);
        fixed4 sample = tex2D(_BlurTex, uvW);

        fixed contrast = _Contrast;

        fixed4 finalSample = (((col) + (sample * 0.4h)) - 0.5h) * contrast + 0.445h;
        fixed4 finalColor  = (col + (col * 0.04h));

        fixed4 blitColor = lerp(finalSample, finalColor, (1 - _CosAngle - _PerpendicularFalloff));
        return blitColor;
    }

    ENDCG

    SubShader
    {
        ZTest Always
        Cull Off

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma fragmentoption ARB_precision_hint_fastest
            ENDCG
        }

        Pass
        {
            CGPROGRAM
            #pragma vertex vertKawase
            #pragma fragment fragKawase
            #pragma fragmentoption ARB_precision_hint_fastest
            ENDCG
        }

        Pass
        {
            CGPROGRAM
            #pragma vertex vertKawase
            #pragma fragment fragKawase
            #pragma fragmentoption ARB_precision_hint_fastest
            ENDCG
        }

        Pass
        {
            CGPROGRAM
            #pragma vertex vertFinal
            #pragma fragment fragFinal
            #pragma fragmentoption ARB_precision_hint_fastest
            ENDCG
        }
    }
}