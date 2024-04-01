#include <iostream> // Biblioteca para entrada e saída de dados em C++

// Função para converter a quantidade em galleons para reais brasileiros
double galleonsParaReais(double quantidadeGalleons)
{
    const double taxaConversao = 10.0; // Taxa de conversão de galleons para reais
    // Calcula o valor equivalente em reais
    double valorReais = quantidadeGalleons * taxaConversao;
    return valorReais; // Retorna o valor em reais
}

int main()
{
    double quantidadeGalleons;

    // Solicita ao usuário que insira a quantidade em galleons
    std::cout << "Insira a quantidade em Galleons: ";
    std::cin >> quantidadeGalleons;

    // Converte a quantidade em galleons para reais
    double valorReais = galleonsParaReais(quantidadeGalleons);

    // Exibe o valor equivalente em reais
    std::cout << quantidadeGalleons << " Galleons equivalem a " << valorReais << " reais brasileiros." << std::endl;

    return 0; // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
