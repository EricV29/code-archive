/*
🧙 El códice de Arkanus
Naira, una aprendiz de hechicera, ha encontrado un antiguo códice en las ruinas de Arkanus. Este códice está lleno de símbolos arcanos que, según los manuscritos, ocultan un poderoso conjuro olvidado. Para descifrar el conjuro, debe interpretar correctamente los símbolos según un antiguo sistema numérico mágico.

Estos son los símbolos conocidos y sus equivalencias:

Símbolo	Valor
☽	1
☾	5
♁	10
⚕	50
⚡	100

Pero cuidado: la energía mágica es caprichosa. Si un símbolo de menor valor aparece justo antes que uno de mayor valor, su energía se resta en lugar de sumarse.

Debes crear una función que reciba una cadena con los símbolos y retorne su valor numérico total. Si encuentras un símbolo desconocido, el conjuro se corrompe, y la función debe devolver NaN.
*/

const symbols = {
  "☽": 1,
  "☾": 5,
  "♁": 10,
  "⚕": 50,
  "⚡": 100,
};

function decodeSpell(spell) {
  let beforeValue = 0;
  let energy = 0;

  for (const x of spell) {
    const value = symbols[x];
    if (value === undefined) return NaN;

    if (beforeValue < value) {
      energy -= beforeValue;
      energy += value - beforeValue;
    } else {
      energy += value;
    }

    beforeValue = value;
  }

  return energy;
}

console.time("Tiempo del Reto");

const totalEnergy = decodeSpell(".");
console.log(totalEnergy);

console.timeEnd("Tiempo del Reto");
