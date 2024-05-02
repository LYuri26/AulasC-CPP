#include <iostream>
#include <vector>

using namespace std;

// Função para trocar dois elementos de um vetor
void trocar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Função para encontrar o pivô e particionar o vetor
int particionar(vector<int>& vetor, int inicio, int fim) {
    int pivo = vetor[fim]; // escolhe o último elemento como pivô
    int i = inicio - 1; // índice do menor elemento

    for (int j = inicio; j < fim; j++) {
        // Se o elemento atual é menor ou igual ao pivô
        if (vetor[j] <= pivo) {
            i++; // incrementa o índice do menor elemento
            trocar(vetor[i], vetor[j]); // troca vetor[i] e vetor[j]
        }
    }
    trocar(vetor[i + 1], vetor[fim]); // troca o pivô (vetor[fim]) com vetor[i + 1]
    return i + 1; // retorna o índice do pivô
}

// Função principal do Quicksort
void quicksort(vector<int>& vetor, int inicio, int fim) {
    if (inicio < fim) {
        // Encontra o índice do pivô
        int indice_pivo = particionar(vetor, inicio, fim);

        // Classifica os elementos antes e depois do pivô recursivamente
        quicksort(vetor, inicio, indice_pivo - 1);
        quicksort(vetor, indice_pivo + 1, fim);
    }
}

int main() {
    vector<int> niveis_de_seguranca = {23, 65, 99, 11, 77, 41, 82, 48, 36, 6, 70, 16, 52, 9, 74};
    int tamanho = niveis_de_seguranca.size();

    cout << "Níveis de segurança antes da ordenação: ";
    for (int i = 0; i < tamanho; i++) {
        cout << niveis_de_seguranca[i] << " ";
    }
    cout << endl;

    quicksort(niveis_de_seguranca, 0, tamanho - 1);

    cout << "Níveis de segurança após a ordenação: ";
    for (int i = 0; i < tamanho; i++) {
        cout << niveis_de_seguranca[i] << " ";
    }
    cout << endl;

    return 0;
}
