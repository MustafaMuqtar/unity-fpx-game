using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Assets.FPX_Game.Scripts.ScriptableObjects;

namespace Assets.FPX_Game.Scripts.WeaponScripts
{
    public class GrabGun : MonoBehaviour
    {
        [SerializeField] private GameObject spawnPlace;
        [SerializeField] private Transform parent;
        [SerializeField] private Image icon;
        [SerializeField] private TextMeshProUGUI weapaonName;
        [SerializeField] private GunScriptableObject weaponScriptable;
        [SerializeField] private Button _button;
        [SerializeField] private GameObject[] weaponCanvas;

        private Rigidbody _rb;

        private void Start()
        {
            _rb = GetComponent<Rigidbody>();
        }


        private void Update()
        {
            spawnPlace.transform.position = spawnPlace.transform.position;
            spawnPlace.transform.rotation = spawnPlace.transform.rotation;

        }

        public void GrabThisGun()
        {

            icon.sprite = weaponScriptable.image;
            weapaonName.text = weaponScriptable.name.ToString();

            _button.interactable = true;


        }

        public void ReleaseWeapon()
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
                foreach (var item in weaponCanvas)
                {
                    if (item.activeInHierarchy)
                    {
                        item.SetActive(false);

                    }

                }
            }

            if (collision.gameObject.CompareTag("Table"))
            {
                Debug.Log("table");
                _rb.isKinematic = false;

            }

        }

    }
}