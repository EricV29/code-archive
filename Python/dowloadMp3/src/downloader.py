import os
import re
import subprocess
import logging
import yt_dlp
from .exceptions import DownloadError

logger = logging.getLogger(__name__)

BANNER_RE = re.compile(
    r"\s*\((?:videoclip|video|official|official video|lyric|lyrics|audio|music video|"
    r"mv|clip|full|full video|4k|hd|remaster|re[- ]?master|oficial|letra|studio"
    r"|visualizer).*?\)\s*$",
    re.IGNORECASE,
)

TITLE_SPLIT_RE = re.compile(r"^(?P<artist>.+?) - (?P<title>.+)$")


def parse_metadata(info):
    """Completa artist/title cuando YouTube no los expone, parseando el titulo."""
    info = info or {}
    title = info.get('title') or ''
    artist = (info.get('artist') or '').strip()
    track = (info.get('track') or '').strip()
    if not artist or not track:
        match = TITLE_SPLIT_RE.match(title)
        if match:
            artist = artist or match.group('artist').strip()
            track = track or BANNER_RE.sub('', match.group('title')).strip()
    if not track:
        track = BANNER_RE.sub('', title).strip()
    info['artist'] = artist
    info['track'] = track
    if not info.get('album'):
        info['album'] = ''
    return info


class YoutubeDownloader:
    def __init__(self, output_dir, quality="192"):
        self.output_dir = output_dir
        self.ydl_opts = {
            'format': 'bestaudio/best',
            'outtmpl': os.path.join(output_dir, '%(title)s.%(ext)s'),
            'postprocessors': [
                {
                    'key': 'FFmpegExtractAudio',
                    'preferredcodec': 'mp3',
                    'preferredquality': quality,
                },
                {'key': 'EmbedThumbnail'},
            ],
            'writethumbnail': True,
            'noplaylist': True,
            'quiet': True,
            'no_warnings': True,
            'progress_hooks': [self._progress_hook],
        }
        self._final_file = None

    def _progress_hook(self, d):
        if d['status'] == 'finished':
            self._final_file = (
                d.get('filename')
                or d.get('filepath')
                or d.get('info_dict', {}).get('filepath')
            )

    def _find_newest_mp3(self):
        mp3s = [
            os.path.join(self.output_dir, f)
            for f in os.listdir(self.output_dir)
            if f.lower().endswith('.mp3')
        ]
        if not mp3s:
            return None
        return max(mp3s, key=os.path.getmtime)

    def _apply_tags(self, mp3_path, info):
        info = parse_metadata(info)
        metadata = [
            '-metadata', f'title={info["track"]}',
            '-metadata', f'artist={info["artist"]}',
        ]
        if info.get('album'):
            metadata += ['-metadata', f'album={info["album"]}']
        date = (info.get('release_date') or info.get('upload_date') or '')
        if date:
            date = f"{date[:4]}-{date[4:6]}-{date[6:8]}"
            metadata += ['-metadata', f'date={date}']
        tmp = mp3_path + '.tmp.mp3'
        cmd = ['ffmpeg', '-y', '-i', mp3_path, '-c', 'copy'] + metadata + [tmp]
        try:
            subprocess.run(cmd, check=True, capture_output=True)
            os.replace(tmp, mp3_path)
        except (subprocess.CalledProcessError, FileNotFoundError) as e:
            logger.warning(f"No se pudieron escribir los tags de {mp3_path}: {e}")

    def download(self, url):
        try:
            with yt_dlp.YoutubeDL(self.ydl_opts) as ydl:
                info = ydl.extract_info(url, download=True)
            final_file = self._final_file
            if not final_file or not os.path.exists(final_file):
                final_file = self._find_newest_mp3()
            if not final_file:
                raise DownloadError("No se pudo localizar el archivo MP3 final")
            self._apply_tags(final_file, info)
            self._final_file = final_file
            logger.info(f"Descargado correctamente: {final_file}")
            return final_file
        except DownloadError:
            raise
        except Exception as e:
            logger.error(f"Error al descargar {url}: {str(e)}")
            raise DownloadError(f"Error al descargar {url}: {str(e)}")