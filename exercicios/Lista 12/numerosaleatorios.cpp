#include <iostream>
#include <cstdlib> // Biblioteca para funções rand e srand
#include <ctime>   // Biblioteca para função time

using namespace std;

// Função para definir a semente para geração de números aleatórios
void definirSemente() {
    srand(time(0)); // Define a semente como o tempo atual, para que os números gerados sejam diferentes a cada execução
}

// Função para gerar um número aleatório entre 1 e 100
int gerarNumeroAleatorio() {
    return rand() % 100 + 1; // Gera um número aleatório entre 1 e 100 utilizando o operador módulo (%)
}

int main() {
    definirSemente(); // Chama a função para definir a semente para geração de números aleatórios

    int numeroSecreto = gerarNumeroAleatorio(); // Gera o número secreto para o jogo

    int tentativa; // Variável para armazenar a tentativa do usuário

    cout << "Bem-vindo ao jogo de adivinhação! Tente adivinhar o número secreto entre 1 e 100." << endl;

    // Loop para permitir múltiplas tentativas até que o usuário acerte o número
    do {
        cout << "Digite sua tentativa: ";
        cin >> tentativa; // Solicita que o usuário insira sua tentativa

        // Verifica se a tentativa está correta, maior ou menor que o número secreto e fornece feedback ao usuário
        if (tentativa == numeroSecreto) {
            cout << "Parabéns! Você acertou o número secreto." << endl;
        } else if (tentativa < numeroSecreto) {
            cout << "O número secreto é maior. Tente novamente." << endl;
        } else {
            cout << "O número secreto é menor. Tente novamente." << endl;
        }
    } while (tentativa != numeroSecreto); // Continua o loop enquanto a tentativa do usuário for diferente do número secreto

    return 0;
}
