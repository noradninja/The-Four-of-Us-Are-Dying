using System.Runtime.InteropServices;

class UnityOC 
{
    private static readonly int DefaultArm = 333;
    private static readonly int DefaultBus = 111;
    private static readonly int DefaultGPU = 111;
    private static readonly int DefaultXbar = 111;

    [DllImport("libUnityOC")]
    public static extern int SetFrequencies(int cpu, int bus, int gpu, int xbar);

    public static void ResetFrequencies()
    {
        SetFrequencies(DefaultArm, DefaultBus, DefaultGPU, DefaultXbar); // Just to set them back
        SetFrequencies(-1, -1, -1, -1); // Now this will release our hooks, giving back control to Unity (or whatever controls clocks in this context)
    }
}
