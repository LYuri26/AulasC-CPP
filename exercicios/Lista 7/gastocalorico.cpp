#include <iostream>
using namespace std;

int main() {
    string nome, exercicio;
    float duracao, peso, calorias;

    cout << "Digite o nome da pessoa: ";
    cin >> nome;
    cout << "Digite o tipo de exercício (Corrida, Natação, Ciclismo): ";
    cin >> exercicio;
    cout << "Digite a duração do exercício em minutos: ";
    cin >> duracao;
    cout << "Digite o peso da pessoa em kg: ";
    cin >> peso;

    if (exercicio == "Corrida") {
        calorias = duracao * 0.1 * peso;
    } else if (exercicio == "Natação") {
        calorias = duracao * 0.13 * peso;
    } else if (exercicio == "Ciclismo") {
        calorias = duracao * 0.08 * peso;
    } else {
        cout << "Exercício inválido!" << endl;
        return 1;
    }

    cout << "A pessoa " << nome << " gastou aproximadamente " << calorias << " calorias durante o exercício." << endl;

    return 0;
}
