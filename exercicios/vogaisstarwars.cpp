#include <iostream> // Biblioteca para entrada e saída de dados em C++
#include <string>   // Biblioteca para utilizar strings

// Função para contar o número de vogais do alfabeto Star Wars na frase fornecida
int contarVogaisStarWars(std::string frase) {
    int contador = 0; // Inicializa o contador de vogais
    
    // Percorre a frase para contar as vogais do alfabeto Star Wars
    for (int i = 0; i < frase.length(); ++i) {
        // Converte o caractere atual para minúsculo antes de verificar
        char caractere = std::tolower(frase[i]);
        
        // Verifica se o caractere atual é uma vogal do alfabeto Star Wars
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            contador++; // Incrementa o contador se for uma vogal
        }
    }
    
    return contador; // Retorna o total de vogais encontradas
}

int main() {
    std::string frase;
    
    // Solicita ao usuário que insira uma frase
    std::cout << "Insira uma frase: ";
    std::getline(std::cin, frase);
    
    // Conta o número de vogais na frase
    int totalVogais = contarVogaisStarWars(frase);
    
    // Exibe o resultado
    std::cout << "A frase possui " << totalVogais << " vogais no alfabeto Star Wars." << std::endl;

    return 0; // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
