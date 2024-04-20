#include <iostream>
#include <cmath>

// Função para calcular a potência de um número
int potencia(int base, int expoente) {
    return pow(base, expoente);
}

int main() {
    int n = 10; // Número total de alunos
    int k = 3;  // Número de medalhas (ouro, prata, bronze)

    int maneiras_diferentes = potencia(n, k);

    std::cout << "Número de maneiras diferentes de distribuir as medalhas: " << maneiras_diferentes << std::endl;

    return 0;
}
