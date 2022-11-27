using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Camera))]

public class Contrast_Manager : MonoBehaviour
{

	public Material contrastMaterial;
    public Material skyboxMaterial;
    public float contrastValue = 0f;
    [Range (0f,1.0f)]
    public float maxShadowAmount = 0.055f;
    public Color tintColor;

    private float fromAbs;
    private float fromMaxAbs;      
    private float normal;

    private float toMaxAbs;
    private float toAbs;
    private static readonly int Exposure = Shader.PropertyToID("_Exposure");
    private static readonly int TintColor = Shader.PropertyToID("_TintColor");

    // Start is called before the first frame update
	public void Start()
    {
      tintColor = new Color(0f,0f,0f,0f);
    }

	// Update is called once per frame
	public void Update()
    {
        contrastValue = Mathf.Clamp01(skyboxMaterial.GetFloat(Exposure)-0.35f);
        Remap(contrastValue, 0f, 1.0f, 0f, maxShadowAmount);
        tintColor.a = contrastValue;
        contrastMaterial.SetColor(TintColor, tintColor);    
    }

    private void Remap (float from, float fromMin, float fromMax, float toMin,  float toMax)
    {
        fromAbs  =  from - fromMin;
        fromMaxAbs = fromMax - fromMin;      
       
        normal = fromAbs / fromMaxAbs;
 
        toMaxAbs = toMax - toMin;
        toAbs = toMaxAbs * normal;
 
        contrastValue = toAbs + toMin;
    }
}
