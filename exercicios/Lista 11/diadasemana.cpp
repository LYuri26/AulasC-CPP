#include <iostream>
using namespace std;

int main() {
    int diaSemana;

    // Solicita ao usuário um número representando o dia da semana
    cout << "Digite um numero de 1 a 7 para representar o dia da semana: ";
    cin >> diaSemana;

    // Exibe o nome do dia correspondente
    switch (diaSemana) {
        case 1:
            cout << "Domingo" << endl;
            break;
        case 2:
            cout << "Segunda-feira" << endl;
            break;
        case 3:
            cout << "Terca-feira" << endl;
            break;
        case 4:
            cout << "Quarta-feira" << endl;
            break;
        case 5:
            cout << "Quinta-feira" << endl;
            break;
        case 6:
            cout << "Sexta-feira" << endl;
            break;
        case 7:
            cout << "Sabado" << endl;
            break;
        default:
            cout << "Numero invalido! Por favor, digite um numero de 1 a 7." << endl;
    }

    return 0;
}
