using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LODManager : MonoBehaviour
{
    public static LODManager Instance { get; private set; }

    [Header("Global LOD Settings")]
    public int tickInterval = 10;
    public int batchSize = 50;

    private List<Shader_LOD_Enumerator> enumerators = new List<Shader_LOD_Enumerator>();
    private Transform playerTransform;
    private Camera mainCam;
    private float farClipSqr;

    private int currentBatchIndex = 0;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        mainCam = Camera.main;
    }

    private void Start()
    {
        if (enumerators.Count > 0)
            playerTransform = enumerators[0].player.transform;

        farClipSqr = (mainCam.farClipPlane + 2f) * (mainCam.farClipPlane + 2f);
    }

    private void Update()
    {
        if (Time.frameCount % tickInterval != 0) return;
        if (playerTransform == null || enumerators.Count == 0) return;

        Vector2 playerPos2D = new Vector2(
            playerTransform.position.x,
            playerTransform.position.z
        );

        // Calculate the range of enumerators to process in this frame
        int startIndex = currentBatchIndex * batchSize;
        int endIndex = Mathf.Min((currentBatchIndex + 1) * batchSize, enumerators.Count);

        if (startIndex >= enumerators.Count) return;

        for (int i = startIndex; i < endIndex; i++)
        {
            Vector3 worldPos = enumerators[i].transform.position;
            Vector2 objPos2D = new Vector2(worldPos.x, worldPos.z);
            float distSqr = (playerPos2D - objPos2D).sqrMagnitude;

            enumerators[i].UpdateLOD(distSqr, farClipSqr);
        }

        currentBatchIndex++;

        if (currentBatchIndex * batchSize >= enumerators.Count)
        {
            currentBatchIndex = 0;
        }
    }

    public void Register(Shader_LOD_Enumerator e)
    {
        if (!enumerators.Contains(e))
            enumerators.Add(e);
    }

    public void Unregister(Shader_LOD_Enumerator e)
    {
        enumerators.Remove(e);
    }
}