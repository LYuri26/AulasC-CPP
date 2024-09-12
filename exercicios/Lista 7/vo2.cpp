#include <iostream>
using namespace std;

int main() {
    string nome;
    int idade;
    float tempo, vo2max;

    cout << "Digite o nome do atleta: ";
    cin >> nome;
    cout << "Digite a idade do atleta: ";
    cin >> idade;
    cout << "Digite o tempo que o atleta levou para correr 1,5 km (em minutos): ";
    cin >> tempo;

    vo2max = 483 / tempo + 3.5;

    cout << "O VO2 máximo do atleta " << nome << " é " << vo2max << "." << endl;

    return 0;
}
