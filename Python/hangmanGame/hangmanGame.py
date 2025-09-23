import random
import string
from words import words
from DicVisualVidas import vidasdicv


def obte(palabras):
    palabra = random.choice(palabras)

    while '-' in palabra or ' ' in palabra:
        palabra = random.choice(palabras)
    
    return palabra.upper()


def ahorcado():
    print("================================")
    print("Bienvenido al juego del ahorcado")
    print("================================")

    palabra = obte(words)

    letraspa = set(palabra)
    abecedario = set(string.ascii_uppercase)
    letrasad = set()

    vidas = 7

    while len(letraspa) > 0 and vidas > 0:
        print(f"Te quedan {vidas} vidas y has usado estas letras: {' '.join(letrasad)}")

        #Muestra estado actual de la palabra.
        palabralista = [letra if letra in letrasad else '-' for letra in palabra]
        #Mostrar estado del ahorcado.
        print(vidasdicv[vidas])
        #Mostrar las letras.
        print(f"Palabra: {' '.join(palabralista)}")

        letrau = input("Escoje una letra: ").upper()
          
         #Si la letra escogida por el usuario esta en el abecedario y no esta en el conjunto de letras que ya se han ingresado, se anade la letra al conjunto de letras ingresadas. 
        if letrau in abecedario - letrasad:
            letrasad.add(letrau)

            #Si la letra está, eliminar del conjunto de letras por adivinar.
            if letrau in letraspa:
                letraspa.remove(letrau)
                print('')
            else:
                vidas -= 1
                print(f"\nTu letra, {letrau} no esta en la palabra.")
        #Si la letra escogida por el usuario ya fue ingresada.
        elif letrau in letrasad:
            print("\nYa escogiste esa letra, por favor escoge una letra nueva.")
        else:
            print("\nEsta letra no es valida.")
    
    #El juego llega a esta linea cuando se adivinan todas la letras de la palabra o cuando se agotan las vidas del jugador.
    if vidas == 0:
        print(vidasdicv[vidas])
        print(f"Ahorcado. Perdiste. Lo lamento mucho, la palabra era {palabra}")
    else:
        print(f"Excelente! Adivinaste la palabra {palabra}!")

ahorcado()
            
    