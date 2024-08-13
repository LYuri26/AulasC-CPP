#include <iostream>

int main() {
    int numero;
    bool primo = true;

    // Solicitar número
    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> numero;

    if (numero <= 1) {
        std::cout << numero << " não é um número primo." << std::endl;
        return 0;
    }

    // Verificar se o número é primo
    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            primo = false;
            break;
        }
    }

    // Exibir resultado
    if (primo) {
        std::cout << numero << " é um número primo." << std::endl;
    } else {
        std::cout << numero << " não é um número primo." << std::endl;
    }

    return 0;
}
