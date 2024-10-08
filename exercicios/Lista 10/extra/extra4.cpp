#include <iostream>  // Para entrada e saída padrão

using namespace std;

// Função para aplicar o Bubble Sort
void bubbleSort(int visualizacoes[], int tamanho) {
    bool houveTroca;  // Variável que indica se houve troca na última iteração
    for (int i = 0; i < tamanho - 1; i++) {
        houveTroca = false;  // Inicializa como false no início de cada passagem
        for (int j = 0; j < tamanho - i - 1; j++) {
            // Compara elementos adjacentes e troca se necessário
            if (visualizacoes[j] > visualizacoes[j + 1]) {
                // Exibe o vetor antes da troca com coloração
                cout << "\nAntes da troca:\n";
                for (int k = 0; k < tamanho; k++) {
                    if (k == j) {
                        cout << "\033[1;34m[" << visualizacoes[k] << "]\033[0m ";  // Azul para o elemento j
                    } else if (k == j + 1) {
                        cout << "\033[1;32m[" << visualizacoes[k] << "]\033[0m ";  // Verde para o elemento j+1
                    } else {
                        cout << visualizacoes[k] << " ";  // Normal para os outros elementos
                    }
                }
                cout << endl;

                // Realizando a troca manual sem usar swap
                int temporario = visualizacoes[j];       // Armazena temporariamente o valor de visualizacoes[j]
                visualizacoes[j] = visualizacoes[j + 1]; // Atribui o valor de visualizacoes[j+1] a visualizacoes[j]
                visualizacoes[j + 1] = temporario;       // Atribui o valor temporário a visualizacoes[j+1]

                houveTroca = true;  // Marca que houve troca

                // Exibe o vetor após a troca com cores
                cout << "\nApós a troca:\n";
                for (int k = 0; k < tamanho; k++) {
                    if (k == j) {
                        cout << "\033[1;34m[" << visualizacoes[k] << "]\033[0m ";  // Azul para o elemento trocado
                    } else if (k == j + 1) {
                        cout << "\033[1;32m[" << visualizacoes[k] << "]\033[0m ";  // Verde para o elemento que foi trocado
                    } else {
                        cout << visualizacoes[k] << " ";  // Normal para os outros elementos
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
void selectionSort(int visualizacoes[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMinimo = i;  // Assume que o primeiro elemento é o menor

        // Laço interno para encontrar o menor elemento no restante do vetor
        for (int j = i + 1; j < tamanho; j++) {
            if (visualizacoes[j] < visualizacoes[indiceMinimo]) {
                indiceMinimo = j;  // Atualiza o índice do menor elemento
            }
        }

        // Exibe o vetor antes da troca com coloração
        if (indiceMinimo != i) {
            cout << "\nAntes da troca:\n";
            for (int k = 0; k < tamanho; k++) {
                if (k == i) {
                    cout << "\033[1;34m[" << visualizacoes[k] << "]\033[0m ";  // Azul para o elemento i
                } else if (k == indiceMinimo) {
                    cout << "\033[1;32m[" << visualizacoes[k] << "]\033[0m ";  // Verde para o menor elemento
                } else {
                    cout << visualizacoes[k] << " ";  // Normal para os outros elementos
                }
            }
            cout << endl;

            // Realizando a troca manual
            int temporario = visualizacoes[i];       // Armazena temporariamente o valor de visualizacoes[i]
            visualizacoes[i] = visualizacoes[indiceMinimo];  // Atribui o valor do menor elemento encontrado para visualizacoes[i]
            visualizacoes[indiceMinimo] = temporario;  // Atribui o valor temporário a visualizacoes[indiceMinimo]

            // Exibe o vetor após a troca com cores
            cout << "\nApós a troca:\n";
            for (int k = 0; k < tamanho; k++) {
                if (k == i) {
                    cout << "\033[1;34m[" << visualizacoes[k] << "]\033[0m ";  // Azul para o elemento trocado
                } else if (k == indiceMinimo) {
                    cout << "\033[1;32m[" << visualizacoes[k] << "]\033[0m ";  // Verde para o menor elemento
                } else {
                    cout << visualizacoes[k] << " ";  // Normal para os outros elementos
                }
            }
            cout << endl;
        }
    }
}

// Função para exibir o vetor
void imprimirVetor(int visualizacoes[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << visualizacoes[i] << " ";
    }
    cout << endl;
}

// Função principal
int main() {
    // Vetor com o número de visualizações dos vídeos
    int visualizacoes[] = {120, 85, 150, 100, 90, 95, 130, 75, 140, 100, 120, 110, 115, 95, 135, 80, 100, 130, 140, 150, 120, 115, 105, 125, 90, 110, 135, 100, 120, 145};
    int tamanho = 30;  // Tamanho fixo do vetor (30 elementos)

    // Exibe o vetor original
    cout << "Número de visualizações dos vídeos (em milhões):\n";
    imprimirVetor(visualizacoes, tamanho);

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
            bubbleSort(visualizacoes, tamanho);  // Chama a função Bubble Sort
            break;
        case 2:
            cout << "\nOrdenando usando Selection Sort...\n";
            selectionSort(visualizacoes, tamanho);  // Chama a função Selection Sort
            break;
        default:
            cout << "Opção inválida! Tente novamente.\n";
            return 0;  // Se a escolha for inválida, encerra o programa
    }

    // Exibe o vetor ordenado
    cout << "\nVetor ordenado:\n";
    imprimirVetor(visualizacoes, tamanho);  // Imprime o vetor após a ordenação

    return 0;  // Encerra o programa com sucesso
}
