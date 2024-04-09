#include <iostream>

// Função para calcular o fatorial de um número
int Fatorial(int totalElementos)
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
int ArranjoSimples(int totalElementos, int elementosEscolhidos)
{
    // Calcula o numerador do arranjoSimples
    int numerador = Fatorial(totalElementos);
    // Calcula o denominador do arranjoSimples
    int denominador = Fatorial(totalElementos - elementosEscolhidos);
    // Calcula o arranjoSimples
    int resultadoArranjoSimples = numerador / denominador;
    return resultadoArranjoSimples;
}

// Função para calcular a combinação simples
int CombinacaoSimples(int totalElementos, int subConjuntoDoTotalElementos)
{
    // Calcula o numerador da combinaçãoSimples
    int numerador = Fatorial(totalElementos);
    // Calcula o denominador da combinaçãoSimples
    int denominador = Fatorial(subConjuntoDoTotalElementos) * Fatorial(totalElementos - subConjuntoDoTotalElementos);
    // Calcula a combinaçãoSimples
    int resultadoCombinacaoSimples = numerador / denominador;
    return resultadoCombinacaoSimples;
}

int main()
{
    int totalElementos, elementosEscolhidos, subConjuntoDoTotalElementos;

    // Solicita ao usuário que digite o número total de elementos no conjunto
    std::cout << "Digite o Número Total de Elementos no Conjunto: ";
    std::cin >> totalElementos;

    // Solicita ao usuário que digite o número de elementos a serem escolhidos para o arranjo simples
    std::cout << "Digite o Número de Elementos a Serem Escolhidos para o Arranjo: ";
    std::cin >> elementosEscolhidos;

    // Solicita ao usuário que digite o número de elementos a serem escolhidos para o subconjunto
    std::cout << "Digite o Número de Elementos a Serem Escolhidos para o Subconjunto: ";
    std::cin >> subConjuntoDoTotalElementos;

    // Calcula o fatorial do número total de elementos
    int fatorialTotalElementos = Fatorial(totalElementos);
    // Calcula o arranjo simples
    int arranjoSimples = ArranjoSimples(totalElementos, elementosEscolhidos);
    // Calcula a combinação simples
    int combinacaoSimples = CombinacaoSimples(totalElementos, subConjuntoDoTotalElementos);

    // Exibe o resultado do fatorial
    std::cout << "O Fatorial de " << totalElementos << " é: " << fatorialTotalElementos << std::endl;
    // Exibe o resultado do arranjo simples
    std::cout << "O Arranjo Simples de " << totalElementos << " e o agrupamento " << elementosEscolhidos << " é: " << arranjoSimples << std::endl;
    // Exibe o resultado da combinação simples
    std::cout << "A Combinação Simples de " << totalElementos << " e subconjuntos " << subConjuntoDoTotalElementos << " é: " << combinacaoSimples << std::endl;

    return 0;
}
