#include <iostream> // Inclui a biblioteca para entrada e saída de dados
#include <cstdlib>  // Inclui a biblioteca para a função rand()
#include <ctime>    // Inclui a biblioteca para a função time()

using namespace std;

int main()
{
    srand(time(0)); // Define uma semente para a função rand() usando o tempo atual

    int numeroSecreto = rand() % 100 + 1; // Gera um número aleatório entre 1 e 100
    int tentativa;                        // Variável para armazenar a tentativa do usuário

    cout << "Bem-vindo ao jogo de adivinhacao!\n"; // Mensagem de boas-vindas

    // Loop principal do jogo
    do
    {
        cout << "Tente adivinhar o numero (1-100): "; // Solicita ao usuário que faça uma tentativa
        cin >> tentativa;                             // Lê a tentativa do usuário

        // Verifica se a tentativa é maior, menor ou igual ao número secreto e fornece pistas
        if (tentativa > numeroSecreto)
            cout << "Tente um numero menor.\n"; // Se a tentativa for maior que o número secreto
        else if (tentativa < numeroSecreto)
            cout << "Tente um numero maior.\n"; // Se a tentativa for menor que o número secreto
        else
            cout << "Parabens! Voce acertou o numero!\n"; // Se a tentativa for igual ao número secreto

    } while (tentativa != numeroSecreto); // Continua o loop enquanto a tentativa for diferente do número secreto

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
