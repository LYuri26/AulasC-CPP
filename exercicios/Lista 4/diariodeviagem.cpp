#include <iostream> // Biblioteca para entrada e saída padrão

using namespace std; // Utilizando o namespace std para evitar repetição de std::

int main()
{
    const int MAX_DESTINOS = 100;        // Definindo o número máximo de destinos que podem ser armazenados
    const int MAX_CARACTERES = 50;       // Definindo o número máximo de caracteres para cada destino
    char destinos[MAX_DESTINOS][MAX_CARACTERES]; // Array para armazenar os destinos visitados
    int tamanho = 0;                     // Variável para controlar o tamanho atual do array

    int opcao;          // Variável para armazenar a opção escolhida pelo usuário
    char novoDestino[MAX_CARACTERES]; // Array para armazenar o nome do novo destino

    do // Início do loop do-while
    {
        cout << "\nMenu:\n";                      // Imprime o menu de opções
        cout << "1. Adicionar novo destino\n";    // Opção para adicionar um novo destino
        cout << "2. Listar destinos visitados\n"; // Opção para listar todos os destinos visitados
        cout << "3. Sair\n";                      // Opção para sair do programa
        cout << "Escolha uma opcao: ";            // Solicitação para o usuário escolher uma opção
        cin >> opcao;                             // Lê a opção escolhida pelo usuário

        switch (opcao) // Verifica a opção escolhida pelo usuário
        {
        case 1: // Se a opção for 1
            cout << "Digite o nome do novo destino: "; // Solicitação para digitar o nome do novo destino
            cin.ignore();                             // Limpa o buffer do teclado
            cin.getline(novoDestino, MAX_CARACTERES); // Lê o nome do novo destino
            // Copia o nome do novo destino para o array de destinos na posição atual
            for (int i = 0; i < MAX_CARACTERES; ++i) {
                destinos[tamanho][i] = novoDestino[i];
                if (novoDestino[i] == '\0') break;
            }
            tamanho++;                                // Incrementa o tamanho do array
            cout << "Destino adicionado com sucesso!\n"; // Imprime mensagem de sucesso
            break;                                      // Sai do switch
        case 2: // Se a opção for 2
            cout << "Destinos Visitados:\n";            // Imprime cabeçalho da lista de destinos visitados
            if (tamanho == 0)                           // Verifica se não há destinos visitados
            {
                cout << "Nenhum destino foi visitado ainda.\n"; // Imprime mensagem se não houver destinos visitados
            }
            else
            {
                for (int i = 0; i < tamanho; ++i) // Para cada destino no array de destinos
                {
                    cout << "- " << destinos[i] << endl; // Imprime o nome do destino com um marcador '-' na frente
                }
            }
            break; // Sai do switch
        case 3: // Se a opção for 3
            cout << "Encerrando o programa...\n"; // Imprime mensagem de encerramento do programa
            break;                                // Sai do switch
        default: // Se a opção não for nenhuma das anteriores
            cout << "Opcao invalida!\n"; // Imprime mensagem de opção inválida
        }
    } while (opcao != 3); // Repete o loop enquanto a opção não for 3 (Sair do programa)

    return 0; // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
