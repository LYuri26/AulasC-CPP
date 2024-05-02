#include <iostream> // Biblioteca para entrada e saída de dados
#include <vector>   // Biblioteca para uso de vetores dinâmicos

using namespace std; // Permite o uso direto de elementos do namespace std

// Função principal do Insertion Sort
void insertionSort(vector<int> &terremotos) {
    int tamanho = terremotos.size(); // Obtém o tamanho do vetor

    // Loop para percorrer o vetor a partir do segundo elemento
    for (int i = 1; i < tamanho; ++i) {
        int chave = terremotos[i]; // Armazena o valor atual para inserção ordenada
        int j = i - 1; // Inicializa o índice para comparar com os elementos anteriores

        // Loop para encontrar a posição correta para inserir a chave
        while (j >= 0 && terremotos[j] < chave) {
            terremotos[j + 1] = terremotos[j]; // Move os elementos maiores para frente
            --j;
        }
        terremotos[j + 1] = chave; // Insere a chave na posição correta
    }
}

int main() {
    // Vetor para armazenar a magnitude dos terremotos registrados
    vector<int> terremotos = {23,49,17,31,9,40,5,37,20,44,11,35,2,28,42,16,39,7,46,14,33,3,30,6,41,12,38,18,45,8,32,1,36,22,50,15,27,4,43,19,34,10,29,13,48,21,47,2423,49,17,31,9,40,5,37,20,44,11,35,2,28,42,16,39,7,46,14,33,3,30,6,41,12,38,18,45,8,32,1,36,22,50,15,27,4,43,19,34,10,29,13,48,21,47,24};

    // Ordena as magnitudes dos terremotos usando o algoritmo Insertion Sort
    insertionSort(terremotos);

    // Imprime as magnitudes dos terremotos ordenadas
    for (int i = 0; i < terremotos.size(); ++i) {
        cout << terremotos[i] << " ";
    }
    cout << endl;

    return 0;
}
