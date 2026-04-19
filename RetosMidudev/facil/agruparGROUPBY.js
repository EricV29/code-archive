/*
Descripción:
El método groupBy() permite agrupar los elementos de un array en un objeto, usando una función que define cómo se agrupan.

Imagina que tienes una lista de productos de una tienda online. Cada producto tiene un name y una category.

Tu misión es completar la función groupProductsByCategory que debe devolver un objeto donde:

La key sea el nombre de la categoría,
El valor sea un array de productos que pertenecen a esa categoría.
Usa groupBy() para resolverlo de manera sencilla.


Casos de uso:
contexto	uso
Tienda online	Agrupar productos por categoría (ropa, tecnología, calzado)
Redes sociales	Agrupar publicaciones por tipo (imagen, video, texto)
Aplicación de tareas	Agrupar tareas por prioridad (alta, media, baja)
Emails	Agrupar correos por fecha o remitente
Aplicaciones de música	Agrupar canciones por artista o género
Gestión de proyectos	Agrupar issues por estado (abierto, en progreso, cerrado)
Finanzas	Agrupar transacciones por tipo (ingresos, gastos)
*/

function groupProductsByCategory(products) {
  return Object.groupBy(products, ({ category }) => category);
}

const result = groupProductsByCategory([
  { name: "Camiseta", category: "Ropa" },
  { name: "Pantalón", category: "Ropa" },
  { name: "Notebook", category: "Electrónica" },
  { name: "Auriculares", category: "Electrónica" },
  { name: "Zapatos", category: "Calzado" },
]);

console.log(result);
