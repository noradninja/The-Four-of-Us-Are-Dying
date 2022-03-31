using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Camera))]

public class Contrast_Manager : MonoBehaviour
{

	public Material contrastMaterial;
    public Material skyboxMaterial;
    public float contrastValue = 0f;
    public Color tintColor;

    private float fromAbs;
    private float fromMaxAbs;      
    private float normal;

    private float toMaxAbs;
    private float toAbs;

	// Start is called before the first frame update
	public void Start()
    {
      tintColor = new Color(0f,0f,0f,0f);
    }

	// Update is called once per frame
	public void Update()
    {
        contrastValue = Mathf.Clamp01(skyboxMaterial.GetFloat("_Exposure")-0.75f);
        Remap(contrastValue, 0f, 1.0f, 0f, 0.0625f);
        tintColor.a = contrastValue;
        contrastMaterial.SetColor("_TintColor", tintColor);    
    }
     public void Remap (float from, float fromMin, float fromMax, float toMin,  float toMax)
    {
        fromAbs  =  from - fromMin;
        fromMaxAbs = fromMax - fromMin;      
       
        normal = fromAbs / fromMaxAbs;
 
        toMaxAbs = toMax - toMin;
        toAbs = toMaxAbs * normal;
 
        contrastValue = toAbs + toMin;
    }
}
