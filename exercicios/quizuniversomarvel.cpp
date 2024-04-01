#include <iostream> // Biblioteca para entrada e saída de dados em C++

// Função para calcular a média aritmética simples de três pontuações
double calcularMedia(double pontuacao1, double pontuacao2, double pontuacao3)
{
    // Calcula a média das três pontuações
    double media = (pontuacao1 + pontuacao2 + pontuacao3) / 3.0;
    return media; // Retorna a média calculada
}

int main()
{
    double pontuacao1, pontuacao2, pontuacao3;

    // Solicita ao jogador as pontuações das três perguntas
    std::cout << "Insira a pontuacao da primeira pergunta: ";
    std::cin >> pontuacao1;
    std::cout << "Insira a pontuacao da segunda pergunta: ";
    std::cin >> pontuacao2;
    std::cout << "Insira a pontuacao da terceira pergunta: ";
    std::cin >> pontuacao3;

    // Calcula a média das pontuações
    double media = calcularMedia(pontuacao1, pontuacao2, pontuacao3);

    // Exibe a pontuação média
    std::cout << "Sua pontuacao media no quiz do Universo Marvel e: " << media << std::endl;

    return 0; // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
