ORG 2000h
       MOV AX,02H
       MOV BX,3H
PON:   ADD CX,AX
       DEC BX
       JNZ PON
       
       MOV AX, CX
       MOV BX, 2H
PON:   ADD CX,AX
       DEC BX
       JNZ PON

       MOV AX, CX
       MOV BX, 2H
PON:   ADD CX,AX
       DEC BX
       JNZ PON

       MOV AX, CX
       MOV BX, 2H
PON:   INC CX
       SUB AX, BX
       JNZ PON

END
END