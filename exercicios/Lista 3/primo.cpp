#include <iostream> // Inclui a biblioteca para entrada e saída de dados

using namespace std;

// Função para verificar se um número é primo
int verificarPrimo(int numero)
{
    // Assume que o número é primo (1 = verdadeiro, 0 = falso)
    int ehPrimo = 1;

    if (numero <= 1) // Se o número for menor ou igual a 1, não é primo
    {
        ehPrimo = 0; // Define que não é primo
    }
    else
    {
        // Percorre todos os números de 2 até numero-1
        for (int i = 2; i < numero; ++i)
        {
            if (numero % i == 0) // Se o número for divisível por i, não é primo
            {
                ehPrimo = 0; // Define que não é primo
                break;       // Interrompe o loop, pois já sabemos que não é primo
            }
        }
    }

    return ehPrimo; // Retorna 1 se for primo, 0 se não for
}

int main()
{
    int numero; // Declaração da variável para armazenar o número fornecido pelo usuário

    // Solicita ao usuário que insira um número inteiro
    cout << "Digite um numero inteiro: ";
    cin >> numero; // Lê o número fornecido pelo usuário

    // Usa a função verificarPrimo para verificar se o número é primo e armazena o resultado
    int resultado = verificarPrimo(numero);

    // Exibe o resultado com base na variável resultado
    if (resultado)
        cout << "O numero " << numero << " eh primo.\n";
    else
        cout << "O numero " << numero << " nao eh primo.\n";

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}