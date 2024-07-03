#include <iostream>
using namespace std;

int main()
{
    // Arrays para armazenar os preços e nomes dos jogos
    double precos_jogos[] = {59.99, 49.99, 39.99};
    const int num_jogos = 3; // Número de jogos
    const char *nomes_jogos[] = {"Jogo A", "Jogo B", "Jogo C"};

    // Variáveis para armazenar a opção do usuário
    int opcao;

    // Loop principal do programa
    do
    {
        // Exibe o menu de opções
        cout << "\nMenu:\n";
        cout << "1. Escolher jogo e aplicar desconto\n";
        cout << "2. Listar jogos e preços\n";
        cout << "3. Encerrar o programa\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        // Executa a ação correspondente à opção escolhida pelo usuário
        switch (opcao)
        {
        case 1:
            // Exibe a lista de jogos e preços
            cout << "Escolha o jogo:\n";
            for (int i = 0; i < num_jogos; ++i)
            {
                cout << i + 1 << ". " << nomes_jogos[i] << " - R$ " << precos_jogos[i] << endl;
            }
            // Solicita ao usuário que escolha o jogo
            cout << "Digite o número correspondente ao jogo: ";
            cin >> opcao;
            // Verifica se a opção do jogo é válida
            if (opcao >= 1 && opcao <= num_jogos)
            {
                // Solicita ao usuário o desconto a ser aplicado
                double desconto;
                cout << "Digite o desconto a ser aplicado (em porcentagem): ";
                cin >> desconto;
                // Aplica o desconto ao preço do jogo selecionado
                precos_jogos[opcao - 1] *= (1 - desconto / 100);
                // Informa ao usuário que o desconto foi aplicado com sucesso
                cout << "Desconto aplicado com sucesso!\n";
            }
            else
            {
                // Informa ao usuário que a opção escolhida é inválida
                cout << "Opcao invalida!\n";
            }
            break;
        case 2:
            // Lista os jogos e seus preços
            cout << "Lista de jogos e preços:\n";
            for (int i = 0; i < num_jogos; ++i)
            {
                cout << nomes_jogos[i] << " - R$ " << precos_jogos[i] << endl;
            }
            break;
        case 3:
            // Encerra o programa
            cout << "Encerrando o programa...\n";
            break;
        default:
            // Informa ao usuário que a opção escolhida é inválida
            cout << "Opcao invalida!\n";
        }
    } while (opcao != 3); // Continua o loop até que o usuário escolha a opção 3 para sair do programa

    return 0;
}
