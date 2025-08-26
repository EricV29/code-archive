#Programa que convierte un número entero decimal a su representación en sistema OCTAL.

def decimal_a_octal(decimal):
    if decimal == 0:
        return "0"
    octal = ""
    while decimal > 0:
        octal = str(decimal % 8) + octal
        decimal //= 8
    return octal

decimal = float(input("Ingresa un número decimal: "))
octal = decimal_a_octal(decimal)
print(f"El decimal {decimal} es {octal} en octal")