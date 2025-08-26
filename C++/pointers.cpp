//Programa que demuestra el uso de apuntadores en C++, realizando operaciones básicas//

#include <iostream>
using namespace std;

void pedir(float& num2, float& num5);

int main() {
    cout << "APUNTADORES\n";

    // Declaración y asignación
    int num1 = 10;
    float num4 = 12.78;
    int* apuntador = &num1;
    float* apuntadorf = &num4;

    // Mostrar dirección
    cout << "\nDireccion de variables:\n";
    cout << "num1: " << apuntador << "\n";
    cout << "num4: " << apuntadorf << "\n";

    // Mostrar valor
    cout << "\nValor de variables:\n";
    cout << "num1: " << *apuntador << "\n";
    cout << "num4: " << *apuntadorf << "\n";

    // Sumar variables
    float suma = *apuntador + *apuntadorf;
    cout << "\nSuma: " << suma;
    cout << "\nDireccion de la suma: " << &suma << "\n";

    // Pedir valores al usuario
    float n1, n2;
    pedir(n1, n2);

    // Multiplicación
    float multi = n1 * n2;
    cout << "\nMultiplicacion: " << n1 << " * " << n2 << " = " << multi;
    cout << "\nDireccion de la multiplicacion: " << &multi << "\n";

    return 0;
}

void pedir(float& num2, float& num5) {
    cout << "\nIngresa un valor entero: ";
    cin >> num2;
    cout << "Ingresa un valor con decimal: ";
    cin >> num5;
}
