/*
Descripción:
El método .with() permite crear una copia de un array cambiando el valor de un índice específico, sin modificar el array original (no es mutable).

Tu misión es completar la función updateTask que recibe:

Un array de tareas,
Un índice,
Un nuevo nombre de tarea.
La función debe devolver un nuevo array con el nombre de la tarea actualizado en el índice indicado, usando .with(), y el array original que debe mantenerse intacto.

Condiciones:
Debes usar exclusivamente el método .with().
No modifiques el array original.
El índice siempre será válido (no te preocupes por errores)
Casos de uso:
.with() se usa cuando quieres actualizar un valor en un array de forma inmutable.
Es ideal en situaciones como: actualizar listas de tareas, modificar productos en un carrito de compras, actualizar estados en frameworks como React donde no debes mutar directamente los arrays.
 */

function updateTask(tasks, index, newTask) {
  return [tasks.with(index, newTask), tasks];
}

const result = updateTask(
  ["Comprar leche", "Pagar cuentas", "Llamar a mamá"],
  1,
  "Pagar alquiler",
);

console.log(result);
