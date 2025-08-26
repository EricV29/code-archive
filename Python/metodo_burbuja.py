#Metodo BURBUJA, ordenamiento de números por ARRAY.

while True:
    try:
        nnum = int(input("¿Cuántos números vas a ingresar? "))
        if nnum > 1:
            break
        else:
            print("ERROR: Debes ingresar un número mayor que 1.")
    except ValueError:
        print("ERROR: Debes ingresar un número entero válido.")
array = []

for i in range(nnum):
    numero = int(input(f"Ingresa un número ({i+1}):"))
    array.append(numero)

print("\nNumeros no ordenados:")
print(array)

for vuel in range(1, nnum):
    for pos in range(0, nnum-vuel):
        if (array[pos] > array[pos+1]):
            aux = array[pos]
            array[pos]=array[pos+1]
            array[pos+1]=aux

print("\nNumeros ordenados:")
print(array)
