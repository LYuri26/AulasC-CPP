#include <iostream> // Biblioteca para entrada e saída de dados
#include <vector>   // Biblioteca para uso de vetores dinâmicos

using namespace std; // Permite o uso direto de elementos do namespace std

// Função principal do Insertion Sort
void insertionSort(vector<int> &coordenadas) {
    int tamanho = coordenadas.size(); // Obtém o tamanho do vetor

    // Loop externo para percorrer o vetor
    for (int i = 1; i < tamanho; ++i) {
        int chave = coordenadas[i]; // Salva o valor atual como chave
        int j = i - 1;              // Inicializa o índice anterior ao valor atual

        // Loop interno para encontrar a posição correta para a chave
        while (j >= 0 && coordenadas[j] > chave) {
            coordenadas[j + 1] = coordenadas[j]; // Move o elemento para a direita
            j--;                                 // Decrementa o índice
        }
        coordenadas[j + 1] = chave; // Insere a chave na posição correta
    }
}

int main() {
    // Vetor para armazenar as coordenadas geográficas das estações de pesquisa
    vector<int> coordenadas = {16,45,28,9,41,24,6,39,21,50,13,35,18,47,31,11,44,27,8,42,23,4,37,19,48,30,12,46,26,7,40,22,1,33,15,43,25,10,38,20,49,32,14,36,17,3,29,516,45,28,9,41,24,6,39,21,50,13,35,18,47,31,11,44,27,8,42,23,4,37,19,48,30,12,46,26,7,40,22,1,33,15,43,25,10,38,20,49,32,14,36,17,3,29,5};

    // Ordena as coordenadas usando o algoritmo Insertion Sort
    insertionSort(coordenadas);

    // Imprime as coordenadas ordenadas
    for (int i = 0; i < coordenadas.size(); ++i) {
        cout << coordenadas[i] << " ";
    }
    cout << endl;

    return 0;
}
