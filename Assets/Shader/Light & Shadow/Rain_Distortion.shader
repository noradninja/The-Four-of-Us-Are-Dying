Shader "Vita/Rain_Distortion"
{
		    Properties
    {
        _MaskTexture ("Mask texture", 2D) = "white" {}
        [Normal]_DistortionGuide("Distortion guide", 2D) = "bump" {}
        _DistortionAmount("Distortion amount", Float) = 0
    }
    SubShader
    {
        Tags { "RenderType"="Transparent" "Queue"="Transparent"}
        Cull Off
        ZWrite Off
        LOD 100
 
        GrabPass
        {
            "_GrabTexture"
        }
 
        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
 
            #include "UnityCG.cginc"
 
            struct appdata
            {
                half4 vertex : POSITION;
                half2 uv : TEXCOORD0;
                half4 color : COLOR;
            };
 
            struct v2f
            {
                half2 uv : TEXCOORD0;
                half2 distortionUV : TEXCOORD1;
                half4 grabPassUV : TEXCOORD2;
                half4 vertex : SV_POSITION;
                half4 color : COLOR;
            };
 
            half _DistortionAmount;
            sampler2D_half _DistortionGuide;
            half4 _DistortionGuide_ST;
            sampler2D_half _MaskTexture;
            half4 _MaskTexture_ST;
            sampler2D_half _GrabTexture;
 
            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MaskTexture);
                o.distortionUV = TRANSFORM_TEX(v.uv, _DistortionGuide);
                o.grabPassUV = ComputeGrabScreenPos(o.vertex);
                o.color = v.color;
                return o;
            }
 
            fixed4 frag (v2f i) : SV_Target
            {
                fixed4 mask = tex2D(_MaskTexture, i.uv);
                half2 distortion = UnpackNormal(tex2D(_DistortionGuide, i.distortionUV)).xy;
				fixed4 col = tex2Dproj(_GrabTexture, i.grabPassUV);
                distortion *= _DistortionAmount * mask.x * i.color.a;
                i.grabPassUV.xy += distortion * i.grabPassUV.z;
                col.a = mask.a;
				return col;
            }
            ENDCG
        }
    }
}
