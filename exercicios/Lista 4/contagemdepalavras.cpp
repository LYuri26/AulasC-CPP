#include <iostream> // Biblioteca para entrada e saída de dados em C++

int main()
{
    const int MAX_CARACTERES = 1000; // Tamanho máximo da frase
    char frase[MAX_CARACTERES];      // Array de caracteres para armazenar a frase
    int contador = 1;                // Inicializa o contador de palavras com 1 (para contar a primeira palavra)

    // Solicita ao usuário que insira uma frase
    std::cout << "Insira uma frase: ";
    std::cin.getline(frase, MAX_CARACTERES); // Lê a frase do usuário

    // Percorre a frase para contar as palavras (considerando que são separadas por espaços)
    for (int i = 0; frase[i] != '\0'; ++i)
    {
        // Verifica se o caractere atual é um espaço em branco
        if (frase[i] == ' ')
        {
            contador++; // Incrementa o contador se encontrar um espaço em branco
        }
    }

    // Exibe o resultado
    std::cout << "A frase possui " << contador << " palavras em Elvish." << std::endl;

    return 0; // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
