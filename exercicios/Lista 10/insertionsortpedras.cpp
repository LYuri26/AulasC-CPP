#include <iostream>

// Função para imprimir o vetor
void imprimirVetor(double vetor[], int tamanho) {
    // Loop para imprimir cada elemento do vetor
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetor[i] << " "; // Imprime o elemento atual seguido de um espaço
    }
    std::cout << std::endl; // Imprime uma nova linha após imprimir todos os elementos
}

int main() {
    // Pesos das rochas (em quilogramas)
    double pesos[] = {12.5, 45.7, 23.1, 8.9, 33.2, 6.4, 44.6, 22.0, 15.3, 51.8, 16.7, 39.0, 47.2, 18.5, 12.3, 7.6, 3.2, 9.8, 2.5, 40.9};
    int n = 20; // Número total de rochas
    
    // Mostra o vetor antes da organização
    std::cout << "Vetor antes da organização: ";
    imprimirVetor(pesos, n);
    
    // Implementação do Insertion Sort
    // Loop para percorrer o vetor a partir do segundo elemento
    for (int i = 1; i < n; i++) {
        double chave = pesos[i]; // Armazena o valor atual para inserção ordenada
        int j = i - 1; // Inicializa o índice do elemento anterior ao atual
        // Move os elementos do vetor que são maiores que a chave para uma posição à frente
        while (j >= 0 && pesos[j] > chave) {
            pesos[j + 1] = pesos[j]; // Desloca o elemento atual para a direita
            j = j - 1; // Move para o elemento anterior
        }
        pesos[j + 1] = chave; // Insere a chave na posição correta
        
        // Mostra o vetor durante a organização
        std::cout << "Vetor durante a organização: ";
        imprimirVetor(pesos, n);
    }

    // Mostra o vetor após a organização
    std::cout << "Vetor após a organização: ";
    imprimirVetor(pesos, n);

    return 0;
}
