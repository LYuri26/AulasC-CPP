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
    vector<int> codigos = {50, 22, 91, 38, 17, 68, 3, 45, 12, 84, 29, 56, 7, 60, 95};
    int tamanho = codigos.size();

    cout << "Códigos das cidades antes da ordenação: ";
    for (int i = 0; i < tamanho; i++) {
        cout << codigos[i] << " ";
    }
    cout << endl;

    quicksort(codigos, 0, tamanho - 1);

    cout << "Códigos das cidades após a ordenação: ";
    for (int i = 0; i < tamanho; i++) {
        cout << codigos[i] << " ";
    }
    cout << endl;

    return 0;
}
