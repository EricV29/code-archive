#Programa que calula el número de meses vividos hasta el día de hoy, a partir del mes y año de nacimiento.

#Resuelva el ejercicio implementando la siguiente funci�n:

from datetime import date

# Solicitar mes y año de nacimiento
mes = int(input("Ingrese su mes de nacimiento (mm): "))
anio = int(input("Ingrese su año de nacimiento (yyyy): "))

def obtener_meses_vividos(mes, anio):
    if mes < 1 or mes > 12:
        print("No existe ese mes")
        return
    
    hoy = date.today()
    años = hoy.year - anio
    meses = hoy.month - mes
    
    total_meses = años * 12 + meses
    print(f"Has vivido {total_meses} meses.")

obtener_meses_vividos(mes, anio)

    
    
    
