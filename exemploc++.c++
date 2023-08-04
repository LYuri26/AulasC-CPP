#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // Inicializa a semente do gerador de números aleatórios

    int numeroSecreto = std::rand() % 100 + 1; // Gera um número aleatório entre 1 e 100
    int tentativas = 0;
    int palpite;

    std::cout << "Bem-vindo ao jogo de adivinhação!" << std::endl;

    do {
        std::cout << "Tentativa #" << tentativas + 1 << ": Digite um número: ";
        std::cin >> palpite;

        if (palpite < numeroSecreto) {
            std::cout << "Muito baixo!" << std::endl;
        } else if (palpite > numeroSecreto) {
            std::cout << "Muito alto!" << std::endl;
        }

        tentativas++;
    } while (palpite != numeroSecreto);

    std::cout << "Parabéns! Você acertou o número em " << tentativas << " tentativas." << std::endl;

    return 0;
}
