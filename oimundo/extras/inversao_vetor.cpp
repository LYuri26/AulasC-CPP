#include <iostream>

int main()
{
    int vetor[4];
    int temp;

    std::cout << "Digite os elementos do vetor (4 elementos): ";
    for (int i = 0; i < 4; i++)
    {
        std::cin >> vetor[i];
    }

    // Inversão do vetor começando de i = 4 e subtraindo
    for (int i = 4; i > 4 / 2; i--)
    {
        temp = vetor[4 - i];
        vetor[4 - i] = vetor[i - 1];
        vetor[i - 1] = temp;
    }

    std::cout << "Vetor invertido: ";
    for (int i = 0; i < 4; i++)
    {
        std::cout << vetor[i] << " ";
    }

    return 0;
}
