#include <iostream>  // Biblioteca padrão para entrada e saída

// Função para imprimir o vetor com cores e destacar os elementos
void imprimirVetor(double vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (i == 0) {
            // Exibe o primeiro elemento em azul
            std::cout << "\033[1;34m[" << vetor[i] << "]\033[0m "; // Azul para o primeiro elemento
        } else {
            std::cout << vetor[i] << " ";  // Exibe os outros elementos normalmente
        }
    }
    std::cout << std::endl;
}

// Função para aplicar o Insertion Sort e mostrar cada passo da ordenação
void insertionSort(double vetor[], int tamanho) {
    // Loop para percorrer o vetor a partir do segundo elemento (índice 1)
    for (int i = 1; i < tamanho; i++) {
        double chave = vetor[i];  // Armazena o valor atual para inserção ordenada
        int j = i - 1;  // Inicializa o índice do elemento anterior ao atual
        
        // Move os elementos do vetor que são maiores que a chave para uma posição à frente
        while (j >= 0 && vetor[j] > chave) {
            // Exibe o vetor durante o deslocamento dos elementos
            std::cout << "Vetor antes de mover (índice " << j << "): ";
            for (int k = 0; k < tamanho; k++) {
                if (k == j) {
                    std::cout << "\033[1;31m[" << vetor[k] << "]\033[0m "; // Vermelho para o elemento maior
                } else {
                    std::cout << vetor[k] << " "; // Exibe os outros elementos normalmente
                }
            }
            std::cout << std::endl;

            // Desloca o elemento atual para a direita
            vetor[j + 1] = vetor[j]; 
            j = j - 1;  // Move para o elemento anterior
        }
        
        // Insere a chave na posição correta
        vetor[j + 1] = chave;

        // Exibe o vetor após a inserção da chave na posição correta
        std::cout << "Vetor após a inserção (inserindo " << chave << " no índice " << j + 1 << "): ";
        for (int k = 0; k < tamanho; k++) {
            if (k == j + 1) {
                std::cout << "\033[1;32m[" << vetor[k] << "]\033[0m "; // Verde para o elemento inserido
            } else {
                std::cout << vetor[k] << " "; // Exibe os outros elementos normalmente
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    // Vetor com os pesos das rochas (em quilogramas)
    double pesos[] = {12.5, 45.7, 23.1, 8.9, 33.2, 6.4, 44.6, 22.0, 15.3, 51.8, 16.7, 39.0, 47.2, 18.5, 12.3, 7.6, 3.2, 9.8, 2.5, 40.9};
    int n = 20; // Número total de rochas no vetor
    
    // Exibe o vetor antes da organização
    std::cout << "Vetor antes da organização: ";
    imprimirVetor(pesos, n);
    std::cout << std::endl;
    
    // Chama a função de ordenação com Insertion Sort
    insertionSort(pesos, n);

    // Exibe o vetor após a organização
    std::cout << "Vetor após a organização: ";
    imprimirVetor(pesos, n);

    return 0;
}
