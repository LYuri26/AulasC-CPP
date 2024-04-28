#include <iostream>
using namespace std;

int main() {
    int numero;
    unsigned long long fatorial = 1; // Usaremos 'unsigned long long' para suportar números grandes

    // Solicita ao usuário um número para calcular o fatorial
    cout << "Digite um numero para calcular o fatorial: ";
    cin >> numero;

    // Verifica se o número fornecido é não negativo
    if (numero < 0) {
        cout << "Erro: Nao e possivel calcular o fatorial de um numero negativo." << endl;
    } else {
        // Calcula o fatorial usando um loop for
        for (int i = 1; i <= numero; ++i) {
            fatorial *= i;
        }

        // Exibe o resultado
        cout << "O fatorial de " << numero << " é: " << fatorial << endl;
    }

    return 0;
}
