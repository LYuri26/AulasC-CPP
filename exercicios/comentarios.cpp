#include <iostream>

int main() {
    // Definindo as medidas do trapézio em metros
    double baseMaior = 6.0; // Definição da base maior do trapézio
    double baseMenor = 4.0; // Definição da base menor do trapézio
    double altura = 9.0;    // Definição da altura do trapézio

    // Calculando a área do trapézio
    double area = ((baseMaior + baseMenor) * altura) / 2.0; // Fórmula da área do trapézio

    // Imprimindo o resultado
    std::cout << "A area do trapezio em metros quadrados: " << area << std::endl;

    return 0;
}
