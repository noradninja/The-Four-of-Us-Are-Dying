Shader "Vita/Deferred/Standard"
{
    Properties
    {
        _MainTex ("Albedo (RGB)", 2D) = "white" {}
        _SpecColor ("Specular Color", Color) = (1,1,1,1)
        [NoScaleOffset] _Specular ("Specular (RGB)", 2D) = "white" {}
        [PowerSlider(2.0)] _Specularity ("Specularity", Range (0.03, 2)) = 0.0
        [PowerSlider(2.0)] _Shininess ("Glossiness", Range (0.03, 1)) = 0.0
        [NoScaleOffset] _Emissive ("Emission (RGB)", 2D) = "white" {}
        [PowerSlider(2.0)] _EmissiveBright ("Emissive Brightness", Range (0.00, 1)) = 0.0
        [NoScaleOffset] _BumpMap ("Normal Map (RGB)", 2D) = "bump" {}
        _BumpScale("Scale", Range (-2,2)) = 1.0
    }
    SubShader
    {
        Tags
        {
            "Queue"="Geometry" "IgnoreProjector"="True" "RenderType"="Opaque"
        }
        LOD 200

        CGPROGRAM
        //Pragmas/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        #pragma surface surf VitaBlinnPhong addshadow noshadowmask exclude_path:deferred
        #pragma target 3.0
        //Define Inputs from Properties///////////////////////////////////////////////////////////////////////////////////////////////////
        sampler2D _MainTex;
        sampler2D _BumpMap;
        sampler2D _Specular;
        sampler2D _Emissive;
        fixed _Shininess;
        fixed _Specularity;
        fixed _BumpScale;
        fixed _EmissiveBright;

        //Define Surface Outputs//////////////////////////////////////////////////////////////////////////////////////////////////////////
        struct VitaSurfaceOutput
        {
            half3 Albedo;
            half3 Normal;
            half3 Emission;
            half Specular;
            half3 GlossColor;
            half Alpha;
        };

        //Forward render support *mostly* so we can preview in the scene view/////////////////////////////////////////////////////////////
        inline half4 LightingVitaBlinnPhong(VitaSurfaceOutput s, half3 lightDir, half3 halfDir, half atten)
        {
            half diff = max(0, dot(s.Normal, lightDir));
            half nh = max(0, dot(s.Normal, halfDir));
            half3 spec = pow(nh, s.Specular * 128);
            half3 specCol = spec * s.GlossColor;

            half4 c;
            c.rgb = (s.Albedo * _LightColor0.rgb * diff + _LightColor0.rgb * specCol) * atten;
            UNITY_OPAQUE_ALPHA(c.a);
            return c;
        }

        //Deferred prepass render support/////////////////////////////////////////////////////////////////////////////////////////////////
        inline fixed4 LightingVitaBlinnPhong_PrePass(VitaSurfaceOutput s, fixed4 light)
        {
            fixed3 spec = light.a * (s.GlossColor * s.Specular);
            //light.a stores brightness per light, mult with gloss and specular contributions to get total specular reflection
            fixed4 c;
            c.rgb = (s.Albedo * light.rgb + light.rgb * spec);
            //Blinn-Phong lighting model for deferred prepass only needs surface, light, and specular color
            UNITY_OPAQUE_ALPHA(c.a); //drop alpha because we arent doing transparency clip in this shader
            return c;
        }

        //Define minimal Inputs needed////////////////////////////////////////////////////////////////////////////////////////////////////
        struct Input
        {
            float2 uv_MainTex;
        };

        //Define surface//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void surf(Input IN, inout VitaSurfaceOutput o)
        {
            //Texture Inputs//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            fixed4 col = tex2D(_MainTex, IN.uv_MainTex); //Albedo map
            fixed4 norm = tex2D(_BumpMap, IN.uv_MainTex); //Normal map
            fixed4 smap = tex2D(_Specular, IN.uv_MainTex); //Specular map
            fixed4 emap = tex2D(_Emissive, IN.uv_MainTex); //Emissive map
            //Slider Inputs///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            fixed eval = _EmissiveBright; //Emissive brightness slider
            fixed scale = _BumpScale; //normal scaling
            fixed sval = _Specularity; //Specularity slider
            //Color Inputs and Calcs//////////////////////////////////////////////////////////////////////////////////////////////////////////
            fixed4 scol = _SpecColor; //Specular color
            fixed4 specular = (smap * sval) * scol;
            //multi specular color to (specmapRGB * specularity slider)- this adjusts how sharp the spec reflection is
            //Surface Outputs	//////////////////////////////////////////////////////////////////////////////////////////////////////////////	
            o.Albedo = col.rgb; //set color from Albedo map
            o.Specular = _Shininess; //set specular from calculated value
            o.GlossColor = specular; //overall glossy/dull modulator for specular hilight
            o.Emission = emap * eval; //emission map contribution adjustable with slider
            o.Normal = UnpackScaleNormal(norm, scale); //unpack and scale normal map
        }
        ENDCG
    }
}