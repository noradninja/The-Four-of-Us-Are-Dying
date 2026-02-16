// FPS_Counter.cs
using System;
using UnityEngine;
using UnityEngine.UI;

#if !UNITY_EDITOR
using UnityEngine.PSVita;
#endif

public class FPS_Counter : MonoBehaviour
{
    public Text fpsText;
    public int frameRange = 60;
    public float updateInterval = 0.5f;

    public int maxFPS;
    public int minFPS;

    float accum = 0.0f;
    int frames = 0;
    float timeleft;

    int[] fpsBuffer;
    int fpsBufferIndex;

    public static float averageFPS;
    public float msFrame;

    public Text vramText;
    public Text ramText;

    void Start()
    {
        timeleft = updateInterval;
    }

    void Update()
    {
        timeleft -= Time.unscaledDeltaTime;
        accum += Time.timeScale / Time.unscaledDeltaTime;
        ++frames;

        if (fpsBuffer == null || fpsBuffer.Length != frameRange)
            InitializeBuffer();

        UpdateBuffer();
        CalculateFPS();

        // Interval ended - update GUI text and start new interval
        if (timeleft <= 0.0f)
        {
            // NOTE: averageFPS is maintained by CalculateFPS() each frame.
            float safeFps = Mathf.Max(0.01f, averageFPS);
            msFrame = (1.0f / safeFps) * 1000.0f;

            timeleft = updateInterval;
            accum = 0.0f;
            frames = 0;

            fpsText.text =
                (Mathf.Clamp(Mathf.RoundToInt(averageFPS), 0, 60).ToString("F0") +
                 " FPS Average / " + msFrame.ToString("F2") + " ms/frame" +
                 Environment.NewLine + "Max (Life): " + maxFPS + " / Min (Prev sec): " + minFPS);

#if !UNITY_EDITOR
            float VRAMValue = UnityEngine.PSVita.Diagnostics.GetFreeMemoryCDRAM();
            decimal VRAMFree = Math.Round((decimal)(VRAMValue / 1000000), 2);
            decimal calcVRAM = (((128 - VRAMFree) / 128) * 100);
            decimal percentVRAM = Math.Round((decimal)calcVRAM, 2);

            float RAMValue = UnityEngine.PSVita.Diagnostics.GetFreeMemoryLPDDR();
            decimal RAMFree = Math.Round((decimal)(RAMValue / 1000000), 2);
            decimal calcRAM = (((512 - RAMFree) / 512) * 100);
            decimal percentRAM = Math.Round((decimal)calcRAM, 2);

            vramText.text = ("VRAM: " + VRAMFree + "MB Free");
            ramText.text = ("RAM: " + RAMFree + "MB Free");

            if (percentVRAM > 75) vramText.color = Color.red;
            else if (percentVRAM > 50) vramText.color = Color.yellow;
            else vramText.color = Color.green;

            if (percentRAM > 75) ramText.color = Color.red;
            else if (percentRAM > 50) ramText.color = Color.yellow;
            else ramText.color = Color.green;

            if (Mathf.RoundToInt(averageFPS) > 24) fpsText.color = Color.green;
            else fpsText.color = Color.red;
#else
            if (vramText != null) vramText.text = ("VRAM: Unavailable");
            if (ramText != null) ramText.text = ("RAM: Unavailable");
#endif
        }
    }

    void InitializeBuffer()
    {
        if (frameRange <= 0) frameRange = 1;
        fpsBuffer = new int[frameRange];
        fpsBufferIndex = 0;
    }

    void UpdateBuffer()
    {
        // guard against div0 when paused
        float dt = Mathf.Max(0.000001f, Time.unscaledDeltaTime);
        fpsBuffer[fpsBufferIndex++] = (int)(1f / dt);
        if (fpsBufferIndex >= frameRange) fpsBufferIndex = 0;
    }

    void CalculateFPS()
    {
        int sum = 0;
        int highest = 0;
        int lowest = int.MaxValue;

        for (int i = 0; i < frameRange; i++)
        {
            int fps = fpsBuffer[i];
            sum += fps;
            if (fps > highest) highest = fps;
            if (fps < lowest) lowest = fps;
        }

        minFPS = lowest;
        averageFPS = (float)sum / (float)frameRange;

        // removed the "+1 lazy fix" so math is correct.
        if (highest > maxFPS) maxFPS = highest;
    }
}
