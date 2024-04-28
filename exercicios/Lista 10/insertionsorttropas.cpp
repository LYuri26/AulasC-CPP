#include <iostream>

// Função para imprimir o vetor
void imprimirVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    // Experiências das tropas
    int experiencias[] = {24, 49, 73, 48, 59, 19, 62, 72, 43, 2, 48, 85, 35, 49, 2, 7, 58, 74, 56, 6};
    int n = 20; // Número total de tropas

    // Mostra as experiências antes da ordenação
    std::cout << "Experiências antes da ordenação: ";
    imprimirVetor(experiencias, n);

    // Implementação do Insertion Sort
    for (int i = 1; i < n; i++)
    {
        int chave = experiencias[i]; // Armazena o valor atual para inserção ordenada
        int j = i - 1;
        // Move os elementos do vetor que são maiores que a chave para uma posição à frente
        while (j >= 0 && experiencias[j] > chave)
        {
            experiencias[j + 1] = experiencias[j];
            j = j - 1;
        }
        experiencias[j + 1] = chave; // Insere a chave na posição correta

        // Mostra as experiências durante a ordenação
        std::cout << "Experiências durante a ordenação: ";
        imprimirVetor(experiencias, n);
    }

    // Mostra as experiências após a ordenação
    std::cout << "Experiências após a ordenação: ";
    imprimirVetor(experiencias, n);

    return 0;
}
