#include <iostream> // Incluindo a biblioteca para entrada e saída padrão
#include <vector>   // Incluindo a biblioteca para utilizar vetores
#include <string>   // Incluindo a biblioteca para utilizar strings

// Classe para representar um serviço
class Servico
{
private:
    std::string nome;  // Nome do serviço
    std::string senha; // Senha do serviço

public:
    // Construtor para inicializar o serviço com nome e senha
    Servico(std::string nome, std::string senha) : nome(nome), senha(senha) {}

    // Método para obter o nome do serviço
    std::string obterNome() const
    {
        return nome;
    }

    // Método para obter a senha do serviço
    std::string obterSenha() const
    {
        return senha;
    }
};

// Classe para representar a lista de serviços
class ListaServicos
{
private:
    std::vector<Servico> servicos; // Vetor para armazenar os serviços

public:
    // Método para adicionar um novo serviço à lista
    void adicionarServico(std::string nome, std::string senha)
    {
        servicos.push_back(Servico(nome, senha)); // Adiciona o serviço ao vetor
    }

    // Método para buscar a senha de um serviço pelo nome
    std::string buscarSenha(std::string nome) const
    {
        for (int i = 0; i < servicos.size(); ++i)
        {
            if (servicos[i].obterNome() == nome) // Verifica se o serviço foi encontrado
            {
                return servicos[i].obterSenha(); // Retorna a senha correspondente
            }
        }
        return ""; // Retorna uma string vazia se o serviço não for encontrado
    }

    // Método para exibir a lista de serviços e senhas
    void exibirLista() const
    {
        std::cout << "Lista de serviços e senhas:\n";
        for (int i = 0; i < servicos.size(); ++i)
        {
            std::cout << "Serviço: " << servicos[i].obterNome() << ", Senha: " << servicos[i].obterSenha() << std::endl; // Exibe cada serviço com sua senha
        }
    }
};

int main()
{
    ListaServicos listaServicos; // Instância da lista de serviços

    // Adiciona alguns serviços com senhas inicialmente
    listaServicos.adicionarServico("S.H.I.E.L.D. HQ", "Av3ng3rs");
    listaServicos.adicionarServico("Banco Stark", "$tarkIndu$trie$");

    // Exibe a lista de serviços e senhas inicial
    listaServicos.exibirLista();

    // Simula a busca de senha para um serviço
    std::string senha = listaServicos.buscarSenha("S.H.I.E.L.D. HQ");
    if (!senha.empty()) // Verifica se a senha foi encontrada
    {
        std::cout << "Senha para S.H.I.E.L.D. HQ: " << senha << std::endl; // Exibe a senha correspondente
    }
    else
    {
        std::cout << "Serviço não encontrado na lista de senhas.\n"; // Exibe mensagem se o serviço não for encontrado
    }

    return 0; // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
