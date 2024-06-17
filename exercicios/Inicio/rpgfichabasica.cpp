#include <iostream> // Biblioteca para entrada e saída padrão
#include <string>   // Biblioteca para manipulação de strings
#include <vector>   // Biblioteca para utilização de vetores

using namespace std; // Permite o uso de elementos da biblioteca padrão (std) sem o prefixo "std::"

// Função para cadastrar o nome do personagem
string cadastrarNomeDoPersonagem()
{
    string nomeDoPersonagem;                 // Declara uma variável para armazenar o nome do personagem
    cout << "Digite o nome do personagem: "; // Solicita ao usuário que insira o nome do personagem
    getline(cin, nomeDoPersonagem);          // Lê o nome completo do usuário, permitindo espaços
    return nomeDoPersonagem;                 // Retorna o nome cadastrado
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
        // Exibe a opção de classe com o número correspondente
        cout << i + 1 << ". " << opcoesDeClasse[i] << endl;
    }

    int escolha;                                 // Declara uma variável para armazenar a escolha do usuário
    cout << "Digite o número da classe escolhida (1-3): "; // Solicita que o usuário insira o número da classe escolhida
    cin >> escolha;                              // Lê a escolha do usuário

    // Valida a escolha do usuário para garantir que seja um número entre 1 e 3
    while (escolha < 1 || escolha > 3)
    {
        // Se a escolha for inválida, solicita que o usuário insira novamente
        cout << "Opção inválida. Escolha uma classe válida (1-3): ";
        cin >> escolha;
    }

    // Define a classe do personagem baseada na escolha do usuário
    classeDoPersonagem = opcoesDeClasse[escolha - 1];

    cin.ignore(); // Limpa o buffer para evitar problemas com a próxima entrada do usuário
    return classeDoPersonagem; // Retorna a classe cadastrada
}

// Função para cadastrar os atributos do personagem
vector<int> cadastrarAtributosDoPersonagem()
{
    // Cria um vetor com os nomes dos atributos
    vector<string> nomesDosAtributos = {"Força", "Agilidade", "Inteligência"};
    vector<int> valoresDosAtributos; // Declara um vetor para armazenar os valores dos atributos

    // Define valores fixos para os atributos
    vector<int> valoresFixos = {10, 5, 7}; // Exemplo de valores fixos para cada atributo

    // Exibe os valores fixos dos atributos
    cout << "Valores dos atributos do personagem (fixos):\n";
    for (int i = 0; i < nomesDosAtributos.size(); i++) // Loop para iterar sobre os atributos
    {
        // Adiciona o valor fixo ao vetor de valores dos atributos
        valoresDosAtributos.push_back(valoresFixos[i]);
        // Exibe o nome do atributo e seu valor fixo
        cout << nomesDosAtributos[i] << ": " << valoresFixos[i] << endl;
    }

    return valoresDosAtributos; // Retorna o vetor com os valores dos atributos cadastrados
}

// Função para cadastrar as habilidades do personagem
vector<string> cadastrarHabilidadesDoPersonagem()
{
    vector<string> habilidadesDoPersonagem; // Declara um vetor para armazenar as habilidades do personagem

    // Cria um vetor com as habilidades fixas disponíveis
    vector<string> habilidadesFixas = {"Ataque Rápido", "Defesa Mágica", "Tiro Preciso", "Curar", "Furtividade"};

    // Exibe as habilidades disponíveis e solicita que o usuário escolha duas
    cout << "Escolha duas habilidades do personagem:\n";
    for (int i = 0; i < habilidadesFixas.size(); i++) // Loop para iterar sobre as habilidades disponíveis
    {
        // Exibe a habilidade com o número correspondente
        cout << i + 1 << ". " << habilidadesFixas[i] << endl;
    }

    int escolha1, escolha2; // Declara variáveis para armazenar as escolhas do usuário
    cout << "Digite o número da primeira habilidade escolhida (1-5): "; // Solicita a primeira escolha
    cin >> escolha1; // Lê a primeira escolha do usuário
    cout << "Digite o número da segunda habilidade escolhida (1-5): "; // Solicita a segunda escolha
    cin >> escolha2; // Lê a segunda escolha do usuário

    // Valida as escolhas do usuário para garantir que sejam válidas e diferentes entre si
    while (escolha1 < 1 || escolha1 > 5 || escolha2 < 1 || escolha2 > 5 || escolha1 == escolha2)
    {
        // Se as escolhas forem inválidas, solicita que o usuário insira novamente
        cout << "Escolhas inválidas. Escolha duas habilidades diferentes entre 1 e 5: ";
        cin >> escolha1 >> escolha2;
    }

    // Adiciona as habilidades escolhidas ao vetor de habilidades do personagem
    habilidadesDoPersonagem.push_back(habilidadesFixas[escolha1 - 1]);
    habilidadesDoPersonagem.push_back(habilidadesFixas[escolha2 - 1]);

    cin.ignore(); // Limpa o buffer para evitar problemas com a próxima entrada do usuário
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

    // Exibe a ficha completa do personagem
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
