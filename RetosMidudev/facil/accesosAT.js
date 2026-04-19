/*
Descripción:
En JavaScript, el método .at() te permite acceder a un elemento de un array o string usando índices positivos o negativos. Los índices negativos empiezan a contar desde el final.

Tu misión es completar la función getLastMessage que recibe un array de mensajes (strings) y debe devolver el último mensaje usando el método .at().

Condiciones:
Debes usar exclusivamente .at() para obtener el último elemento.
El array siempre tendrá al menos un mensaje.
Casos de uso:
.at() es útil cuando quieres acceder rápidamente al primer o último elemento, sin necesidad de hacer .length - 1.
En apps de mensajería, chats, redes sociales, o notificaciones, se suele usar para traer el último mensaje, la última notificación o el primer elemento de una cola.
*/

function getLastMessage(messages) {
  return messages.at(-1);
}

const result = getLastMessage(["Hola", "¿Cómo estás?", "¡Nos vemos!"]);
console.log(result);
