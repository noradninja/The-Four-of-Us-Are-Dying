// Upgrade NOTE: commented out 'half4 unity_LightmapST', a built-in variable

// Upgrade NOTE: replaced tex2D unity_Lightmap with UNITY_SAMPLE_TEX2D

Shader "Vita/Diffuse(Additive Color)" {
Properties {
    _Color ("Main Color", Color) = (1,1,1,1)
    _MainTex ("Base (RGB)", 2D) = "white" {}
    _LightMap ("Lightmap (RGB)", 2D) = "black" {}
}

SubShader {
    LOD 200
    Tags { "RenderType" = "Opaque" }
CGPROGRAM
#pragma surface surf Lambert nodynlightmap
struct Input {
  float2 uv_MainTex;
  float2 uv2_LightMap;
};
sampler2D _MainTex;
// half4 unity_LightmapST;
fixed4 _Color;
void surf (Input IN, inout SurfaceOutput o)
{
  o.Albedo = tex2D (_MainTex, IN.uv_MainTex).rgb;
  half3 lm = (DecodeLightmap(UNITY_SAMPLE_TEX2D(unity_Lightmap, IN.uv2_LightMap)));
  o.Emission = lm.rgb + _Color * o.Albedo.rgb;
  o.Alpha = _Color.a;
}
ENDCG
}
FallBack "Legacy Shaders/Lightmapped/VertexLit"
}