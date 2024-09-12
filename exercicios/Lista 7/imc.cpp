#include <iostream>
using namespace std;

int main() {
    string nome;
    float peso, altura, imc;

    cout << "Digite o nome do atleta: ";
    cin >> nome;
    cout << "Digite o peso do atleta em kg: ";
    cin >> peso;
    cout << "Digite a altura do atleta em metros: ";
    cin >> altura;

    imc = peso / (altura * altura);

    cout << "O atleta " << nome << " tem um IMC de " << imc << "." << endl;

    return 0;
}
