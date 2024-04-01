#include <iostream> // Inclui a biblioteca para entrada e saída de dados

using namespace std;

int main()
{
    int numero; // Variável para armazenar o número fornecido pelo usuário

    // Solicita ao usuário que insira um número inteiro
    cout << "Digite um numero inteiro: ";
    cin >> numero; // Lê o número fornecido pelo usuário

    // Verifica se o número é par ou ímpar e exibe o resultado
    if (numero % 2 == 0)                               // Verifica se o resto da divisão por 2 é igual a zero (número par)
        cout << "O numero " << numero << " eh par.\n"; // Se for, exibe que o número é par
    else
        cout << "O numero " << numero << " eh impar.\n"; // Se não for, exibe que o número é ímpar

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
