/*
El Club de Lectura 📚
Un club de lectura ha comenzado a registrar los libros que sus miembros han leído. Tienen una base de datos con una sola tabla:

libros: Contiene información sobre los libros leídos.
libro_id (int)
titulo (varchar)
autor (varchar)
anio_publicacion (int)
Tu tarea es escribir una consulta que:
Seleccione los títulos de los libros.
Filtre los libros cuyo título termine con la palabra “aventura”.
Ordene los resultados por el año de publicación, de más reciente a más antiguo.
Tabla: libros

libro_id	titulo	autor	anio_publicacion
1	Aventura en el espacio	Juan Pérez	2021
2	Alma gemela	Mateo Cutter	2022
3	Plantas y animales	Santiago Benjamin	2016
4	Aventurero de la noche	Joaquin Montero	1999
5	Todo tiene su historia	Mario Pérez	2017
6	La aventura de la selva	Carlos Díaz	2019
7	La vida invisible de Eddie LeRue	Sofía Ruiz	2023
8	Cuentos de aventura	Ana Gómez	2018
9	El diario de un aventurero	Luis Martínez	2020
10	Guerra mundial X	Julia Cruz	2015
11	Misterios de la aventura	Pedro Sánchez	2022
*/

CREATE TABLE libros(
libro_id INT NOT NULL PRIMARY KEY,
titulo VARCHAR(50),
autor VARCHAR(100),
anio_publicacion INT
);

INSERT INTO libros (libro_id, titulo, autor, anio_publicacion)
VALUES
    (1, 'Aventura en el espacio', 'Juan Pérez', 2021),
    (2, 'Alma gemela', 'Mateo Cutter', 2022),
    (3, 'Plantas y animales', 'Santiago Benjamin', 2016),
    (4, 'Aventurero de la noche', 'Joaquin Montero', 1999),
    (5, 'Todo tiene su historia', 'Mario Pérez', 2017),
    (6, 'La aventura de la selva', 'Carlos Díaz', 2019),
    (7, 'La vida invisible de Eddie LeRue', 'Sofía Ruiz', 2023),
    (8, 'Cuentos de aventura', 'Ana Gómez', 2018),
    (9, 'El diario de un aventurero', 'Luis Martínez', 2020),
    (10, 'Guerra mundial X', 'Julia Cruz', 2015),
    (11, 'Misterios de la aventura', 'Pedro Sánchez', 2022);


SELECT titulo 
FROM libros
WHERE titulo LIKE '%aventura'
ORDER BY anio_publicacion DESC;