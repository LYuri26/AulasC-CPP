#include <iostream>  // Para entrada e saída padrão

using namespace std;

// Função para aplicar o Bubble Sort
void bubbleSort(int habilidadesDanca[], int tamanho) {
    bool houveTroca;  // Variável para verificar se houve troca
    for (int i = 0; i < tamanho - 1; i++) {
        houveTroca = false;  // Assume que não houve troca na primeira iteração
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (habilidadesDanca[j] > habilidadesDanca[j + 1]) {
                // Exibe o vetor antes da troca, com cores para destacar os elementos
                cout << "\nAntes da troca:\n";
                for (int k = 0; k < tamanho; k++) {
                    if (k == j) {
                        cout << "\033[1;34m[" << habilidadesDanca[k] << "]\033[0m ";  // Azul para o elemento atual
                    } else if (k == j + 1) {
                        cout << "\033[1;32m[" << habilidadesDanca[k] << "]\033[0m ";  // Verde para o próximo elemento
                    } else {
                        cout << habilidadesDanca[k] << " ";  // Normal para os outros elementos
                    }
                }
                cout << "\n";

                // Realizando a troca manual
                int temporario = habilidadesDanca[j];
                habilidadesDanca[j] = habilidadesDanca[j + 1];
                habilidadesDanca[j + 1] = temporario;

                houveTroca = true;  // Marca que houve uma troca

                // Exibe o vetor após a troca
                cout << "\nApós a troca:\n";
                for (int k = 0; k < tamanho; k++) {
                    if (k == j) {
                        cout << "\033[1;34m[" << habilidadesDanca[k] << "]\033[0m ";  // Azul para o elemento trocado
                    } else if (k == j + 1) {
                        cout << "\033[1;32m[" << habilidadesDanca[k] << "]\033[0m ";  // Verde para o elemento trocado
                    } else {
                        cout << habilidadesDanca[k] << " ";  // Normal para os outros elementos
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
void selectionSort(int habilidadesDanca[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMinimo = i;  // Assume que o primeiro elemento é o menor
        for (int j = i + 1; j < tamanho; j++) {
            if (habilidadesDanca[j] < habilidadesDanca[indiceMinimo]) {
                indiceMinimo = j;  // Atualiza o índice do menor elemento
            }
        }

        // Exibe o vetor antes da troca, com cores para destacar os elementos
        cout << "\nAntes da troca:\n";
        for (int k = 0; k < tamanho; k++) {
            if (k == i) {
                cout << "\033[1;34m[" << habilidadesDanca[k] << "]\033[0m ";  // Azul para o elemento atual
            } else if (k == indiceMinimo) {
                cout << "\033[1;32m[" << habilidadesDanca[k] << "]\033[0m ";  // Verde para o menor elemento encontrado
            } else {
                cout << habilidadesDanca[k] << " ";  // Normal para os outros elementos
            }
        }
        cout << "\n";

        // Realizando a troca manual
        int temporario = habilidadesDanca[i];
        habilidadesDanca[i] = habilidadesDanca[indiceMinimo];
        habilidadesDanca[indiceMinimo] = temporario;

        // Exibe o vetor após a troca
        cout << "\nApós a troca:\n";
        for (int k = 0; k < tamanho; k++) {
            if (k == i) {
                cout << "\033[1;34m[" << habilidadesDanca[k] << "]\033[0m ";  // Azul para o elemento trocado
            } else if (k == indiceMinimo) {
                cout << "\033[1;32m[" << habilidadesDanca[k] << "]\033[0m ";  // Verde para o menor elemento encontrado
            } else {
                cout << habilidadesDanca[k] << " ";  // Normal para os outros elementos
            }
        }
        cout << "\n";
    }
}

// Função para exibir o vetor
void imprimirVetor(int habilidadesDanca[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << habilidadesDanca[i] << " ";
    }
    cout << endl;
}

// Função principal
int main() {
    // Vetor com o nível de habilidades de dança dos membros do grupo (em pontos)
    int habilidadesDanca[] = {80, 75, 90, 85, 70, 95, 60, 80, 85, 90, 70, 75, 80, 95, 60, 85, 90, 70, 80, 75, 95, 85, 70, 80, 75, 95, 70, 90, 60, 85};
    int tamanho = 30;  // Calcula o tamanho do vetor manualmente (30 elementos)

    // Exibe o vetor original
    cout << "Nível de habilidades de dança (em pontos):\n";
    imprimirVetor(habilidadesDanca, tamanho);

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
            bubbleSort(habilidadesDanca, tamanho);  // Chama a função Bubble Sort
            break;
        case 2:
            cout << "\nOrdenando usando Selection Sort...\n";
            selectionSort(habilidadesDanca, tamanho);  // Chama a função Selection Sort
            break;
        default:
            cout << "Opção inválida! Tente novamente.\n";
            return 0;  // Se a escolha for inválida, encerra o programa
    }

    // Exibe o vetor ordenado
    cout << "\nVetor ordenado:\n";
    imprimirVetor(habilidadesDanca, tamanho);  // Imprime o vetor após a ordenação

    return 0;  // Encerra o programa com sucesso
}
