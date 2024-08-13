#include <iostream>

int main() {
    double valor, taxaConversao, valorConvertido;

    // Solicitar valor e taxa de conversão
    std::cout << "Digite o valor a ser convertido: ";
    std::cin >> valor;
    std::cout << "Digite a taxa de conversão: ";
    std::cin >> taxaConversao;

    // Calcular valor convertido
    valorConvertido = valor * taxaConversao;

    // Exibir resultado
    std::cout << "Valor convertido: " << valorConvertido << std::endl;

    return 0;
}
