#include <iostream> // Biblioteca para entrada e saída de dados em C++
#include <string>   // Biblioteca para utilizar strings

// Função para verificar se o código inserido é igual ao código da Matrix
bool verificarCodigoMatrix(std::string codigo)
{
    // Verifica se o código fornecido é igual ao código da Matrix
    if (codigo == "0101")
    {
        return true; // Retorna verdadeiro se os códigos forem iguais
    }
    else
    {
        return false; // Retorna falso se os códigos forem diferentes
    }
}

int main()
{
    std::string codigo;

    // Solicita ao usuário que insira o código
    std::cout << "Insira o codigo: ";
    std::cin >> codigo;

    // Verifica se o código inserido é o código da Matrix
    if (verificarCodigoMatrix(codigo))
    {
        std::cout << "O codigo inserido e o codigo da Matrix." << std::endl;
    }
    else
    {
        std::cout << "O codigo inserido nao e o codigo da Matrix." << std::endl;
    }

    return 0; // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
