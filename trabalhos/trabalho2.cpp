#include <iostream>

// Função para calcular o fatorial de um número
int fatorial(int totalElementos)
{
    int resultadoFatorial = 1; // Inicializa o resultado do fatorial como 1

    // Calcula o fatorial
    for (int i = 1; i <= totalElementos; i++)
    {
        resultadoFatorial *= i; // Multiplica o resultado do fatorial pelo valor atual de i
    }

    // Retorna o resultado do fatorial
    return resultadoFatorial;
}

// Função para calcular o arranjo simples
int arranjo(int totalElementos, int elementosEscolhidos)
{
    // Calcula o numerador do arranjo
    int numerador = fatorial(totalElementos);
    // Calcula o denominador do arranjo
    int denominador = fatorial(totalElementos - elementosEscolhidos);
    // Calcula o arranjo
    int resultadoArranjo = numerador / denominador;
    return resultadoArranjo;
}

int main()
{
    int totalElementos, elementosEscolhidos;

    // Solicita ao usuário que digite o número total de elementos no conjunto
    std::cout << "Digite o Número Total de Elementos no Conjunto: ";
    std::cin >> totalElementos;

    // Solicita ao usuário que digite o número de elementos a serem escolhidos para o arranjo
    std::cout << "Digite o número de Elementos a serem Escolhidos para o Arranjo: ";
    std::cin >> elementosEscolhidos;

    // Calcula o fatorial do número total de elementos
    int fatorialTotalElementos = fatorial(totalElementos);
    // Calcula o arranjo simples
    int arranjoSimples = arranjo(totalElementos, elementosEscolhidos);

    // Exibe o resultado do fatorial
    std::cout << "O fatorial de " << totalElementos << " é: " << fatorialTotalElementos << std::endl;
    // Exibe o resultado do arranjo simples
    std::cout << "O arranjo simples de " << totalElementos << " elementos escolhendo " << elementosEscolhidos << " é: " << arranjoSimples << std::endl;

    return 0;
}
