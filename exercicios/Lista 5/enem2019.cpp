#include <iostream>

// Função para calcular o fatorial de um número
int fatorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n - 1);
}

// Função para calcular a permutação de n elementos tomados k a k
int permutacao(int n, int k) {
    return fatorial(n) / fatorial(n - k);
}

int main() {
    int n = 10; // Número total de dígitos possíveis (0 a 9)
    int k = 8;  // Número de dígitos a serem escolhidos

    int numeros_diferentes = permutacao(n, k);

    std::cout << "Quantidade de numeros diferentes possiveis: " << numeros_diferentes << std::endl;

    return 0;
}
