#include <iostream>
using namespace std;

int main()
{
    const int MAX_HEROIS = 100; // Tamanho máximo para o array de heróis
    string herois[MAX_HEROIS];  // Array para armazenar os heróis
    char opcao;                 // Variável para armazenar a opção do usuário
    int num_herois = 0;         // Contador para controlar o número de heróis cadastrados

    do
    {
        cout << "\nMenu:\n";                      // Exibe o menu de opções
        cout << "1. Adicionar novo heroi\n";      // Opção para adicionar um novo herói
        cout << "2. Listar herois cadastrados\n"; // Opção para listar os heróis cadastrados
        cout << "3. Sair\n";                      // Opção para sair do programa
        cout << "Escolha uma opcao: ";            // Solicita ao usuário que escolha uma opção
        cin >> opcao;                             // Lê a opção escolhida pelo usuário

        switch (opcao)
        { // Switch para tratar a opção escolhida pelo usuário
        case '1':
            if (num_herois < MAX_HEROIS)
            {                                                   // Verifica se há espaço disponível para adicionar um novo herói
                cout << "Digite o nome do novo heroi: ";        // Solicita ao usuário que digite o nome do novo herói
                cin >> herois[num_herois];                      // Lê o nome do novo herói e armazena no array
                cout << "Novo heroi adicionado com sucesso!\n"; // Exibe uma mensagem de sucesso
                num_herois++;                                   // Incrementa o contador de heróis cadastrados
            }
            else
            {
                cout << "Limite de heróis cadastrados atingido!\n"; // Mensagem de erro se o limite de heróis for atingido
            }
            break;
        case '2':
            if (num_herois > 0)
            {                                             // Verifica se há heróis cadastrados para listar
                cout << "Lista de Heróis Cadastrados:\n"; // Exibe o cabeçalho da lista
                for (int i = 0; i < num_herois; ++i)
                {                                      // Loop para percorrer o array de heróis
                    cout << "- " << herois[i] << endl; // Exibe cada herói da lista
                }
            }
            else
            {
                cout << "Nenhum heroi cadastrado.\n"; // Mensagem se não houver heróis cadastrados
            }
            break;
        case '3':
            cout << "Encerrando o programa...\n"; // Mensagem de encerramento do programa
            break;
        default:
            cout << "Opcao invalida!\n"; // Mensagem de opção inválida caso o usuário escolha uma opção inválida
        }
    } while (opcao != '3'); // Repete o loop até que o usuário escolha a opção de sair do programa

    return 0; // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
