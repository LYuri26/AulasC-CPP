#include <iostream>

// Função para imprimir o vetor com cores, destacando os elementos em foco
void imprimirVetor(int vetor[], int tamanho, int indiceAtual, int indiceMenor) {
    for (int i = 0; i < tamanho; i++) {
        if (i == indiceAtual) {
            // Destaca o elemento atual em amarelo (indicando que ele está sendo comparado)
            std::cout << "\033[1;33m[" << vetor[i] << "]\033[0m ";  
        } else if (i == indiceMenor) {
            // Destaca o menor elemento encontrado em verde
            std::cout << "\033[1;32m[" << vetor[i] << "]\033[0m ";  
        } else {
            // Exibe os outros elementos normalmente
            std::cout << vetor[i] << " ";  
        }
    }
    std::cout << std::endl;
}

// Função que implementa o Selection Sort com animação de troca e comparação
void selectionSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int menorIndice = i;  // Assume o menor elemento como o elemento na posição i

        // Encontra o índice do menor elemento no vetor a partir da posição i+1
        for (int j = i + 1; j < tamanho; j++) {
            // Mostra o vetor com o elemento atual sendo comparado e o menor encontrado
            imprimirVetor(vetor, tamanho, j, menorIndice);
            
            if (vetor[j] < vetor[menorIndice]) {
                menorIndice = j;  // Atualiza o menor índice
            }
        }
        
        // Se o menor elemento não for o que já está na posição i, trocamos
        if (menorIndice != i) {
            int elementoTemp = vetor[i];  // Armazena o valor atual
            vetor[i] = vetor[menorIndice];  // Coloca o menor elemento na posição i
            vetor[menorIndice] = elementoTemp;  // Coloca o elemento temporário na posição do menor

            // Exibe o vetor após a troca para mostrar a evolução do algoritmo
            std::cout << "Após a troca, o vetor se torna: ";
            imprimirVetor(vetor, tamanho, i, menorIndice);
        }
    }
}

int main() {
    // Vetor com as quantidades de alimentos (em quilogramas) nos sacos
    int quantidades[] = {82, 17, 62, 21, 17, 24, 79, 27, 9, 29, 41, 19, 80, 61, 45, 16, 2, 38, 34, 29};
    int n = 20; // Número total de sacos
    
    // Mostra o vetor antes da organização
    std::cout << "Quantidades antes da ordenação: ";
    imprimirVetor(quantidades, n, -1, -1);
    
    // Chama a função que executa o Selection Sort
    selectionSort(quantidades, n);
    
    // Exibe o vetor após a ordenação
    std::cout << "Quantidades após a ordenação: ";
    imprimirVetor(quantidades, n, -1, -1);

    return 0;
}
