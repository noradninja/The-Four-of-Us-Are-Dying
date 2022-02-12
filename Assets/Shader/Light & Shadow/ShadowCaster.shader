/*This is primarily so you can cheat and get shadows with vertex lit objects- to do so, duplicate the object,
add this shader to it, and set it to a layer called Shadow. Duplicate your vertex light, set mode to Important,
enable shadows, and set the culling to the Shadow layer. This will give you rapid vertex lighting with realtime shadows
*/
Shader "Vita/Shadow Only" 
{
	Properties 
	{
		_MainTex ("Texture", 2D) = "white" {}
		_wind_dir ("Wind Direction", Vector) = (0.5,0.05,0.5,0)
        _wind_size ("Wind Wave Size", range(5,50)) = 15
		_leaves_wiggle_disp ("Leaves Wiggle Displacement", float) = 0.07
        _leaves_wiggle_speed ("Leaves Wiggle Speed", float) = 0.01
		_influence ("Influence", range(0,1)) = 1
	}
	
	SubShader 
	{
	Tags { "Queue"="Transparent" } 
		Cull Off	
		// Pass to render object as a shadow caster
		Pass { 
        Name "ShadowCaster"
        Tags { "LightMode" = "ShadowCaster" }

        Fog {Mode Off}
        ZWrite On //ZTest Less
        Offset 1, 1

        CGPROGRAM

        #pragma vertex vert
        #pragma fragment frag
        #pragma fragmentoption ARB_precision_hint_fastest
        #pragma multi_compile_shadowcaster
        #include "UnityCG.cginc"

        sampler2D_half _MainTex;
		//variables for wind movement- remove if you take out the vertex deformation below
		half4 _wind_dir;
		half _wind_size;
		half _leaves_wiggle_disp;
		half _leaves_wiggle_speed;
		half _influence;
		//end wind variables section
		struct appdata {
			half3 vertex : POSITION;
		};
        struct v2f
        {
            V2F_SHADOW_CASTER; 
            float2 uv : TEXCOORD1;
        };


        v2f vert(appdata_full v )
        {
            v2f o;
			//Leaf Movement and Wiggle - remove this for normal shadows
			half3 worldPos = mul (unity_ObjectToWorld, v.vertex);

			( (v.vertex.x += cos(_Time.z * v.vertex.x * _leaves_wiggle_speed + (worldPos.x/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.x * _influence), //x
			(v.vertex.y += sin(_Time.w * v.vertex.y * _leaves_wiggle_speed + (worldPos.y/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.y * _influence),   //y
			(v.vertex.z += cos(_Time.z * v.vertex.z * _leaves_wiggle_speed + (worldPos.z/_wind_size) ) * _leaves_wiggle_disp * _wind_dir.z * _influence) ); //z
            //end leaf movement section
			o.uv = v.texcoord;
            TRANSFER_SHADOW_CASTER(o)

        return o;
        }

        float4 frag( v2f i ) : COLOR
        {
            fixed4 c = tex2D (_MainTex, i.uv);
            clip(c.a - 0.33);
            SHADOW_CASTER_FRAGMENT(i)
        }
        ENDCG
    } 
	}
}