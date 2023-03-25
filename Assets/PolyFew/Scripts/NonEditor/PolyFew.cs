using UnityEngine;

namespace BrainFailProductions.PolyFew
{
    public class PolyFew : MonoBehaviour
    {
#if UNITY_EDITOR

        [SerializeField]
        [HideInInspector]
        public DataContainer dataContainer;

        public PolyFew()
        {
            if(dataContainer == null)
            {
                dataContainer = new DataContainer();
            }
        }

        void Start() { }

#endif
    }
}
