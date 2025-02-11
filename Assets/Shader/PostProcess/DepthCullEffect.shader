Shader "Vita/Deferred/DepthCullEffect"
{
    SubShader
    {
        Tags { "Queue"="Overlay" }
        Pass
        {
            ZTest Always
            ZWrite On
            Blend Off

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"

            UNITY_DECLARE_DEPTH_TEXTURE(_CameraDepthNormalsTexture);

            struct v2f
            {
                float4 pos : SV_POSITION;
                float4 screenPos : TEXCOORD0;
            };

            v2f vert(appdata_full v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.screenPos = ComputeScreenPos(o.pos);
                return o;
            }

            float LinearDepth(float rawDepth)
            {
                float zNear = _ProjectionParams.y;
                float zFar = _ProjectionParams.z;
                return zNear * zFar / (zFar + rawDepth * (zNear - zFar));
            }

            half4 frag(v2f i) : SV_Target
            {
                float4 depthData = tex2Dproj(_CameraDepthNormalsTexture, UNITY_PROJ_COORD(i.screenPos));
                float sceneDepth = LinearDepth(depthData.r);
                float fragDepth = i.screenPos.z / i.screenPos.w;

                // Discard fragments behind the stored depth
                if (fragDepth > sceneDepth)
                    discard;

                return half4(0, 0, 0, 1); // Keep the valid fragments
            }
            ENDCG
        }
    }
}
