#include <iostream>

int main() {
    // Velocidade inicial em m/s
    double velocidade_inicial = 20.0;

    // Gravidade em m/s^2
    double gravidade = 9.8;

    // Calcula a altura máxima usando a fórmula Altura máxima = (Velocidade inicial)² / (2 * Gravidade)
    double altura_maxima = (velocidade_inicial * velocidade_inicial) / (2 * gravidade);

    // Exibe a altura máxima do objeto
    std::cout << "A altura maxima alcancada pelo objeto e: " << altura_maxima << " metros" << std::endl;

    return 0;
}
