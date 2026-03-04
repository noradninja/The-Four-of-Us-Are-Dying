#if UNITY_EDITOR
using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(Weather_Manager))]
public class Weather_ManagerEditor : Editor
{
    private bool showPreview = true;

    private const int kSamples = 128;

    // Preview controls
    private float previewRmsMaxMul = 2.0f;
    private bool showInfluenceCurve = true;

    // Live controls
    private bool showLiveMarker = true;
    private bool showLiveGuides = true;

    // History (editor only)
    private const int kHistoryLength = 160;

    // Trails:
    // - windOut (green)
    // - wind01  (cyan)
    // - influence (orange) DISPLAY-NORMALIZED to 0..1 for visibility
    private float[] histWindOut = new float[kHistoryLength];
    private float[] histWind01 = new float[kHistoryLength];
    private float[] histInfluence = new float[kHistoryLength];
    private int histIndex = 0;

    private float peakHold = 0f;
    private float peakHoldTimer = 0f;
    private const float peakHoldDuration = 1.25f;

    // For editor-time dt
    private double lastEditorTime = -1.0;

    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();

        var wm = (Weather_Manager)target;

        EditorGUILayout.Space();
        showPreview = EditorGUILayout.Foldout(showPreview, "Wind Curve Preview", true);
        if (!showPreview) return;

