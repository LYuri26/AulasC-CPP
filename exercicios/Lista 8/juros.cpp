#include <iostream>
#include <cmath>

// Função para calcular o montante final com juros simples
double calcularMontanteJurosSimples(double principal, double taxa, int tempo) {
    return principal * (1 + (taxa / 100) * tempo);
}

// Função para calcular o montante final com juros compostos
double calcularMontanteJurosCompostos(double principal, double taxa, int tempo) {
    return principal * pow((1 + taxa / 100), tempo);
}

int main() {
    double principal, taxa;
    int tempo;

    // Entrada de dados
    std::cout << "Valor inicial do investimento: R$ ";
    std::cin >> principal;
    std::cout << "Taxa de juros (em porcentagem): ";
    std::cin >> taxa;
    std::cout << "Período de tempo (em anos): ";
    std::cin >> tempo;

    // Cálculo dos montantes finais
    double montanteJurosSimples = calcularMontanteJurosSimples(principal, taxa, tempo);
    double montanteJurosCompostos = calcularMontanteJurosCompostos(principal, taxa, tempo);

    // Saída de dados
    std::cout << "Montante final do investimento com juros simples: R$ " << montanteJurosSimples << std::endl;
    std::cout << "Montante final do investimento com juros compostos: R$ " << montanteJurosCompostos << std::endl;

    return 0;
}
