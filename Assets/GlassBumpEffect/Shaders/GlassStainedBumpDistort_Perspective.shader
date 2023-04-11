// Per pixel bumped refraction.
// Uses a normal map to distort the image behind, and
// an additional texture to tint the color.

Shader "FX/Glass/Stained BumpDistort/Perspective" {
Properties {
	_BumpAmt  ("Distortion", range (0,128)) = 10
	_TintColor ("Tint Color", Color) = (.5, .5, .5, .5)
	_BumpMap ("Normalmap", 2D) = "bump" {}
}

Category {

	// We must be transparent, so other objects are drawn before this one.
	Tags { "Queue"="Transparent" "RenderType"="Opaque" }


	SubShader {

		// This pass grabs the screen behind the object into a texture.
		// We can access the result in the next pass as _GrabTexture
		GrabPass {
			Name "BASE"
			Tags { "LightMode" = "Always" }
		}
		
		// Main pass: Take the texture grabbed above and use the bumpmap to perturb it
		// on to the screen
		Pass {
			Name "BASE"
			Tags { "LightMode" = "Always" }
			
CGPROGRAM
#pragma vertex vert
#pragma fragment frag
#pragma multi_compile_fog
#include "UnityCG.cginc"

struct appdata_t {
	half4 vertex : POSITION;
	half2 texcoord: TEXCOORD0;
};

struct v2f {
	half4 vertex : SV_POSITION;
	half4 uvgrab : TEXCOORD0;
	half2 uvbump : TEXCOORD1;
	half2 uvmain : TEXCOORD2;
	UNITY_FOG_COORDS(3)
};

half _BumpAmt;
half4 _BumpMap_ST;
half4 _TintColor;

v2f vert (appdata_t v)
{
	v2f o;
	o.vertex = UnityObjectToClipPos(v.vertex);
	o.uvgrab = ComputeGrabScreenPos(o.vertex);
	o.uvbump = TRANSFORM_TEX( v.texcoord, _BumpMap );
	UNITY_TRANSFER_FOG(o,o.vertex);
	return o;
}

sampler2D _GrabTexture;
half4 _GrabTexture_TexelSize;
sampler2D _BumpMap;


half4 frag (v2f i) : SV_Target
{
	#if UNITY_SINGLE_PASS_STEREO
	i.uvgrab.xy = TransformStereoScreenSpaceTex(i.uvgrab.xy, i.uvgrab.w);
	#endif

	// calculate perturbed coordinates
	const half2 bump = UnpackNormal(tex2D( _BumpMap, i.uvbump )).rg; // we could optimize this by just reading the x & y without reconstructing the Z
	half2 offset = bump * _BumpAmt * _GrabTexture_TexelSize.xy;
	#ifdef UNITY_Z_0_FAR_FROM_CLIPSPACE //to handle recent standard asset package on older version of unity (before 5.5)
		i.uvgrab.xy = offset * UNITY_Z_0_FAR_FROM_CLIPSPACE(i.uvgrab.z) + i.uvgrab.xy;
	#else
		i.uvgrab.xy = offset * i.uvgrab.z + i.uvgrab.xy;
	#endif

	half4 col = tex2Dproj( _GrabTexture, UNITY_PROJ_COORD(i.uvgrab));
	half4 tint = _TintColor;
	col *= tint*1.9h;
	col.a = tint.a;
	UNITY_APPLY_FOG(i.fogCoord, col);
	return col;
}
ENDCG
		}
	}

	// ------------------------------------------------------------------
	// Fallback for older cards and Unity non-Pro

	SubShader {
		Blend DstColor Zero
		Pass {
			Name "BASE"
			SetTexture [_MainTex] {	combine texture }
		}
	}
}

}
