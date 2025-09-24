using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class activarP : MonoBehaviour
{
    public GameObject particula;
    void Start()
    {
        particula.SetActive(false);
    }

    private void OnTriggerEnter(Collider obj)
    {
        particula.SetActive(true);
    }
}
