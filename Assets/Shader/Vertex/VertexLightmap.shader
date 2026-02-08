Shader "Vita/Standard Mobile VertexLit"
{
	Properties
	{
		_MainTex("Base (RGB)", 2D) = "white" { }
		_MetallicGlossMap("MOAR (RGBA)", 2D) = "white" { }
		_Metallic("Metallic", Range(0,1)) = 0.5
		_Roughness("Roughness", Range(0,1)) = 0.5
		_Cutoff("Alpha cutoff", Range(0,1)) = 0.5
		_wind_dir("Wind Direction", Vector) = (0.5,0.05,0.5,0)
		_wind_size("Wind Wave Size", range(5,50)) = 15
		_leaves_wiggle_disp("Leaves Wiggle Displacement", float) = 0.07
		_leaves_wiggle_speed("Leaves Wiggle Speed", float) = 0.01
		_influence("Influence", range(0,1)) = 1

		[Toggle(ALPHA_ON)] _AlphaOn("Seperate Alpha", Float) = 1
		[Toggle(WIGGLE_ON)] _LeavesOn("Leaf Movment", Float) = 1
		[Toggle(AMBIENT_ON)] _AmbientOn("Ambient Lighting", Float) = 0

		// ✅ NEW: per-material cull control (Off/Front/Back)
		[Enum(Off,0,Front,1,Back,2)] _CullMode("Cull Mode (VertexLM)", Float) = 2
	}

	SubShader
	{
		Tags { "IgnoreProjector"="True" } // workaround for Vita
		LOD 80
		ZWrite On
		Cull Off
		Blend One Zero // because we are going to clip at the end

		// Non-lightmapped
		Pass
		{
			Tags { "LightMode" = "Vertex" }
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#pragma target 3.0
			#pragma multi_compile_fog
			#pragma multi_compile __ POINT SPOT
			#pragma multi_compile _ LOD_FADE_CROSSFADE
			#include "VertexLightmapCommon.cginc"
			#include "AutoLight.cginc"
			#include "Lighting.cginc"
			ENDCG
		}

		// Lightmapped
		Pass
		{
			Tags { "LightMode" = "VertexLM" }

			// ✅ NEW: toggle between Cull Off (0) and Cull Back (2) via _CullMode
			Cull [_CullMode]

			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#pragma target 3.0
			#pragma multi_compile_fog
			#pragma multi_compile __ POINT SPOT
			#pragma multi_compile __ AMBIENT_ON
			#pragma multi_compile _ LOD_FADE_CROSSFADE
			#pragma shader_feature BAKERY_VERTEXLM
			#pragma shader_feature BAKERY_VERTEXLMDIR
			#pragma shader_feature BAKERY_VERTEXLMSH
			#pragma shader_feature BAKERY_VERTEXLMMASK
			#pragma shader_feature BAKERY_SH
			#pragma shader_feature BAKERY_SHNONLINEAR
			#pragma shader_feature BAKERY_RNM
			#pragma shader_feature BAKERY_LMSPEC
			#pragma shader_feature BAKERY_BICUBIC
			#pragma shader_feature BAKERY_PROBESHNONLINEAR
			#pragma shader_feature BAKERY_VOLUME
			#pragma shader_feature BAKERY_COMPRESSED_VOLUME
			#pragma shader_feature BAKERY_VOLROTATION
			#define CUSTOM_LIGHTMAPPED 1
			#include "VertexLightmapCommon.cginc"
			#include "AutoLight.cginc"
			#include "Lighting.cginc"
			ENDCG
		}

		// Extracts information for lightmapping, GI (emission, albedo, ...)
		// This pass is not used during regular rendering.
		Pass
		{
			// Alpha map enabled Bakery-specific meta pass
			Name "META_BAKERY"
			Tags { "LightMode"="Meta" }
			Cull Off

			CGPROGRAM
			#include "UnityStandardMeta.cginc"
			#include "Assets/Bakery/BakeryMetaPass.cginc"

			// Needed for alpha sampling
			float _AlphaOn;

			float4 frag_customMeta(v2f_bakeryMeta i) : SV_Target
			{
				UnityMetaInput o;
				UNITY_INITIALIZE_OUTPUT(UnityMetaInput, o);

				// Output custom alpha to Bakery
				if (unity_MetaFragmentControl.w)
				{
					float a;

					// Match runtime alpha source:
					// _AlphaOn == 1 => use MOAR.b, else use MainTex.a
					if (_AlphaOn > 0.5f)
						a = tex2D(_MetallicGlossMap, i.uv).b;
					else
						a = tex2D(_MainTex, i.uv).a;

					return a;
				}

				// Regular Unity meta pass (albedo/emission/etc.)
				float4 albedo = tex2D(_MainTex, i.uv);
				o.Albedo = albedo.rgb;

				return UnityMetaFragment(o);
			}

			#pragma vertex vert_bakerymt
			#pragma fragment frag_customMeta
			ENDCG
		}

		Pass
		{
			Tags { "LightMode"="ShadowCaster" }

			CGPROGRAM
			#pragma vertex vert_shadow
			#pragma fragment frag_shadow
			#pragma target 3.0
			#pragma multi_compile_shadowcaster
			#pragma multi_compile_fog
			#pragma multi_compile _ LOD_FADE_CROSSFADE
			#include "UnityCG.cginc"
			#include "UnityPBSLighting.cginc" // TBD: remove
			#include "UnityShadowLibrary.cginc"

			struct v2f
			{
				V2F_SHADOW_CASTER;
				float2 uv : TEXCOORD0;
				UNITY_VERTEX_OUTPUT_STEREO
			};

			struct appdata
			{
				half3 vertex : POSITION;
				half3 color : COLOR0;
				half3 normal : NORMAL;
				half3 uv : TEXCOORD0;
			};

			uniform float4 _MainTex_ST;
			half4 _wind_dir;
			half _wind_size;
			half _leaves_wiggle_disp;
			half _leaves_wiggle_speed;
			half _influence;
			half _LeavesOn;

			v2f vert_shadow(appdata v)
			{
				v2f o;

				half3 worldPos = mul(unity_ObjectToWorld, half4(v.vertex, 1)).xyz;

				 // --- Wind / leaf motion (wave-like, no "scaling") ---
    half3 nextPos = v.vertex;

    if (_LeavesOn)
    {
        // Normalize wind dir just for phase direction
        half3 wdir = _wind_dir.xyz;
        half wlen = max(1e-3h, length(wdir));
        wdir *= (1.0h / wlen);

        // Time is uniform for all verts
        half t = (half)_Time.y * _leaves_wiggle_speed;

        // Use WORLD position to build phase, but make it HIGH FREQUENCY so it ripples
        // (Multiply phase scale to get vertex-to-vertex variation)
        half phase = dot(worldPos, wdir) * (1.0h / max(1e-3h, _wind_size));

        // Add some LOCAL position into phase to break rigid motion even if object is small
        // (This is phase-only; does NOT scale amplitude.)
        phase += (v.vertex.x + v.vertex.z) * 0.35h;

        // Two waves for richer ripple (still very cheap)
        half w0 = sin(t + phase * 6.0h);
        half w1 = sin(t * 1.7h + phase * 11.0h);

        half wave = w0 * 0.70h + w1 * 0.30h; // bounded [-1..1]

        // Vertex color weight (use RGB avg like before)
        half vtxW = (v.color.r + v.color.g + v.color.b) * (1.0h / 3.0h);

        // Amplitude (constant, not position-amplified)
        half amp = _leaves_wiggle_disp * _influence * vtxW;

        // Ripple direction: along the vertex normal (best “surface ripple” look)
        half3 nObj = normalize(v.normal);
        nextPos += nObj * (wave * amp);
    }

    v.vertex = nextPos;

				UNITY_SETUP_INSTANCE_ID(v);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
				TRANSFER_SHADOW_CASTER(o);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				return o;
			}

			uniform sampler2D _MainTex;
			uniform sampler2D _MetallicGlossMap;
			uniform fixed _Cutoff;
			float _AlphaOn;

			float4 frag_shadow(v2f i) : SV_Target
			{
				if (!_AlphaOn)
				{
					fixed4 texcol = tex2D(_MainTex, i.uv);
					clip(texcol.a - _Cutoff);
				}
				else
				{
					fixed4 texcol = tex2D(_MetallicGlossMap, i.uv);
					clip(texcol.b - _Cutoff);
				}

				SHADOW_CASTER_FRAGMENT(i);
			}
			ENDCG
		}
	}

	Fallback "Legacy Shaders/Diffuse"
}
