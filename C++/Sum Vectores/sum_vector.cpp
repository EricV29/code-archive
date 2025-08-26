//Programa que suma dos martrices//

#include <iostream>
using namespace std;

int main()
{

    int arr[4][4], arr2[4][4], f, c, arr3[4][2];

    for (f = 1;f <= 3;f++)
    {

        for (c = 1;c <= 3;c++)
        {
            std::cout << "\nIntroduce un numero para arreglo 1 \n"; cin >> arr[f][c];
            std::cout << "Introduce un numero para arreglo 2 \n"; cin >> arr2[f][c];
            arr3[f][c] = arr[f][c] + arr2[f][c];
        }
    }

    std::cout << "\nMATRIZ UNO\n\n";/////////////
    for (f = 1;f <= 3;f++)
    {

        for (c = 1;c <= 2;c++)
        {
            std::cout << arr[f][c] << "\t";
        }
        std::cout << "\n";
    }

    std::cout << "\nMATRIZ DOS\n\n";/////////////
    for (f = 1;f <= 3;f++)
    {

        for (c = 1;c <= 2;c++)
        {
            std::cout << arr2[f][c] << "\t";
        }
        std::cout << "\n";
    }

    std::cout << "\nSUMA DE MATRICES\n";
    std::cout << "\n\n";
    for (f = 1;f <= 3;f++)
    {

        for (c = 1;c <= 2;c++)
        {

            std::cout << arr3[f][c] << "\t";

        }
        std::cout << "\n";
    }
}


