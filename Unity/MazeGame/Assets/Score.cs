using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using static UnityEngine.ParticleSystem;

public class Score : MonoBehaviour
{
    //PUNTOS
    public int puntos = 101; // variable para almacenar el puntaje
    private Vector2 posEtiqueta = new Vector2(1, 1); // posición de la etiqueta en la pantalla
    private GUIStyle estiloEtiqueta = new GUIStyle(); // estilo de la etiqueta
    
    //GANASTE
    private Vector2 posetiWin = new Vector2(300, 200); // posición de la etiqueta en la pantalla
    private GUIStyle estetWin = new GUIStyle(); // estilo de la etiqueta

    //PERDISTE
    private Vector2 posetiLose = new Vector2(300, 200); // posición de la etiqueta en la pantalla
    private GUIStyle estetLose = new GUIStyle(); // estilo de la etiqueta

    public GameObject puerta;
    public GameObject puente;
    //AUDIOS
    public GameObject win;
    public GameObject lose;
    public GameObject come;
    public GameObject Akey;

    //FIN DEL JUEGO
    public FirstPersonMovement fin;

    // Start is called before the first frame update
    void Start()
    {
        estiloEtiqueta.fontSize = 25;// establecer el tamaño de fuente de la etiqueta PUNTOS
        //GANASTE
        estetWin.fontSize = 40;
        estetWin.normal.textColor = new Color(0, 0, 0, 0);// establecer el tamaño de fuente de la etiqueta WIN
        //PERDISTE
        estetLose.fontSize = 40;
        estetLose.normal.textColor = new Color(0, 0, 0, 0);// establecer el tamaño de fuente de la etiqueta WIN
        puente.SetActive(false);

    }

    void OnCollisionEnter(Collision col)
    {
        
        if (col.gameObject.CompareTag("Green"))
        {
            puntos += 130; // suma 10 puntos si el objeto es verde
            come.GetComponent<AudioSource>().Play();
            Destroy(col.gameObject); // destruye el objeto
        }
        else if (col.gameObject.CompareTag("Red"))
        {
            puntos -= 100; // resta 5 puntos si el objeto es rojo
            //Destroy(col.gameObject); // destruye el objeto
        }

        if (col.gameObject.CompareTag("key"))
        {
            puerta.SetActive(false);
            Akey.GetComponent<AudioSource>().Play();
            Destroy(col.gameObject); // destruye el objeto
        }

        if (col.gameObject.CompareTag("key2"))
        {
            puente.SetActive(true);
            Akey.GetComponent<AudioSource>().Play();
            Destroy(col.gameObject); // destruye el objeto
        }

        if (col.gameObject.CompareTag("meta"))
        {
            puntos += 300;
            Destroy(col.gameObject); // destruye el objeto
        }

        //PERDER
        if (col.gameObject.CompareTag("limite"))
        {
            estetLose.normal.textColor = Color.blue;
            lose.GetComponent<AudioSource>().Play();
            Invoke("CerrarAplicacion", 2f);
        }

        //GANASTE
        if (puntos >= 1000)
        {
            estetWin.normal.textColor = Color.green;
            win.GetComponent<AudioSource>().Play();
            Debug.Log("Reproduciendo audio: " + win.GetComponent<AudioSource>().clip.name);
            Invoke("CerrarAplicacion", 5f);
        }

        //PERDISTE
        if (puntos <= 0)
        {
            estetLose.normal.textColor = Color.blue;
            lose.GetComponent<AudioSource>().Play();
            Invoke("CerrarAplicacion", 2f);
        }

    }

    void OnGUI()
    {
        GUI.Label(new Rect(posEtiqueta.x, posEtiqueta.y, 200, 50), "VIDA: " + puntos, estiloEtiqueta);
        GUI.Label(new Rect(posetiWin.x, posetiWin.y, 200, 50), "YOU WIN", estetWin);
        GUI.Label(new Rect(posetiLose.x, posetiLose.y, 200, 50), "YOU LOSE!", estetLose);
    }

    void CerrarAplicacion()
    {
        fin.enabled = false;
    }
}
