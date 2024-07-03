#include <iostream> // Biblioteca para entrada e saída padrão

using namespace std; // Utiliza o namespace std para evitar repetição de std::

int main()
{
    const int num_meses = 12;                                 // Constante para representar o número de meses em um ano
    const int tamanho_maximo_evento = 100;                    // Tamanho máximo para um evento (considerando espaço extra para segurança)
    char calendario[num_meses][tamanho_maximo_evento] = {""}; // Array de caracteres para armazenar os eventos de cada mês
    int opcao, mes;                                           // Variáveis para armazenar a opção do usuário e o número do mês
    char novo_evento[tamanho_maximo_evento];                  // Array de caracteres para armazenar o nome do novo evento

    do
    {
        cout << "\nMenu:\n";                     // Imprime o menu de opções
        cout << "1. Adicionar novo evento\n";    // Opção para adicionar um novo evento
        cout << "2. Exibir eventos de um mês\n"; // Opção para exibir os eventos de um mês
        cout << "3. Sair\n";                     // Opção para sair do programa
        cout << "Escolha uma opção: ";           // Solicita ao usuário que escolha uma opção
        cin >> opcao;                            // Lê a opção escolhida pelo usuário

        switch (opcao)
        { // Switch para tratar a opção escolhida pelo usuário
        case 1:
            cout << "Digite o mês (1 a 12): ";               // Solicita ao usuário que digite o número do mês
            cin >> mes;                                      // Lê o número do mês
            cout << "Digite o nome do novo evento: ";        // Solicita ao usuário que digite o nome do evento
            cin.ignore();                                    // Limpa o buffer de entrada
            cin.getline(novo_evento, tamanho_maximo_evento); // Lê o nome do novo evento
            if (calendario[mes - 1][0] != '\0')
                cout << endl;
            cout << novo_evento;                             // Adiciona o evento ao mês correspondente
            cout << "Evento adicionado com sucesso!\n";      // Mensagem de sucesso ao adicionar o evento
            break;
        case 2:
            cout << "Digite o mês (1 a 12): "; // Solicita ao usuário que digite o número do mês
            cin >> mes;                        // Lê o número do mês
            cout << "Eventos do mês " << mes << ":\n"
                 << calendario[mes - 1] << endl; // Exibe os eventos do mês especificado
            break;
        case 3:
            cout << "Encerrando o programa...\n"; // Mensagem de encerramento do programa
            break;
        default:
            cout << "Opção inválida!\n"; // Mensagem de opção inválida caso o usuário escolha uma opção inválida
        }
    } while (opcao != 3); // Repete o loop até que o usuário escolha a opção de sair do programa

    return 0; // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