        using (new EditorGUILayout.VerticalScope("box"))
        {
            previewRmsMaxMul = EditorGUILayout.Slider(
                "Preview RMS Range (xMax = expectedMax * mul)", previewRmsMaxMul, 0.5f, 5.0f);

            showInfluenceCurve = EditorGUILayout.Toggle("Overlay Influence Curve", showInfluenceCurve);

            EditorGUILayout.Space();
            showLiveMarker = EditorGUILayout.Toggle("Show Live Markers (Play Mode)", showLiveMarker);
            using (new EditorGUI.DisabledScope(!showLiveMarker))
            {
                showLiveGuides = EditorGUILayout.Toggle("Show Guide Lines", showLiveGuides);
            }

            var r = GUILayoutUtility.GetRect(10, 200, GUILayout.ExpandWidth(true));
            DrawGraph(r, wm);

            if (Application.isPlaying && showLiveMarker)
            {
                TickHistory(wm);
                Repaint();
            }
            else
            {
                lastEditorTime = -1.0;
            }
        }
    }

    private void TickHistory(Weather_Manager wm)
    {
        var now = EditorApplication.timeSinceStartup;
        var dt = 0f;
        if (lastEditorTime > 0.0) dt = (float)(now - lastEditorTime);
        lastEditorTime = now;

        var windOut = Mathf.Clamp01(wm.debugWindOut);
        var wind01 = Mathf.Clamp01(wm.debugWind01);

        histWindOut[histIndex] = windOut;
        histWind01[histIndex] = wind01;

        // Influence is often a tiny band (eg 0.15..0.2).
        // Normalize it for DISPLAY so the trail/dot are visible on a 0..1 graph.
        var infl = Mathf.Clamp01(Weather_Manager.currentInfluence);
        var infl01 = Mathf.InverseLerp(wm.influenceOutMin, wm.influenceOutMax, infl);
        infl01 = Mathf.Clamp01(infl01);
        histInfluence[histIndex] = infl01;

        histIndex = (histIndex + 1) % kHistoryLength;

        // Peak hold on windOut
        if (windOut > peakHold)
        {
            peakHold = windOut;
            peakHoldTimer = peakHoldDuration;
        }

        peakHoldTimer -= dt;
        if (peakHoldTimer <= 0f)
            // decay slowly toward current windOut
            peakHold = Mathf.Max(windOut, peakHold * 0.985f);
    }

    private void DrawGraph(Rect r, Weather_Manager wm)
    {
        EditorGUI.DrawRect(r, new Color(0.12f, 0.12f, 0.12f, 1f));
        Handles.BeginGUI();

        var pad = 10f;
        var g = new Rect(r.x + pad, r.y + pad + 14, r.width - pad * 2f, r.height - pad * 2f - 18);

        // Axes
        Handles.color = new Color(1f, 1f, 1f, 0.15f);
        Handles.DrawLine(new Vector3(g.x, g.yMax, 0), new Vector3(g.xMax, g.yMax, 0));
        Handles.DrawLine(new Vector3(g.x, g.y, 0), new Vector3(g.x, g.yMax, 0));

        // Grid
        Handles.color = new Color(1f, 1f, 1f, 0.08f);
        for (var i = 1; i <= 3; i++)
        {
            var t = i / 4f;
            var y = Mathf.Lerp(g.yMax, g.y, t);
            Handles.DrawLine(new Vector3(g.x, y, 0), new Vector3(g.xMax, y, 0));
        }

        var expectedMax = Mathf.Max(1e-6f, wm.windExpectedMaxRMS);
        var xMax = expectedMax * Mathf.Max(0.1f, previewRmsMaxMul);

        var label = EditorStyles.miniLabel;
        label.normal.textColor = new Color(1f, 1f, 1f, 0.75f);
        GUI.Label(new Rect(r.x + 10, r.y + 6, r.width - 20, 16),
            string.Format("X: RMS (0..{0:F3})   Y: 0..1    (solid dot = windOut)", xMax), label);

        // Curve colors
        var cWind01 = new Color(0.3f, 0.8f, 1.0f, 1f);
        var cWindOut = new Color(0.6f, 1.0f, 0.4f, 1f);
        var cInfl = new Color(1.0f, 0.75f, 0.3f, 1f);

        // Draw curves (sampling the real runtime formula)
        Vector3 prevA = Vector3.zero, prevB = Vector3.zero, prevC = Vector3.zero;

        for (var i = 0; i < kSamples; i++)
        {
            var u = kSamples == 1 ? 0f : i / (float)(kSamples - 1);
            var rms = Mathf.Lerp(0f, xMax, u);

            float wind01, windOut, infl;
            wm.EvaluateWindFromRms(rms, out wind01, out windOut, out infl);

            var pA = ToGraph(g, u, wind01);
            var pB = ToGraph(g, u, windOut);

            // Display-normalize influence so tiny runtime ranges are visible.
            var infl01 = Mathf.InverseLerp(wm.influenceOutMin, wm.influenceOutMax, infl);
            infl01 = Mathf.Clamp01(infl01);
            var pC = ToGraph(g, u, infl01);

            if (i > 0)
            {
                Handles.color = cWind01;
                Handles.DrawAAPolyLine(2f, prevA, pA);

                Handles.color = cWindOut;
                Handles.DrawAAPolyLine(2f, prevB, pB);

                if (showInfluenceCurve)
                {
                    Handles.color = cInfl;
                    Handles.DrawAAPolyLine(2f, prevC, pC);
                }
            }

            prevA = pA;
            prevB = pB;
            prevC = pC;
        }

        // Legend
        var lx = r.x + 12;
        var ly = r.yMax - 18;
        DrawLegendSwatch(lx, ly, cWind01, "wind01", label);
        lx += 90;
        DrawLegendSwatch(lx, ly, cWindOut, "windOut", label);
        lx += 95;
        if (showInfluenceCurve) DrawLegendSwatch(lx, ly, cInfl, "influence (norm)", label);

        // ===== Live history + markers =====
        if (Application.isPlaying && showLiveMarker)
        {
            // Peak hold line (windOut)
            Handles.color = new Color(1f, 0.3f, 0.3f, 0.35f);
            var p0 = ToGraph(g, 0f, peakHold);
            var p1 = ToGraph(g, 1f, peakHold);
            Handles.DrawLine(p0, p1);

            // History trails
            DrawHistoryTrail(g, histWind01, histIndex, new Color(0.3f, 0.8f, 1.0f, 0.25f), 2f);
            DrawHistoryTrail(g, histInfluence, histIndex, new Color(1.0f, 0.75f, 0.3f, 0.40f), 2.0f);
            DrawHistoryTrail(g, histWindOut, histIndex, new Color(0.6f, 1.0f, 0.4f, 0.55f), 2.5f);

            // Live dots at current RMS x-position
            // IMPORTANT: use the same RMS source used to compute windOut/wind01 in runtime (smoothed RMS)
            var liveRms = Mathf.Max(0f, wm.debugWindRmsSmoothed);
            var x01 = xMax <= 1e-6f ? 0f : Mathf.Clamp01(liveRms / xMax);

            var yWind01 = Mathf.Clamp01(wm.debugWind01);
            var yWindOut = Mathf.Clamp01(wm.debugWindOut);

            // Influence dot: display-normalized so it is visible
            var yInfl = Mathf.Clamp01(Weather_Manager.currentInfluence);
            var yInfl01 = Mathf.InverseLerp(wm.influenceOutMin, wm.influenceOutMax, yInfl);
            yInfl01 = Mathf.Clamp01(yInfl01);

            var dotWind01 = ToGraph(g, x01, yWind01);
            var dotWindOut = ToGraph(g, x01, yWindOut);
            var dotInfl = ToGraph(g, x01, yInfl01);

            if (showLiveGuides)
            {
                Handles.color = new Color(1f, 1f, 1f, 0.08f);
                Handles.DrawLine(new Vector3(dotWindOut.x, g.y, 0), new Vector3(dotWindOut.x, g.yMax, 0));
            }

            // Hollow = wind01
            DrawCircle(dotWind01, 5f, new Color(0.3f, 0.8f, 1.0f, 0.95f), false);

            // Hollow orange = influence (display-normalized)
            DrawCircle(dotInfl, 5f, new Color(1.0f, 0.75f, 0.3f, 0.95f), false);

            // Solid = windOut (requested)
            DrawCircle(dotWindOut, 4.5f, new Color(0.6f, 1.0f, 0.4f, 0.95f), true);

            // Live readout
            var live = new GUIStyle(EditorStyles.miniLabel);
            live.normal.textColor = new Color(1f, 1f, 1f, 0.92f);

            var msg =
                string.Format("LIVE  RMS={0:F4}  RMSsm={1:F4}  ", wm.debugWindRms, wm.debugWindRmsSmoothed) +
                string.Format("wind01={0:F3}  windOut={1:F3}  ", wm.debugWind01, wm.debugWindOut) +
                string.Format("inflTarget={0:F3}  inflSm={1:F3}", wm.debugInfluenceTarget,
                    Weather_Manager.currentInfluence);

            GUI.Label(new Rect(r.x + 10, r.y + 24, r.width - 20, 16), msg, live);
        }

        Handles.EndGUI();
    }

    private static void DrawHistoryTrail(Rect g, float[] data, int head, Color col, float width)
    {
        Handles.color = col;

        var n = data.Length;
        for (var i = 0; i < n - 1; i++)
        {
            var idxA = (head + i) % n;
            var idxB = (head + i + 1) % n;

            var xA = (float)i / (n - 1);
            var xB = (float)(i + 1) / (n - 1);

            var pA = ToGraph(g, xA, data[idxA]);
            var pB = ToGraph(g, xB, data[idxB]);

            Handles.DrawAAPolyLine(width, pA, pB);
        }
    }

    private static Vector3 ToGraph(Rect g, float x01, float y01)
    {
        var x = Mathf.Lerp(g.x, g.xMax, Mathf.Clamp01(x01));
        var y = Mathf.Lerp(g.yMax, g.y, Mathf.Clamp01(y01));
        return new Vector3(x, y, 0);
    }

    private static void DrawLegendSwatch(float x, float y, Color c, string text, GUIStyle style)
    {
        EditorGUI.DrawRect(new Rect(x, y + 5, 12, 2), c);
        GUI.Label(new Rect(x + 16, y, 120, 16), text, style);
    }

    // Draw small circles (not single pixels) for visibility
    private static void DrawCircle(Vector3 center, float radius, Color col, bool filled)
    {
        Handles.color = col;

        const int steps = 24;
        var pts = new Vector3[steps];
        for (var i = 0; i < steps; i++)
        {
            var a = i * Mathf.PI * 2f / steps;
            pts[i] = center + new Vector3(Mathf.Cos(a) * radius, Mathf.Sin(a) * radius, 0);
        }

        if (filled)
            Handles.DrawAAConvexPolygon(pts);
        else
            Handles.DrawAAPolyLine(2f, pts);
    }
}
#endif