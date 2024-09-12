#include <iostream>
using namespace std;

int main() {
    string nome, intensidade;
    int idade;
    float frequencia, percentual;

    cout << "Digite o nome da pessoa: ";
    cin >> nome;
    cout << "Digite a idade da pessoa: ";
    cin >> idade;
    cout << "Digite o nível de intensidade (Leve, Moderado, Intenso): ";
    cin >> intensidade;

    if (intensidade == "Leve") {
        percentual = 0.5;
    } else if (intensidade == "Moderado") {
        percentual = 0.7;
    } else if (intensidade == "Intenso") {
        percentual = 0.85;
    } else {
        cout << "Intensidade inválida!" << endl;
        return 1;
    }

    frequencia = (220 - idade) * percentual;

    cout << "A frequência cardíaca ideal para " << nome << " é " << frequencia << " bpm." << endl;

    return 0;
}
