// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Custom/DistanceOutline"
{
    Properties
    {
        _Color ("Color", Color) = (1.0,1.0,1.0,1.0)//This is for the fallback
    }
    SubShader{
        Tags {"Queue" = "Transparent" "IgnoreProjector"="True" "RenderType"="Transparent"}
        Blend SrcAlpha OneMinusSrcAlpha
        ZWrite On
        Cull Back
   
        Pass{
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"
 
            uniform sampler2D _CameraDepthTexture; //Depth Texture
 
            struct vertexOutput{
                float4 pos : SV_POSITION;
                float4 projPos : TEXCOORD1; //Screen position of pos
            };
 
            vertexOutput vert(appdata_base v){
                vertexOutput o;            
                o.pos = UnityObjectToClipPos(v.vertex);
                o.projPos = ComputeScreenPos(o.pos);
                return o;
            }
 
            half4 frag(vertexOutput i) : COLOR{
                //Get the distance to the camera from the depth buffer for this point
                float sceneZ = LinearEyeDepth (tex2Dproj(_CameraDepthTexture, UNITY_PROJ_COORD(i.projPos)).r);
                //Actual distance to the camera        I know it's 100
                float partZ = i.projPos.z;
                //float partZ = 100;
 
                sceneZ = (1-sceneZ/1000);
                sceneZ = sceneZ*10 - 8.7;
                 
                fixed4 finalColor = float4(1 , 1 , 1 , 1);
                clip (finalColor.a / sceneZ);
                return finalColor.a;
            }
            ENDCG
        }
    }
    FallBack "Transparent"
}