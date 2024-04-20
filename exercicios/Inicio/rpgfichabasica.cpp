#include <iostream> // Biblioteca para entrada e saída padrão
#include <string>   // Biblioteca para manipulação de strings
#include <vector>   // Biblioteca para utilização de vetores
#include <limits>   // Biblioteca para utilizar numeric_limits

using namespace std; // Permite o uso de elementos da biblioteca padrão (std) sem prefixo

// Função para cadastrar o nome do personagem
string cadastrarNome()
{
    string nome;                             // Variável para armazenar o nome do personagem
    cout << "Digite o nome do personagem: "; // Exibe mensagem solicitando o nome
    getline(cin, nome);                      // Recebe o nome do usuário
    return nome;                             // Retorna o nome cadastrado
}

// Função para cadastrar a classe do personagem
string cadastrarClasse()
{
    string classe;                                                          // Variável para armazenar a classe do personagem
    cout << "Escolha a classe do personagem (Guerreiro, Mago, Arqueiro): "; // Exibe opções de classe
    getline(cin, classe);                                                   // Recebe a classe escolhida pelo usuário
    return classe;                                                          // Retorna a classe cadastrada
}

// Função para cadastrar os atributos do personagem
vector<int> cadastrarAtributos()
{
    vector<string> atributos = {"Forca", "Agilidade", "Inteligencia"}; // Vetor com os nomes dos atributos
    vector<int> valores;                                               // Vetor para armazenar os valores dos atributos

    cout << "Digite os valores dos atributos do personagem:\n"; // Exibe mensagem solicitando os valores dos atributos
    // Loop para solicitar os valores dos atributos
    for (int i = 0; i < atributos.size(); ++i)
    {
        int valor;                    // Variável para armazenar o valor do atributo
        cout << atributos[i] << ": "; // Exibe o nome do atributo
        cin >> valor;                 // Recebe o valor do atributo do usuário
        while (cin.fail() || valor < 0)
        {                                                        // Verifica se o valor é inválido
            cin.clear();                                         // Limpa o estado de erro do cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora o restante da linha
            cout << "Valor invalido. Digite novamente: ";        // Exibe mensagem de erro
            cin >> valor;                                        // Solicita um novo valor
        }
        valores.push_back(valor); // Adiciona o valor ao vetor de atributos
    }

    return valores; // Retorna os valores dos atributos cadastrados
}

// Função para cadastrar as habilidades do personagem
vector<string> cadastrarHabilidades()
{
    vector<string> habilidades; // Vetor para armazenar as habilidades
    string habilidade;          // Variável para armazenar cada habilidade digitada pelo usuário
    char continuar;             // Variável para verificar se o usuário deseja continuar adicionando habilidades

    do
    {
        cout << "Digite uma habilidade do personagem: "; // Exibe mensagem solicitando uma habilidade
        getline(cin >> ws, habilidade);                  // Recebe uma habilidade do usuário
        habilidades.push_back(habilidade);               // Adiciona a habilidade ao vetor de habilidades

        cout << "Deseja adicionar outra habilidade? (S/N): "; // Pergunta se deseja adicionar mais habilidades
        cin >> continuar;                                     // Recebe a resposta do usuário
    } while (continuar == 'S' || continuar == 's'); // Continua enquanto a resposta for 'S' ou 's'

    return habilidades; // Retorna as habilidades cadastradas
}

// Função para exibir a ficha do personagem
void exibirFichaPersonagem(const string &nome, const string &classe, const vector<int> &atributos, const vector<string> &habilidades)
{
    cout << "\nFicha do Personagem:\n";   // Exibe cabeçalho da ficha do personagem
    cout << "Nome: " << nome << endl;     // Exibe o nome do personagem
    cout << "Classe: " << classe << endl; // Exibe a classe do personagem
    cout << "Atributos:\n";
    // Loop para exibir os atributos do personagem
    for (int i = 0; i < atributos.size(); ++i)
    {
        cout << "  - " << atributos[i] << ": " << habilidades[i] << endl; // Exibe cada atributo com sua habilidade correspondente
    }
    cout << "Habilidades:\n";
    // Loop para exibir as habilidades do personagem
    for (int i = 0; i < habilidades.size(); ++i)
    {
        cout << "  - " << habilidades[i] << endl; // Exibe cada habilidade
    }
}

// Função principal
int main()
{
    string nome = cadastrarNome();                               // Chama a função para cadastrar o nome do personagem
    string classe = cadastrarClasse();                           // Chama a função para cadastrar a classe do personagem
    vector<int> atributos = cadastrarAtributos();                // Chama a função para cadastrar os atributos do personagem
    vector<string> habilidades = cadastrarHabilidades();         // Chama a função para cadastrar as habilidades do personagem
    exibirFichaPersonagem(nome, classe, atributos, habilidades); // Chama a função para exibir a ficha do personagem
    return 0;                                                    // Retorna 0 indicando que o programa foi executado com sucesso
}
