#include <iostream>

// Função para imprimir o vetor
void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Quantidades de alimentos nos sacos (em quilogramas)
    int quantidades[] = {82, 17, 62, 21, 17, 24, 79, 27, 9, 29, 41, 19, 80, 61, 45, 16, 2, 38, 34, 29};
    int n = 20; // Número total de sacos
    
    // Mostra as quantidades antes da ordenação
    std::cout << "Quantidades antes da ordenação: ";
    imprimirVetor(quantidades, n);
    
    // Implementação do Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int menorIndice = i; // Índice do menor elemento
        // Encontra o índice do menor elemento restante
        for (int j = i + 1; j < n; j++) {
            if (quantidades[j] < quantidades[menorIndice]) {
                menorIndice = j;
            }
        }
        // Troca os elementos de posição se necessário
        if (menorIndice != i) {
            int temp = quantidades[i];
            quantidades[i] = quantidades[menorIndice];
            quantidades[menorIndice] = temp;
        }
        
        // Mostra as quantidades durante a ordenação
        std::cout << "Quantidades durante a ordenação: ";
        imprimirVetor(quantidades, n);
    }

    // Mostra as quantidades após a ordenação
    std::cout << "Quantidades após a ordenação: ";
    imprimirVetor(quantidades, n);

    return 0;
}
