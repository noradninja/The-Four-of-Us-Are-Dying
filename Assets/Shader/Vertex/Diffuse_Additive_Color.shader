// Upgrade NOTE: commented out 'half4 unity_LightmapST', a built-in variable

// Upgrade NOTE: replaced tex2D unity_Lightmap with UNITY_SAMPLE_TEX2D

Shader "BlackOnly" {
Properties {
    _Color ("Main Color", Color) = (0,0,0,1)
}

SubShader {
    LOD 200
    Tags { "RenderType" = "Opaque" }
CGPROGRAM
#pragma surface surf Lambert nodynlightmap
struct Input {
  float2 uv_MainTex;
  float2 uv2;
};

fixed4 _Color;
void surf (Input IN, inout SurfaceOutput o)
{
  o.Albedo = _Color.rgb;

}
ENDCG
}
FallBack "Legacy Shaders/Lightmapped/VertexLit"
}