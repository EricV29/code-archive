/*
Descripción:
En esta lección descubrimos cómo lanzar errores en JavaScript con más contexto, usando la nueva propiedad cause en los objetos Error.

Tu reto es completar la función obtenerProducto(id). Esta debe:

Lanzar un error y devolver el mensaje Hubo un error al obtener el producto de ID ${id} junto con la cause del error original.

Casos de uso:
Lanzar errores personalizados cuando una consulta es inválida.
Mostrar mensajes claros si el usuario envía datos erróneos.
Incluir más contexto en los errores para facilitar el debug.
Detectar causas raíz de errores sin perder el stack trace.
 */

async function obtenerProducto(id, callback) {
  try {
    const producto = await callback(id);
    return producto;
  } catch (err) {
    return {
      error: `Hubo un error al obtener el producto de ID ${id}`,
      cause: err,
    };
  }
}

obtenerProducto(1, () =>
  Promise.reject("No se pudo obtener el ID del producto"),
);
