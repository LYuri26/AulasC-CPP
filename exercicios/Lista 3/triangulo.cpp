#include <iostream> // Inclui a biblioteca para entrada e saída de dados

using namespace std;

int main()
{
    int lado1, lado2, lado3; // Variáveis para armazenar os comprimentos dos lados do triângulo

    // Solicita ao usuário que insira o comprimento do primeiro lado do triângulo
    cout << "Digite o comprimento do primeiro lado: ";
    cin >> lado1; // Lê o comprimento do primeiro lado fornecido pelo usuário

    // Solicita ao usuário que insira o comprimento do segundo lado do triângulo
    cout << "Digite o comprimento do segundo lado: ";
    cin >> lado2; // Lê o comprimento do segundo lado fornecido pelo usuário

    // Solicita ao usuário que insira o comprimento do terceiro lado do triângulo
    cout << "Digite o comprimento do terceiro lado: ";
    cin >> lado3; // Lê o comprimento do terceiro lado fornecido pelo usuário

    // Verifica se os comprimentos fornecidos formam um triângulo e exibe o resultado
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1)
        cout << "Os comprimentos formam um triangulo.\n";
    else
        cout << "Os comprimentos nao formam um triangulo.\n";

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
