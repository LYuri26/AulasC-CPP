#include <iostream>

using namespace std;

int main()
{
    // Variáveis para armazenar os dados do personagem
    string nome;                // Nome do personagem
    string apelido;             // Apelido do personagem
    string origem;              // Origem do personagem
    string dataNascimento;      // Data de nascimento do personagem
    string sexo;                // Sexo do personagem
    string classeSocial;        // Classe social do personagem
    string ocupacao;            // Ocupação do personagem
    string historia;            // História do personagem
    string motivacao;           // Motivação do personagem
    string aparencia;           // Aparência do personagem
    int forca;                  // Atributo: Força
    int destreza;               // Atributo: Destreza
    int constituicao;           // Atributo: Constituição
    int inteligencia;           // Atributo: Inteligência
    int sabedoria;              // Atributo: Sabedoria
    int carisma;                // Atributo: Carisma
    string habilidades[12];     // Array de habilidades do personagem
    string nomeImplante;        // Nome do implante cibernético
    string localizacaoImplante; // Localização do implante cibernético no corpo
    string funcaoImplante;      // Função do implante cibernético
    double custoImplante;       // Custo do implante em créditos
    string armas;               // Armas do personagem
    string armaduras;           // Armaduras do personagem
    string equipamentos;        // Outros equipamentos do personagem
    double creditos;            // Créditos financeiros do personagem
    int reputacao;              // Reputação do personagem
    string gangue;              // Gangue à qual o personagem pertence
    string conexoes;            // Conexões do personagem
    char opcao;                 // Opção do usuário para adicionar mais habilidades

    // Solicitando entradas ao usuário
    cout << "Preenchendo os dados do personagem:\n"; // Imprime instruções para o usuário
    cout << "Nome: ";
    cin >> nome; // Lê o nome do personagem
    cout << "Apelido: ";
    cin >> apelido; // Lê o apelido do personagem
    cout << "Origem: ";
    cin >> origem; // Lê a origem do personagem
    cout << "Data de Nascimento: ";
    cin >> dataNascimento; // Lê a data de nascimento do personagem
    cout << "Sexo: ";
    cin >> sexo; // Lê o sexo do personagem
    cout << "Classe Social: ";
    cin >> classeSocial; // Lê a classe social do personagem
    cout << "Ocupação: ";
    cin >> ocupacao; // Lê a ocupação do personagem
    cout << "História: ";
    cin >> historia; // Lê a história do personagem
    cout << "Motivação: ";
    cin >> motivacao; // Lê a motivação do personagem
    cout << "Aparência: ";
    cin >> aparencia; // Lê a aparência do personagem

    cout << "\nPreenchendo os atributos do personagem:\n"; // Instruções para preencher atributos
    cout << "Força (FOR): ";
    cin >> forca; // Lê o valor da Força
    cout << "Destreza (DES): ";
    cin >> destreza; // Lê o valor da Destreza
    cout << "Constituição (CON): ";
    cin >> constituicao; // Lê o valor da Constituição
    cout << "Inteligência (INT): ";
    cin >> inteligencia; // Lê o valor da Inteligência
    cout << "Sabedoria (SAB): ";
    cin >> sabedoria; // Lê o valor da Sabedoria
    cout << "Carisma (CAR): ";
    cin >> carisma; // Lê o valor do Carisma

    cout << "\nPreenchendo as habilidades do personagem:\n"; // Instruções para preencher habilidades
    for (int i = 0; i < 12; ++i)                             // Laço para preencher até 12 habilidades
    {
        cout << "Nome da habilidade " << i + 1 << ": ";
        cin >> habilidades[i]; // Lê o nome da habilidade
        cout << "Deseja mais uma habilidade? 'S' para SIM e 'N' para NÃO:\n";
        cin >> opcao;     // Lê a opção do usuário
        if (opcao == 'N') // Se a opção for 'N', quebra o laço
        {
            break;
        }
    }

    cout << "\nPreenchendo o implante cibernético do personagem:\n"; // Instruções para preencher implante
    cout << "Nome do implante: ";
    cin >> nomeImplante; // Lê o nome do implante
    cout << "Localização do implante: ";
    cin >> localizacaoImplante; // Lê a localização do implante
    cout << "Função do implante: ";
    cin >> funcaoImplante; // Lê a função do implante
    cout << "Custo do implante em créditos: ";
    cin >> custoImplante; // Lê o custo do implante em créditos

    cout << "\nPreenchendo os equipamentos do personagem:\n"; // Instruções para preencher equipamentos
    cout << "Armas: ";
    cin >> armas; // Lê as armas do personagem
    cout << "Armaduras: ";
    cin >> armaduras; // Lê as armaduras do personagem
    cout << "Outros equipamentos: ";
    cin >> equipamentos; // Lê outros equipamentos do personagem

    cout << "\nPreenchendo as informações financeiras do personagem:\n"; // Instruções para preencher informações financeiras
    cout << "Quantidade de créditos: ";
    cin >> creditos; // Lê a quantidade de créditos

    cout << "\nPreenchendo outras informações do personagem:\n"; // Instruções para preencher outras informações
    cout << "Reputação: ";
    cin >> reputacao; // Lê a reputação do personagem
    cout << "Gangue: ";
    cin >> gangue; // Lê a gangue do personagem
    cout << "Conexões: ";
    cin >> conexoes; // Lê as conexões do personagem

    // Exibindo a ficha de personagem
    cout << "\n=== Ficha de Personagem ===\n";
    cout << "Nome: " << nome << "\n";                         // Exibe o nome
    cout << "Apelido: " << apelido << "\n";                   // Exibe o apelido
    cout << "Origem: " << origem << "\n";                     // Exibe a origem
    cout << "Data de Nascimento: " << dataNascimento << "\n"; // Exibe a data de nascimento
    cout << "Sexo: " << sexo << "\n";                         // Exibe o sexo
    cout << "Classe Social: " << classeSocial << "\n";        // Exibe a classe social
    cout << "Ocupação: " << ocupacao << "\n";                 // Exibe a ocupação
    cout << "História: " << historia << "\n";                 // Exibe a história
    cout << "Motivação: " << motivacao << "\n";               // Exibe a motivação
    cout << "Aparência: " << aparencia << "\n";               // Exibe a aparência

    cout << "\n=== Atributos ===\n";
    cout << "Força (FOR): " << forca << "\n";               // Exibe a força
    cout << "Destreza (DES): " << destreza << "\n";         // Exibe a destreza
    cout << "Constituição (CON): " << constituicao << "\n"; // Exibe a constituição
    cout << "Inteligência (INT): " << inteligencia << "\n"; // Exibe a inteligência
    cout << "Sabedoria (SAB): " << sabedoria << "\n";       // Exibe a sabedoria
    cout << "Carisma (CAR): " << carisma << "\n";           // Exibe o carisma

    cout << "\n=== Habilidades ===\n";
    for (int i = 0; i < 12; ++i) // Laço para exibir todas as habilidades
    {
        cout << "Habilidade " << i + 1 << ": " << habilidades[i] << "\n"; // Exibe cada habilidade
    }

    cout << "\n=== Implante Cibernético ===\n";
    cout << "Nome do Implante: " << nomeImplante << "\n";               // Exibe o nome do implante
    cout << "Localização do Implante: " << localizacaoImplante << "\n"; // Exibe a localização do implante
    cout << "Função do Implante: " << funcaoImplante << "\n";           // Exibe a função do implante
    cout << "Custo do Implante (créditos): " << custoImplante << "\n";  // Exibe o custo do implante

    cout << "\n=== Equipamentos ===\n";
    cout << "Armas: " << armas << "\n";                      // Exibe as armas
    cout << "Armaduras: " << armaduras << "\n";              // Exibe as armaduras
    cout << "Outros Equipamentos: " << equipamentos << "\n"; // Exibe outros equipamentos

    cout << "\n=== Dinheiro ===\n";
    cout << "Créditos: " << creditos << "\n"; // Exibe a quantidade de créditos

    cout << "\n=== Outras Informações ===\n";
    cout << "Reputação: " << reputacao << "\n"; // Exibe a reputação
    cout << "Gangue: " << gangue << "\n";       // Exibe a gangue
    cout << "Conexões: " << conexoes << "\n";   // Exibe as conexões

    return 0; // Finaliza o programa
}
