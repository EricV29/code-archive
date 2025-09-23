       PROGRAM operaciones
       
       REAL :: a,b,c
       CHARACTER (LEN=1) :: oper
       
       WRITE (*,*) 'DAME 2 NUMEROS'
       READ (*,*) a, b
       WRITE (*,*) 'DAME UNA OPERACION (+, -, *, /=d)'
       READ (*,*) oper
       
       IF (oper == '+') THEN
         c=a+b
         WRITE (*,*) 'C= ',c
       PAUSE
       ELSE IF (oper == '-') THEN
              c=a-b
       WRITE (*,*) 'C= ',c
       PAUSE
       ELSE IF (oper == '*') THEN
              c=a*b
       WRITE (*,*) 'C= ',c
       PAUSE
       ELSE IF (oper == 'd'  .AND. b /=0) THEN
              c=a/b
       WRITE (*,*) 'C= ',c
       PAUSE
       ELSE IF (oper == 'd' .AND. b==0) THEN
       WRITE (*,*) 'NO SE PUEDE DIVIDIR POR CERO'
       PAUSE
       
       ELSE
       WRITE (*,*) oper,' NO ES UNA OPERACION VALIDA'
       PAUSE

       END IF
       END PROGRAM operaciones
