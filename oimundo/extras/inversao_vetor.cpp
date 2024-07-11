#include <iostream>

int main() {
    int vetor[4];
    int temp;

    std::cout << "Digite os elementos do vetor (4 elementos): ";
    for (int i = 0; i < 4; i++) {
        std::cin >> vetor[i];
    }

    for (int i = 0; i < 4 / 2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[4 - 1 - i];
        vetor[4 - 1 - i] = temp;
    }

    std::cout << "Vetor invertido: ";
    for (int i = 0; i < 4; i++) {
        std::cout << vetor[i] << " ";
    }

    return 0;
}
