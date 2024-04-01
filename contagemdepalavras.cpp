#include <iostream> // Biblioteca para entrada e saída de dados em C++
#include <string>   // Biblioteca para utilizar strings

// Função para contar o número de palavras na frase fornecida
int contarPalavrasElvish(std::string frase) {
    int contador = 1; // Inicializa o contador de palavras com 1 (para contar a primeira palavra)
    
    // Percorre a frase para contar as palavras (considerando que são separadas por espaços)
    for (int i = 0; i < frase.length(); ++i) {
        // Verifica se o caractere atual é um espaço em branco
        if (frase[i] == ' ') {
            contador++; // Incrementa o contador se encontrar um espaço em branco
        }
    }
    
    return contador; // Retorna o total de palavras encontradas
}

int main() {
    std::string frase;
    
    // Solicita ao usuário que insira uma frase
    std::cout << "Insira uma frase: ";
    std::getline(std::cin, frase);
    
    // Conta o número de palavras na frase
    int totalPalavras = contarPalavrasElvish(frase);
    
    // Exibe o resultado
    std::cout << "A frase possui " << totalPalavras << " palavras em Elvish." << std::endl;

    return 0; // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
