#include <iostream>

// Função para calcular a hipotenusa de um triângulo retângulo
double calcularHipotenusa(double catetoAdjacente, double catetoOposto) {
    // Calcula a hipotenusa usando o teorema de Pitágoras
    return catetoAdjacente * catetoAdjacente + catetoOposto * catetoOposto;
}

int main() {
    // Entrada dos comprimentos dos catetos
    double catetoAdjacente, catetoOposto;
    std::cout << "Comprimento do cateto adjacente: ";
    std::cin >> catetoAdjacente;
    std::cout << "Comprimento do cateto oposto: ";
    std::cin >> catetoOposto;

    // Cálculo da hipotenusa
    double hipotenusaAoQuadrado = calcularHipotenusa(catetoAdjacente, catetoOposto);

    // Saída dos resultados
    std::cout << "\nSaída:\n";
    std::cout << "Hipotenusa do triângulo retângulo: " << hipotenusaAoQuadrado << "\n";

    return 0;
}
