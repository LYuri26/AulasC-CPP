#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Define a semente para a geração de números aleatórios
    srand(time(nullptr));

    // Gera um número aleatório entre 1 e 100
    int numeroSecreto = rand() % 100 + 1;

    int tentativa, tentativasRestantes = 5;

    cout << "Bem-vindo ao jogo de adivinhacao!" << endl;
    cout << "Tente adivinhar um numero entre 1 e 100." << endl;
    cout << "Voce tem 5 tentativas." << endl;

    // Loop while para controlar as tentativas do usuário
    while (tentativasRestantes > 0) {
        cout << "Tentativa " << 6 - tentativasRestantes << ": ";
        cin >> tentativa;

        if (tentativa == numeroSecreto) {
            cout << "Parabens! Voce acertou o numero secreto." << endl;
            break;
        } else if (tentativa < numeroSecreto) {
            cout << "Tente um numero maior." << endl;
        } else {
            cout << "Tente um numero menor." << endl;
        }

        tentativasRestantes--;
    }

    // Se o usuário usar todas as tentativas sem acertar
    if (tentativasRestantes == 0) {
        cout << "Suas tentativas acabaram. O numero secreto era: " << numeroSecreto << endl;
    }

    return 0;
}
