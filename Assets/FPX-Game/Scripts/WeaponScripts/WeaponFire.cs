using System.Collections;
using UnityEngine;
using TMPro;
using UnityEngine.InputSystem;
using Assets.FPX_Game.Scripts.TargetScripts;
using Assets.FPX_Game.Scripts.ScriptableObjects;
using Assets.FPX_Game.Scripts.ObjectPools;
using Assets.FPX_Game.Scripts.GameManagers;

namespace Assets.FPX_Game.Scripts.WeaponScripts
{
    public class WeaponFire : MonoBehaviour
    {

        [SerializeField] private TextMeshProUGUI ammotDisplay;
        [SerializeField] private AudioSource gunFireSound;
        [SerializeField] private ParticleSystem muzzleFlash, casing;
        [SerializeField] private GameObject impactPrefab, raycastOrigin;
        [SerializeField] private GunScriptableObject weaponScriptable;
        [SerializeField] private LayerMask layer;
        [SerializeField] private InputActionProperty triggerAction;
        [SerializeField] private InputActionProperty realeaseMagazineAction;
        [SerializeField] private InputActionProperty grabGunAction;


        private float _nextFire;
        private Rigidbody _rb;
        private void Start()
        {
            _rb = GetComponent<Rigidbody>();
        }
        private void Update()
        {
            ammotDisplay.text = weaponScriptable.currentAmo.ToString() + "/" + weaponScriptable.maxMag.ToString();

            if (triggerAction.action.IsPressed() && _rb.useGravity == false && weaponScriptable.currentAmo > 0)
            {
                if (Time.time > _nextFire)
                {
                    _nextFire = Time.time + weaponScriptable.fireRate;
                    shoot();
                    gunFireSound.Play();

                }


            }

            if (!triggerAction.action.IsPressed() && _rb.useGravity == false || weaponScriptable.currentAmo == 0)
            {
                gunFireSound.Stop();
            }



        }



        public void shoot()
        {
            Ray ray = new Ray(transform.position, transform.TransformDirection(Vector3.forward));



            if (weaponScriptable.currentAmo > 0)
            {
                muzzleFlash.Play();
                casing.Play();
                weaponScriptable.currentAmo--;
                ammotDisplay.text = weaponScriptable.currentAmo.ToString() + "/" + weaponScriptable.maxMag.ToString();
                if (Physics.Raycast(ray, out RaycastHit hittInfo, weaponScriptable.hitRange, layer))
                {
                    EnemyDamage damage = hittInfo.transform.GetComponent<EnemyDamage>();
                    Debug.DrawRay(transform.position, transform.TransformDirection(Vector3.forward) * hittInfo.distance, Color.blue);


                    GameObject impactPool = BulletImpactObjectPool.impactInstance.GetBulletImapctPool();

                    if (impactPool != null)
                    {
                        impactPool.transform.position = hittInfo.point;
                        impactPool.transform.forward = hittInfo.normal;
                        impactPool.transform.position += impactPool.transform.forward / 1000;

                        impactPool.SetActive(true);
                        StartCoroutine(ImpactSetActive(impactPool));
                    }


                    if (damage != null)
                    {
                        if (hittInfo.collider.tag == "EnemyBody")
                        {
                            damage.TakeDamage(weaponScriptable.damage);
                        }

                    }



                }
            }
        }

        IEnumerator ImpactSetActive(GameObject gameObject)
        {
            yield return new WaitForSeconds(1f);

            gameObject.SetActive(false);

        }



    }


}


