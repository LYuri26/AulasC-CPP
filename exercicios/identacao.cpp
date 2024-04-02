#include <iostream>

int main() {
    // Definindo as medidas da esfera e do furo em centímetros
    double raioExterno = 10.0;
    double raioFuro = 2.0;

    // Calculando o volume da esfera externa
    double volumeExterno = (4.0 / 3.0) * 3.14159 * raioExterno * raioExterno * raioExterno;

    // Calculando o volume da esfera com o furo
    double volumeFuro = (4.0 / 3.0) * 3.14159 * raioFuro * raioFuro * raioFuro;

    // Calculando o volume do furo
    double volumeFinal = volumeExterno - volumeFuro;

    // Imprimindo o resultado
    std::cout << "O volume calculado da esfera em centimetros cubicos: " << volumeFinal << std::endl;

    return 0;
}
