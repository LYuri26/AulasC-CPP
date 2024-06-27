#include <iostream> // Inclui a biblioteca para entrada e saída de dados

using namespace std;

int main()
{
    char operacao;               // Variável para armazenar a operação
    float num1, num2, resultado; // Variáveis para os números e o resultado da operação

    // Solicita ao usuário que insira o primeiro número
    cout << "Digite o primeiro numero: ";
    cin >> num1; // Lê o primeiro número fornecido pelo usuário

    cout << "Digite a operação: ";
    cin >> operacao; // Lê o primeiro número fornecido pelo usuário


    // Solicita ao usuário que insira o segundo número
    cout << "Digite o segundo numero: ";
    cin >> num2; // Lê o segundo número fornecido pelo usuário

    // Executa a operação de acordo com a escolha do usuário e exibe o resultado
    if (operacao == '+')
    {
        resultado = num1 + num2; // Soma os dois números
    }
    else if (operacao == '-')
    {
        resultado = num1 - num2; // Subtrai o segundo número do primeiro
    }
    else if (operacao == '*')
    {
        resultado = num1 * num2; // Multiplica os dois números
    }
    else if (operacao == '/')
    {
        if (num2 != 0)
        {
            resultado = num1 / num2; // Divide o primeiro número pelo segundo, se o segundo número não for zero
        }
        else
        {
            cout << "Erro: Divisao por zero!\n"; // Se o segundo número for zero, exibe uma mensagem de erro
            return 1;                            // Retorna 1 para indicar que houve um erro
        }
    }
    else
    {
        cout << "Operacao invalida!\n"; // Se a operação fornecida pelo usuário for inválida, exibe uma mensagem de erro
        return 1;                       // Retorna 1 para indicar que houve um erro
    }

    // Exibe o resultado da operação
    cout << "Resultado: " << resultado << endl;

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
