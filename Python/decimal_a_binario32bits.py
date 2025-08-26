#Programa que convierte decimal a binario (32 Bits) con punto flotante.

D1 = float(input('Ingresa el numero en decimal con punto flotante: '))
print("\n")
a = int(D1)
c = abs(D1) - abs(int(D1))
#print("\n", a, "\n")
#print(c)
#print("\n------------------\n")
i = []
dv=[]

i.append(int(a))
while a != 1:
  dv = a / 2
  i.append(int(dv))
  a = int(dv)
  #print(int(dv))

#print("\n-------------------\n")
#print(i)
#print("\n-------------------\n")
#print(len(i)-1) saber cuantos digitos tiene mi array

o = 0
b=[]

for o in range(len(i)):
 if i[o] % 2 == 0:
     b.append(0)
 else:
     b.append(1)

#print(b)
#print("\n-------------------\n")
#print(i)
#print(b)
b.reverse()
del b[0]
#Exponente

#print("\n-------------------\n")
lol = 0
if a > lol:
  lol = int(0)
else:
  lol = int(1)
#Signo

#print("\n-------------------\n")
z = int(0)
mult = float
m = []

for z in range(23):
    mult = c*2

    resenterobin = int(mult)
    m.append(int(resenterobin))

    c = abs(mult) - abs(int(mult))
    
#print(m)
#Binario fraccionario

#print("\n-------------------\n")
nor = int(len(i)-1)+1
#print(nor)
#print("\n----------------------------------------\n")
lst_str1 = str(b)[1:-1]
lst_str2 = str(m)[1:-1]
#print(lst_str1, ",", lst_str2)

#print("\n----------------------------------------\n")
y=int(0)
#print(m)
w = m[:]
#print(w)
w.reverse()
#print(w)

#print("\n----------------------------------------\n")
for y in range (nor):
    del w[0]
    #print (w)

w.reverse()
lst_str3 = str(w)[1:-1]
#print(lst_str1, ",", lst_str3)
#Normalizado

#print("\n----------------------------------------\n")
expo = int(0)
expo = 126 + nor
#print(bin(expo)[2:].zfill(8))
#Exponente

#print("\n----------------------------------------\n")
#print(w)
w.append(0)
lst_str3 = str(w)[1:-1]
#print(lst_str1, ",", lst_str3)
#Mantisa

#Unir partes
print("RESULTADO DE: ", D1, "A BINARIO ES: \n")
print("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n")
print(lol, bin(expo)[2:].zfill(8), lst_str1, lst_str3)
print("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>")

print("\n Nota: NO SUPER QUITARLE LAS COMAS -->,<-- CUANDO IMPRIME EL ARRAY, PERO ESTA BIEN EL RESULTADO")



