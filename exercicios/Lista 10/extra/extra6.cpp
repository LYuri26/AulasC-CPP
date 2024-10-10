#include <iostream>  // Para entrada e saída padrão

using namespace std;

// Função para aplicar o Bubble Sort em ordem decrescente
void bubbleSort(int pontuacao[], int tamanho) {
    bool houveTroca;  // Variável para verificar se houve troca
    for (int i = 0; i < tamanho - 1; i++) {
        houveTroca = false;  // Assume que não houve troca na primeira iteração
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (pontuacao[j] < pontuacao[j + 1]) {  // Comparação ajustada para ordem decrescente
                // Exibe o vetor antes da troca com coloração
                cout << "\nAntes da troca:\n";
                for (int k = 0; k < tamanho; k++) {
                    if (k == j) {
                        cout << "\033[1;34m[" << pontuacao[k] << "]\033[0m ";  // Azul para o elemento atual
                    } else if (k == j + 1) {
                        cout << "\033[1;32m[" << pontuacao[k] << "]\033[0m ";  // Verde para o próximo elemento
                    } else {
                        cout << pontuacao[k] << " ";  // Normal para os outros elementos
                    }
                }
                cout << "\n";

                // Realizando a troca manual
                int temporario = pontuacao[j];
                pontuacao[j] = pontuacao[j + 1];
                pontuacao[j + 1] = temporario;

                houveTroca = true;  // Marca que houve uma troca

                // Exibe o vetor após a troca com cores
                cout << "\nApós a troca:\n";
                for (int k = 0; k < tamanho; k++) {
                    if (k == j) {
                        cout << "\033[1;34m[" << pontuacao[k] << "]\033[0m ";  // Azul para o elemento trocado
                    } else if (k == j + 1) {
                        cout << "\033[1;32m[" << pontuacao[k] << "]\033[0m ";  // Verde para o elemento que foi trocado
                    } else {
                        cout << pontuacao[k] << " ";  // Normal para os outros elementos
                    }
                }
                cout << "\n";
            }
        }
        // Se não houver trocas, o vetor já está ordenado
        if (!houveTroca) {
            break;
        }
    }
}

// Função para aplicar o Insertion Sort em ordem decrescente
void insertionSort(int pontuacao[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        int chave = pontuacao[i];  // Armazena o elemento atual
        int j = i - 1;

        // Mova os elementos do vetor que são menores do que a chave para uma posição à frente
        while (j >= 0 && pontuacao[j] < chave) {  // Comparação ajustada para ordem decrescente
            // Exibe a movimentação com coloração
            cout << "\033[1;31m[Mover] " << pontuacao[j] << "\033[0m para a posição " << j + 1 << " (mover para frente)\n";

            pontuacao[j + 1] = pontuacao[j];  // Move o elemento para a posição à frente
            j--;  // Decrementa o índice
        }

        // Coloca a chave na posição correta
        pontuacao[j + 1] = chave;

        // Exibe o status após a inserção
        cout << "Posicionando " << "\033[1;32m" << chave << "\033[0m na posição " << j + 1 << endl;
    }
}

// Função para exibir o vetor
void imprimirVetor(int pontuacao[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << pontuacao[i] << " ";
    }
    cout << endl;
}

// Função principal
int main() {
    // Vetor com a pontuação de crítica dos álbuns (de 0 a 100)
    int pontuacao[] = {95, 89, 88, 92, 85, 91, 97, 94, 87, 90, 96, 93, 88, 84, 82, 93, 96, 91, 94, 97, 92, 90, 85, 95, 89, 87, 90, 91, 96, 93};
    int tamanho = 30;  // Tamanho fixo do vetor (30 elementos)

    // Exibe o vetor original
    cout << "Pontuação de crítica dos álbuns de K-pop (de 0 a 100):\n";
    imprimirVetor(pontuacao, tamanho);

    // Menu de escolha do algoritmo de ordenação
    cout << "\nEscolha o método de ordenação:\n";
    cout << "1. Ordenar usando Bubble Sort.\n";
    cout << "2. Ordenar usando Insertion Sort.\n";
    int escolha;
    cin >> escolha;  // Recebe a escolha do usuário

    // Executa a ordenação com base na escolha do usuário
    switch (escolha) {
        case 1:
            cout << "\nOrdenando usando Bubble Sort...\n";
            bubbleSort(pontuacao, tamanho);  // Chama a função Bubble Sort
            break;
        case 2:
            cout << "\nOrdenando usando Insertion Sort...\n";
            insertionSort(pontuacao, tamanho);  // Chama a função Insertion Sort
            break;
        default:
            cout << "Opção inválida! Tente novamente.\n";
            return 0;  // Se a escolha for inválida, encerra o programa
    }

    // Exibe o vetor ordenado
    cout << "\nVetor ordenado (decrescente):\n";
    imprimirVetor(pontuacao, tamanho);  // Imprime o vetor após a ordenação

    return 0;  // Encerra o programa com sucesso
}
