using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyController : MonoBehaviour {
	public enum enemyState {
		idle,
		alert,
		looking,
		roaming,
		chase,
		attack,
		dodge
	}
	public enum enemyType {
		standIn,
		enemy2,
		enemy3
	}

//private vars
	private Vector3 startingPosition;
	private Collider[] rangeChecks;
	private bool onMesh = false;

//public vars
	[Header("Enemy Setup")]
	public enemyType typeOfEnemy;
	public Animator enemyAnimator;
	public GameObject player;
	public GameObject targetPoint;
	public  GameObject randomPointObject;
	public NavMeshAgent meshAgent;
	public float turnSpeed = 1.0f;

	
	[Header("FOV and Visibility")]
	public float viewRadius;
	[Range (0, 360)]
	public float fovAngle;
	public LayerMask targetMask;
	public LayerMask obstructionMask;
	public float distanceToPlayer;
	public bool isPlayerNear = false;
	public bool canSeePlayer = false;
	[Header("Behavior")]
	public enemyState behaviorState;
	public float alertDelay = 1.5f;
	public float lookDelay = 1.5f;
	public bool alerted = false;
	public bool lookingForPlayer = false;
	public bool roaming = false;
	public bool isPlayerRunning;
	public bool flashlightDisabled;
	
	
	


	// Use this for initialization
	void Start () {
		startingPosition = transform.position;
		enemyAnimator = GetComponent<Animator>();
		RandomizePoint();
	}
		
	// Update is called once per frame
	void Update () {
		distanceToPlayer = Vector3.Distance(player.transform.position, this.transform.position);
		flashlightDisabled = PlayerController.flashlightOff; 
		isPlayerRunning = player.GetComponent<PlayerController>().isRunning;
		
		if (distanceToPlayer < viewRadius){
			//isPlayerNear = true;
			behaviorState = enemyState.alert;
			//isPlayerNear = true;
		}

		if (distanceToPlayer <= 1.5f){
			behaviorState = enemyState.attack;
		}
		
	
		if (distanceToPlayer > viewRadius){
			isPlayerNear = false;
			alerted = false;
			canSeePlayer = false;
		}

		if (isPlayerNear){

			Vector3 dir = player.transform.position - transform.position;
			Quaternion lookRotation = Quaternion.LookRotation(dir);
			Vector3 rotation = Quaternion.Lerp(transform.rotation, lookRotation, Time.deltaTime * turnSpeed).eulerAngles;
			transform.rotation = Quaternion.Euler(0f, rotation.y, 0f);
		}


		switch (typeOfEnemy){
            case enemyType.standIn:
                StandInStates();
                break;

            case enemyType.enemy2:
                Type2States();
                break;

            case enemyType.enemy3:
                Type3States();
                break;

        }
		
	}

    private void Type3States()
    {
        switch (behaviorState)
        {
            case enemyState.idle:
                //play idle animation
                break;

            case enemyState.alert:
                FaceTarget(player);
                break;
			
			case enemyState.looking:

			break;

            case enemyState.chase:
                //chase player
                break;

            case enemyState.attack:
                //attack player
                break;

            case enemyState.dodge:
                //dodge player attack
                break;
        }
    }

    private void Type2States()
    {
        switch (behaviorState)
        {
            case enemyState.idle:
                //play idle animation
                break;

            case enemyState.alert:
                FaceTarget(player);
                break;

			case enemyState.looking:

			break;

            case enemyState.chase:
                //chase player
                break;

            case enemyState.attack:
                //attack player
                break;

            case enemyState.dodge:
                //dodge player attack
                break;
        }
    }

    private void StandInStates()
    {
        switch (behaviorState)
        {
            case enemyState.idle:
				if (!canSeePlayer){
					if (!lookingForPlayer){
						behaviorState = enemyState.looking;
					}
				}
				if (canSeePlayer){
					behaviorState = enemyState.alert;
				}
                if (player.GetComponent<PlayerController>().currentTarget == targetPoint)
                {
                    player.GetComponent<PlayerController>().currentTarget = null;
                }
                // player.GetComponent<PlayerController>().lightMovement = true;
				isPlayerNear = false;
                if (enemyAnimator.GetBool("isAttacking") == true){
					enemyAnimator.SetBool("isAttacking", false);
				}
				break;

            case enemyState.alert:
				if (!alerted){
					// StopAllCoroutines();
					if (!flashlightDisabled){ 
						if (isPlayerRunning){
							StartCoroutine(AlertTimer(alertDelay/3));
						}
						else if (!isPlayerRunning){
							StartCoroutine(AlertTimer(alertDelay));	
						}
					}
					else if (flashlightDisabled){
						if (isPlayerRunning){
							StartCoroutine(AlertTimer(alertDelay/2));
						}
						else if (!isPlayerRunning){
							StartCoroutine(AlertTimer(alertDelay*2));	
						}
					}
				}
				if (distanceToPlayer <= viewRadius){
					if (alerted){
						roaming = false;
						lookingForPlayer = false;
						FaceTarget(player);
						StartCoroutine(FOVRoutine());
						player.GetComponent<PlayerController>().currentTarget = targetPoint;
						// player.GetComponent<PlayerController>().lightMovement = false;
						if (canSeePlayer){
								meshAgent.SetDestination(player.transform.position);
								FaceTarget(player);
						}
						if (enemyAnimator.GetBool("isAttacking") == true){
								enemyAnimator.SetBool("isAttacking", false);
						}
					}
				}
				if (!isPlayerNear){
						lookingForPlayer = false;
						behaviorState = enemyState.looking;
				}
				if (enemyAnimator.GetBool("isAttacking") == true){
					enemyAnimator.SetBool("isAttacking", false);
				}              
                break;

			case enemyState.looking:
				roaming = false;
				alerted = false;
				player.GetComponent<PlayerController>().lightMovement = true;
				//only null if the player hasn't targeted another enemy since us
				if (player.GetComponent<PlayerController>().currentTarget == targetPoint){ 
					player.GetComponent<PlayerController>().currentTarget = null;
				}

				if (!lookingForPlayer){
					Look();
				}
				if (enemyAnimator.GetBool("isAttacking") == true){
					enemyAnimator.SetBool("isAttacking", false);
				}
			break;

			case enemyState.roaming:
					lookingForPlayer = false;
					alerted = false;
					RoamAround();
				if (enemyAnimator.GetBool("isAttacking") == true){
					enemyAnimator.SetBool("isAttacking", false);
				}
			break;

            case enemyState.chase:
			lookingForPlayer = false;
			roaming = false;
			alerted = false;
			FieldOfViewCheck();
			if (canSeePlayer){
				meshAgent.SetDestination(player.transform.position);
				FaceTarget(player);
				player.GetComponent<PlayerController>().currentTarget = targetPoint;
				// player.GetComponent<PlayerController>().lightMovement = false;
			}
			if (enemyAnimator.GetBool("isAttacking") == true){
					enemyAnimator.SetBool("isAttacking", false);
			}
			break;

            case enemyState.attack:
				lookingForPlayer = false;
				roaming = false;
				alerted = false;
                //attack player
				if (enemyAnimator.GetBool("isAttacking") == false){
					enemyAnimator.SetBool("isAttacking", true);
				}
				meshAgent.SetDestination(player.transform.position);
				FaceTarget(player);
				player.GetComponent<PlayerController>().currentTarget = targetPoint;
				// player.GetComponent<PlayerController>().lightMovement = false;
			break;

            case enemyState.dodge:
                //dodge player attack
			break;
        }
    }

    private void FaceTarget(GameObject target)
    {
        Vector3 dir = target.transform.position - transform.position;
        Quaternion lookRotation = Quaternion.LookRotation(dir);
        Vector3 rotation = Quaternion.Lerp(transform.rotation, lookRotation, Time.deltaTime * turnSpeed).eulerAngles;
        transform.rotation = Quaternion.Euler(0f, rotation.y, 0f);
    }

	private IEnumerator FOVRoutine(){
		FieldOfViewCheck();
		yield return null;
	}

	private void FieldOfViewCheck()
	{
		rangeChecks = Physics.OverlapSphere(transform.position, viewRadius, targetMask);

		if (rangeChecks.Length !=0){
			Transform target = rangeChecks[0].transform;
			Vector3 directionToTarget = (target.position - transform.position).normalized;

			if (Vector3.Angle(transform.forward, directionToTarget) < fovAngle /2){
				float distanceToTarget = Vector3.Distance(transform.position, target.position);
				if(!Physics.Raycast(transform.position, directionToTarget, distanceToTarget, obstructionMask))
					canSeePlayer = true;
				else
					canSeePlayer = false;
			}
			else 
				canSeePlayer = false;
		}
		else if (canSeePlayer)
			canSeePlayer = false;
	}
	private IEnumerator AlertTimer(float duration){
		WaitForSecondsRealtime wait = new WaitForSecondsRealtime(duration);
		yield return wait;
		alerted = true;
		isPlayerNear = true;
	}
	private void Look(){
		lookingForPlayer = true;
		roaming = false;
		//print ("Looking Around");
		StartCoroutine(LookWait(lookDelay));
	}

	private IEnumerator LookWait(float duration){
		//print ("Enter");
		WaitForSecondsRealtime wait = new WaitForSecondsRealtime(duration);
		yield return wait;
		//print ("Exit after " + duration + " seconds.");
		RandomizePoint();
		behaviorState = enemyState.roaming;
	}

	private void RandomizePoint(){
		

		Vector3 randomCircle = new Vector3(Random.insideUnitCircle.x * viewRadius, 0, Random.insideUnitCircle.y * viewRadius);
		Vector3 point = randomPointObject.transform.position + randomCircle;
		int walkMask = 1 << NavMesh.GetAreaFromName("Walkable");
		NavMeshHit hit;
		if (NavMesh.SamplePosition(point, out hit, 0.055125f, walkMask)) //is the point within 0.25 units of a NavMesh surface
		{
			onMesh = true;
			randomPointObject.transform.position = point;
		}
		else
		{
			onMesh = false;
			RandomizePoint(); //regenerate the waypoint because it's off/too far from the navmesh
		}
	}
	private void RoamAround(){
		lookingForPlayer = false;
		roaming = true;
		meshAgent.SetDestination(randomPointObject.transform.position);
		FaceTarget(randomPointObject);
		// // Check if we've reached the destination
		if (!meshAgent.pathPending)
		{
			if (meshAgent.remainingDistance <= meshAgent.stoppingDistance)
			{
				if (meshAgent.velocity.sqrMagnitude <= 0.025f)
				{
					behaviorState = enemyState.looking;
				}
			}
		}
	}
}