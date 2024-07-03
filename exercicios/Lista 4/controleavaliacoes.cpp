#include <iostream> // Biblioteca para entrada e saída de dados em C++

int main()
{
    const int MAX_NOTAS = 100; // Definindo o número máximo de notas
    double notas[MAX_NOTAS];   // Array para armazenar as notas
    int tamanho = 0;           // Variável para controlar o número atual de notas

    // Adicionando exemplos de notas
    notas[tamanho++] = 8.5;
    notas[tamanho++] = 7.9;
    notas[tamanho++] = 9.2;

    // Exibindo as notas e calculando a média
    std::cout << "Notas do Recruta:\n";
    double soma = 0.0;
    for (int i = 0; i < tamanho; ++i)
    {
        std::cout << "Habilidade " << i + 1 << ": " << notas[i] << std::endl; // Exibe cada nota
        soma += notas[i];                                                     // Soma as notas
    }

    // Calculando e exibindo a média geral
    if (tamanho > 0)
    {
        double media = soma / tamanho;
        std::cout << "Média Geral: " << media << std::endl;
    }
    else
    {
        std::cout << "Nenhuma nota adicionada.\n";
    }

    return 0; // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
