#include <iostream>

using namespace std;

// Função para gerar e exibir os primeiros N termos da sequência de Fibonacci
void gerarSequenciaFibonacci(int termos) {
    // Inicializa os primeiros dois números da sequência
    int primeiro = 0;
    int segundo = 1;
    int proximo;

    // Exibe uma mensagem inicial
    cout << "Sequência de Fibonacci com os primeiros " << termos << " termos:" << endl;

    // Loop para gerar os termos da sequência
    for (int i = 1; i <= termos; ++i) {
        // Exibe o primeiro termo
        if (i == 1) {
            cout << primeiro;
        } 
        // Exibe o segundo termo
        else if (i == 2) {
            cout << ", " << segundo;
        } 
        // Calcula e exibe os próximos termos
        else {
            proximo = primeiro + segundo; // Calcula o próximo termo
            cout << ", " << proximo;      // Exibe o próximo termo
            primeiro = segundo;           // Atualiza o primeiro número para o próximo ciclo
            segundo = proximo;            // Atualiza o segundo número para o próximo ciclo
        }
    }
    cout << endl; // Nova linha para melhorar a apresentação
}

int main() {
    int termos;

    // Solicita ao usuário o número de termos da sequência de Fibonacci
    cout << "Digite o número de termos da sequência de Fibonacci que deseja gerar: ";
    cin >> termos;

    // Chama a função para gerar a sequência de Fibonacci com o número de termos fornecido pelo usuário
    gerarSequenciaFibonacci(termos);

    return 0;
}
