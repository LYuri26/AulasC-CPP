#include <iostream>

int main() {
    // Definindo as medidas do triângulo em metros e centímetros
    float base = 5.0;
    float alturacm = 800.0;

    // Convertendo a altura para metros (1 metro = 100 centímetros)
    float altura = alturacm / 100.0;

    // Calculando a área do triângulo
    float area = (base * altura) / 2.0;

    // Imprimindo o resultado
    std::cout << "A area do triangulo e: " << area << " metros quadrados" << std::endl;

    return 0;
}
