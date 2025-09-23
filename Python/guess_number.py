#Usuario adivida un numero generado por la computadora.

import random

def adivina(x):
    print("====================")
    print("Bienvenido al Juego!")
    print("====================")
    print("Tu meta es adivinar el número generado por la computadora.")

    numeroal = random.randint(1, x) #Genera numero aleatorio entre 1 y x

    predi = 0
    
    while predi != numeroal: 
        #El usuario ingresa un numero
        predi = int(input(f"Adivina un numero entre 1 y {x}: "))

        if predi < numeroal:
            print("Intenta otra vez, este número es muy pequeño.")
        elif predi > numeroal:
            print("Este número es muy grande, intenta de nuevo")
    
    print(f"Felicidades adividaste el número! El numero fue {numeroal}")


adivina(10)