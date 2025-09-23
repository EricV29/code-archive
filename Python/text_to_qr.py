#Pograma que genera codigo QR a partir de texto.

import qrcode

# Texto que quieres convertir a QR
url = "Hola mundo"

# Crear el código QR
img = qrcode.make(url)

# Crear un nombre seguro para el archivo
nombre_archivo = "name.png"

# Guardar la imagen QR
img.save(nombre_archivo)

print(f"QR guardado como {nombre_archivo}")
