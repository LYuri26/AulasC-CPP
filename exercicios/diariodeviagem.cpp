#include <iostream>  // Incluindo a biblioteca para entrada e saída padrão
#include <vector>    // Incluindo a biblioteca para usar vetores
using namespace std; // Utilizando o namespace std para evitar repetição de std::

// Função para adicionar um novo destino ao diário de viagem
vector<string> adicionar_destino(vector<string> destinos, string novo_destino)
{
    destinos.push_back(novo_destino);            // Adiciona o novo destino ao final do vetor de destinos
    cout << "Destino adicionado com sucesso!\n"; // Imprime mensagem de sucesso
    return destinos;                             // Retorna o vetor atualizado
}

// Função para listar todos os destinos visitados
void listar_destinos(vector<string> destinos)
{
    cout << "Destinos Visitados:\n"; // Imprime cabeçalho da lista de destinos visitados
    if (destinos.empty())            // Verifica se o vetor de destinos está vazio
    {
        cout << "Nenhum destino foi visitado ainda.\n"; // Imprime mensagem se o vetor estiver vazio
        return;                                         // Retorna se o vetor estiver vazio
    }
    for (int i = 0; i < destinos.size(); ++i) // Para cada destino no vetor de destinos
    {
        cout << "- " << destinos[i] << endl; // Imprime o nome do destino com um marcador '-' na frente
    }
}

int main()
{
    vector<string> destinos; // Declaração do vetor de strings para representar os destinos visitados

    int opcao;          // Variável para armazenar a opção escolhida pelo usuário
    string novoDestino; // Variável para armazenar o nome do novo destino

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
        case 1:                                                  // Se a opção for 1
            cout << "Digite o nome do novo destino: ";           // Solicitação para digitar o nome do novo destino
            cin >> novoDestino;                                  // Lê o nome do novo destino
            destinos = adicionar_destino(destinos, novoDestino); // Chama a função para adicionar o destino ao diário de viagem
            break;                                               // Sai do switch
        case 2:                                                  // Se a opção for 2
            listar_destinos(destinos);                           // Chama a função para listar todos os destinos visitados
            break;                                               // Sai do switch
        case 3:                                                  // Se a opção for 3
            cout << "Encerrando o programa...\n";                // Imprime mensagem de encerramento do programa
            break;                                               // Sai do switch
        default:                                                 // Se a opção não for nenhuma das anteriores
            cout << "Opcao invalida!\n";                         // Imprime mensagem de opção inválida
        }
    } while (opcao != 3); // Repete o loop enquanto a opção não for 3 (Sair do programa)

    return 0; // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
