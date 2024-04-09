#include <iostream>

using namespace std;

int main() {
    double massa, aceleracao, forca;

    // Solicita ao usuário que insira a massa do objeto em kg
    cout << "Digite a massa do objeto em quilogramas (kg): ";
    cin >> massa;

    // Solicita ao usuário que insira a taxa de aceleração em m/s²
    cout << "Digite a taxa de aceleração em metros por segundo ao quadrado (m/s²): ";
    cin >> aceleracao;

    // Calcula a força necessária para acelerar a massa
    forca = massa * aceleracao;

    // Exibe a força necessária
    cout << "A força necessária para acelerar a massa é de: " << forca << " Newtons" << endl;

    return 0;
}
