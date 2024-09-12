#include <iostream>
using namespace std;

int main() {
    string nome;
    int idade, fc_max;
    float queima_min, queima_max, aerobica_min, aerobica_max, anaerobica_min, anaerobica_max;

    cout << "Digite o nome da pessoa: ";
    cin >> nome;
    cout << "Digite a idade da pessoa: ";
    cin >> idade;

    fc_max = 220 - idade;

    queima_min = fc_max * 0.5;
    queima_max = fc_max * 0.6;
    aerobica_min = fc_max * 0.6;
    aerobica_max = fc_max * 0.8;
    anaerobica_min = fc_max * 0.8;
    anaerobica_max = fc_max * 0.9;

    cout << "Zona de queima de gordura: " << queima_min << " a " << queima_max << " bpm." << endl;
    cout << "Zona aeróbica: " << aerobica_min << " a " << aerobica_max << " bpm." << endl;
    cout << "Zona anaeróbica: " << anaerobica_min << " a " << anaerobica_max << " bpm." << endl;

    return 0;
}
