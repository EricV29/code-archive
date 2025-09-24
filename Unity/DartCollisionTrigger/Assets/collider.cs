using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class collider : MonoBehaviour
{

    public AudioSource emite;
    public AudioClip sonido;
    public float volumen;

    private void OnTriggerEnter(Collider obj)
    {
        emite.PlayOneShot(sonido,volumen);
    }
}
