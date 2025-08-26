#Programa que compara el tiempo de ejecución de la búsqueda LINEAL y la búsqueda BINARIA en una lista ordenada de números aleatorios, demostrando la eficiencia de los algoritmos.

import random
import time


def busquedadi(lista, objetivo):
    for i in range(len(lista)):
        if lista[i] == objetivo:
            return i 
    return -1

def busquedadbi(lista, objetivo, limi = None, lims = None):
    if limi is None:
        limi = 0 #Inicio de la lista.
    if lims is None:
        lims = len(lista)-1 #Final de la lista.
    
    if lims < limi:
        return -1

    puntom = (limi + lims) // 2 #Operador // retorna la parte entera de la division.

    if lista[puntom] == objetivo:
        return puntom
    elif objetivo < lista[puntom]:
        return busquedadbi(lista, objetivo, limi, puntom-1)
    else:
        return busquedadbi(lista, objetivo, puntom+1, lims)


if __name__=='__main__':
    #Crear una lista ordenada con 1000 numeros aleatorios.
    tam = 100000
    conjuntoi = set()

    while len(conjuntoi) < tam:
        conjuntoi.add(random.randint(-3*tam, 3*tam))#Rango de -3000 hasta 3000.
    listao = sorted(list(conjuntoi)) #Hace una lista en orden ascendente con sorted.
    
    #Medicion de tiempo para busquedad ingenua.
    inicio = time.time() #Inicia el tiempo.
    for objetivo in listao:
        busquedadi(listao, objetivo)
    fin = time.time() #Termino la busquedad.
    print(f"Tiempo de busquedad ingenua: {fin - inicio} segundos.")# se resta el fin con el inicio para saber cuanto tardo.
    #Medicion de tiempo para busquedad binaria.
    inicio = time.time()
    for objetivo in listao:
         busquedadbi(listao, objetivo)
    fin = time.time()
    print(f"Tiempo de busquedad binaria: {fin - inicio} segundos,")