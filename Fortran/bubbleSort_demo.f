       PROGRAM ordena
       INTEGER :: aux, i, j
       INTEGER, PARAMETER ::NC=6
       INTEGER, DIMENSION(NC):: vec
       PRINT*, 'INGRESE 6 VALORES PARA EL ARREGLO(SEPARADOS CON INTRO)'
       READ*,vec
       WRITE(*,*)
       PRINT*, 'LOS VALORES INGRESADOS SON: '
       WRITE(*,*)vec
       WRITE(*,*)
       cantidad_parejas:DO i=NC-1,1,-1
                pareja:DO j=1,i
                          ordenar_pareja:IF(vec(j) > vec(j+1)) THEN
                                 aux=vec(j)
                                 vec(j)=vec(j+1)
                                 vec(j+1)=aux
                          END IF ordenar_pareja
                END DO pareja
       END DO cantidad_parejas
       WRITE(*,*) 'EL VECTOR ORDENADO ES'
       DO i=1,NC
          WRITE(*,*) vec(i)
       END DO
       WRITE(*,*)
       WRITE(*,*)(vec(i),i=1,NC)
       PAUSE
       END PROGRAM ordena
