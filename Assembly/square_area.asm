ORG 2000h
       MOV AX,6H
       MOV BX,6H
PON:   ADD CX,AX
       DEC BX
       JNZ PON

END
END