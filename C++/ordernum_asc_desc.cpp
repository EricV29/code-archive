//Programa que ordena números en forma ascendente y descendente//

#include <iostream>
using namespace std;

int main()
{
    int mp, numo;

    std::cout << "Cuantos numeros quieres ordenar: ";
    std::cin >> numo;

    int* ordnum = new int[numo];

    for (int i = 1;i <= numo;i++)
    {
        std::cout << "Ingresa el numero en (" << i << "): ";
        std::cin >> ordnum[i];
    }

    //ascendente//
    for (int i = 1;i <= numo;i++)
    {
        for (int j = i;j <= numo;j++)
        {

            //ascendente//
            if (ordnum[i] > ordnum[j])
            {
                mp = ordnum[i];
                ordnum[i] = ordnum[j];
                ordnum[j] = mp;
            }
        }
    }


    std::cout << "\nNumeros ordenados (Ascendente):\n";

    for (int i = 1;i <= numo;i++)
    {
        std::cout << ordnum[i] << "\n";
    }

    //descendente//
    for (int i = 1;i <= numo;i++)
    {
        for (int j = i;j <= numo;j++)
        {

            //descendente//
            if (ordnum[i] < ordnum[j])
            {
                mp = ordnum[i];
                ordnum[i] = ordnum[j];
                ordnum[j] = mp;
            }
        }
    }

    std::cout << "\nNumeros ordenados (Descendente):\n";

    for (int i = 1;i <= numo;i++)
    {
        std::cout << ordnum[i] << "\n";
    }
}