#Programa genera un codigo QR apartir de texto.

import qrcode

text = "hola"

# Crear el objeto QR
img = qrcode.make(text)

# Ruta de guardado
ruta = "/Users/User/Documents/qr{}.png".format(text)

# Guardar la imagen QR
with open(ruta, "wb") as f:
    img.save(f)
