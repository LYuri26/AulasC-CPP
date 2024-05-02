#include <iostream> // Biblioteca para entrada e saída de dados
#include <vector>   // Biblioteca para uso de vetores dinâmicos

using namespace std; // Permite o uso direto de elementos do namespace std

// Função principal do Bubble Sort
void bubbleSort(vector<int> &profundidades) {
    int tamanho = profundidades.size(); // Obtém o tamanho do vetor

    // Loop externo para percorrer o vetor
    for (int i = 0; i < tamanho - 1; ++i) {
        // Loop interno para percorrer o vetor e realizar as trocas
        for (int j = 0; j < tamanho - i - 1; ++j) {
            // Se a profundidade atual for maior que a próxima, troca-as
            if (profundidades[j] > profundidades[j + 1]) {
                // Troca os elementos usando uma variável temporária
                int temp = profundidades[j];
                profundidades[j] = profundidades[j + 1];
                profundidades[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Vetor para armazenar as profundidades das espécies marinhas
    vector<int> profundidades = {37,19,43,25,9,31,15,42,8,36,20,47,4,29,13,48,6,33,17,41,3,30,12,46,10,27,2,34,16,39,22,50,7,38,21,45,5,28,14,40,24,49,11,35,18,44,1,3237,19,43,25,9,31,15,42,8,36,20,47,4,29,13,48,6,33,17,41,3,30,12,46,10,27,2,34,16,39,22,50,7,38,21,45,5,28,14,40,24,49,11,35,18,44,1,32};

    // Ordena as profundidades usando o algoritmo Bubble Sort
    bubbleSort(profundidades);

    // Imprime as profundidades ordenadas
    for (int i = 0; i < profundidades.size(); ++i) {
        cout << profundidades[i] << " ";
    }
    cout << endl;

    return 0;
}
