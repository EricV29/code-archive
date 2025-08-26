#Programa que descarga archivos MP3.

import yt_dlp
import os

def descargarmusic(url, carpeta="mp3Files"):
    try:
        if not os.path.exists(carpeta):
            os.makedirs(carpeta)
        opciones={
            'format': 'bestaudio/best',
            'outtmpl': f'{carpeta}/%(title)s.%(ext)s'
        }
        print("Descargando archivo...")
        with yt_dlp.YoutubeDL(opciones) as ydl:
            ydl.download([url])
            print("Descarga completada")
    except Exception as e:
        print(f"Ocurrio un error: {e}")
if __name__ == "__main__":
    url = input("Ingrese su enlace del video: ")
    descargarmusic(url)