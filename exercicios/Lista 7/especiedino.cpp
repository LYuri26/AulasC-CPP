#include <iostream> // Biblioteca para entrada e saída padrão
#include <string>   // Biblioteca para manipulação de strings

using namespace std; // Permite o uso dos identificadores da biblioteca padrão diretamente, sem a necessidade de prefixos como "std::"

int main()
{
    // Variável para armazenar o nome do dinossauro inserido pelo usuário
    string nomeDinossauro;

    // Solicita ao usuário que insira o nome do dinossauro
    cout << "Digite o nome do dinossauro: ";
    getline(cin, nomeDinossauro); // Obtém a entrada do usuário e armazena na variável nomeDinossauro

    // Verifica o nome do dinossauro e exibe a espécie correspondente
    if (nomeDinossauro == "Tyrannosaurus Rex")
    {                                // Verifica se o nome é "Tyrannosaurus Rex"
        cout << "Carnívoro" << endl; // Se verdadeiro, exibe "Carnívoro"
    }
    else if (nomeDinossauro == "Velociraptor")
    {                                // Verifica se o nome é "Velociraptor"
        cout << "Carnívoro" << endl; // Se verdadeiro, exibe "Carnívoro"
    }
    else if (nomeDinossauro == "Triceratops")
    {                                // Verifica se o nome é "Triceratops"
        cout << "Herbívoro" << endl; // Se verdadeiro, exibe "Herbívoro"
    }
    else if (nomeDinossauro == "Brachiosaurus")
    {                                // Verifica se o nome é "Brachiosaurus"
        cout << "Herbívoro" << endl; // Se verdadeiro, exibe "Herbívoro"
    }
    else
    {
        cout << "Dinossauro não encontrado no banco de dados." << endl; // Se nenhum dos anteriores, exibe mensagem de erro
    }

    return 0;
}
