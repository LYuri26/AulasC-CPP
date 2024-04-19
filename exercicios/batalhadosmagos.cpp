#include <iostream>
#include <algorithm> // Para a função transform
#include <cctype>    // Para a função tolower

using namespace std;

int main() {
    string escolha;

    // Solicita ao usuário para escolher entre lançar um feitiço de fogo ou de gelo
    cout << "Escolha: lancar um feitico de fogo ou de gelo: ";
    cin >> escolha;

    // Converte a escolha do usuário para letras minúsculas
    transform(escolha.begin(), escolha.end(), escolha.begin(), ::tolower);

    // Verifica a escolha do usuário e exibe o resultado da batalha
    if (escolha == "fogo") {
        cout << "Voce lançou um feitiço de fogo! Resultado: derreteu o feitiço de gelo do oponente.\n";
    } else if (escolha == "gelo") {
        cout << "Voce lançou um feitiço de gelo! Resultado: congelou o feitiço de fogo do oponente.\n";
    } else {
        cout << "Opcao invalida! Escolha entre lancar um feitico de fogo ou de gelo.\n";
    }

    return 0;
}
