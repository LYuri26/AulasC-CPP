#include <iostream>

int main() {
    // Velocidade do trem em km/h
    double velocidade = 80.0;

    // Tempo em horas
    double tempo_horas = 0.5; // 30 minutos é igual a 0.5 horas

    // Calcula a distância percorrida usando a fórmula D = V * T
    double distancia = velocidade * tempo_horas;

    // Exibe a distância percorrida pelo trem
    std::cout << "A distância percorrida pelo trem é de: " << distancia << " km" << std::endl;

    return 0;
}
