#include <iostream>

using namespace std;

int main() {
    double distancia, tempo, velocidade_media;

    // Solicita ao usuário que insira a distância percorrida em km
    cout << "Digite a distância percorrida pelo carro em quilômetros (km): ";
    cin >> distancia;

    // Solicita ao usuário que insira o tempo em horas
    cout << "Digite o tempo que levou em horas para percorrer essa distância: ";
    cin >> tempo;

    // Calcula a velocidade média em km/h
    velocidade_media = distancia / tempo;

    // Exibe a velocidade média do carro
    cout << "A velocidade média do carro foi de: " << velocidade_media << " km/h" << endl;

    return 0;
}
