#include <iostream>  // Biblioteca padrão para entrada e saída

// Função para imprimir o vetor com cores e destacar os elementos
void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (i == 0) {
            // Exibe o primeiro elemento
            std::cout << "\033[1;34m[" << vetor[i] << "]\033[0m "; // Azul para o primeiro elemento
        } else {
            std::cout << vetor[i] << " ";  // Exibe os outros elementos
        }
    }
    std::cout << std::endl;
}

// Função para ordenar com Bubble Sort e mostrar cada passo
void bubbleSort(int vetor[], int tamanho) {
    // Loop externo para percorrer todo o vetor
    for (int i = 0; i < tamanho - 1; i++) {
        // Loop interno para comparar elementos adjacentes
        for (int j = 0; j < tamanho - i - 1; j++) {
            // Se o elemento atual for maior que o próximo, realizamos a troca
            if (vetor[j] > vetor[j + 1]) {
                // Exibindo o vetor antes da troca com destaque nas posições dos elementos
                std::cout << "Vetor antes da troca (índices " << j << " e " << j + 1 << "): ";
                for (int k = 0; k < tamanho; k++) {
                    if (k == j) {
                        std::cout << "\033[1;31m[" << vetor[k] << "]\033[0m "; // Vermelho para o elemento j
                    } else if (k == j + 1) {
                        std::cout << "\033[1;32m[" << vetor[k] << "]\033[0m "; // Verde para o elemento j+1
                    } else {
                        std::cout << vetor[k] << " "; // Outros elementos são exibidos normalmente
                    }
                }
                std::cout << std::endl;

                // Realizando a troca manualmente (sem uso de swap)
                int temp = vetor[j];       // Armazena o valor temporário de vetor[j]
                vetor[j] = vetor[j + 1];   // Substitui vetor[j] pelo valor de vetor[j+1]
                vetor[j + 1] = temp;       // Atribui o valor temporário a vetor[j+1]

                // Exibindo o vetor após a troca com os elementos destacados
                std::cout << "Vetor após a troca (índices " << j << " e " << j + 1 << "): ";
                for (int k = 0; k < tamanho; k++) {
                    if (k == j) {
                        std::cout << "\033[1;31m[" << vetor[k] << "]\033[0m "; // Vermelho para o elemento j
                    } else if (k == j + 1) {
                        std::cout << "\033[1;32m[" << vetor[k] << "]\033[0m "; // Verde para o elemento j+1
                    } else {
                        std::cout << vetor[k] << " "; // Outros elementos são exibidos normalmente
                    }
                }
                std::cout << std::endl;
            }
        }
    }
}

int main() {
    // Vetor com as alturas dos legionários em centímetros
    int alturas[] = {175, 165, 185, 190, 175, 160, 170, 180, 172, 178, 168, 176, 182, 174, 169, 185, 168, 172, 183, 177};
    int n = 20; // Número total de elementos no vetor

    // Exibe o vetor antes da organização
    std::cout << "Vetor antes da organização: ";
    imprimirVetor(alturas, n);
    std::cout << std::endl;

    // Chama a função de ordenação
    bubbleSort(alturas, n);

    // Exibe o vetor ordenado
    std::cout << "Alturas dos legionários em ordem crescente: ";
    imprimirVetor(alturas, n);

    return 0;
}
