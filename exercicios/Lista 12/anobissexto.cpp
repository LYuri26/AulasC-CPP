#include <iostream>

using namespace std;

// Função para verificar se um ano é bissexto
bool ehBissexto(int ano) {
    // Verifica se o ano é divisível por 4 e não por 100, ou se é divisível por 400
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return true; // Retorna verdadeiro se o ano for bissexto
    } else {
        return false; // Retorna falso se o ano não for bissexto
    }
}

int main() {
    int ano;

    // Solicita ao usuário que insira o ano
    cout << "Digite o ano: ";
    cin >> ano;

    // Verifica se o ano fornecido pelo usuário é bissexto ou não
    if (ehBissexto(ano)) {
        cout << ano << " é um ano bissexto." << endl; // Exibe uma mensagem indicando que o ano é bissexto
    } else {
        cout << ano << " não é um ano bissexto." << endl; // Exibe uma mensagem indicando que o ano não é bissexto
    }

    return 0;
}
