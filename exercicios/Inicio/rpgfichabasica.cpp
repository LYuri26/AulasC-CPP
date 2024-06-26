#include <iostream> // Biblioteca para entrada e saída padrão
#include <string>   // Biblioteca para manipulação de strings
#include <vector>   // Biblioteca para utilização de vetores

using namespace std; // Permite o uso de elementos da biblioteca padrão (std) sem o prefixo "std::"

// Função para cadastrar o nome do personagem
string cadastrarNomeDoPersonagem()
{
    string nomeDoPersonagem; // Declara uma variável para armazenar o nome do personagem
    cout << "Digite o nome do personagem: "; // Exibe uma mensagem solicitando ao usuário que insira o nome do personagem
    getline(cin, nomeDoPersonagem); // Lê o nome completo do usuário, permitindo a entrada de espaços
    cout << "Nome cadastrado: " << nomeDoPersonagem << endl; // Exibe uma mensagem confirmando o nome cadastrado
    return nomeDoPersonagem; // Retorna o nome cadastrado
}

// Função para cadastrar a classe do personagem
string cadastrarClasseDoPersonagem()
{
    string classeDoPersonagem; // Declara uma variável para armazenar a classe do personagem

    // Cria um vetor com as opções de classes disponíveis
    vector<string> opcoesDeClasse = {"Guerreiro", "Mago", "Arqueiro"};

    // Exibe as opções de classe disponíveis
    cout << "Escolha a classe do personagem:\n";
    for (int i = 0; i < opcoesDeClasse.size(); i++) // Loop para iterar sobre as opções de classe
    {
        // Exibe cada opção de classe com o número correspondente
        cout << i + 1 << ". " << opcoesDeClasse[i] << endl;
    }

    int escolha; // Declara uma variável para armazenar a escolha do usuário
    cout << "Digite o número da classe escolhida (1-3): "; // Solicita que o usuário insira o número da classe escolhida
    cin >> escolha; // Lê a escolha do usuário

    // Valida a escolha do usuário para garantir que seja um número entre 1 e 3
    while (escolha < 1 || escolha > 3)
    {
        // Se a escolha for inválida, solicita que o usuário insira novamente
        cout << "Opção inválida. Escolha uma classe válida (1-3): ";
        cin >> escolha;
    }

    // Define a classe do personagem baseada na escolha do usuário
    classeDoPersonagem = opcoesDeClasse[escolha - 1];
    cout << "Classe cadastrada: " << classeDoPersonagem << endl; // Exibe uma mensagem confirmando a classe cadastrada

    cin.ignore(); // Limpa o buffer de entrada para evitar problemas com a próxima entrada do usuário
    return classeDoPersonagem; // Retorna a classe cadastrada
}

// Função para cadastrar os atributos do personagem
vector<int> cadastrarAtributosDoPersonagem()
{
    // Cria um vetor com os nomes dos atributos
    vector<string> nomesDosAtributos = {"Força", "Agilidade", "Inteligência"};
    vector<int> valoresDosAtributos; // Declara um vetor para armazenar os valores dos atributos

    // Solicita que o usuário insira os valores para cada atributo
    cout << "Digite os valores para os seguintes atributos:\n";
    for (int i = 0; i < nomesDosAtributos.size(); i++) // Loop para iterar sobre os atributos
    {
        int valor; // Declara uma variável para armazenar o valor do atributo
        cout << nomesDosAtributos[i] << ": "; // Exibe o nome do atributo e solicita o valor
        cin >> valor; // Lê o valor do atributo inserido pelo usuário
        valoresDosAtributos.push_back(valor); // Adiciona o valor ao vetor de valores dos atributos
    }

    return valoresDosAtributos; // Retorna o vetor com os valores dos atributos cadastrados
}

// Função para cadastrar as habilidades do personagem
vector<string> cadastrarHabilidadesDoPersonagem()
{
    vector<string> habilidadesDoPersonagem; // Declara um vetor para armazenar as habilidades do personagem

    string habilidade; // Declara uma variável para armazenar cada habilidade inserida
    char adicionarMais = 's'; // Variável para verificar se o usuário deseja adicionar mais habilidades
    cin.ignore(); // Limpa o buffer de entrada para evitar problemas com a leitura da primeira habilidade

    // Loop para solicitar as habilidades do personagem
    while (adicionarMais == 's' || adicionarMais == 'S')
    {
        cout << "Digite uma habilidade para o personagem: "; // Solicita que o usuário insira uma habilidade
        getline(cin, habilidade); // Lê a habilidade do usuário
        habilidadesDoPersonagem.push_back(habilidade); // Adiciona a habilidade ao vetor de habilidades

        // Pergunta se o usuário deseja adicionar mais habilidades
        cout << "Deseja adicionar mais uma habilidade? (s/n): ";
        cin >> adicionarMais; // Lê a resposta do usuário
        cin.ignore(); // Limpa o buffer de entrada para a próxima leitura
    }

    return habilidadesDoPersonagem; // Retorna o vetor com as habilidades cadastradas
}

// Função principal que coordena o cadastro e exibição do personagem
int main()
{
    // Cadastra o nome do personagem chamando a função correspondente
    string nomeDoPersonagem = cadastrarNomeDoPersonagem();

    // Cadastra a classe do personagem chamando a função correspondente
    string classeDoPersonagem = cadastrarClasseDoPersonagem();

    // Cadastra os atributos do personagem chamando a função correspondente
    vector<int> atributosDoPersonagem = cadastrarAtributosDoPersonagem();

    // Cadastra as habilidades do personagem chamando a função correspondente
    vector<string> habilidadesDoPersonagem = cadastrarHabilidadesDoPersonagem();

    // Exibe a ficha completa do personagem diretamente no main
    cout << "\nFicha do Personagem:\n"; // Título da ficha do personagem
    cout << "Nome: " << nomeDoPersonagem << endl; // Exibe o nome do personagem
    cout << "Classe: " << classeDoPersonagem << endl; // Exibe a classe do personagem

    // Exibe os atributos do personagem
    cout << "Atributos:\n"; // Título da seção de atributos
    vector<string> nomesDosAtributos = {"Força", "Agilidade", "Inteligência"}; // Vetor com os nomes dos atributos
    for (int i = 0; i < atributosDoPersonagem.size(); i++) // Loop para iterar sobre os atributos do personagem
    {
        // Exibe cada atributo com seu valor correspondente
        cout << "  - " << nomesDosAtributos[i] << ": " << atributosDoPersonagem[i] << endl;
    }

    // Exibe as habilidades do personagem
    cout << "Habilidades:\n"; // Título da seção de habilidades
    for (int i = 0; i < habilidadesDoPersonagem.size(); i++) // Loop para iterar sobre as habilidades do personagem
    {
        // Exibe cada habilidade
        cout << "  - " << habilidadesDoPersonagem[i] << endl;
    }

    return 0; // Retorna 0 indicando que o programa foi executado com sucesso
}
