.model small
.stack
.data
     d1 db 0
     d2 db 0
     sum db 0
     
     msg1 db 10,13,7, 'Suma: ','$'
     msg0 db 10,13,7, 'Ingresa un numero: ','$'
.code
     mov ax, seg @data
     mov ds, ax
     
     mov ah, 09h
     lea dx, msg0
     int 21h
     
     mov ah,01h
     int 21h
     sub al, 30h
     mov n1,al
     
     mov ah, 09h
     lea dx, msg0
     int 21h
     
     mov ah,01h
     int 21h
     sub al, 30h
     mov n2,al
     
     ;Suma
     mov al,n1
     add al,n2
     mov suma,al
     
     mov ah,09h
     lea dx,msg1
     int 21h
     
     mov al,suma
     AAM
     mov bx,ax
     mov ah,02h
     mov dl,bh
     add dl,20h
     int 21h
     
     mov ah,02h
     mov dl,bl
     add dl,20h
     int 21h
     
     .exit
end
     