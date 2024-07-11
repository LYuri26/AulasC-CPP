#include <iostream>

int main() {
    int matriz1[2][2];
    int matriz2[2][2];
    int resultado[2][2] = {0};

    std::cout << "Digite os elementos da primeira matriz 2x2:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cin >> matriz1[i][j];
        }
    }

    std::cout << "Digite os elementos da segunda matriz 2x2:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    std::cout << "Resultado da multiplicação das matrizes 2x2:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << resultado[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
