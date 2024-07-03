#include <iostream>
using namespace std;

// Estrutura para representar um contato
struct Contato
{
    string nome;
    string telefone;
};

int main()
{
    const int MAX_CONTATOS = 100; // Tamanho máximo para o array de contatos
    Contato agenda[MAX_CONTATOS]; // Array para armazenar os contatos
    int num_contatos = 0;         // Contador para controlar o número de contatos cadastrados

    // Adiciona alguns contatos à agenda inicialmente
    agenda[num_contatos++] = {"Coringa", "999-8888"};
    agenda[num_contatos++] = {"Pinguim", "777-6666"};
    agenda[num_contatos++] = {"Duas Caras", "555-4444"};

    // Exibe a agenda de contatos inicial
    cout << "Lista de contatos:\n";
    for (int i = 0; i < num_contatos; ++i)
    {
        cout << "Nome: " << agenda[i].nome << ", Telefone: " << agenda[i].telefone << endl;
    }

    // Busca por um contato específico
    string nome_busca = "Pinguim";
    cout << "\nBusca por contato '" << nome_busca << "':\n";
    bool encontrado = false;
    for (int i = 0; i < num_contatos; ++i)
    {
        if (agenda[i].nome == nome_busca)
        {
            cout << "Nome: " << agenda[i].nome << ", Telefone: " << agenda[i].telefone << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado)
    {
        cout << "Contato não encontrado.\n";
    }

    return 0;
}
