#include <iostream>  // Para entrada e saída padrão

using namespace std;

// Função para aplicar o Bubble Sort Crescente
void bubbleSortCrescente(int habilidadesDanca[], int tamanho) {
    bool houveTroca;
    for (int i = 0; i < tamanho - 1; i++) {
        houveTroca = false;
        for (int j = 0; j < tamanho - i - 1; j++) {
            // Exibe o vetor antes de cada troca
            cout << "\nIteração " << i + 1 << ", Passo " << j + 1 << " - Antes da troca:\n";
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

            if (habilidadesDanca[j] > habilidadesDanca[j + 1]) {
                // Realizando a troca
                int temporario = habilidadesDanca[j];
                habilidadesDanca[j] = habilidadesDanca[j + 1];
                habilidadesDanca[j + 1] = temporario;
                houveTroca = true;

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
        if (!houveTroca) {
            break;
        }
    }
}

// Função para aplicar o Bubble Sort Decrescente
void bubbleSortDecrescente(int habilidadesDanca[], int tamanho) {
    bool houveTroca;
    for (int i = 0; i < tamanho - 1; i++) {
        houveTroca = false;
        for (int j = 0; j < tamanho - i - 1; j++) {
            // Exibe o vetor antes de cada troca
            cout << "\nIteração " << i + 1 << ", Passo " << j + 1 << " - Antes da troca:\n";
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

            if (habilidadesDanca[j] < habilidadesDanca[j + 1]) {
                // Realizando a troca
                int temporario = habilidadesDanca[j];
                habilidadesDanca[j] = habilidadesDanca[j + 1];
                habilidadesDanca[j + 1] = temporario;
                houveTroca = true;

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
        if (!houveTroca) {
            break;
        }
    }
}

// Função para aplicar o Selection Sort Crescente
void selectionSortCrescente(int habilidadesDanca[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMinimo = i;
        for (int j = i + 1; j < tamanho; j++) {
            // Exibe o vetor antes de cada troca
            cout << "\nIteração " << i + 1 << ", Passo " << j + 1 << " - Antes da troca:\n";
            for (int k = 0; k < tamanho; k++) {
                if (k == i) {
                    cout << "\033[1;34m[" << habilidadesDanca[k] << "]\033[0m ";  // Azul para o elemento atual
                } else if (k == indiceMinimo) {
                    cout << "\033[1;32m[" << habilidadesDanca[k] << "]\033[0m ";  // Verde para o elemento mínimo encontrado
                } else {
                    cout << habilidadesDanca[k] << " ";  // Normal para os outros elementos
                }
            }
            cout << "\n";

            if (habilidadesDanca[j] < habilidadesDanca[indiceMinimo]) {
                indiceMinimo = j;
            }
        }
        // Realizando a troca
        int temporario = habilidadesDanca[i];
        habilidadesDanca[i] = habilidadesDanca[indiceMinimo];
        habilidadesDanca[indiceMinimo] = temporario;

        // Exibe o vetor após a troca
        cout << "\nApós a troca:\n";
        for (int k = 0; k < tamanho; k++) {
            if (k == i) {
                cout << "\033[1;34m[" << habilidadesDanca[k] << "]\033[0m ";  // Azul para o elemento trocado
            } else if (k == indiceMinimo) {
                cout << "\033[1;32m[" << habilidadesDanca[k] << "]\033[0m ";  // Verde para o elemento trocado
            } else {
                cout << habilidadesDanca[k] << " ";  // Normal para os outros elementos
            }
        }
        cout << "\n";
    }
}

// Função para aplicar o Selection Sort Decrescente
void selectionSortDecrescente(int habilidadesDanca[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMaximo = i;
        for (int j = i + 1; j < tamanho; j++) {
            // Exibe o vetor antes de cada troca
            cout << "\nIteração " << i + 1 << ", Passo " << j + 1 << " - Antes da troca:\n";
            for (int k = 0; k < tamanho; k++) {
                if (k == i) {
                    cout << "\033[1;34m[" << habilidadesDanca[k] << "]\033[0m ";  // Azul para o elemento atual
                } else if (k == indiceMaximo) {
                    cout << "\033[1;32m[" << habilidadesDanca[k] << "]\033[0m ";  // Verde para o elemento máximo encontrado
                } else {
                    cout << habilidadesDanca[k] << " ";  // Normal para os outros elementos
                }
            }
            cout << "\n";

            if (habilidadesDanca[j] > habilidadesDanca[indiceMaximo]) {
                indiceMaximo = j;
            }
        }
        // Realizando a troca
        int temporario = habilidadesDanca[i];
        habilidadesDanca[i] = habilidadesDanca[indiceMaximo];
        habilidadesDanca[indiceMaximo] = temporario;

        // Exibe o vetor após a troca
        cout << "\nApós a troca:\n";
        for (int k = 0; k < tamanho; k++) {
            if (k == i) {
                cout << "\033[1;34m[" << habilidadesDanca[k] << "]\033[0m ";  // Azul para o elemento trocado
            } else if (k == indiceMaximo) {
                cout << "\033[1;32m[" << habilidadesDanca[k] << "]\033[0m ";  // Verde para o elemento trocado
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

    // Menu de escolha de ordenação crescente ou decrescente
    cout << "\nEscolha a ordem de ordenação:\n";
    cout << "1. Crescente\n";
    cout << "2. Decrescente\n";
    int ordem;
    cin >> ordem;  // Recebe a escolha do usuário para ordem

    // Executa a ordenação com base na escolha do usuário
    switch (escolha) {
        case 1:
            if (ordem == 1) {
                cout << "\nOrdenando usando Bubble Sort Crescente...\n";
                bubbleSortCrescente(habilidadesDanca, tamanho);
            } else {
                cout << "\nOrdenando usando Bubble Sort Decrescente...\n";
                bubbleSortDecrescente(habilidadesDanca, tamanho);
            }
            break;
        case 2:
            if (ordem == 1) {
                cout << "\nOrdenando usando Selection Sort Crescente...\n";
                selectionSortCrescente(habilidadesDanca, tamanho);
            } else {
                cout << "\nOrdenando usando Selection Sort Decrescente...\n";
                selectionSortDecrescente(habilidadesDanca, tamanho);
            }
            break;
        default:
            cout << "Opção inválida! Tente novamente.\n";
            return 0;
    }

    // Exibe o vetor ordenado
    cout << "\nVetor ordenado:\n";
    imprimirVetor(habilidadesDanca, tamanho);

    return 0;
}
