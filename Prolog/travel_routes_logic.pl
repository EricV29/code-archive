ruta(df,cuernavaca,100).
ruta(cuernavaca,acapulco,300).
recorrido_corto(X,Y,A):-ruta(X,Y,A).
recorrido_largo(X,Z,C):-ruta(X,Y,A),ruta(Y,Z,B),C is A+B.

