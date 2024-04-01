#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> playlist; // Declaração da playlist

    char opcao; // Variável para armazenar a opção do usuário

    // Loop principal do programa
    do
    {
        // Exibe o menu de opções
        cout << "\nMenu:\n";
        cout << "1. Adicionar nova música\n";
        cout << "2. Remover música\n";
        cout << "3. Listar músicas\n";
        cout << "4. Sair\n";
        cout << "Escolha uma opção: ";

        cin >> opcao; // Solicita ao usuário que escolha uma opção do menu

        // Estrutura de controle para executar a ação correspondente à opção escolhida
        switch (opcao)
        {
        case '1': // Opção para adicionar nova música
        {
            string nova_musica; // Variável para armazenar o nome da nova música
            cout << "Digite o nome da nova música: ";
            cin >> nova_musica;                              // Lê o nome da nova música fornecido pelo usuário
            playlist.push_back(nova_musica);                 // Adiciona a nova música à playlist
            cout << "Nova música adicionada com sucesso!\n"; // Informa ao usuário que a música foi adicionada
        }
        break;
        case '2': // Opção para remover música
        {
            int posicao; // Variável para armazenar a posição da música a ser removida
            cout << "Digite a posição da música a ser removida: ";
            cin >> posicao; // Lê a posição fornecida pelo usuário
            // Verifica se a posição é válida e remove a música correspondente
            if (posicao >= 1 && posicao <= playlist.size())
            {
                playlist.erase(playlist.begin() + posicao - 1); // Remove a música pela posição
                cout << "Música removida com sucesso!\n";       // Informa ao usuário que a música foi removida
            }
            else
            {
                cout << "Posição inválida!\n"; // Informa ao usuário que a posição fornecida é inválida
            }
        }
        break;
        case '3': // Opção para listar músicas
        {
            cout << "Playlist de Músicas:\n";
            // Itera sobre todas as músicas da playlist e as exibe junto com suas posições
            for (int i = 0; i < playlist.size(); ++i)
            {
                cout << i + 1 << ". " << playlist[i] << endl; // Exibe a posição e o nome da música
            }
        }
        break;
        case '4':                                 // Opção para sair do programa
            cout << "Encerrando o programa...\n"; // Mensagem de encerramento do programa
            break;
        default:                         // Trata opções inválidas
            cout << "Opção inválida!\n"; // Mensagem de erro se a opção escolhida for inválida
        }
    } while (opcao != '4'); // Loop continua até o usuário escolher a opção de sair

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
