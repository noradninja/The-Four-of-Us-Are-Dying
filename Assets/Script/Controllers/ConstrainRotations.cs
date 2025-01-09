using UnityEngine;

public class ConstrainRotations : MonoBehaviour
{
    // Define rotation limits for each axis
    public Vector3 minRotation = new Vector3(-45f, -30f, -60f); // Minimum angles (X, Y, Z)
    public Vector3 maxRotation = new Vector3(45f, 30f, 60f); // Maximum angles (X, Y, Z)

    private void LateUpdate()
    {
        // Get the current local rotation
        Vector3 localRotation = transform.localEulerAngles;

        // Normalize each axis
        localRotation.x = NormalizeAngle(localRotation.x);
        localRotation.y = NormalizeAngle(localRotation.y);
        localRotation.z = NormalizeAngle(localRotation.z);

        // Clamp the rotation for each axis
        localRotation.x = Mathf.Clamp(localRotation.x, minRotation.x, maxRotation.x);
        localRotation.y = Mathf.Clamp(localRotation.y, minRotation.y, maxRotation.y);
        localRotation.z = Mathf.Clamp(localRotation.z, minRotation.z, maxRotation.z);

        // Apply the constrained rotation back to the transform
        transform.localEulerAngles = localRotation;
    }

    // Helper method to normalize angles to the range [-180, 180]
    private float NormalizeAngle(float angle)
    {
        angle = angle % 360;
        if (angle > 180) angle -= 360;
        return angle;
    }
}