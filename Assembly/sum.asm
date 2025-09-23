pila segment para stack "stack"
dw 32 dup (0)
pila ends
datos segment para "datos"
num1 dw 20
num2 dw 30
num3 dw ?
datos ends
codigo segment para "codigo"
empieza proc far
        assume cs: codigo, ds: datos, ss:pila
mov ax,datos
mov ds,ax
mov ax,num1
add ax,num2
mov num3,ax
mov dx,num3
mov ax, 4C00H
int 21H
;empieza endp
codigo ends
end empieza