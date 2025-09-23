       PROGRAM factorial
       INTEGER :: num,fact,i
       
       WRITE(*,*) 'DAME UN NUMERO'
       READ (*,*) num
       IF (num<0) THEN
          WRITE(*,*) 'NO EXISTE EL FACTORIAL DE UN NEGATIVO'
          PAUSE
        ELSE IF (num==0) THEN
             WRITE(*,*) 'EL FACTORIAL DE CERO ES UNO'
             PAUSE
        ELSE
            fact=1
            interno: DO i=num,1,-1
                fact=fact*i
                WRITE(*,*) 'RESULTADO PARCIAL',fact
            END DO interno
        WRITE(*,*) 'EL FACTORIAL DE',num,' ES ',fact
        READ(*,*)
        PAUSE
        END IF
        END PROGRAM factorial
