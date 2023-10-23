Shader "Custom/InvertColor"
{
	Properties{
	_TintColor("Tint Color", Color) = (1,1,1,1)
	}
	SubShader
	{
		//these properties should go outside of the pass 
		Tags { "Queue" = "Overlay+100" "IgnoreProjector" = "True" }

			Blend OneMinusDstColor OneMinusSrcColor
			ColorMask RGB

			ZWrite Off
			ZTest Always

		Pass
		{
			
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			//you need to set up your data in structs, appdata
			//is predefined with vertex input position
			struct appdata
			{
				half4 vertex : POSITION;//vertex position
			};
			//this struct sets up your output semantic for the vertex shader
			struct v2f
			{
				half4 vertex : SV_POSITION;//semantic
			};
			//your vertex to frag output needs to, minimum: 1- initialize output,
			//2- set your output for vert
			//3- return output
			v2f vert(appdata v){
				v2f o; //1
				o.vertex = UnityObjectToClipPos(v.vertex);//2
				return o;//3
			}
			//this is fine, however I tend to define all my
			//interpolators above the vert/frag functions, but it doesn't matter
			half4 _TintColor;
			//your fragment shader takes as its argument, your vertex to fragment function
			half4 frag(v2f i) : SV_Target {
				//you may not need to do this, but I do out of habit to avoid issues
				half4 col = _TintColor;
				return col;
			}

			ENDCG
		}
	}
}

