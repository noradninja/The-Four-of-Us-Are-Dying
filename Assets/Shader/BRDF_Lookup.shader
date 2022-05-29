Shader "Custom/BRDF_Lookup" {
	Properties {
		_Color ("Color", Color) = (1,1,1,1)
		_MainTex ("Albedo (RGB)", 2D) = "white" {}
		_MOARTex ("MOAR Map(RGBA)", 2D) = "white" {}
		_Ramp2D ("BRDF Ramp", 2D) = "gray" {}
		_BumpMap ("Normal Map", 2D) = "white" {}
		_Height ("Normal Depth", Range(-2,2)) = 1.0
		_Shininess ("Smoothness", Range(0.02,3)) = 0.5
		}
	SubShader {
		Tags { "RenderType"="Opaque" }
		LOD 200

		CGPROGRAM
		// Physically based Standard lighting model, and enable shadows on all light types
		#pragma surface surf BRDF fullforwardshadows addshadow 


		// Use shader model 3.0 target, to get nicer looking lighting
		#pragma target 3.0

		sampler2D_half  _MainTex;
		sampler2D_half  _Ramp2D;
		sampler2D_half  _MOARTex;
		sampler2D_half _BumpMap;
		half _Shininess;
		half _Height;
		fixed4 _Color;


		struct Input {
			float2 uv_MainTex;
			float2 uv_BumpMap;
		};

		half4 LightingBRDF (SurfaceOutput s, half3 lightDir, half3 viewDir, half atten){
		
		half NdotL = dot (s.Normal, lightDir);
		half NdotE = dot (s.Normal, viewDir);
		//diff wrap faked BRDF
		half diffBRDF = max (0, NdotL * 0.3) + 0.5;
		half2  brdfUV = half2(NdotE * 0.8, diffBRDF);
		half3 BRDF = tex2D(_Ramp2D, brdfUV.xy).rgb;
		half3 h = normalize (lightDir + viewDir);
		
		fixed diff = max (0, dot (s.Normal, lightDir));
		
		half nh = max (0, dot (s.Normal, h));
		half spec = pow (nh, s.Specular*128.0) * s.Gloss;
		
		fixed4 c;
		c.rgb = (_LightColor0.rgb * diffBRDF + _LightColor0.rgb * spec) * atten * s.Albedo;
		c.a = s.Alpha;
		s.Emission = BRDF;
		UNITY_OPAQUE_ALPHA(c.a);
		return c;
			
		}	
		void surf (Input IN, inout SurfaceOutput o) {
			// Albedo comes from a texture tinted by color
			half4 moar = tex2D(_MOARTex, IN.uv_MainTex);
			half4 c =  tex2D(_MainTex, IN.uv_MainTex) *  _Color;
			
			o.Albedo = c.rgb;
			o.Specular = moar.a;
			o.Normal = UnpackScaleNormal(tex2D(_BumpMap, IN.uv_BumpMap), _Height);
			o.Gloss = moar.a;
			o.Specular = _Shininess * moar.a;
			o.Alpha = c.a;
		}
		ENDCG
	}
	FallBack "Diffuse"
}
