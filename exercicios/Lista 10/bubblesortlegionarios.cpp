#include <iostream>

// Função para imprimir o vetor
void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Alturas dos legionários (em centímetros)
    int alturas[] = {175, 165, 185, 190, 175, 160, 170, 180, 172, 178, 168, 176, 182, 174, 169, 185, 168, 172, 183, 177};
    int n = 20; // Número total de legionários
    
    // Mostra o vetor antes da organização
    std::cout << "Vetor antes da organização: ";
    imprimirVetor(alturas, n);
    
    // Implementação do Bubble Sort
    // Loop externo para percorrer todo o vetor exceto o último elemento
    for (int i = 0; i < n - 1; i++)
    {
        // Loop interno para percorrer o vetor e comparar os elementos adjacentes
        for (int j = 0; j < n - i - 1; j++)
        {
            // Condição para verificar se o elemento atual é maior que o próximo elemento
            if (alturas[j] > alturas[j + 1])
            {
                // Troca de alturas
                int temp = alturas[j];       // Armazena temporariamente o valor do elemento atual
                alturas[j] = alturas[j + 1]; // Substitui o elemento atual pelo próximo elemento
                alturas[j + 1] = temp;       // Substitui o próximo elemento pelo valor armazenado temporariamente
                
                // Mostra o vetor durante a organização
                std::cout << "Vetor durante a organização: ";
                imprimirVetor(alturas, n);
            }
        }
    }

    // Imprime as alturas dos legionários em ordem crescente
    std::cout << "Alturas dos legionários em ordem crescente:\n";
    // Loop para imprimir cada altura do vetor
    for (int i = 0; i < n; i++)
    {
        std::cout << alturas[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
