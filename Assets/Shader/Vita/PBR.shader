Shader "Vita/Lit"
{
    Properties
    {
        _MainTex           ("Albedo (RGB)",              2D) = "white" {}
        _NormalMap         ("Normal Map",                2D) = "bump"  {}
        _MOARMap           ("MOAR: M(R) AO(G) A(B) R(A)",2D) = "white" {}
        [NoScaleOffset]_ParallaxMap ("Height Map (R)",     2D) = "black" {}
        _ParallaxStrength  ("Parallax Strength", Range(0,0.1)) = 0.02
        _NormalHeight      ("Normal Height",       Range(0.1,2)) = 1.0
        _Metallic          ("Base Metallic",      Range(0,1))   = 0.0
        _Roughness         ("Base Roughness",     Range(0,1))   = 0.5
        _Cutoff            ("Alpha Cutoff",       Range(0,1))   = 0.5
        _DebugSpecular     ("Enable Specular",           Float) = 1.0
    }

    SubShader
    {
        Tags { "RenderType"="Opaque" "Queue"="Geometry" }
        LOD 200
		
        //=================================================
        // 0) Shadow Caster Pass
        //=================================================
       // ------------------------------------------------------------------
        //  Shadow rendering pass
        Pass{
            Tags {"LightMode"="ShadowCaster"}

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
			#pragma target 3.0
            #pragma multi_compile_shadowcaster
            #pragma multi_compile _ LIGHTMAP_ON VERTEXLIGHT_ON
            #pragma multi_compile _ SHADOWS_SCREEN
			#pragma multi_compile_fog
			#pragma multi_compile _ LOD_FADE_CROSSFADE
         
            #include "UnityCG.cginc"
   

			sampler2D _MainTex, _MOARMap;
            uniform float4 _MainTex_ST;
            float _Cutoff;
			struct v2f {
				V2F_SHADOW_CASTER;
				float2  uv : TEXCOORD0;
				UNITY_VERTEX_OUTPUT_STEREO
			};
			struct appdata {
				half3 vertex : POSITION;
				half3 uv : TEXCOORD0;
				

			};

			
						
			v2f vert( appdata v )
			{
				v2f o;
				half3 worldPos = mul (unity_ObjectToWorld, half4(v.vertex, 1) ).xyz;
				UNITY_SETUP_INSTANCE_ID(v);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
				TRANSFER_SHADOW_CASTER(o);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				return o;
			}
            
			float4 frag( v2f i ) : SV_Target
			{
			
				fixed4 texcol = tex2D( _MOARMap, i.uv );
				
		
					clip(texcol.b - _Cutoff );
						
				SHADOW_CASTER_FRAGMENT(i);
			}
            ENDCG
        }

        //=================================================
        // 1) ForwardBase: Directional light + shadows
        //=================================================
        Pass
        {
            Name "FORWARD"
            Tags { "LightMode"="ForwardBase" "Queue"="Opaque"}
            Blend One Zero
            ZWrite On
            ZTest LEqual
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment fragBase
            #pragma multi_compile_fwdbase nolightmap nodirlightmap nodynlightmap novertexlight
            #pragma multi_compile_instancing

            #include "UnityCG.cginc"
            #include "UnityShaderVariables.cginc"
            #include "LightingCalculations.cginc"
            #include "AutoLight.cginc"     
            #include "Lighting.cginc"

            //check to see if subtractive mode is set
            #if defined(LIGHTMAP_ON) && defined(SHADOWS_SCREEN)
			    #if defined(LIGHTMAP_SHADOW_MIXING) && !defined(SHADOWS_SHADOWMASK)
				    #define SUBTRACTIVE_LIGHTING 1
				#endif
			#endif
			
            #if defined (SUBTRACTIVE_LIGHTING)
				_LightColor0 = 0;
            #endif
            
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
                UNITY_SHADOW_COORDS(4)
                float2 uv1       : TEXCOORD5;
                half3 worldRefl  : TEXCOORD6;
                UNITY_VERTEX_OUTPUT_STEREO
            };

            v2f vert(appdata v)
            {
                UNITY_SETUP_INSTANCE_ID(v);
                v2f o;
                o.pos      = UnityObjectToClipPos(v.vertex);
                o.worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
                o.normal   = UnityObjectToWorldNormal(v.normal);
                o.tangent  = v.tangent;
                o.uv       = TRANSFORM_TEX(v.uv, _MainTex);
                o.uv1      = v.uv1.xy * unity_LightmapST.xy + unity_LightmapST.zw;

                float3 worldViewDir = normalize(UnityWorldSpaceViewDir(o.worldPos));
                o.worldRefl = reflect(-worldViewDir, normalize(o.normal));

                UNITY_TRANSFER_SHADOW(o, o.uv1);
                UNITY_TRANSFER_LIGHTING(o, v.vertex);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
                return o;
            }

            half4 fragBase(v2f i) : SV_Target
            {
                UNITY_SETUP_INSTANCE_ID(i);

                // Alpha test
                half4 MOAR = tex2D(_MOARMap, i.uv * _MOARMap_ST.xy + _MOARMap_ST.zw);
                //clip(MOAR.b - _Cutoff);

                // Unpack maps
                half4 alb  = tex2D(_MainTex, i.uv * _MainTex_ST.xy + _MainTex_ST.zw);
                half3 nmap = ExtractNormal(tex2D(_NormalMap, i.uv * _NormalMap_ST.xy + _NormalMap_ST.zw), _NormalHeight);

                // Build TBN normal
                half3 binorm = cross(i.normal, i.tangent.xyz) * (i.tangent.w * unity_WorldTransformParams.w);
                half3 N     = normalize(nmap.x * i.tangent.xyz + nmap.y * binorm + nmap.z * i.normal);
			
				// Lighting
                half3 baked = DecodeLightmap(UNITY_SAMPLE_TEX2D(unity_Lightmap, i.uv1)).rgb; // Lightmap
                UNITY_LIGHT_ATTENUATION(attenuation,i, i.worldPos); // Main directional attenuation including shadow
                half3 rtTint  = unity_ShadowColor.rgb; // We need this for blending later
                half nl = saturate(dot(i.normal, _WorldSpaceLightPos0.xyz)); // vector from the light to the normal in ws
                half3 diff = DisneyDiffuse(nl, alb.rgb, _LightColor0.rgb); // Diffuse term
            	diff = (diff + alb.rgb) * baked; // For aesthetics
            	half indirectDiffuse =  1-baked.b; // inverse of LM blue channel for masking (since main directional is blue)
            	float3 shadowedLightEstimate = nl * attenuation; // mask rt shadows on tris facing away from light
				float3 subtractedLight = shadowedLightEstimate - indirectDiffuse; // sub the mask from the estimate
            	subtractedLight = max(subtractedLight, rtTint); // add in the Realtime Shadow Color
				subtractedLight = lerp(subtractedLight, diff, indirectDiffuse); //lerp from final light to diffuse by the mask
            	
                // Reflection
                float roughVal = (1.0 - _Roughness * MOAR.a) * 8.0;
                half4 sky    = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0, i.worldRefl, roughVal);
                half3 skyCol = DecodeHDR(sky, unity_SpecCube0_HDR);
            	half3 V       = normalize(_WorldSpaceCameraPos - i.worldPos);
                half f      = saturate(1 - dot(N, V));
                half3 FR    = lerp(_Metallic * MOAR.r, 1, (1 - (1 - f)*(1 - f)));
                half3 spec = skyCol * FR * (_Metallic * MOAR.r);

                

                // Final
                half3 color = subtractedLight + spec * MOAR.g;
                return half4(subtractedLight, 1);
            }
            ENDCG
        }

        //=================================================
        // 2) META pass (for baking, probes, etc.)
        //=================================================
        Pass
        {
            Name "META"
            Tags { "LightMode"="Meta" }
            Cull Off
            CGPROGRAM
            #pragma vertex vert_meta
            #pragma fragment frag_meta
            #pragma shader_feature _EMISSION _METALLICGLOSSMAP _SMOOTHNESS_TEXTURE_ALBEDO_CHANNEL_A _DETAIL_MULX2 EDITOR_VISUALIZATION
            #include "UnityStandardMeta.cginc"
            ENDCG
        }
    }

    Fallback "Diffuse"
}