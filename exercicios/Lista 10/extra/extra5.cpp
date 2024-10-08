#include <iostream>  // Para entrada e saída padrão

using namespace std;

// Função para aplicar o Bubble Sort
void bubbleSort(int fas[], int tamanho) {
    bool houveTroca;  // Variável para verificar se houve troca
    for (int i = 0; i < tamanho - 1; i++) {
        houveTroca = false;  // Assume que não houve troca na primeira iteração
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (fas[j] > fas[j + 1]) {
                // Exibe o vetor antes da troca com coloração
                cout << "\nAntes da troca:\n";
                for (int k = 0; k < tamanho; k++) {
                    if (k == j) {
                        cout << "\033[1;34m[" << fas[k] << "]\033[0m ";  // Azul para o elemento atual
                    } else if (k == j + 1) {
                        cout << "\033[1;32m[" << fas[k] << "]\033[0m ";  // Verde para o próximo elemento
                    } else {
                        cout << fas[k] << " ";  // Normal para os outros elementos
                    }
                }
                cout << "\n";

                // Realizando a troca manual
                int temporário = fas[j];
                fas[j] = fas[j + 1];
                fas[j + 1] = temporário;

                houveTroca = true;  // Marca que houve uma troca

                // Exibe o vetor após a troca com cores
                cout << "\nApós a troca:\n";
                for (int k = 0; k < tamanho; k++) {
                    if (k == j) {
                        cout << "\033[1;34m[" << fas[k] << "]\033[0m ";  // Azul para o elemento trocado
                    } else if (k == j + 1) {
                        cout << "\033[1;32m[" << fas[k] << "]\033[0m ";  // Verde para o elemento que foi trocado
                    } else {
                        cout << fas[k] << " ";  // Normal para os outros elementos
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

// Função para aplicar o Insertion Sort
void insertionSort(int fas[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        int chave = fas[i];  // Armazena o elemento atual
        int j = i - 1;

        // Mova os elementos do vetor que são maiores do que a chave para uma posição à frente
        while (j >= 0 && fas[j] > chave) {
            // Exibe a movimentação com coloração
            cout << "\033[1;31m[Mover] " << fas[j] << "\033[0m para a posição " << j + 1 << " (mover para frente)\n";

            fas[j + 1] = fas[j];  // Move o elemento para a posição à frente
            j--;  // Decrementa o índice
        }

        // Coloca a chave na posição correta
        fas[j + 1] = chave;

        // Exibe o status após a inserção
        cout << "Posicionando " << "\033[1;32m" << chave << "\033[0m na posição " << j + 1 << endl;
    }
}

// Função para exibir o vetor
void imprimirVetor(int fas[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << fas[i] << " ";
    }
    cout << endl;
}

// Função principal
int main() {
    // Vetor com o número de fas (em milhões) dos grupos de K-pop
    int fas[] = {40, 25, 30, 55, 60, 35, 70, 45, 50, 65, 40, 60, 55, 30, 45, 35, 50, 65, 70, 75, 40, 55, 50, 60, 45, 70, 75, 60, 35, 30};
    int tamanho = 30;  // Tamanho fixo do vetor (30 elementos)

    // Exibe o vetor original
    cout << "Número de fas dos grupos de K-pop (em milhões):\n";
    imprimirVetor(fas, tamanho);

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
            bubbleSort(fas, tamanho);  // Chama a função Bubble Sort
            break;
        case 2:
            cout << "\nOrdenando usando Insertion Sort...\n";
            insertionSort(fas, tamanho);  // Chama a função Insertion Sort
            break;
        default:
            cout << "Opção inválida! Tente novamente.\n";
            return 0;  // Se a escolha for inválida, encerra o programa
    }

    // Exibe o vetor ordenado
    cout << "\nVetor ordenado:\n";
    imprimirVetor(fas, tamanho);  // Imprime o vetor após a ordenação

    return 0;  // Encerra o programa com sucesso
}
