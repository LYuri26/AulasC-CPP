#include <iostream>  // Para entrada e saída padrão

using namespace std;

// Função para aplicar o Bubble Sort
void bubbleSort(int quantidadeFas[], int tamanho) {
    bool houveTroca;  // Variável para verificar se houve troca
    for (int i = 0; i < tamanho - 1; i++) {
        houveTroca = false;  // Assume que não houve troca na primeira iteração
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (quantidadeFas[j] > quantidadeFas[j + 1]) {
                // Exibe o vetor antes da troca com cores
                cout << "\nAntes da troca:\n";
                for (int k = 0; k < tamanho; k++) {
                    if (k == j) {
                        cout << "\033[1;34m[" << quantidadeFas[k] << "]\033[0m ";  // Azul para o elemento atual
                    } else if (k == j + 1) {
                        cout << "\033[1;32m[" << quantidadeFas[k] << "]\033[0m ";  // Verde para o próximo elemento
                    } else {
                        cout << quantidadeFas[k] << " ";  // Normal para os outros elementos
                    }
                }
                cout << "\n";

                // Realizando a troca manual
                int temporario = quantidadeFas[j];
                quantidadeFas[j] = quantidadeFas[j + 1];
                quantidadeFas[j + 1] = temporario;

                houveTroca = true;  // Marca que houve uma troca

                // Exibe o vetor após a troca com cores
                cout << "\nApós a troca:\n";
                for (int k = 0; k < tamanho; k++) {
                    if (k == j) {
                        cout << "\033[1;34m[" << quantidadeFas[k] << "]\033[0m ";  // Azul para o elemento trocado
                    } else if (k == j + 1) {
                        cout << "\033[1;32m[" << quantidadeFas[k] << "]\033[0m ";  // Verde para o próximo elemento trocado
                    } else {
                        cout << quantidadeFas[k] << " ";  // Normal para os outros elementos
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

// Função para aplicar o Selection Sort
void selectionSort(int quantidadeFas[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMinimo = i;  // Assume que o primeiro elemento é o menor
        for (int j = i + 1; j < tamanho; j++) {
            if (quantidadeFas[j] < quantidadeFas[indiceMinimo]) {
                indiceMinimo = j;  // Atualiza o índice do menor elemento
            }
        }

        // Exibe o vetor antes da troca com cores
        cout << "\nAntes da troca:\n";
        for (int k = 0; k < tamanho; k++) {
            if (k == i) {
                cout << "\033[1;34m[" << quantidadeFas[k] << "]\033[0m ";  // Azul para o elemento atual
            } else if (k == indiceMinimo) {
                cout << "\033[1;32m[" << quantidadeFas[k] << "]\033[0m ";  // Verde para o menor elemento encontrado
            } else {
                cout << quantidadeFas[k] << " ";  // Normal para os outros elementos
            }
        }
        cout << "\n";

        // Realizando a troca manual
        int temporario = quantidadeFas[i];
        quantidadeFas[i] = quantidadeFas[indiceMinimo];
        quantidadeFas[indiceMinimo] = temporario;

        // Exibe o vetor após a troca com cores
        cout << "\nApós a troca:\n";
        for (int k = 0; k < tamanho; k++) {
            if (k == i) {
                cout << "\033[1;34m[" << quantidadeFas[k] << "]\033[0m ";  // Azul para o elemento trocado
            } else if (k == indiceMinimo) {
                cout << "\033[1;32m[" << quantidadeFas[k] << "]\033[0m ";  // Verde para o menor elemento encontrado
            } else {
                cout << quantidadeFas[k] << " ";  // Normal para os outros elementos
            }
        }
        cout << "\n";
    }
}

// Função para exibir o vetor
void imprimirVetor(int quantidadeFas[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << quantidadeFas[i] << " ";
    }
    cout << endl;
}

// Função principal
int main() {
    // Vetor com a quantidade de fãs por região (em milhões)
    int quantidadeFas[] = {5, 3, 6, 7, 2, 4, 8, 3, 9, 10, 6, 7, 2, 5, 8, 4, 10, 7, 6, 9, 5, 4, 2, 3, 6, 7, 5, 9, 4, 8};
    int tamanho = 30;  // Tamanho fixo do vetor (30 elementos)

    // Exibe o vetor original
    cout << "Quantidade de fãs por região (em milhões):\n";
    imprimirVetor(quantidadeFas, tamanho);

    // Menu de escolha do algoritmo de ordenação
    cout << "\nEscolha o método de ordenação:\n";
    cout << "1. Ordenar usando Bubble Sort.\n";
    cout << "2. Ordenar usando Selection Sort.\n";
    int escolha;
    cin >> escolha;  // Recebe a escolha do usuário

    // Executa a ordenação com base na escolha do usuário
    switch (escolha) {
        case 1:
            cout << "\nOrdenando usando Bubble Sort...\n";
            bubbleSort(quantidadeFas, tamanho);  // Chama a função Bubble Sort
            break;
        case 2:
            cout << "\nOrdenando usando Selection Sort...\n";
            selectionSort(quantidadeFas, tamanho);  // Chama a função Selection Sort
            break;
        default:
            cout << "Opção inválida! Tente novamente.\n";
            return 0;  // Se a escolha for inválida, encerra o programa
    }

    // Exibe o vetor ordenado
    cout << "\nVetor ordenado:\n";
    imprimirVetor(quantidadeFas, tamanho);  // Imprime o vetor após a ordenação

    return 0;  // Encerra o programa com sucesso
}
