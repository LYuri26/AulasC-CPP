#include <iostream>  // Para entrada e saída padrão

using namespace std;

// Função para aplicar o Bubble Sort
void bubbleSort(int vetor[], int tamanho) {
    bool houveTroca;  // Variável que indica se houve troca em uma passagem do vetor

    // Laço externo que percorre o vetor completo
    for (int i = 0; i < tamanho - 1; i++) {
        houveTroca = false;  // Inicializa a flag de troca como falsa a cada passagem
        cout << "\nPassagem " << i + 1 << ":\n";  // Exibe o número da passagem
        // Exibe o vetor atual antes de começar a troca na passagem
        for (int k = 0; k < tamanho; k++) {
            if (k == i) {
                cout << "\033[1;34m[" << vetor[k] << "]\033[0m ";  // Marca o elemento sendo comparado com cor azul
            } else {
                cout << vetor[k] << " ";  // Exibe os outros elementos normalmente
            }
        }
        cout << "\n";

        // Laço interno para comparar elementos adjacentes
        for (int j = 0; j < tamanho - i - 1; j++) {
            // Se o elemento da esquerda for maior que o da direita, trocamos os dois
            if (vetor[j] > vetor[j + 1]) {
                // Exibe a troca de valores com coloração
                cout << "\033[1;31m[Troca] " << vetor[j] << "\033[0m <-> \033[1;32m" << vetor[j + 1] << "\033[0m nos índices " << j << " e " << j + 1 << endl;

                // Realizando a troca manual dos elementos
                int temporario = vetor[j];  // Armazena temporariamente o valor de vetor[j]
                vetor[j] = vetor[j + 1];    // Atribui o valor de vetor[j+1] para vetor[j]
                vetor[j + 1] = temporario;  // Atribui o valor temporário para vetor[j+1]

                houveTroca = true;  // Indica que houve troca
            }

            // Exibe o vetor após cada comparação
            for (int k = 0; k < tamanho; k++) {
                if (k == j || k == j + 1) {
                    cout << "\033[1;33m[" << vetor[k] << "]\033[0m ";  // Marca os índices envolvidos com cor amarela
                } else {
                    cout << vetor[k] << " ";  // Exibe os outros elementos normalmente
                }
            }
            cout << "\n";
        }
        // Se não houve troca, significa que o vetor já está ordenado
        if (!houveTroca)
            break;  // Sai do laço externo, pois não há mais trocas a fazer
    }
}

// Função para aplicar o Selection Sort
void selectionSort(int vetor[], int tamanho) {
    // Laço externo percorre todo o vetor, exceto o último elemento
    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMinimo = i;  // Inicializa o índice mínimo como o índice atual
        cout << "\nPassagem " << i + 1 << ":\n";  // Exibe o número da passagem

        // Exibe o vetor atual antes de começar a troca na passagem
        for (int k = 0; k < tamanho; k++) {
            if (k == i) {
                cout << "\033[1;34m[" << vetor[k] << "]\033[0m ";  // Marca o elemento sendo comparado com cor azul
            } else {
                cout << vetor[k] << " ";  // Exibe os outros elementos normalmente
            }
        }
        cout << "\n";

        // Laço interno percorre o restante do vetor a partir de i+1
        for (int j = i + 1; j < tamanho; j++) {
            // Se encontrar um valor menor, atualiza o índice do menor valor
            if (vetor[j] < vetor[indiceMinimo]) {
                indiceMinimo = j;  // Atualiza o índice do menor elemento
            }

            // Exibe o vetor após cada comparação
            for (int k = 0; k < tamanho; k++) {
                if (k == j || k == indiceMinimo) {
                    cout << "\033[1;33m[" << vetor[k] << "]\033[0m ";  // Marca os índices envolvidos com cor amarela
                } else {
                    cout << vetor[k] << " ";  // Exibe os outros elementos normalmente
                }
            }
            cout << "\n";
        }

        // Exibe a troca de valores com coloração
        cout << "\033[1;31m[Troca] " << vetor[i] << "\033[0m <-> \033[1;32m" << vetor[indiceMinimo] << "\033[0m nos índices " << i << " e " << indiceMinimo << endl;

        // Realizando a troca manual
        int temporario = vetor[i];       // Armazena temporariamente o valor de vetor[i]
        vetor[i] = vetor[indiceMinimo];  // Atribui o valor do menor elemento encontrado para vetor[i]
        vetor[indiceMinimo] = temporario;  // Atribui o valor temporário ao vetor[indiceMinimo]
    }
}

// Função para exibir o vetor
void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        // Exibe cada elemento do vetor separado por espaço
        cout << vetor[i] << " ";
    }
    cout << endl;  // Pula para a próxima linha após imprimir o vetor
}

// Função principal
int main() {
    // Vetor de membros do grupo por tempo de treinamento em meses
    int membros[] = {24, 18, 30, 21, 25, 22, 26, 28, 19, 27, 23, 20, 29, 31, 24, 22, 25, 26, 20, 27, 18, 21, 19, 25, 22, 24, 30, 28, 29, 23};
    int tamanho = 30;  // Calcula o tamanho do vetor manualmente (30 elementos)

    // Exibe o vetor original
    cout << "Membros do grupo por tempo de treinamento (meses):\n";
    imprimirVetor(membros, tamanho);

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
            bubbleSort(membros, tamanho);  // Chama a função Bubble Sort
            break;
        case 2:
            cout << "\nOrdenando usando Selection Sort...\n";
            selectionSort(membros, tamanho);  // Chama a função Selection Sort
            break;
        default:
            cout << "Opção inválida! Tente novamente.\n";
            return 0;  // Se a escolha for inválida, encerra o programa
    }

    // Exibe o vetor ordenado
    cout << "\nVetor ordenado:\n";
    imprimirVetor(membros, tamanho);  // Imprime o vetor após a ordenação

    return 0;  // Encerra o programa com sucesso
}
