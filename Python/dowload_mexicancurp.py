#Programa que descarga pdf CURP en México a partir del CURP.

from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.common.by import By
import time

# Función para elegir el CURP
def seleccionar_curp():
    print("Elige un CURP para descargar:")
    print("1: User1")
    print("2: User2")
    print("3: User3")
    
    while True:
        try:
            opcion = int(input("Ingresa el número del CURP (1, 2 o 3): "))
            if opcion == 1:
                return "User1"
            elif opcion == 2:
                return "User2"
            elif opcion == 3:
                return "User3"
            else:
                print("Opción no válida. Por favor, ingresa 1, 2 o 3.")
        except ValueError:
            print("Por favor, ingresa un número válido.")

# Obtener el CURP seleccionado
curp_seleccionado = seleccionar_curp()

# Configurar Chrome en modo headless
chrome_options = Options()
chrome_options.add_argument("--headless")  # Modo sin interfaz gráfica
chrome_options.add_argument("--disable-gpu")  # Necesario en algunas versiones de Windows
chrome_options.add_argument("--window-size=1920x1080")  # Tamaño de ventana virtual
chrome_options.add_argument("--no-sandbox")  # Previene errores en algunos sistemas
chrome_options.add_argument("--disable-dev-shm-usage")  # Previene problemas de memoria

# Inicializar el driver con opciones
driver = webdriver.Chrome(service=Service(), options=chrome_options)

# Abrir la página
driver.get("https://www.gob.mx/curp/")

# Encuentra el campo de CURP e ingresa el valor seleccionado
curp_input = driver.find_element(By.NAME, "curp")
curp_input.send_keys(curp_seleccionado)

# Simula el clic en el botón de búsqueda
boton = driver.find_element(By.ID, "searchButton")
boton.click()

# Espera que cargue la página
time.sleep(5)

# Simula el clic en el botón de descarga
boton = driver.find_element(By.ID, "download")
boton.click()

# Esperar a que el archivo se descargue
time.sleep(3)

print("✅CURP descargado con éxito.")

# Cierra el navegador
driver.quit()