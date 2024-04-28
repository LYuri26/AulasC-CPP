#include <iostream>
using namespace std;

int main() {
    int numero, soma = 0;

    // Solicita ao usuário que insira números positivos
    cout << "Digite numeros positivos para calcular a soma. Insira um numero negativo para encerrar:" << endl;

    // Loop while para continuar pedindo números até que um número negativo seja inserido
    while (true) {
        cout << "Digite um numero: ";
        cin >> numero;

        // Verifica se o número inserido é negativo
        if (numero < 0) {
            break; // Encerra o loop se um número negativo for inserido
        }

        soma += numero; // Adiciona o número à soma
    }

    // Exibe a soma dos números positivos inseridos
    cout << "A soma dos numeros positivos inseridos e: " << soma << endl;

    return 0;
}
