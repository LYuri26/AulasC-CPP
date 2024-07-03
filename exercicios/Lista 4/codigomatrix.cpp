#include <iostream> // Biblioteca para entrada e saída de dados em C++

int main()
{
    const int MAX_CARACTERES = 10; // Tamanho máximo para o código
    char codigo[MAX_CARACTERES];   // Array de caracteres para armazenar o código

    // Código da Matrix: "0101"
    const char codigoMatrix[] = "0101";

    // Solicita ao usuário que insira o código
    std::cout << "Insira o codigo: ";
    std::cin >> codigo;

    // Verifica se o código inserido é igual ao código da Matrix
    int i = 0;
    while (codigo[i] != '\0' && codigoMatrix[i] != '\0')
    {
        if (codigo[i] != codigoMatrix[i])
        {
            std::cout << "O codigo inserido nao e o codigo da Matrix." << std::endl;
            return 0; // Encerra o programa se os códigos não forem iguais
        }
        i++;
    }

    // Verifica se ambos os códigos terminaram ao mesmo tempo
    if (codigo[i] == '\0' && codigoMatrix[i] == '\0')
    {
        std::cout << "O codigo inserido e o codigo da Matrix." << std::endl;
    }
    else
    {
        std::cout << "O codigo inserido nao e o codigo da Matrix." << std::endl;
    }

    return 0; // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
