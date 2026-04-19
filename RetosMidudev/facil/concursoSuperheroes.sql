/*
¡El Concurso de Superhéroes!
En la ciudad, se está organizando un concurso para elegir al mejor superhéroe. Los organizadores han creado una base de datos con los superhéroes registrados, y necesitan filtrar a aquellos que cumplen con ciertas condiciones. La tabla es la siguiente:

superheroe_id (int)
nombre (varchar)
poder (varchar)
anio_aparicion (int)
fuerza (int) (nivel de fuerza en una escala de 1 a 100)
Tu tarea es escribir una consulta que:
Seleccione el nombre del superhéroe y su poder.
Filtre a los superhéroes que aparecieron después de 1965 y tienen una fuerza mayor a 70.
¡Pero, atención! Solo los que cumplen con estas condiciones pueden pasar a la siguiente ronda. ¿Quién será el más fuerte?

Tabla: superheroes

superheroe_id	nombre	poder	anio_aparicion	fuerza
1	Superman	Vuelo, Superfuerza, Visión láser	1938	100
2	Batman	Inteligencia, Habilidad en combate	1939	85
3	Spider-Man	Agilidad, Sentido arácnido	1962	80
4	Iron Man	Tecnología avanzada, Fuerza	1963	75
5	Hulk	Fuerza sobrehumana, Resistencia	1962	100
6	Black Panther	Habilidad física, Agilidad	1966	85
7	Deadpool	Regeneración, Habilidad en combate	1991	75
8	Wonder Woman	Superfuerza, Vuelo	1941	90
9	Captain Marvel	Fuerza sobrehumana, Energía cósmica	1968	95
10	Scarlet Witch	Magia, Telequinesis	1964	80
*/

CREATE TABLE superheroes(
superheroe_id INT NOT NULL PRIMARY KEY,
nombre VARCHAR(50),
poder VARCHAR(50),
anio_aparicion INT,
fuerza INT,
CONSTRAINT check_rango_fuerza CHECK (fuerza >= 1 AND fuerza <= 100)
);

INSERT INTO superheroes (superheroe_id, nombre, poder, anio_aparicion, fuerza)
VALUES
    (1, 'Superman', 'Vuelo, Superfuerza, Visión láser', 1938, 100),
    (2, 'Batman', 'Inteligencia, Habilidad en combate', 1939, 85),
    (3, 'Spider-Man', 'Agilidad, Sentido arácnido', 1962, 80),
    (4, 'Iron Man', 'Tecnología avanzada, Fuerza', 1963, 75),
    (5, 'Hulk', 'Fuerza sobrehumana, Resistencia', 1962, 100),
    (6, 'Black Panther', 'Habilidad física, Agilidad', 1966, 85),
    (7, 'Deadpool', 'Regeneración, Habilidad en combate', 1991, 75),
    (8, 'Wonder Woman', 'Superfuerza, Vuelo', 1941, 90),
    (9, 'Captain Marvel', 'Fuerza sobrehumana, Energía cósmica', 1968, 95),
    (10, 'Scarlet Witch', 'Magia, Telequinesis', 1964, 80);


SELECT nombre, poder 
FROM superheroes
WHERE anio_aparicion > 1965 AND fuerza > 70;