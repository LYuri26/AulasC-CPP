#include <iostream> // Biblioteca para entrada e saída padrão
#include <vector>   // Biblioteca para uso de vetores dinâmicos

// Função para ordenar o vetor usando o algoritmo Bubble Sort
void ordenarAmostrasRochas(std::vector<int> &amostrasRochas) {
    int tamanho = amostrasRochas.size(); // Obtém o tamanho do vetor
    bool trocou = true; // Inicializa a variável de controle de troca como verdadeira

    // Loop principal do algoritmo
    while (trocou) { // Enquanto trocou for verdadeiro, continua o loop
        trocou = false; // Define trocou como falso para esta iteração
        for (int i = 1; i < tamanho; ++i) { // Percorre o vetor
            if (amostrasRochas[i] > amostrasRochas[i - 1]) { // Se o elemento atual for maior que o anterior
                // Troca os elementos
                int temp = amostrasRochas[i];
                amostrasRochas[i] = amostrasRochas[i - 1];
                amostrasRochas[i - 1] = temp;
                trocou = true; // Define trocou como verdadeiro, indicando que ocorreu uma troca

                // Imprime as mudanças
                std::cout << "Trocou " << amostrasRochas[i] << " com " << amostrasRochas[i - 1] << ": ";
                // Imprime o vetor após a troca
                for (int j = 0; j < amostrasRochas.size(); ++j) {
                    if (j == i || j == i - 1) {
                        std::cout << "\033[1;31m"; // Altera a cor do texto para vermelho
                        std::cout << amostrasRochas[j] << " "; // Destaca os elementos relevantes do vetor
                        std::cout << "\033[0m"; // Retorna à cor padrão do texto
                    } else {
                        std::cout << amostrasRochas[j] << " ";
                    }
                }
                std::cout << std::endl;
            }
        }
        --tamanho; // Reduz o tamanho do vetor a ser percorrido
    }
}

int main() {
    // Vetor para armazenar as amostras de rochas
    std::vector<int> amostrasRochas = {23,45,12,36,8,31,17,50,4,29,39,19,42,7,25,10,48,
    16,33,5,21,37,11,47,3,28,15,41,9,44,20,49,26,2,38,22,
    14,46,6,30,18,43,1,34,24};

    // Imprime o vetor original
    std::cout << "Vetor original: ";
    for (int i = 0; i < amostrasRochas.size(); ++i) {
        std::cout << amostrasRochas[i] << " ";
    }
    std::cout << std::endl;

    // Ordena as amostras de rochas
    ordenarAmostrasRochas(amostrasRochas);

    // Imprime as amostras de rochas ordenadas
    std::cout << "Amostras de rochas ordenadas: ";
    for (int i = 0; i < amostrasRochas.size(); ++i) {
        std::cout << amostrasRochas[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
