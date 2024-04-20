#include <iostream> // Biblioteca para entrada e saída de dados em C++
#include <vector>   // Biblioteca para utilizar vetor em C++

// Estrutura para representar um contato
struct Contato
{
    std::string nome;
    std::string telefone;
};

// Função para adicionar novo contato à agenda
void adicionarContato(std::vector<Contato> &agenda, std::string nome, std::string telefone)
{
    Contato novoContato = {nome, telefone}; // Cria um novo contato com o nome e telefone fornecidos
    agenda.push_back(novoContato);          // Adiciona o novo contato ao final do vetor
}

// Função para buscar contato pelo nome
void buscarContato(std::vector<Contato> &agenda, std::string nome)
{
    for (const auto &contato : agenda)
    {
        if (contato.nome == nome)
        { // Verifica se o nome do contato corresponde ao nome fornecido
            std::cout << "Nome: " << contato.nome << ", Telefone: " << contato.telefone << std::endl;
            return; // Sai da função após encontrar o contato
        }
    }
    std::cout << "Contato não encontrado.\n"; // Exibe mensagem se o contato não for encontrado
}

// Função para exibir a lista de contatos
void exibirAgenda(std::vector<Contato> &agenda)
{
    std::cout << "Lista de contatos:\n";
    for (const auto &contato : agenda)
    {
        std::cout << "Nome: " << contato.nome << ", Telefone: " << contato.telefone << std::endl; // Exibe cada contato da agenda
    }
}

int main()
{
    std::vector<Contato> agenda; // Vetor para armazenar os contatos

    // Adiciona alguns contatos à agenda inicialmente
    adicionarContato(agenda, "Coringa", "999-8888");
    adicionarContato(agenda, "Pinguim", "777-6666");
    adicionarContato(agenda, "Duas Caras", "555-4444");

    // Exibe a agenda de contatos inicial
    exibirAgenda(agenda);

    // Busca por um contato específico
    std::cout << "\nBusca por contato:\n";
    buscarContato(agenda, "Pinguim");

    return 0;
}
