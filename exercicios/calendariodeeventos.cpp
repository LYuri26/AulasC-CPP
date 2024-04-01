#include <iostream> // inclui a biblioteca para entrada e saída padrão
#include <vector>   // inclui a biblioteca para utilizar vetores
#include <string>   // inclui a biblioteca para utilizar strings

using namespace std; // utiliza o namespace std para evitar repetição de std::

// função para adicionar um novo evento ao mês especificado
void adicionar_evento(vector<vector<string>> &calendario, int mes, string novo_evento)
{
    calendario[mes - 1].push_back(novo_evento); // adiciona o evento ao vetor de eventos do mês correspondente
    cout << "Evento adicionado com sucesso!\n"; // mensagem de sucesso ao adicionar o evento
}

// função para exibir os eventos do mês especificado
void exibir_eventos_mes(const vector<vector<string>> &calendario, int mes)
{
    cout << "Eventos do mês " << mes << ":\n"; // imprime o cabeçalho com o número do mês
    for (const string &evento : calendario[mes - 1])
    {                                   // loop para percorrer todos os eventos do mês
        cout << "- " << evento << endl; // imprime cada evento do mês
    }
}

int main()
{
    const int num_meses = 12;                     // constante para representar o número de meses em um ano
    vector<vector<string>> calendario(num_meses); // vetor de vetores de string para armazenar os eventos de cada mês

    int opcao, mes;     // variáveis para armazenar a opção do usuário e o número do mês
    string novo_evento; // string para armazenar o nome do novo evento

    do
    {
        cout << "\nMenu:\n";                     // imprime o menu de opções
        cout << "1. Adicionar novo evento\n";    // opção para adicionar um novo evento
        cout << "2. Exibir eventos de um mês\n"; // opção para exibir os eventos de um mês
        cout << "3. Sair\n";                     // opção para sair do programa
        cout << "Escolha uma opção: ";           // solicita ao usuário que escolha uma opção
        cin >> opcao;                            // lê a opção escolhida pelo usuário

        switch (opcao)
        { // switch para tratar a opção escolhida pelo usuário
        case 1:
            cout << "Digite o mês (1 a 12): ";              // solicita ao usuário que digite o número do mês
            cin >> mes;                                     // lê o número do mês
            cout << "Digite o nome do novo evento: ";       // solicita ao usuário que digite o nome do evento
            cin.ignore();                                   // limpa o buffer de entrada
            getline(cin, novo_evento);                      // lê o nome do novo evento
            adicionar_evento(calendario, mes, novo_evento); // chama a função para adicionar o evento ao mês correspondente
            break;
        case 2:
            cout << "Digite o mês (1 a 12): ";   // solicita ao usuário que digite o número do mês
            cin >> mes;                          // lê o número do mês
            exibir_eventos_mes(calendario, mes); // chama a função para exibir os eventos do mês especificado
            break;
        case 3:
            cout << "Encerrando o programa...\n"; // mensagem de encerramento do programa
            break;
        default:
            cout << "Opção inválida!\n"; // mensagem de opção inválida caso o usuário escolha uma opção inválida
        }
    } while (opcao != 3); // repete o loop até que o usuário escolha a opção de sair do programa

    return 0; // retorna 0 para indicar que o programa foi encerrado com sucesso
}
