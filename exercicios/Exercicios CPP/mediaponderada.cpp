#include <iostream>

int main() {
    int numeroNotas;
    double nota, peso, somaNotasPonderadas = 0, somaPesos = 0;

    // Solicitar número de notas
    std::cout << "Digite o número de notas: ";
    std::cin >> numeroNotas;

    // Solicitar notas e pesos
    for (int i = 0; i < numeroNotas; ++i) {
        std::cout << "Digite a nota " << (i + 1) << ": ";
        std::cin >> nota;
        std::cout << "Digite o peso da nota " << (i + 1) << ": ";
        std::cin >> peso;

        somaNotasPonderadas += nota * peso;
        somaPesos += peso;
    }

    // Calcular e exibir média ponderada
    double mediaPonderada = somaNotasPonderadas / somaPesos;
    std::cout << "Média ponderada: " << mediaPonderada << std::endl;

    return 0;
}
