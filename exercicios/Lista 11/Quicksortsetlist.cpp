#include <iostream>
#include <vector>

using namespace std;

// Função para trocar dois elementos de um vetor
void trocar_elementos(int& primeiro_elemento, int& segundo_elemento) {
    int temp = primeiro_elemento;
    primeiro_elemento = segundo_elemento;
    segundo_elemento = temp;
}

// Função para encontrar o pivô e particionar o vetor
int particionar(vector<int>& vetor_principal, int inicio, int fim) {
    int pivô = vetor_principal[fim]; // escolhe o último elemento como pivô
    int i = inicio - 1; // índice do menor elemento

    cout << "Pivô: \033[1;32m" << pivô << "\033[0m" << endl; // Mostra o pivô selecionado em verde

    // Loop para percorrer o vetor e particioná-lo
    for (int j = inicio; j < fim; j++) {
        // Se o elemento atual é menor ou igual ao pivô
        if (vetor_principal[j] <= pivô) {
            i++; // incrementa o índice do menor elemento
            trocar_elementos(vetor_principal[i], vetor_principal[j]); // troca vetor[i] e vetor[j]

            // Mostra as mudanças após a troca
            cout << "Trocou \033[1;33m" << vetor_principal[i] << "\033[0m com \033[1;33m" << vetor_principal[j] << "\033[0m: ";
            for (int k = inicio; k <= fim; k++) {
                if (k == i || k == j) {
                    cout << "\033[1;33m"; // Altera a cor do texto para amarelo
                    cout << vetor_principal[k] << " "; // Destaca os elementos que serão trocados
                    cout << "\033[0m"; // Retorna à cor padrão do texto
                } else if (vetor_principal[k] < pivô) {
                    cout << "\033[1;31m"; // Altera a cor do texto para vermelho
                    cout << vetor_principal[k] << " "; // Destaca os elementos menores que o pivô
                    cout << "\033[0m"; // Retorna à cor padrão do texto
                } else {
                    cout << "\033[1;34m"; // Altera a cor do texto para azul
                    cout << vetor_principal[k] << " "; // Destaca os elementos maiores que o pivô
                    cout << "\033[0m"; // Retorna à cor padrão do texto
                }
            }
            cout << endl;
        }
    }
    trocar_elementos(vetor_principal[i + 1], vetor_principal[fim]); // troca o pivô (vetor[fim]) com vetor[i + 1]

    // Mostra o vetor após a partição
    cout << "Vetor após a partição: ";
    for (int k = inicio; k <= fim; k++) {
        if (k == i + 1) {
            cout << "\033[1;32m"; // Altera a cor do texto para verde
            cout << vetor_principal[k] << " "; // Destaca o pivô
            cout << "\033[0m"; // Retorna à cor padrão do texto
        } else {
            cout << vetor_principal[k] << " ";
        }
    }
    cout << endl;

    return i + 1; // retorna o índice do pivô
}

// Função principal do Quicksort
void quicksort(vector<int>& vetor_principal, int inicio, int fim) {
    if (inicio < fim) {
        // Encontra o índice do pivô e particiona o vetor
        int indice_pivo = particionar(vetor_principal, inicio, fim);

        // Chama recursivamente o quicksort para as partições à esquerda e à direita do pivô
        quicksort(vetor_principal, inicio, indice_pivo - 1);
        quicksort(vetor_principal, indice_pivo + 1, fim);
    }
}

int main() {
    // Vetor principal de entrada
    vector<int> vetor_principal = {27, 14, 53, 88, 42, 19, 63, 35, 76, 
    10, 59, 5, 31, 72, 8};
    int tamanho = vetor_principal.size();

    // Imprime o vetor de entrada
    cout << "Vetor principal inicial: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor_principal[i] << " ";
    }
    cout << endl;

    // Chama o algoritmo Quicksort para ordenar o vetor principal
    quicksort(vetor_principal, 0, tamanho - 1);

    // Imprime o vetor principal ordenado
    cout << "Vetor principal ordenado: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor_principal[i] << " ";
    }
    cout << endl;

    return 0;
}
