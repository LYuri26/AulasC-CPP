#include <iostream>  // Para entrada e saída padrão

using namespace std;

// Função para aplicar o Selection Sort
void selectionSort(int vetor[], int tamanho) {
    // Laço externo percorre todo o vetor
    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMinimo = i;  // Inicializa o índice do menor elemento como o índice atual

        // Laço interno percorre o restante do vetor a partir de i+1
        for (int j = i + 1; j < tamanho; j++) {
            // Se encontrar um valor menor, atualiza o índice do menor elemento
            if (vetor[j] < vetor[indiceMinimo]) {
                indiceMinimo = j;  // Atualiza o índice do menor elemento
            }
        }

        // Exibe o vetor antes da troca, com cores para destacar os elementos
        cout << "\nAntes da troca:\n";
        for (int k = 0; k < tamanho; k++) {
            if (k == i) {
                cout << "\033[1;34m[" << vetor[k] << "]\033[0m ";  // Azul para o elemento atual
            } else if (k == indiceMinimo) {
                cout << "\033[1;32m[" << vetor[k] << "]\033[0m ";  // Verde para o menor elemento encontrado
            } else {
                cout << vetor[k] << " ";  // Normal para os outros elementos
            }
        }
        cout << "\n";

        // Exibe a troca de valores com coloração, se necessário
        if (indiceMinimo != i) {
            cout << "\033[1;31m[Troca] " << vetor[i] << "\033[0m <-> \033[1;32m" << vetor[indiceMinimo] << "\033[0m nos índices " << i << " e " << indiceMinimo << endl;

            // Realizando a troca manual
            int temporario = vetor[i];       // Armazena temporariamente o valor de vetor[i]
            vetor[i] = vetor[indiceMinimo];  // Atribui o valor do menor elemento encontrado para vetor[i]
            vetor[indiceMinimo] = temporario;  // Atribui o valor temporário ao vetor[indiceMinimo]
        }

        // Exibe o vetor após a troca
        cout << "Após a troca:\n";
        for (int k = 0; k < tamanho; k++) {
            if (k == i) {
                cout << "\033[1;34m[" << vetor[k] << "]\033[0m ";  // Azul para o elemento atual
            } else if (k == indiceMinimo) {
                cout << "\033[1;32m[" << vetor[k] << "]\033[0m ";  // Verde para o menor elemento encontrado
            } else {
                cout << vetor[k] << " ";  // Normal para os outros elementos
            }
        }
        cout << "\n";
    }
}

// Função para aplicar o Insertion Sort
void insertionSort(int vetor[], int tamanho) {
    // Laço externo percorre o vetor a partir do segundo elemento
    for (int i = 1; i < tamanho; i++) {
        int chave = vetor[i];  // O elemento a ser inserido
        int j = i - 1;

        // Laço para mover os elementos maiores que a chave uma posição à frente
        while (j >= 0 && vetor[j] > chave) {
            // Exibe a movimentação dos elementos com coloração
            cout << "\033[1;33m[Movendo] " << vetor[j] << "\033[0m para a posição " << (j + 1) << endl;

            vetor[j + 1] = vetor[j];  // Move o elemento uma posição à frente
            j--;
        }

        // Coloca a chave na posição correta
        vetor[j + 1] = chave;

        // Exibe a inserção da chave com coloração
        cout << "\033[1;31m[Inserindo] " << chave << "\033[0m na posição " << (j + 1) << endl;

        // Exibe o vetor após a inserção
        cout << "Vetor após inserção:\n";
        for (int k = 0; k < tamanho; k++) {
            if (k == j + 1) {
                cout << "\033[1;34m[" << vetor[k] << "]\033[0m ";  // Azul para o elemento inserido
            } else {
                cout << vetor[k] << " ";  // Normal para os outros elementos
            }
        }
        cout << "\n";
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
    // Vetor com o número de vendas em mil unidades dos hits
    int vendas[] = {500, 600, 400, 700, 750, 800, 650, 550, 620, 680, 710, 690, 800, 640, 580, 660, 730, 750, 540, 710, 700, 690, 630, 670, 720, 680, 690, 650, 710, 660};
    int tamanho = 30;  // Calcula o tamanho do vetor manualmente (30 elementos)

    // Exibe o vetor original
    cout << "Número de vendas dos hits (em mil unidades):\n";
    imprimirVetor(vendas, tamanho);

    // Menu de escolha do algoritmo de ordenação
    cout << "\nEscolha o método de ordenação:\n";
    cout << "1. Ordenar usando Selection Sort.\n";
    cout << "2. Ordenar usando Insertion Sort.\n";
    int escolha;
    cin >> escolha;  // Recebe a escolha do usuário

    // Executa a ordenação com base na escolha do usuário
    switch (escolha) {
        case 1:
            cout << "\nOrdenando usando Selection Sort...\n";
            selectionSort(vendas, tamanho);  // Chama a função Selection Sort
            break;
        case 2:
            cout << "\nOrdenando usando Insertion Sort...\n";
            insertionSort(vendas, tamanho);  // Chama a função Insertion Sort
            break;
        default:
            cout << "Opção inválida! Tente novamente.\n";
            return 0;  // Se a escolha for inválida, encerra o programa
    }

    // Exibe o vetor ordenado
    cout << "\nVetor ordenado:\n";
    imprimirVetor(vendas, tamanho);  // Imprime o vetor após a ordenação

    return 0;  // Encerra o programa com sucesso
}
