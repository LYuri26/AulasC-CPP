#include <iostream>  // Para entrada e saída padrão

using namespace std;

// Função para aplicar o Bubble Sort
void bubbleSort(int vetor[], int tamanho) {
    bool houveTroca;  // Variável que indica se houve troca na última iteração
    for (int i = 0; i < tamanho - 1; i++) {
        houveTroca = false;  // Inicializa como false no início de cada passagem
        for (int j = 0; j < tamanho - i - 1; j++) {
            // Compara elementos adjacentes e troca se necessário
            if (vetor[j] > vetor[j + 1]) {
                // Exibe o vetor antes da troca com coloração
                cout << "\nAntes da troca:\n";
                for (int k = 0; k < tamanho; k++) {
                    if (k == j) {
                        cout << "\033[1;34m[" << vetor[k] << "]\033[0m ";  // Azul para o elemento j
                    } else if (k == j + 1) {
                        cout << "\033[1;32m[" << vetor[k] << "]\033[0m ";  // Verde para o elemento j+1
                    } else {
                        cout << vetor[k] << " ";  // Normal para os outros elementos
                    }
                }
                cout << endl;

                // Realizando a troca manual sem usar swap
                int temporario = vetor[j];       // Armazena temporariamente o valor de vetor[j]
                vetor[j] = vetor[j + 1];         // Atribui o valor de vetor[j+1] a vetor[j]
                vetor[j + 1] = temporario;       // Atribui o valor temporário a vetor[j+1]

                houveTroca = true;  // Marca que houve troca

                // Exibe o vetor após a troca com cores
                cout << "\nApós a troca:\n";
                for (int k = 0; k < tamanho; k++) {
                    if (k == j) {
                        cout << "\033[1;34m[" << vetor[k] << "]\033[0m ";  // Azul para o elemento trocado
                    } else if (k == j + 1) {
                        cout << "\033[1;32m[" << vetor[k] << "]\033[0m ";  // Verde para o elemento que foi trocado
                    } else {
                        cout << vetor[k] << " ";  // Normal para os outros elementos
                    }
                }
                cout << endl;
            }
        }
        // Se não houver trocas, o vetor já está ordenado
        if (!houveTroca) {
            break;
        }
    }
}

// Função para aplicar o Selection Sort
void selectionSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMinimo = i;  // Assume que o primeiro elemento é o menor

        // Laço interno para encontrar o menor elemento no restante do vetor
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[indiceMinimo]) {
                indiceMinimo = j;  // Atualiza o índice do menor elemento
            }
        }

        // Exibe o vetor antes da troca com coloração
        if (indiceMinimo != i) {
            cout << "\nAntes da troca:\n";
            for (int k = 0; k < tamanho; k++) {
                if (k == i) {
                    cout << "\033[1;34m[" << vetor[k] << "]\033[0m ";  // Azul para o elemento i
                } else if (k == indiceMinimo) {
                    cout << "\033[1;32m[" << vetor[k] << "]\033[0m ";  // Verde para o menor elemento
                } else {
                    cout << vetor[k] << " ";  // Normal para os outros elementos
                }
            }
            cout << endl;

            // Realizando a troca manual
            int temporario = vetor[i];       // Armazena temporariamente o valor de vetor[i]
            vetor[i] = vetor[indiceMinimo];  // Atribui o valor do menor elemento encontrado para vetor[i]
            vetor[indiceMinimo] = temporario;  // Atribui o valor temporário a vetor[indiceMinimo]

            // Exibe o vetor após a troca com cores
            cout << "\nApós a troca:\n";
            for (int k = 0; k < tamanho; k++) {
                if (k == i) {
                    cout << "\033[1;34m[" << vetor[k] << "]\033[0m ";  // Azul para o elemento trocado
                } else if (k == indiceMinimo) {
                    cout << "\033[1;32m[" << vetor[k] << "]\033[0m ";  // Verde para o menor elemento
                } else {
                    cout << vetor[k] << " ";  // Normal para os outros elementos
                }
            }
            cout << endl;
        }
    }
}

// Função para exibir o vetor
void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

// Função principal
int main() {
    // Vetor com os números representando as cores das fitas de luz
    int cores[] = {3, 1, 4, 2, 5, 6, 2, 1, 3, 4, 6, 5, 3, 4, 2, 1, 5, 6, 2, 4, 3, 1, 5, 6, 4, 2, 1, 3, 5, 2};
    int tamanho = 30;  // Tamanho fixo do vetor (30 elementos)

    // Exibe o vetor original
    cout << "Cores das fitas de luz para o show (representadas por números):\n";
    imprimirVetor(cores, tamanho);

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
            bubbleSort(cores, tamanho);  // Chama a função Bubble Sort
            break;
        case 2:
            cout << "\nOrdenando usando Selection Sort...\n";
            selectionSort(cores, tamanho);  // Chama a função Selection Sort
            break;
        default:
            cout << "Opção inválida! Tente novamente.\n";
            return 0;  // Se a escolha for inválida, encerra o programa
    }

    // Exibe o vetor ordenado
    cout << "\nVetor ordenado:\n";
    imprimirVetor(cores, tamanho);  // Imprime o vetor após a ordenação

    return 0;  // Encerra o programa com sucesso
}
