#include <iostream> // Biblioteca para entrada e saída padrão
#include <string>   // Biblioteca para manipulação de strings

using namespace std; // Permite o uso dos identificadores da biblioteca padrão diretamente, sem a necessidade de prefixos como "std::"

int main()
{                                       // Função principal do programa
    string nomeDinossauro;              // Variável para armazenar o nome do dinossauro
    int anoDescoberta, idadeDinossauro; // Variáveis para armazenar o ano de descoberta e a idade do dinossauro

    cout << "Digite o nome do dinossauro: "; // Solicita ao usuário que digite o nome do dinossauro
    getline(cin, nomeDinossauro);            // Obtém o nome do dinossauro fornecido pelo usuário

    cout << "Digite o ano de descoberta do dinossauro: "; // Solicita ao usuário que digite o ano de descoberta do dinossauro
    cin >> anoDescoberta;                                 // Obtém o ano de descoberta do dinossauro fornecido pelo usuário

    idadeDinossauro = 2024 - anoDescoberta; // Calcula a idade do dinossauro subtraindo o ano de descoberta do ano atual

    cout << "O dinossauro " << nomeDinossauro << " tem " << idadeDinossauro << " anos." << endl; // Exibe a idade do dinossauro junto com o nome

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
