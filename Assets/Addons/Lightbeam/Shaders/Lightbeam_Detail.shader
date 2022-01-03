// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Lightbeam/Lightbeam Detail" {
	Properties {
		_Color ("Color", Color) = (1,1,1,1)
		_MainTex ("Base (RGB)", 2D) = "white" {}
		_DetailTex ("Detail Texture", 2D) = "white" {}
		_Width ("Width", Float) = 8.71
		_Tweak ("Tweak", Float) = 0.65
		_DetailContrast ("Detail Strength", Range(0, 1)) = 0
		_InvFade ("Soft Particles Factor", Range(0.01,3.0)) = 1.0
		_DetailAnim ("Detail Animation", Vector) = (0,0,0,0)
	}
	SubShader {
		Tags { "Queue" = "Transparent" "IgnoreProjector" = "True"}
		Pass {
			Cull Back
			Blend SrcAlpha OneMinusSrcAlpha
			ZWrite Off
			ZTest LEqual
			Lighting OFF
			
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#pragma multi_compile_particles
			#include "UnityCG.cginc"
			
			sampler2D _MainTex;
			sampler2D _DetailTex;
			uniform half4 _DetailTex_ST;
			half4 _Color;
			half _Width;
			half _Tweak;
			half _DetailContrast;
			half4 _DetailAnim;
			
			struct v2f 
			{
			    half4 pos : SV_POSITION;
			    half2 uv : TEXCOORD0;
			    half4 falloffUVs : TEXCOORD1;
			    half4 screenPos : TEXCOORD2;
				half4 projPos : TEXCOORD3;
			};
			
			v2f vert (appdata_tan v)
			{
			    v2f o;			    		
			    o.pos = UnityObjectToClipPos( v.vertex );
				o.projPos = ComputeScreenPos (o.pos);			
				o.uv.xy = TRANSFORM_TEX(v.texcoord, _DetailTex);
				o.uv.xy += half2(_DetailAnim.x, _DetailAnim.y) * _Time.x;
								
				// Generate the falloff texture UVs
				TANGENT_SPACE_ROTATION;	
				half3 refVector = mul(rotation, normalize(ObjSpaceViewDir(v.vertex)));
				
				half z = sqrt((refVector.z + _Tweak) * _Width);
				half x = (refVector.x / z) + 0.5;
				half y = (refVector.y / z) + 0.5;
				
				half2 uv1 = half2(x, v.texcoord.y);
				half2 uv2 = half2(x, y);				
				o.falloffUVs = half4(uv1, uv2);
				
				o.screenPos = ComputeScreenPos(o.pos);
				COMPUTE_EYEDEPTH(o.screenPos.z);
								
			    return o;
			}
			
			sampler2D _CameraDepthTexture;	
			half _InvFade;

			half4 frag( v2f In ) : COLOR
			{			
				fixed falloff1 = tex2D(_MainTex, In.falloffUVs.xy).r;
				fixed falloff2 = tex2D(_MainTex, In.falloffUVs.zw).g;
				
				half4 c = _Color;			
				
				// Detail Texture
				half2 uv = In.uv.xy;
				half4 detailTex = tex2D(_DetailTex, uv);
				detailTex = lerp(half4(1,1,1,1), detailTex, _DetailContrast);
				c *= detailTex;
				half sceneZ = LinearEyeDepth (SAMPLE_DEPTH_TEXTURE_PROJ(_CameraDepthTexture, UNITY_PROJ_COORD(In.projPos)));
				half partZ = In.projPos.z;
				half fade = saturate (_InvFade * (sceneZ-partZ));
				c.a *= fade;								
				// Fade when near the camera
				c.a *=  saturate(sceneZ * 0.4) * falloff1 * falloff2;
			    return c;
			}
			
			ENDCG
		}
	} 
	Fallback "Lightbeam/Lightbeam"
}
