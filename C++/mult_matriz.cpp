//Programa que multiplica MTRICES//

#include <iostream>
using namespace std;

/*
MATRIZ A = FILAS: f1 COLUMNAS: m
MATRIZ B = FILAS: m COLUMNAS: c2
MATRIZ C = FILAS: f1 COLUMNAS: c2
*/

int main()
{
    int A[30][30], B[30][30], C[30][30], fila, col, f1 = 0, m = 0, c2 = 0, m1 = 0;

    do
    {
        do
        {
            do
            {
                do
                {
                    do
                    {
                        
                        std::cout << "\n\n\t\tPROGRAMA QUE MULTIPLICA 2 MATRICES";std::cout << "\n";
                        std::cout << "\n\n\tDe que rango deseas que sea la MATRIZ A"; std::cout << "?(menor de 30 x 30)";
                        std::cout << "\n\tFilas para MATRIZ A "; std::cin >> f1;
                        std::cout << "\n\tColumnas para MATRIZ A ";std::cin >> m;

                        std::cout << "\n\tDe que rango deseas que sea la MATRIZ B";std::cout << "(menor de 30 x 30)";
                        std::cout << "\n\tFilas para MATRIZ B ";std::cin >> m1;
                        std::cout << "\n\tColumnas para MATRIZ A ";std::cin >> c2;

                        if (f1 <= 0 || f1 > 30) { std::cout << "\n\n\tLOS VALORES NO ESTAN DENTRO DEL RANGO ESPECIFICADO EN FILAS (A";std::cout << ")\n";  }
                    } while (f1 <= 0 || f1 > 30);

                    if (m <= 0 || m > 30) { std::cout << "\n\n\tLOS VALORES NO ESTAN DENTRO DEL RANGO ESPECIFICADO EN COLUMNAS (A";std::cout << ")";std::cout << " o (B";std::cout << ")\n";  }
                } while (m <= 0 || m > 30);

                if (m1 <= 0 || m1 > 30) { std::cout << "\n\n\tLOS VALORES NO ESTAN DENTRO DEL RANGO ESPECIFICADO EN COLUMNAS (A";std::cout << ")";std::cout << " o (B";std::cout << ")\n";  }
            } while (m1 <= 0 || m1 > 30);

            if (c2 <= 0 || c2 > 30) { std::cout << "\n\n\tLOS VALORES NO ESTAN DENTRO DEL RANGO ESPECIFICADO EN (B)\n";  }
        } while (c2 <= 0 || c2 > 30);

        if (m != m1) {
            std::cout << "\n\t TU ARREGLO NO ES POSIBLE DE MULTIPLICARSE YA QUE NO CUENTA CON LA MISMA COLUMNA DE A Y FILA DE B";std::cout << "\n";
        }
    } while (m != m1);

    std::cout << "\n\t TU ARREGLO ES POSIBLE DE MULTIPLICARSE";std::cout << "\n\t";    

    //ARREGLO1 A//
    for (fila = 1;fila <= f1;fila++)
    {
        for (col = 1;col <= m;col++)
        {
            std::cout << "\n\tCapture los valores para el arreglo A";std::cout << "[" << fila << "][" << col << "]: ";std::cin >> A[fila][col];
        }
    }

    //ARREGLO2 B//
    for (fila = 1;fila <= m;fila++)
    {
        for (col = 1;col <= c2;col++)
        {
            std::cout << "\n\tCapture los valores para el arreglo B";std::cout << "[" << fila << "][" << col << "]: ";std::cin >> B[fila][col];
        }
    }

    std::cout << "\n";

    //INICIALIZAR MATRIC C//

    for (fila = 1;fila <= f1;fila++)
    {
        for (col = 1;col <= c2;col++)
        {
            C[fila][col] = 0;
        }
    }

    //ARREGLO DE MATRIZ C//
    for (fila = 1;fila <= f1;fila++)
    {
        for (col = 1;col <= c2;col++)
        {
            for (int w = 1;w <= m;w++)
            {
                C[fila][col] += A[fila][w] * B[w][col];
            }
        }
    }

    //MOSTRAR MATRIZ C//
    
    std::cout << "\n\t MATRIZ C";std::cout << "\n\n";
    for (fila = 1;fila <= f1;fila++)
    {
        for (col = 1;col <= c2;col++)
        {
            std::cout << "\t";std::cout << C[fila][col];std::cout << "\t";
        }
        std::cout << "\n";
    }

    
}