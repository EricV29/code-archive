       PROGRAM becas
       CHARACTER (len=10):: nom
       REAL :: prom,edad
       
       PRINT*, 'INGRESA TU NOMBRE:'
       READ(*,*) nom
       WRITE(*,*)
       PRINT*, 'INGRESA TU EDAD:'
       READ(*,*) edad
       WRITE(*,*)
       PRINT*, 'INGRESA TU PROMEDIO:'
       READ(*,*) prom
       WRITE(*,*)
       
       IF(edad > 18) THEN
         IF(prom>=9) THEN
           WRITE(*,*)'ALUMNO ',nom,' RECIBIRA UNA BECA DE 2000 PESOS'
           PAUSE
         ELSE IF(prom>=7.5 .AND. prom<9) THEN
              WRITE(*,*)'ALUMNO ',nom,' RECIBIRA UNA BECA DE 1000 PESOS'
              PAUSE
         ELSE IF(prom>=6 .AND. prom<7.5) THEN
               WRITE(*,*)'ALUMNO ',nom,' RECIBIRA UNA BECA DE 500 PESOS'
               PAUSE
         ELSE
         WRITE(*,*) 'ALUMNO ',nom,'SE LE ES INVITADO A ESTUDIAR MAS'
         WRITE(*,*) 'PARA EL PROXIMO CICLO RECIBIR UNA BECA'
         WRITE(*,*)
         PAUSE
         END IF
       
       ELSE IF(edad<=18) THEN
         IF(prom>=9) THEN
           WRITE(*,*)'ALUMNO ',nom,' RECIBIRA UNA BECA DE 3000 PESOS'
           PAUSE
         ELSE IF(prom>=8 .AND. prom<9) THEN
           WRITE(*,*)'ALUMNO ',nom,' RECIBIRA UNA BECA DE 2000 PESOS'
           PAUSE
         ELSE IF(prom>=6 .AND. prom<8) THEN
           WRITE(*,*)'ALUMNO ',nom,' RECIBIRA UNA BECA DE 1000 PESOS'
           PAUSE
         ELSE
         WRITE(*,*) 'ALUMNO ',nom,'SE LE ES INVITADO A ESTUDIAR MAS'
         WRITE(*,*) 'PARA EL PROXIMO CICLO RECIBIR UNA BECA'
         WRITE(*,*)
         PAUSE
         END IF
       END IF
       
       END PROGRAM becas
