#Programa que evalúa expresiones matemáticas en notación posfija (postfija / RPN) utilizando una pila para almacenar los operandos y aplicar los operadores.

class Main:
    pila = []
    top = 0

    @staticmethod
    def main(args):
        Main.top = 0
        print("Introduce una ecuación en notación posfija (sin espacios, solo dígitos y operadores + - * /):")
        equation = input()
        i = 0
        while i < len(equation):
            c = equation[i]
            if c == '+':
                op1 = Main.pop()
                op2 = Main.pop()
                Main.push(op2 + op1)
            elif c == '-':
                op1 = Main.pop()
                op2 = Main.pop()
                Main.push(op2 - op1)
            elif c == '*':
                op1 = Main.pop()
                op2 = Main.pop()
                Main.push(op2 * op1)
            elif c == '/':
                op1 = Main.pop()
                op2 = Main.pop()
                Main.push(op2 / op1)
            else:
                Main.push(float(c))
            i += 1

        print("El resultado es:", Main.pop())

    @staticmethod
    def push(dat):
        Main.pila.append(dat)
        Main.top += 1

    @staticmethod
    def pop():
        if Main.top == 0:
            raise IndexError("Pila vacía")
        Main.top -= 1
        return Main.pila.pop()


if __name__ == "__main__":
    Main.main([])
