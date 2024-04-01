#include <iostream> // Inclui a biblioteca para entrada e saída de dados

using namespace std;

// Função para verificar se um número é primo
bool ehPrimo(int numero)
{
    if (numero <= 1)  // Se o número for menor ou igual a 1, não é primo
        return false; // Retorna false, indicando que o número não é primo
    for (int i = 2; i * i <= numero; ++i)
    {                        // Percorre de 2 até a raiz quadrada do número
        if (numero % i == 0) // Se o número for divisível por algum número entre 2 e sua raiz quadrada, não é primo
            return false;    // Retorna false, indicando que o número não é primo
    }
    return true; // Se não foi divisível por nenhum número, é primo
}

int main()
{
    int numero; // Declaração da variável para armazenar o número fornecido pelo usuário

    // Solicita ao usuário que insira um número inteiro
    cout << "Digite um numero inteiro: ";
    cin >> numero; // Lê o número fornecido pelo usuário

    // Verifica se o número é primo usando a função ehPrimo() e exibe o resultado
    if (ehPrimo(numero))
        cout << "O numero " << numero << " eh primo.\n";
    else
        cout << "O numero " << numero << " nao eh primo.\n";

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
