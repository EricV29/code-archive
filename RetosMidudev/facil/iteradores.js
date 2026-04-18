/*
Descripción
En esta lección aprenderemos a usar los iteradores de los arrays en JavaScript para recorrer elementos de forma controlada y eficiente, sin procesar todo el array de una vez.

Tu reto es implementar la función primerosEstudiantes(estudiantes) que debe:

Usar el método .values() para crear un iterador del array estudiantes.
Devolver un nuevo array con los dos primeros estudiantes obtenidos del iterador.
Si hay menos de dos estudiantes, devuelve solo los que existan.
Ejemplo de uso:

const estudiantes = [
  { id: 1, name: 'Ana' },
  { id: 2, name: 'Carlos' },
  { id: 3, name: 'Elena' },
]
 
const resultado = primerosEstudiantes(estudiantes)
console.log(resultado) // [{ id: 1, name: 'Ana' }, { id: 2, name: 'Carlos' }]
Casos de uso
Recorrer solo lo necesario de un array para mostrar primeros elementos.
Obtener datos de manera incremental sin cargar todo a memoria.
Evitar operaciones innecesarias en arrays grandes.
*/

const estudiantes = [
  { id: 1, name: "Ana" },
  { id: 2, name: "Carlos" },
  { id: 3, name: "Elena" },
];

function primerosEstudiantes(estudiantes) {
  const iterador = estudiantes.values();
  const array = [];

  for (let x = 0; x < 2; x++) {
    const obj = iterador.next();
    if (obj.done) break;
    array.push(obj.value);
  }

  return array;
}

const result = primerosEstudiantes(estudiantes);
console.log(result);
