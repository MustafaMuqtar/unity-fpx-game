using UnityEngine;


namespace Assets.FPX_Game.Scripts.WeaponScripts
{
    public class Magazine : MonoBehaviour
    {


        [SerializeField] private GameObject spawnPlace;
        [SerializeField] private Transform parent;

        private Rigidbody _rb;

        private void Awake()
        {
            _rb = GetComponent<Rigidbody>();
        }

        public void GrabMagazine()
        {
            _rb.isKinematic = false;
        }


        public void DropMagazine()
        {
            _rb.isKinematic = false;
        }

        private void OnCollisionEnter(Collision collision)
        {

            if (collision.gameObject.CompareTag("Floor"))
            {
                transform.SetParent(parent);

                gameObject.transform.position = spawnPlace.transform.position;
                gameObject.transform.rotation = spawnPlace.transform.rotation;

                _rb.isKinematic = true;

            }


        }
    }
}
