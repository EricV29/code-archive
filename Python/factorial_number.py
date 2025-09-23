#Programa que muestra el FACTORIAL de un número

while True:
    try:
        num = int(input("Ingresa un número entero positivo: "))
        if num >= 0:
            break
        else:
            print("ERROR: Debe ser un número entero positivo.")
    except ValueError:
        print("ERROR: Debe ingresar un número entero válido.")

fact=1
if num !=0:
    for i in range (1,num+1):
         fact=fact*i

print(f"El factorial del número {num} es:", fact)
