#include <iostream>  // Biblioteca padrão para entrada e saída

// Função para imprimir o vetor com cores e destacar os elementos
void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        // Destacamos os elementos que estão sendo comparados e trocados com cores
        if (i == 0) {
            // Exibe o primeiro elemento (em azul)
            std::cout << "\033[1;34m[" << vetor[i] << "]\033[0m "; // Azul para o primeiro elemento
        } else {
            std::cout << vetor[i] << " ";  // Exibe os outros elementos normalmente
        }
    }
    std::cout << std::endl;
}

// Função para aplicar o Bubble Sort e mostrar cada passo da ordenação
void bubbleSort(int vetor[], int tamanho) {
    // Loop externo para passar por todo o vetor
    for (int i = 0; i < tamanho - 1; i++) {
        // Loop interno para comparar elementos adjacentes
        for (int j = 0; j < tamanho - i - 1; j++) {
            // Se o elemento atual for maior que o próximo, realizamos a troca
            if (vetor[j] > vetor[j + 1]) {
                // Exibe o vetor antes da troca com os índices coloridos
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

                // Realizando a troca sem usar swap (uso de uma variável temporária)
                int temp = vetor[j];       // Armazena temporariamente o valor de vetor[j]
                vetor[j] = vetor[j + 1];   // Substitui vetor[j] pelo valor de vetor[j+1]
                vetor[j + 1] = temp;       // Atribui o valor temporário a vetor[j+1]

                // Exibe o vetor após a troca, destacando os elementos trocados
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

        // Mostra as quantidades durante o progresso da ordenação
        std::cout << "Quantidades durante a ordenação (após a " << i + 1 << "ª passagem): ";
        imprimirVetor(vetor, tamanho);
    }
}

int main() {
    // Vetor com as quantidades de mercadorias no estoque
    int quantidades[] = {15, 99, 50, 60, 71, 58, 63, 99, 58, 86, 44, 100, 63, 38, 48, 7, 35, 59, 52, 7};
    int n = 20; // Número total de mercadorias no vetor

    // Exibe as quantidades antes da organização
    std::cout << "Quantidades antes da ordenação: ";
    imprimirVetor(quantidades, n);
    std::cout << std::endl;

    // Chama a função de ordenação com Bubble Sort
    bubbleSort(quantidades, n);

    // Exibe as quantidades após a ordenação
    std::cout << "Quantidades após a ordenação: ";
    imprimirVetor(quantidades, n);

    return 0;
}
