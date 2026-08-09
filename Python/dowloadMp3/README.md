# YouTube → MP3 Downloader

Descarga el audio de videos de YouTube y lo guarda como MP3 en la carpeta `downloads/`.

## Requisitos

- Python 3.9+
- [ffmpeg](https://ffmpeg.org/) instalado y disponible en el PATH (necesario para la conversión a MP3)
  - En Windows: `winget install Gyan.FFmpeg` y reinicia la terminal

## Instalación

```bash
pip install -r requirements.txt
```

## Uso

```bash
python main.py
```

Luego pega un link de YouTube cuando lo pida, por ejemplo:

```
Ingresa el link de YouTube: https://www.youtube.com/watch?v=dQw4w9WgXcQ
```

El MP3 queda en `downloads/` con el título del video. Los errores y el historial de descargas se registran en `logs/`.

## Estructura

```
config/settings.py    # Rutas (downloads/, logs/) y configuración de logging
main.py                # Punto de entrada: pide la URL y orquesta la descarga
src/
  downloader.py        # Descarga con yt-dlp y convierte a MP3 con ffmpeg
  utils.py             # Formato legible de tamaños de archivo
  exceptions.py        # Errores personalizados
requirements.txt       # Dependencias (yt-dlp)
```

## Cómo funciona

1. `main.py` valida que el link sea de YouTube.
2. `downloader.py` usa [yt-dlp](https://github.com/yt-dlp/yt-dlp) para obtener el mejor audio disponible y, con el postprocesador `FFmpegExtractAudio` (bitrate 192 kbps), lo convierte a MP3. Además incrusta la miniatura del video como portada.
3. `downloader.py` escribe los tags ID3 con ffmpeg: **título** (limpiado de etiquetas como "(Videoclip Oficial)"), **artista** (del campo de YouTube o, si no existe, parseado del título con el patrón `Artista - Título`), **año** y **álbum** cuando YouTube lo expone (si no, queda vacío). Como YouTube no siempre publica estos datos, algunos videos pueden no tener álbum.
4. `main.py` muestra la ruta final y el tamaño del archivo.

> Nota: los metadatos (artista, álbum) dependen de lo que YouTube exponga en cada video. Para videos sin esa información, el artista se deduce del nombre del título siempre que siga el formato `Artista - Título`.

## Nota legal

Descarga únicamente contenido que tengas derecho a descargar. Respeta los términos de servicio de YouTube y las leyes de derechos de autor de tu país.