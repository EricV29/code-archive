#Juego piedra, papel o tijera.

import random

def jugar():
    usuario = input("Escoge una opcion: 'pi' para pieda, 'pa' para papel y 'ti' para tijera.\n").lower()
    computadora = random.choice(['pi', 'pa', 'ti'])
    print(computadora)

    if usuario == computadora:
        return 'Empate!'

    if ganoj(usuario, computadora):
        return 'Ganaste!'

    return 'Perdiste!'


def ganoj(jugador, oponente):
    if ((jugador == 'pi' and oponente == 'ti') 
       or (jugador == 'ti' and oponente == 'pa') 
       or (jugador == 'pa' and oponente == 'pi')):
       return True
    else:
        return False


print(jugar())