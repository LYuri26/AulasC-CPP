#include <iostream>

int main() {
    int vetor_original[4];
    int vetor_invertido[4];

    std::cout << "Digite os elementos do vetor (4 elementos): ";
    for (int i = 0; i < 4; i++) {
        std::cin >> vetor_original[i];
    }

    // Copiando elementos de forma invertida para o vetor invertido
    for (int i = 0; i < 4; i++) {
        vetor_invertido[i] = vetor_original[3 - i];
    }

    std::cout << "Vetor original: ";
    for (int i = 0; i < 4; i++) {
        std::cout << vetor_original[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Vetor invertido: ";
    for (int i = 0; i < 4; i++) {
        std::cout << vetor_invertido[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
