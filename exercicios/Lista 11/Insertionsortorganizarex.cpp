#include <iostream> // Biblioteca para entrada e saída padrão
#include <vector>   // Biblioteca para uso de vetores dinâmicos

// Função para ordenar o vetor usando o algoritmo Insertion Sort
void ordenarElevacoesMontanhas(std::vector<int> &elevacoes) {
    int tamanho = elevacoes.size(); // Obtém o tamanho do vetor

    // Loop para percorrer o vetor a partir do segundo elemento
    for (int i = 1; i < tamanho; ++i) {
        int chave = elevacoes[i]; // Armazena o valor atual para inserção ordenada
        int j = i - 1; // Inicializa o índice para comparar com os elementos anteriores

        // Loop para encontrar a posição correta para inserir a chave
        while (j >= 0 && elevacoes[j] < chave) {
            elevacoes[j + 1] = elevacoes[j]; // Move os elementos maiores para frente
            --j;

            // Imprime as mudanças
            std::cout << "Trocou " << elevacoes[j + 1] << " com " << elevacoes[j] << ": ";
            // Imprime o vetor após a troca
            for (int k = 0; k < tamanho; ++k) {
                if (k == j || k == j + 1) {
                    std::cout << "\033[1;31m"; // Altera a cor do texto para vermelho
                    std::cout << elevacoes[k] << " "; // Destaca os elementos relevantes do vetor
                    std::cout << "\033[0m"; // Retorna à cor padrão do texto
                } else {
                    std::cout << elevacoes[k] << " ";
                }
            }
            std::cout << std::endl;
        }
        elevacoes[j + 1] = chave; // Insere a chave na posição correta
    }
}

int main() {
    // Vetor para armazenar as elevações das montanhas
    std::vector<int> elevacoesMontanhas = {9,36,17,48,22,3,41,12,27,39,5,31,
    20,42,7,44,29,15,38,1,50,26,11,35,19,46,8,33,14,47,23,6,30,16,40,2,45,10,
    28,37,21,34,4,49,25,13,32,189,36,17,48,22,3,41,12,27,39,5,31,20,42,7,44,
    29,15,38,1,50,26,11,35,19,46,8,33,14,47,23,6,30,16,40,2,45,10,28,37,21,
    34,4,49,25,13,32,18};

    // Imprime o vetor original
    std::cout << "Vetor original: ";
    for (int i = 0; i < elevacoesMontanhas.size(); ++i) {
        std::cout << elevacoesMontanhas[i] << " ";
    }
    std::cout << std::endl;

    // Ordena as elevações das montanhas
    ordenarElevacoesMontanhas(elevacoesMontanhas);

    // Imprime as elevações das montanhas ordenadas
    std::cout << "Elevações das montanhas ordenadas: ";
    for (int i = 0; i < elevacoesMontanhas.size(); ++i) {
        std::cout << elevacoesMontanhas[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
