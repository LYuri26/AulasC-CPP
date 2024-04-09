#include <iostream>

using namespace std;

int main() {
    double altura, forca, trabalho;

    // Solicita ao usuário que insira a altura vertical em metros (m)
    cout << "Digite a altura vertical em metros (m) que o objeto foi levantado: ";
    cin >> altura;

    // Solicita ao usuário que insira a força aplicada em Newtons (N)
    cout << "Digite a força aplicada em Newtons (N): ";
    cin >> forca;

    // Calcula o trabalho realizado
    trabalho = forca * altura;

    // Exibe o trabalho realizado
    cout << "O trabalho realizado ao levantar o objeto verticalmente é de: " << trabalho << " Joules" << endl;

    return 0;
}
