using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyController : MonoBehaviour {
	public enum enemyType {
		standIn,
		type2,
		type3
	}
	public GameObject player;
	public enemyType thisEnemy;
	public GameObject targetPoint;
	public float turnSpeed = 1.0f;
	public bool isPlayerNear = false;
	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
		switch (thisEnemy){
			case enemyType.standIn :
			//turn to face the player if they are within the trigger sphere
				if (isPlayerNear){
					Vector3 dir = player.transform.position - transform.position;
					Quaternion lookRotation = Quaternion.LookRotation(dir);
					Vector3 rotation = Quaternion.Lerp(transform.rotation, lookRotation, Time.deltaTime * turnSpeed).eulerAngles;
					transform.rotation = Quaternion.Euler(0f, rotation.y, 0f);
				}
			break;
			case enemyType.type2 :
			break;
			case enemyType.type3 :
			break;
		}
	}

	void OnTriggerEnter(Collider col) {
			switch (thisEnemy){
			case enemyType.standIn :
				if (col == player.GetComponent<Collider>()){
					isPlayerNear = true;
					player.GetComponent<PlayerController>().currentTarget = targetPoint;
					
				}

			break;
			case enemyType.type2 :
			break;
			case enemyType.type3 :
			break;
		}
	}
	void OnTriggerExit(Collider col) {
		switch (thisEnemy){
			case enemyType.standIn :
				if (col == player.GetComponent<Collider>()){
					isPlayerNear = false;
					if (player.GetComponent<PlayerController>().currentTarget == targetPoint){
						player.GetComponent<PlayerController>().currentTarget = null;
					}
					player.GetComponent<PlayerController>().lightMovement = true;
				}
			break;
			case enemyType.type2 :
			break;
			case enemyType.type3 :
			break;
		}
	}
}
