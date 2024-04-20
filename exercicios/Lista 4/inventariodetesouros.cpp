#include <iostream>
#include <vector>

using namespace std;

// Função para adicionar um novo tesouro ao inventário
vector<string> adicionar_tesouro(vector<string> nomes_tesouros, const string nome_tesouro)
{
    // Adiciona o novo nome do tesouro ao vetor de nomes de tesouros
    nomes_tesouros.push_back(nome_tesouro);
    // Retorna o vetor atualizado contendo os nomes dos tesouros
    return nomes_tesouros;
}

// Função para adicionar um novo valor ao inventário
vector<int> adicionar_valor(vector<int> valores_tesouros, int valor_tesouro)
{
    // Adiciona o novo valor do tesouro ao vetor de valores dos tesouros
    valores_tesouros.push_back(valor_tesouro);
    // Retorna o vetor atualizado contendo os valores dos tesouros
    return valores_tesouros;
}

// Função para remover um tesouro do inventário pela posição
pair<vector<string>, vector<int>> remover_tesouro_por_posicao(vector<string> nomes_tesouros, vector<int> valores_tesouros, int posicao)
{
    // Verifica se a posição fornecida é válida (dentro dos limites do vetor de nomes de tesouros)
    if (posicao < nomes_tesouros.size())
    {
        // Remove o nome do tesouro e o valor correspondente nas posições fornecidas dos vetores
        nomes_tesouros.erase(nomes_tesouros.begin() + static_cast<int>(posicao));
        valores_tesouros.erase(valores_tesouros.begin() + static_cast<int>(posicao));
        // Imprime uma mensagem indicando que o tesouro foi removido com sucesso
        cout << "Tesouro removido do inventário!\n";
    }
    else
    {
        // Se a posição fornecida for inválida, imprime uma mensagem de erro
        cout << "Posição inválida!\n";
    }

    // Retorna um par contendo os vetores atualizados de nomes e valores dos tesouros
    return make_pair(nomes_tesouros, valores_tesouros);
}

// Função para listar todos os tesouros no inventário
void listar_tesouros(const vector<string> &nomes_tesouros, const vector<int> &valores_tesouros)
{
    // Imprime um cabeçalho indicando a lista de tesouros
    cout << "\nLista de Tesouros:\n";
    // Itera sobre os vetores de nomes e valores dos tesouros
    for (int i = 0; i < nomes_tesouros.size(); ++i)
    {
        // Imprime o índice, nome e valor do tesouro
        cout << i + 1 << ". " << nomes_tesouros[i] << " - Valor: R$ " << valores_tesouros[i] << endl;
    }
}

int main()
{
    vector<string> nomes_tesouros; // Vetor para armazenar os nomes dos tesouros
    vector<int> valores_tesouros;  // Vetor para armazenar os valores dos tesouros

    int opcao, valor;                         // Variáveis para armazenar a opção e o valor
    string nome_tesouro;                      // Variável para armazenar o nome do tesouro
    int posicao;                           // Variável para armazenar a posição do tesouro a ser removido
    pair<vector<string>, vector<int>> result; // Variável para armazenar o resultado da remoção

    // Loop principal do programa
    do
    {
        // Imprime o menu de opções
        cout << "\nMenu:\n";
        cout << "1. Adicionar novo tesouro\n";      // Opção para adicionar um novo tesouro
        cout << "2. Remover tesouro por posição\n"; // Opção para remover um tesouro por posição
        cout << "3. Listar tesouros\n";             // Opção para listar todos os tesouros
        cout << "4. Sair\n";                        // Opção para sair do programa
        cout << "Escolha uma opcao: ";              // Solicita ao usuário para escolher uma opção
        cin >> opcao;                               // Lê a opção escolhida pelo usuário

        // Verifica a opção escolhida pelo usuário
        switch (opcao)
        {
        case 1: // Se a opção for 1
            // Solicita ao usuário para digitar o nome do novo tesouro
            cout << "Digite o nome do novo tesouro: ";
            // Lê o nome do novo tesouro fornecido pelo usuário
            cin >> nome_tesouro;
            // Chama a função para adicionar o nome do tesouro ao inventário
            nomes_tesouros = adicionar_tesouro(nomes_tesouros, nome_tesouro);
            // Solicita ao usuário para digitar o valor do novo tesouro
            cout << "Digite o valor do tesouro: ";
            // Lê o valor do novo tesouro fornecido pelo usuário
            cin >> valor;
            // Chama a função para adicionar o valor do tesouro ao inventário
            valores_tesouros = adicionar_valor(valores_tesouros, valor);
            // Imprime uma mensagem indicando que o tesouro foi adicionado com sucesso
            cout << "Tesouro adicionado com sucesso!\n";
            break; // Sai do switch
        case 2:    // Se a opção for 2
            // Solicita ao usuário para digitar a posição do tesouro a ser removido
            cout << "Digite a posição do tesouro a ser removido: ";
            // Lê a posição do tesouro a ser removido fornecida pelo usuário
            cin >> posicao;
            // Chama a função para remover o tesouro do inventário pela posição
            result = remover_tesouro_por_posicao(nomes_tesouros, valores_tesouros, posicao - 1);
            nomes_tesouros = result.first;
            valores_tesouros = result.second;
            break; // Sai do switch
        case 3:    // Se a opção for 3
            // Chama a função para listar todos os tesouros no inventário
            listar_tesouros(nomes_tesouros, valores_tesouros);
            break; // Sai do switch
        case 4:    // Se a opção for 4
            // Imprime uma mensagem indicando o encerramento do programa
            cout << "Encerrando o programa...\n";
            break; // Sai do switch
        default:   // Se a opção não for nenhuma das anteriores
            // Imprime uma mensagem indicando que a opção é inválida
            cout << "Opcao invalida!\n";
        }
    } while (opcao != 4); // Repete o loop enquanto a opção não for 4 (Sair do programa)

    // Retorna 0 para indicar que o programa foi encerrado com sucesso
    return 0;
}
