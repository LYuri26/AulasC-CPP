#include <iostream>
using namespace std;

int main() {
    char operacao;
    float num1, num2, resultado;

    // Solicita a operação desejada
    cout << "Escolha a operacao desejada:" << endl;
    cout << "A - Adicao" << endl;
    cout << "S - Subtracao" << endl;
    cout << "M - Multiplicacao" << endl;
    cout << "D - Divisao" << endl;
    cout << "Opcao: ";
    cin >> operacao;

    // Solicita os dois números
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

    // Realiza a operação selecionada
    switch (operacao) {
        case 'A':
        case 'a':
            resultado = num1 + num2;
            cout << "Resultado da adicao: " << resultado << endl;
            break;
        case 'S':
        case 's':
            resultado = num1 - num2;
            cout << "Resultado da subtracao: " << resultado << endl;
            break;
        case 'M':
        case 'm':
            resultado = num1 * num2;
            cout << "Resultado da multiplicacao: " << resultado << endl;
            break;
        case 'D':
        case 'd':
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "Resultado da divisao: " << resultado << endl;
            } else {
                cout << "Erro: divisao por zero!" << endl;
            }
            break;
        default:
            cout << "Opcao invalida!" << endl;
    }

    return 0;
}
