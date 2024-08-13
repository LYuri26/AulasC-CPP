#include <iostream>

int main() {
    int numero;
    unsigned long long fatorial = 1;

    // Solicitar número
    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "Número inválido! Digite um número positivo." << std::endl;
        return 1;
    }

    // Calcular fatorial usando loop
    for (int i = 1; i <= numero; ++i) {
        fatorial *= i;
    }

    // Exibir fatorial
    std::cout << "Fatorial de " << numero << " é " << fatorial << std::endl;

    return 0;
}
