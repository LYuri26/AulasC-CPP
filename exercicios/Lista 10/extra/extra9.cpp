#include <iostream>  // Para entrada e saída padrão

using namespace std;

// Função para aplicar o Bubble Sort Crescente
void bubbleSortCrescente(int anosLancamento[], int tamanho) {
    bool houveTroca;  // Variável para verificar se houve troca
    for (int i = 0; i < tamanho - 1; i++) {
        houveTroca = false;  // Assume que não houve troca na primeira iteração
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (anosLancamento[j] > anosLancamento[j + 1]) {
                // Exibe o vetor antes da troca, com cores para destacar os elementos
                cout << "\nAntes da troca (Passo " << j + 1 << " - Iteração " << i + 1 << "):\n";
                for (int k = 0; k < tamanho; k++) {
                    if (k == j) {
                        cout << "\033[1;34m[" << anosLancamento[k] << "]\033[0m ";  // Azul para o elemento atual
                    } else if (k == j + 1) {
                        cout << "\033[1;32m[" << anosLancamento[k] << "]\033[0m ";  // Verde para o próximo elemento
                    } else {
                        cout << anosLancamento[k] << " ";  // Normal para os outros elementos
                    }
                }
                cout << "\n";

                // Realizando a troca manual
                int temporario = anosLancamento[j];
                anosLancamento[j] = anosLancamento[j + 1];
                anosLancamento[j + 1] = temporario;

                houveTroca = true;  // Marca que houve uma troca

                // Exibe o vetor após a troca
                cout << "\nApós a troca:\n";
                for (int k = 0; k < tamanho; k++) {
                    if (k == j) {
                        cout << "\033[1;34m[" << anosLancamento[k] << "]\033[0m ";  // Azul para o elemento trocado
                    } else if (k == j + 1) {
                        cout << "\033[1;32m[" << anosLancamento[k] << "]\033[0m ";  // Verde para o elemento trocado
                    } else {
                        cout << anosLancamento[k] << " ";  // Normal para os outros elementos
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

// Função para aplicar o Bubble Sort Decrescente
void bubbleSortDecrescente(int anosLancamento[], int tamanho) {
    bool houveTroca;  // Variável para verificar se houve troca
    for (int i = 0; i < tamanho - 1; i++) {
        houveTroca = false;  // Assume que não houve troca na primeira iteração
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (anosLancamento[j] < anosLancamento[j + 1]) {
                // Exibe o vetor antes da troca, com cores para destacar os elementos
                cout << "\nAntes da troca (Passo " << j + 1 << " - Iteração " << i + 1 << "):\n";
                for (int k = 0; k < tamanho; k++) {
                    if (k == j) {
                        cout << "\033[1;34m[" << anosLancamento[k] << "]\033[0m ";  // Azul para o elemento atual
                    } else if (k == j + 1) {
                        cout << "\033[1;32m[" << anosLancamento[k] << "]\033[0m ";  // Verde para o próximo elemento
                    } else {
                        cout << anosLancamento[k] << " ";  // Normal para os outros elementos
                    }
                }
                cout << "\n";

                // Realizando a troca manual
                int temporario = anosLancamento[j];
                anosLancamento[j] = anosLancamento[j + 1];
                anosLancamento[j + 1] = temporario;

                houveTroca = true;  // Marca que houve uma troca

                // Exibe o vetor após a troca
                cout << "\nApós a troca:\n";
                for (int k = 0; k < tamanho; k++) {
                    if (k == j) {
                        cout << "\033[1;34m[" << anosLancamento[k] << "]\033[0m ";  // Azul para o elemento trocado
                    } else if (k == j + 1) {
                        cout << "\033[1;32m[" << anosLancamento[k] << "]\033[0m ";  // Verde para o elemento trocado
                    } else {
                        cout << anosLancamento[k] << " ";  // Normal para os outros elementos
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

// Função para aplicar o Selection Sort Crescente
void selectionSortCrescente(int anosLancamento[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMinimo = i;  // Assume que o primeiro elemento é o menor
        for (int j = i + 1; j < tamanho; j++) {
            if (anosLancamento[j] < anosLancamento[indiceMinimo]) {
                indiceMinimo = j;  // Atualiza o índice do menor elemento
            }
        }

        // Exibe o vetor antes da troca, com cores para destacar os elementos
        cout << "\nAntes da troca (Passo " << i + 1 << "):\n";
        for (int k = 0; k < tamanho; k++) {
            if (k == i) {
                cout << "\033[1;34m[" << anosLancamento[k] << "]\033[0m ";  // Azul para o elemento atual
            } else if (k == indiceMinimo) {
                cout << "\033[1;32m[" << anosLancamento[k] << "]\033[0m ";  // Verde para o menor elemento encontrado
            } else {
                cout << anosLancamento[k] << " ";  // Normal para os outros elementos
            }
        }
        cout << "\n";

        // Realizando a troca manual
        int temporario = anosLancamento[i];
        anosLancamento[i] = anosLancamento[indiceMinimo];
        anosLancamento[indiceMinimo] = temporario;

        // Exibe o vetor após a troca
        cout << "\nApós a troca:\n";
        for (int k = 0; k < tamanho; k++) {
            if (k == i) {
                cout << "\033[1;34m[" << anosLancamento[k] << "]\033[0m ";  // Azul para o elemento trocado
            } else if (k == indiceMinimo) {
                cout << "\033[1;32m[" << anosLancamento[k] << "]\033[0m ";  // Verde para o menor elemento encontrado
            } else {
                cout << anosLancamento[k] << " ";  // Normal para os outros elementos
            }
        }
        cout << "\n";
    }
}

// Função para aplicar o Selection Sort Decrescente
void selectionSortDecrescente(int anosLancamento[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMaximo = i;  // Assume que o primeiro elemento é o maior
        for (int j = i + 1; j < tamanho; j++) {
            if (anosLancamento[j] > anosLancamento[indiceMaximo]) {
                indiceMaximo = j;  // Atualiza o índice do maior elemento
            }
        }

        // Exibe o vetor antes da troca, com cores para destacar os elementos
        cout << "\nAntes da troca (Passo " << i + 1 << "):\n";
        for (int k = 0; k < tamanho; k++) {
            if (k == i) {
                cout << "\033[1;34m[" << anosLancamento[k] << "]\033[0m ";  // Azul para o elemento atual
            } else if (k == indiceMaximo) {
                cout << "\033[1;32m[" << anosLancamento[k] << "]\033[0m ";  // Verde para o maior elemento encontrado
            } else {
                cout << anosLancamento[k] << " ";  // Normal para os outros elementos
            }
        }
        cout << "\n";

        // Realizando a troca manual
        int temporario = anosLancamento[i];
        anosLancamento[i] = anosLancamento[indiceMaximo];
        anosLancamento[indiceMaximo] = temporario;

        // Exibe o vetor após a troca
        cout << "\nApós a troca:\n";
        for (int k = 0; k < tamanho; k++) {
            if (k == i) {
                cout << "\033[1;34m[" << anosLancamento[k] << "]\033[0m ";  // Azul para o elemento trocado
            } else if (k == indiceMaximo) {
                cout << "\033[1;32m[" << anosLancamento[k] << "]\033[0m ";  // Verde para o maior elemento encontrado
            } else {
                cout << anosLancamento[k] << " ";  // Normal para os outros elementos
            }
        }
        cout << "\n";
    }
}

// Função para exibir o vetor
void imprimirVetor(int anosLancamento[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << anosLancamento[i] << " ";
    }
    cout << endl;
}

// Função principal
int main() {
    // Vetor com os anos de lançamento das faixas
    int anosLancamento[] = {2023, 2021, 2022, 2023, 2021, 2022, 2020, 2019, 2020, 2021, 2023, 2022, 2019, 2023, 2021, 2022, 2020, 2021, 2019, 2020};
    int tamanho = 20;  // Calcula o tamanho do vetor manualmente (20 elementos)

    // Exibe o vetor original
    cout << "Anos de lançamento das faixas:\n";
    imprimirVetor(anosLancamento, tamanho);

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
    cin >> ordem;

    // Executa a ordenação com base na escolha do usuário
    switch (escolha) {
        case 1:
            if (ordem == 1) {
                cout << "\nOrdenando usando Bubble Sort Crescente...\n";
                bubbleSortCrescente(anosLancamento, tamanho);
            } else {
                cout << "\nOrdenando usando Bubble Sort Decrescente...\n";
                bubbleSortDecrescente(anosLancamento, tamanho);
            }
            break;
        case 2:
            if (ordem == 1) {
                cout << "\nOrdenando usando Selection Sort Crescente...\n";
                selectionSortCrescente(anosLancamento, tamanho);
            } else {
                cout << "\nOrdenando usando Selection Sort Decrescente...\n";
                selectionSortDecrescente(anosLancamento, tamanho);
            }
            break;
        default:
            cout << "Opção inválida! Tente novamente.\n";
            return 0;  // Se a escolha for inválida, encerra o programa
    }

    // Exibe o vetor ordenado
    cout << "\nVetor ordenado:\n";
    imprimirVetor(anosLancamento, tamanho);  // Imprime o vetor após a ordenação

    return 0;  // Encerra o programa com sucesso
}
