using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoadTrigger : MonoBehaviour {

	public string currentScene;
	public string nextScene;
	public string loaderHint;
	public int listIndex;
	public GameObject listSystem;
	public List<string> list;

	//public List<string> list;

 	public void Start() {
		//generate a random number based on the count of items in the hint list (see HintList.cs), and use it to select a hint string from the list
//        list = listSystem.GetComponent<HintList>().hintList;
        // listIndex = (Random.Range(0, list.Count));
		// loaderHint = list[listIndex];

		//we add this script to each level, and set the name for the current/next scene, to be used by the game over/next level scripts to pass to the loader.
		//also passes randomly selected hint to be displayed by the loader 
		SetScenes.currentScene = currentScene;
		SetScenes.nextScene = nextScene;
		SetScenes.loaderHint = loaderHint;
    }
}