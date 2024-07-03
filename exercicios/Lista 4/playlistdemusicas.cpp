#include <iostream>
#include <string>

using namespace std;

const int MAX_MUSICAS = 100; // Tamanho máximo da playlist

int main()
{
    string playlist[MAX_MUSICAS]; // Array para armazenar as músicas da playlist
    int total_musicas = 0;        // Contador para controlar o número de músicas na playlist

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
            if (total_musicas < MAX_MUSICAS)
            {
                string nova_musica; // Variável para armazenar o nome da nova música
                cout << "Digite o nome da nova música: ";
                cin >> nova_musica;                              // Lê o nome da nova música fornecido pelo usuário
                playlist[total_musicas] = nova_musica;           // Adiciona a nova música à playlist
                total_musicas++;                                 // Incrementa o contador de músicas
                cout << "Nova música adicionada com sucesso!\n"; // Informa ao usuário que a música foi adicionada
            }
            else
            {
                cout << "Playlist cheia! Não é possível adicionar mais músicas.\n";
            }
        }
        break;
        case '2': // Opção para remover música
        {
            int posicao; // Variável para armazenar a posição da música a ser removida
            cout << "Digite a posição da música a ser removida: ";
            cin >> posicao; // Lê a posição fornecida pelo usuário

            // Verifica se a posição é válida e remove a música correspondente
            if (posicao >= 1 && posicao <= total_musicas)
            {
                // Movendo as músicas para preencher o espaço da música removida
                for (int i = posicao - 1; i < total_musicas - 1; ++i)
                {
                    playlist[i] = playlist[i + 1];
                }
                total_musicas--;                          // Decrementa o contador de músicas
                cout << "Música removida com sucesso!\n"; // Informa ao usuário que a música foi removida
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
            for (int i = 0; i < total_musicas; ++i)
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
