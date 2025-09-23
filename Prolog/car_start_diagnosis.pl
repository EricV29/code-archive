bateria(funciona).
motor(enciende).
auto_caso1(arranca):-bateria(funciona), motor(enciende).
auto_caso2(arranca):-bateria(funciona), \+motor(enciende).
