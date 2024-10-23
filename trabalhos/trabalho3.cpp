#include <iostream>

using namespace std;

// Função para ordenar o vetor usando Insertion Sort
void insertionSort(double vetor[], int tamanho) {
    for (int i = 1; i < tamanho; ++i) {
        double chave = vetor[i];
        int j = i - 1;

        // Move os elementos maiores que a chave para a frente
        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            --j;
        }
        // Insere a chave na posição correta
        vetor[j + 1] = chave;
    }
}

// Função para ordenar o vetor usando Bubble Sort
void bubbleSort(double vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; ++i) {
        for (int j = 0; j < tamanho - i - 1; ++j) {
            // Compara elementos adjacentes e os troca se estiverem na ordem errada
            if (vetor[j] > vetor[j + 1]) {
                double temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

// Função para ordenar o vetor usando Selection Sort
void selectionSort(double vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; ++i) {
        int indice_minimo = i;
        // Percorre o restante do vetor para encontrar o menor elemento
        for (int j = i + 1; j < tamanho; ++j) {
            if (vetor[j] < vetor[indice_minimo]) {
                indice_minimo = j;
            }
        }
        // Troca o menor elemento encontrado com o primeiro elemento não classificado
        double temp = vetor[indice_minimo];
        vetor[indice_minimo] = vetor[i];
        vetor[i] = temp;
    }
}

int main() {
    const int MAX_TAMANHO = 100; // Tamanho máximo do array
    double vetor[MAX_TAMANHO];   // Usamos double para armazenar todos os dados
    int tamanho;

    // Solicita o tamanho do vetor
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    // Verifica se o tamanho é negativo
    while (tamanho < 0) {
        cout << "Valor incorreto. Tente novamente: ";
        cin >> tamanho;
    }

    // Preenche o vetor com os valores fornecidos pelo usuário
    cout << "Digite os " << tamanho << " números separados por enter:\n";
    for (int i = 0; i < tamanho; ++i) {
        cin >> vetor[i]; // Lê diretamente como double
    }

    // Seleciona o algoritmo de ordenação com base no tamanho do vetor
    if (tamanho <= 20) {
        insertionSort(vetor, tamanho);
        cout << "Lista ordenada utilizando Insertion Sort:\n";
    } else if (tamanho <= 30) {
        bubbleSort(vetor, tamanho);
        cout << "Lista ordenada utilizando Bubble Sort:\n";
    } else {
        selectionSort(vetor, tamanho);
        cout << "Lista ordenada utilizando Selection Sort:\n";
    }

    // Exibe o vetor ordenado
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0; // Encerra o programa com sucesso
}
