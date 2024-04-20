#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variáveis para armazenar o nome do dinossauro e sua data de extinção
    string nomeDinossauro;
    int dataExtincao;

    // Solicita ao usuário que insira o nome do dinossauro
    cout << "Digite o nome do dinossauro: ";
    getline(cin, nomeDinossauro);

    // Solicita ao usuário que insira a data de extinção do dinossauro
    cout << "Digite a data de extinção do dinossauro (em milhões de anos atrás): ";
    cin >> dataExtincao;

    // Determina em qual era geológica o dinossauro viveu com base na sua data de extinção
    if (dataExtincao > 66 && dataExtincao <= 145) {
        cout << "O dinossauro viveu na era Mesozoica." << endl; // Mesozoica: De 251 milhões de anos atrás até 66 milhões de anos atrás
    } 
    else if (dataExtincao > 145 && dataExtincao <= 251) {
        cout << "O dinossauro viveu na era Paleozoica." << endl; // Paleozoica: De 541 milhões de anos atrás até 251 milhões de anos atrás
    }
    else if (dataExtincao <= 66) {
        cout << "O dinossauro viveu na era Cenozoica." << endl; // Cenozoica: De 66 milhões de anos atrás até os dias atuais
    } 
    else {
        cout << "O dinossauro viveu na era Pré-Cambriana." << endl; // Pré-Cambriana: Antes de 541 milhões de anos atrás
    }

    return 0;
}
