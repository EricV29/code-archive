#Programa que convierte una cadena que representa un número ROMANO en su equivalente ENTERO, implementando las reglas de la numeración romana.

class Solution:
    def romanToInt(self, s):
        roman_numerals = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }

        total = 0
        prev_value = 0

        try:
            for symbol in reversed(s):  # Recorrer de derecha a izquierda
                value = roman_numerals[symbol]
                if value < prev_value:
                    total -= value
                else:
                    total += value
                prev_value = value

            return total
        except KeyError:
            raise ValueError("El número romano ingresado es incorrecto")

# Ejemplo de uso
sol = Solution()
resultado = sol.romanToInt("V")
print(resultado)  # Imprime 4
