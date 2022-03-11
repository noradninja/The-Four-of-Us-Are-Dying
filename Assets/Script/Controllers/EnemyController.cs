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

	public GameObject player;
	public enemyState thisState;
	public enemyType thisEnemyType;
	public GameObject targetPoint;
	public float turnSpeed = 1.0f;
	public bool isPlayerNear = false;
	public NavMeshAgent agent;
	public float distanceToPlayer;
	private Vector3 startingPosition;

	public float radius;
	[Range (0, 360)]
	public float angle;
	public LayerMask targetMask;
	public LayerMask obstructionMask;
	public bool canSeePlayer;
	public  GameObject randomPoint;

	public Collider[] rangeChecks;
	public bool onMesh = false;
	public bool lookingForPlayer = false;
	public bool roaming = false;
	// Use this for initialization
	void Start () {
		startingPosition = transform.position;
		
		RandomizePoint();
	}
		
	// Update is called once per frame
	void Update () {
		distanceToPlayer = Vector3.Distance(player.transform.position, this.transform.position); 
		
		if (distanceToPlayer < 3.0f && distanceToPlayer > 2.5f){
			thisState = enemyState.alert;
		}
		if (distanceToPlayer < 2.5f && distanceToPlayer > 0.5f && canSeePlayer){
			thisState = enemyState.chase;
		}
		if (distanceToPlayer < 0.5f && canSeePlayer){
			thisState = enemyState.attack;
		}


		switch (thisEnemyType){
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
        switch (thisState)
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
        switch (thisState)
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
        switch (thisState)
        {
            case enemyState.idle:
				if (!canSeePlayer){
					if (!lookingForPlayer){
						thisState = enemyState.looking;
					}
				}
				if (canSeePlayer){
					thisState = enemyState.alert;
				}
                if (player.GetComponent<PlayerController>().currentTarget == targetPoint)
                {
                    player.GetComponent<PlayerController>().currentTarget = null;
                }
                player.GetComponent<PlayerController>().lightMovement = true;
                break;

            case enemyState.alert:
				StartCoroutine(FOVRoutine());
				if (canSeePlayer){
					FaceTarget(player);
					player.GetComponent<PlayerController>().currentTarget = targetPoint;
					thisState = enemyState.chase;
				}
				else { 
					if (!lookingForPlayer){
						roaming = false;
						thisState = enemyState.looking;
					}
				}
				               
                break;

			case enemyState.looking:
				roaming = false;
				if (!lookingForPlayer){
					Look();
				}
			break;

			case enemyState.roaming:
				
					RoamAround();
			break;

            case enemyState.chase:
				if (canSeePlayer){
					agent.SetDestination(player.transform.position);
					FaceTarget(player);
				}
				else {
					thisState = enemyState.alert;
				}
				break;

            case enemyState.attack:
                //attack player
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

		WaitForSeconds wait = new WaitForSeconds(0.1f); //set up a timer that fires 10x/frame
		while (true){
			yield return wait;
			FieldOfViewCheck();
		}
	}

	private void FieldOfViewCheck()
	{
		rangeChecks = Physics.OverlapSphere(transform.position, radius, targetMask);

		if (rangeChecks.Length !=0){
			Transform target = rangeChecks[0].transform;
			Vector3 directionToTarget = (target.position - transform.position).normalized;

			if (Vector3.Angle(transform.forward, directionToTarget) < angle /2){
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

	private void Look(){
		lookingForPlayer = true;
		roaming = false;
		print ("Looking Around");
		StartCoroutine(LookWait(1.5f));
	}

	private IEnumerator LookWait(float duration){
		yield return new WaitForSeconds(duration);
		RandomizePoint();
		thisState = enemyState.roaming;
	}

	private void RandomizePoint(){
		

		Vector3 randomCircle = new Vector3(Random.insideUnitCircle.x * radius, 0, Random.insideUnitCircle.y * radius);
		Vector3 point = randomPoint.transform.position + randomCircle;
		int walkMask = 1 << NavMesh.GetAreaFromName("Walkable");
		NavMeshHit hit;
		if (NavMesh.SamplePosition(point, out hit, 0.125f, walkMask)) //is the point within 0.25 units of a NavMesh surface
		{
			onMesh = true;
			randomPoint.transform.position = point;
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
		agent.SetDestination(randomPoint.transform.position);
		FaceTarget(randomPoint);
		// // Check if we've reached the destination
		if (!agent.pathPending)
		{
			if (agent.remainingDistance <= agent.stoppingDistance)
			{
				if (agent.velocity.sqrMagnitude <= 0.275f)
				{
					thisState = enemyState.looking;
				}
			}
		}
	}
}
