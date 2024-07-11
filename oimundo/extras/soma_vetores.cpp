#include <iostream>

int main() {
    int vetor1[4];
    int vetor2[4];
    int vetor_resultante[4];

    std::cout << "Digite os elementos do primeiro vetor (4 elementos): ";
    for (int i = 0; i < 4; i++) {
        std::cin >> vetor1[i];
    }

    std::cout << "Digite os elementos do segundo vetor (4 elementos): ";
    for (int i = 0; i < 4; i++) {
        std::cin >> vetor2[i];
    }

    for (int i = 0; i < 4; i++) {
        vetor_resultante[i] = vetor1[i] + vetor2[i];
    }

    std::cout << "Vetor resultante: ";
    for (int i = 0; i < 4; i++) {
        std::cout << vetor_resultante[i] << " ";
    }

    return 0;
}
