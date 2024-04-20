#include <iostream> // Inclui a biblioteca para entrada e saída padrão

using namespace std; // Permite o uso dos identificadores da biblioteca padrão diretamente, sem a necessidade de prefixos como "std::"

int main() {
    int numIndividuosInicial; // Variável para armazenar o número inicial de indivíduos
    double taxaCrescimento;   // Variável para armazenar a taxa de crescimento em porcentagem
    int numGeracoes;          // Variável para armazenar o número de gerações

    // Solicita ao usuário o número inicial de indivíduos
    cout << "Digite o número inicial de indivíduos: ";
    cin >> numIndividuosInicial;

    // Solicita ao usuário a taxa de crescimento em porcentagem
    cout << "Digite a taxa de crescimento (em porcentagem): ";
    cin >> taxaCrescimento;

    // Solicita ao usuário o número de gerações
    cout << "Digite o número de gerações: ";
    cin >> numGeracoes;

    double populacao = numIndividuosInicial; // Inicializa a população com o número inicial de indivíduos

    // Loop para simular o crescimento populacional ao longo do número de gerações fornecido pelo usuário
    for (int i = 1; i <= numGeracoes; ++i) {
        // Calcula o número de indivíduos na geração atual
        populacao *= (1 + taxaCrescimento / 100.0);

        // Exibe a população após cada geração
        cout << "População após " << i << " geração(s): " << populacao << endl;
    }

    return 0;
}
