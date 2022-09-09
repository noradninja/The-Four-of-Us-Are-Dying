using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ExtensionMethods
{
	//this class is for math functions we need simplify code
	public static class Math 
	{
		//remap values to a clamped range
		public static float RemapClamped(this float value, float inMin, float inMax, float outMin, float outMax)
		{
			float variance = (value - inMin) / (inMax - inMin);
			variance = Mathf.Clamp(variance, 0, 1);
			return outMin + (outMax - outMin) * variance;
		}
		
		public static float Remap(this float value, float inMin, float inMax, float outMin, float outMax)
		{
			float variance = (value - inMin) / (inMax - inMin);
			return outMin + (outMax - outMin) * variance;
		}
	}
}