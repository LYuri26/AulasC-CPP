#include <iostream>  // Biblioteca padrão para entrada e saída

// Função para imprimir o vetor com cores e destacar os elementos
void imprimirVetor(int vetor[], int tamanho) {
    // Loop para imprimir cada elemento do vetor
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
void insertionSort(int vetor[], int tamanho) {
    // Loop para percorrer o vetor a partir do segundo elemento (índice 1)
    for (int i = 1; i < tamanho; i++) {
        int chave = vetor[i];  // Armazena o valor atual para inserção ordenada
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
    // Vetor com as experiências das tropas
    int experiencias[] = {24, 49, 73, 48, 59, 19, 62, 72, 43, 2, 48, 85, 35, 49, 2, 7, 58, 74, 56, 6};
    int n = 20; // Número total de tropas no vetor
    
    // Exibe o vetor antes da organização
    std::cout << "Experiências antes da ordenação: ";
    imprimirVetor(experiencias, n);
    std::cout << std::endl;
    
    // Chama a função de ordenação com Insertion Sort
    insertionSort(experiencias, n);

    // Exibe o vetor após a organização
    std::cout << "Experiências após a ordenação: ";
    imprimirVetor(experiencias, n);

    return 0;
}
