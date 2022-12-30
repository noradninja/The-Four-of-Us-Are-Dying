using UnityEngine;
using DevTools.AuxiliaryFunctions;
 
namespace WSCG.Rendering.LOD
{ 
    public class LODSystemForMeshRenderer : MonoBehaviour
    {
        public Camera playerCamera;
 
        [SerializeField] MeshRenderer LOD0;
        [SerializeField] MeshRenderer LOD1;
        [SerializeField] MeshRenderer LOD2;
 
        float distance;
 
        bool LOD2Enabled = false;
        bool LOD1Enabled = false;
        bool LOD0Enabled = false;
 
        private void Reset()
        {
 
            if (!playerCamera)
                playerCamera = Camera.main;
 
            if (!LOD0)
                LOD0 = GetChildByName.getChildGameObject(gameObject, "LOD0").GetComponent<MeshRenderer>();
 
            if (!LOD1)
                LOD1 = GetChildByName.getChildGameObject(gameObject, "LOD1").GetComponent<MeshRenderer>();
 
            if (!LOD2)
                LOD2 = GetChildByName.getChildGameObject(gameObject, "LOD2").GetComponent<MeshRenderer>();
 
            SetLOD();
 
        }
 
        void Update()
        {
            distance = Vector3.Distance(playerCamera.transform.position, this.transform.position);
            SetLOD();
        }
 
        private void SetLOD()
        {
            if (distance <= 5)
            {
                DisableAll();
                EnableLOD0();
            }
            if (distance > 5 && distance <= 10)
            {
                DisableAll();
                EnableLOD1();
            }
            if (distance > 10 && distance <= 15)
            {
                DisableAll();
                EnableLOD2();
            }
            if (distance > 30)
            {
                DisableAll();
            }
        }
 
        private void EnableLOD2()
        {
            LOD2.enabled = true;
        }
 
        private void EnableLOD1()
        {
            LOD1.enabled = true;
        }
 
        private void EnableLOD0()
        {
            LOD0.enabled = true;
        }
 
        void DisableAll()
        {
            LOD0.enabled = false;
            LOD1.enabled = false;
            LOD2.enabled = false;
        }
    }
}
 
namespace DevTools.AuxiliaryFunctions
{
    public class GetChildByName : MonoBehaviour
    {
        static public GameObject getChildGameObject(GameObject gameObjectToCheck, string nameToLookFor)
        {
            //Author: Isaac Dart, June-13.
            Transform[] ts = gameObjectToCheck.transform.GetComponentsInChildren<Transform>();
            foreach (Transform t in ts) if (t.gameObject.name == nameToLookFor) return t.gameObject;
            return null;
        }
    }
}