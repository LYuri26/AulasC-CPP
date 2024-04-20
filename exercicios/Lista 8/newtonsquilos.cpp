#include <iostream>

using namespace std;

int main() {
    double peso_quilos, peso_newtons;

    // Solicita ao usuário que insira o peso do objeto em quilogramas
    cout << "Insira o peso do objeto em quilogramas: ";
    cin >> peso_quilos;

    // Calcula o peso em newtons usando a fórmula fornecida
    peso_newtons = peso_quilos * 9.81;

    // Exibe o resultado da conversão
    cout << "O peso em Newtons é: " << peso_newtons << " N" << endl;

    return 0;
}
