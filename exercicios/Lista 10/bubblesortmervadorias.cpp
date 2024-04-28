#include <iostream>

// Função para imprimir o vetor
void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Quantidades de mercadorias nos estoques
    int quantidades[] = {15, 99, 50, 60, 71, 58, 63, 99, 58, 86, 44, 100, 63, 38, 48, 7, 35, 59, 52, 7};
    int n = 20; // Número total de mercadorias
    
    // Mostra as quantidades antes da ordenação
    std::cout << "Quantidades antes da ordenação: ";
    imprimirVetor(quantidades, n);
    
    // Implementação do Bubble Sort
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (quantidades[j] > quantidades[j+1]) {
                // Troca de quantidades
                int temp = quantidades[j];
                quantidades[j] = quantidades[j+1];
                quantidades[j+1] = temp;
            }
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
