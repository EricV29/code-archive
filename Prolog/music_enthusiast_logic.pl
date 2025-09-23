tiene_guitarra.
esta_contento.
una(persona).
escucha_musica:-esta_contento.
escucha_musica:-tiene_radio.
toca_guitarra:-escucha_musica, tiene_guitarra.
esta_contento(X):-una(X).
quien_escucha_musica(X):-una(X).
contento_esta:-esta_contento.




