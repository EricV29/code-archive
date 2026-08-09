import os
import logging.config
import re
from src.downloader import YoutubeDownloader
from src.utils import format_file_size
from src.exceptions import DownloadError
from config.settings import DOWNLOAD_DIR, LOGGING_CONFIG

logging.config.dictConfig(LOGGING_CONFIG)
logger = logging.getLogger(__name__)

YOUTUBE_RE = re.compile(
    r'^(https?://)?(www\.|m\.)?(youtube\.com|youtu\.be)/.+'
)


def main():
    try:
        url = input("Ingresa el link de YouTube: ").strip()
        if not url:
            raise DownloadError("No se ingresó ninguna URL")
        if not YOUTUBE_RE.match(url):
            raise DownloadError("La URL no parece ser de YouTube")

        downloader = YoutubeDownloader(DOWNLOAD_DIR)
        logger.info(f"Descargando audio desde: {url}")
        mp3_path = downloader.download(url)

        size = os.path.getsize(mp3_path)
        logger.info(f"MP3 guardado en: {mp3_path} (Tamaño: {format_file_size(size)})")
        print(f"\nMP3 descargado: {mp3_path} ({format_file_size(size)})")
    except DownloadError as e:
        logger.error(str(e))
    except Exception as e:
        logger.exception("Ocurrió un error inesperado")


if __name__ == "__main__":
    main()