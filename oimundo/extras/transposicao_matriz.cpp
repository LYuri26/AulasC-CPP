#include <iostream>

int main()
{
    int matriz[2][2];
    int transposta[2][2];

    std::cout << "Digite os elementos da matriz 2x2:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            transposta[j][i] = matriz[i][j];
        }
    }

    std::cout << "Matriz transposta 2x2:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << transposta[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
