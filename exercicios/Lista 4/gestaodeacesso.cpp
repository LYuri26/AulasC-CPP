#include <iostream>
#include <vector>

using namespace std;

// Estrutura para representar os terminais e senhas
struct Terminal
{
    string nome;  // Define uma string para o nome do terminal
    string senha; // Define uma string para a senha do terminal
};

// Função para adicionar novo terminal com senha
void adicionarTerminal(vector<Terminal> terminais, string nome, string senha)
{
    // Cria um novo terminal com o nome e senha fornecidos
    Terminal novoTerminal;
    novoTerminal.nome = nome;   // Atribui o nome fornecido ao novo terminal
    novoTerminal.senha = senha; // Atribui a senha fornecida ao novo terminal

    // Adiciona o novo terminal ao vetor de terminais
    terminais.push_back(novoTerminal); // Insere o novo terminal no final do vetor de terminais

    // Exibe os terminais e senhas após a adição do novo terminal
    for (int i = 0; i < terminais.size(); ++i) // Loop para percorrer todos os terminais
    {
        cout << terminais[i].nome << " (Senha: " << terminais[i].senha << ")\n"; // Imprime o nome e a senha de cada terminal
    }
}

// Função para buscar senha pelo nome do terminal
string buscarSenhaPorTerminal(vector<Terminal> terminais, string nome)
{
    // Percorre todos os terminais no vetor
    for (int i = 0; i < terminais.size(); ++i) // Loop para percorrer todos os terminais
    {
        // Verifica se o nome do terminal atual é igual ao nome fornecido
        if (terminais[i].nome == nome) // Se o nome do terminal atual for igual ao nome fornecido
        {
            // Se encontrado, retorna a senha correspondente
            return terminais[i].senha; // Retorna a senha do terminal encontrado
        }
    }
    // Se o terminal não for encontrado, retorna uma mensagem indicando isso
    return "Terminal não encontrado"; // Retorna uma mensagem indicando que o terminal não foi encontrado
}

int main()
{
    vector<Terminal> terminais; // Declara um vetor de terminais

    // Adicionando exemplos de terminais e senhas
    adicionarTerminal(terminais, "Controle de Armas", "Rebel1on!");        // Adiciona um terminal com senha ao vetor de terminais
    adicionarTerminal(terminais, "Centro de Comando", "Secr3tB@s3");       // Adiciona um terminal com senha ao vetor de terminais
    adicionarTerminal(terminais, "Sistema de Comunicação", "FreedomP@ss"); // Adiciona um terminal com senha ao vetor de terminais

    // Exibindo os terminais e senhas
    for (int i = 0; i < terminais.size(); ++i) // Loop para percorrer todos os terminais
    {
        cout << terminais[i].nome << " (Senha: " << terminais[i].senha << ")\n"; // Imprime o nome e a senha de cada terminal
    }

    // Testando a busca por senha
    string nomeTerminal = "Centro de Comando";                                                                               // Define o nome do terminal para o qual se deseja buscar a senha
    cout << "\nSenha para o terminal '" << nomeTerminal << "': " << buscarSenhaPorTerminal(terminais, nomeTerminal) << endl; // Imprime a senha do terminal desejado

    return 0; // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
