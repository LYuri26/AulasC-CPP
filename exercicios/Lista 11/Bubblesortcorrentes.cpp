#include <iostream> // Biblioteca para entrada e saída de dados
#include <vector>   // Biblioteca para uso de vetores dinâmicos

using namespace std; // Permite o uso direto de elementos do namespace std

// Função principal do Bubble Sort
void bubbleSort(vector<int> &velocidades) {
    int tamanho = velocidades.size(); // Obtém o tamanho do vetor

    // Loop externo para percorrer o vetor
    for (int i = 0; i < tamanho - 1; ++i) {
        // Loop interno para percorrer o vetor e realizar as trocas
        for (int j = 0; j < tamanho - i - 1; ++j) {
            // Se o elemento atual for maior que o próximo, troca-os
            if (velocidades[j] > velocidades[j + 1]) {
                // Troca os elementos usando uma variável temporária
                int temp = velocidades[j];
                velocidades[j] = velocidades[j + 1];
                velocidades[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Vetor para armazenar as velocidades das correntes oceânicas
    vector<int> velocidades = {29,12,47,8,36,22,40,15,33,6,25,42,18,49,3,31,10,38,21,46,5,27,44,19,35,2,30,9,43,16,39,7,41,24,50,13,32,1,37,20,48,11,28,4,34,23,45,1429,12,47,8,36,22,40,15,33,6,25,42,18,49,3,31,10,38,21,46,5,27,44,19,35,2,30,9,43,16,39,7,41,24,50,13,32,1,37,20,48,11,28,4,34,23,45,14};

    // Ordena as velocidades das correntes oceânicas usando o algoritmo Bubble Sort
    bubbleSort(velocidades);

    // Imprime as velocidades das correntes oceânicas ordenadas
    for (int i = 0; i < velocidades.size(); ++i) {
        cout << velocidades[i] << " ";
    }
    cout << endl;

    return 0;
}
