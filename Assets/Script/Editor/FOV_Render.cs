using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(EnemyController))]
public class FOV_Render : Editor {

	private void OnSceneGUI(){
		EnemyController actor = (EnemyController)target;
		Handles.color = Color.white;
		Handles.DrawWireArc(actor.transform.position, Vector3.up, Vector3.forward, 360, actor.viewRadius);

		Vector3 angleEdge01 = DirectionFromAngle(actor.transform.eulerAngles.y, -actor.fovAngle / 2);
		Vector3 angleEdge02 = DirectionFromAngle(actor.transform.eulerAngles.y, actor.fovAngle / 2);

		Handles.color = Color.yellow;
		Handles.DrawDottedLine(actor.transform.position, actor.transform.position + angleEdge01 * actor.viewRadius,5.0f);
		Handles.DrawDottedLine(actor.transform.position, actor.transform.position + angleEdge02 * actor.viewRadius, 5.0f);

		if (actor.canSeePlayer){
			Handles.color = Color.red;
			Handles.DrawDottedLine(actor.transform.position, actor.player.transform.position, 5.0f);
		}
	}

	private Vector3 DirectionFromAngle(float eulerY, float angleInDegrees){
		
		angleInDegrees += eulerY;

		return new Vector3(Mathf.Sin(angleInDegrees * Mathf.Deg2Rad), 0, Mathf.Cos(angleInDegrees * Mathf.Deg2Rad));
	}
}
