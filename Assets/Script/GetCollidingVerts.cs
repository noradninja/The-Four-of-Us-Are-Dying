using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[ExecuteInEditMode]
public class GetCollidingVerts : MonoBehaviour {

public MeshFilter mesh;
public Vector3[] intersections;
public Vector3[] vertices;
public List<Color> colors;
public Color fadeColor;

public Collider currentCollider;
public Collider previousCollider;
    void Start()
    {      
    vertices = mesh.sharedMesh.vertices;
    mesh.sharedMesh.GetColors(colors);
    }
	void OnTriggerEnter(Collider other){
		currentCollider = other;
	// 	if (currentCollider != previousCollider){
	// 	colors = mesh.sharedMesh.colors;
	// 		for (var i = 0; i < vertices.Length; i++)
	// 		{
	// 			if (other.bounds.Contains(vertices[i]) && colors[i] == Color.green){
	// 				colors[i] = Color.red;
	// 			}
	// 		}
	// 	}
	// mesh.mesh.vertices = vertices;
	// mesh.sharedMesh.colors = colors;
	// //print ("enter");
	}
	void OnTriggerStay(Collider other){
		 for (var i = 0; i < vertices.Length; i++)
        {
			if (currentCollider.bounds.Contains(vertices[i]) && colors[i] == Color.green){
            	  colors[i] = fadeColor;
			}
        }

	mesh.sharedMesh.vertices = vertices;
	mesh.sharedMesh.SetColors(colors);
	//print ("stay");
	}
	void OnTriggerExit(Collider other){
		previousCollider = currentCollider;
		//colors = mesh.sharedMesh.colors;
		for (var i = 0; i < vertices.Length; i++)
        {
            if (colors[i] == fadeColor){
				colors[i] = Color.green;
			}
        }

	mesh.sharedMesh.vertices = vertices;
	mesh.sharedMesh.SetColors(colors);
	// //print ("Exit");
	}
}

