#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Função para definir a semente para geração de números aleatórios
void definirSemente() {
    srand(time(0));
}

// Função para lançar um dado de 4 lados (d4)
int lancarD4() {
    return rand() % 4 + 1; // Gera um número aleatório entre 1 e 4
}

// Função para lançar um dado de 6 lados (d6)
int lancarD6() {
    return rand() % 6 + 1; // Gera um número aleatório entre 1 e 6
}

// Função para lançar um dado de 8 lados (d8)
int lancarD8() {
    return rand() % 8 + 1; // Gera um número aleatório entre 1 e 8
}

// Função para lançar um dado de 10 lados (d10)
int lancarD10() {
    return rand() % 10 + 1; // Gera um número aleatório entre 1 e 10
}

// Função para lançar um dado de 12 lados (d12)
int lancarD12() {
    return rand() % 12 + 1; // Gera um número aleatório entre 1 e 12
}

// Função para lançar um dado de 20 lados (d20)
int lancarD20() {
    return rand() % 20 + 1; // Gera um número aleatório entre 1 e 20
}

int main() {
    definirSemente(); // Define a semente para geração de números aleatórios

    // Gera e exibe o resultado do lançamento de diferentes dados de RPG
    int resultadoD4 = lancarD4();   // Lança um dado de 4 lados (d4)
    int resultadoD6 = lancarD6();   // Lança um dado de 6 lados (d6)
    int resultadoD8 = lancarD8();   // Lança um dado de 8 lados (d8)
    int resultadoD10 = lancarD10(); // Lança um dado de 10 lados (d10)
    int resultadoD12 = lancarD12(); // Lança um dado de 12 lados (d12)
    int resultadoD20 = lancarD20(); // Lança um dado de 20 lados (d20)

    // Exibe os resultados
    cout << "Resultado do lançamento do dado d4: " << resultadoD4 << endl;
    cout << "Resultado do lançamento do dado d6: " << resultadoD6 << endl;
    cout << "Resultado do lançamento do dado d8: " << resultadoD8 << endl;
    cout << "Resultado do lançamento do dado d10: " << resultadoD10 << endl;
    cout << "Resultado do lançamento do dado d12: " << resultadoD12 << endl;
    cout << "Resultado do lançamento do dado d20: " << resultadoD20 << endl;

    return 0;
}
