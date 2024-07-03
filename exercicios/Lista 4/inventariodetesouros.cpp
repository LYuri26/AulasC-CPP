#include <iostream>
#include <string>

using namespace std;

const int MAX_TESOUROS = 100; // Definindo o número máximo de tesouros

int main()
{
    string nomes_tesouros[MAX_TESOUROS]; // Array para armazenar os nomes dos tesouros
    int valores_tesouros[MAX_TESOUROS];  // Array para armazenar os valores dos tesouros

    int opcao, valor;           // Variáveis para armazenar a opção e o valor
    string nome_tesouro;        // Variável para armazenar o nome do tesouro
    int posicao;                // Variável para armazenar a posição do tesouro a ser removido
    int tamanho_inventario = 0; // Variável para controlar o tamanho atual do inventário

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
        case 1: // Se a opção for 1 (Adicionar novo tesouro)
            // Verifica se ainda há espaço no inventário
            if (tamanho_inventario < MAX_TESOUROS)
            {
                // Solicita ao usuário para digitar o nome do novo tesouro
                cout << "Digite o nome do novo tesouro: ";
                // Lê o nome do novo tesouro fornecido pelo usuário
                cin >> nome_tesouro;
                // Adiciona o nome do tesouro ao inventário
                nomes_tesouros[tamanho_inventario] = nome_tesouro;

                // Solicita ao usuário para digitar o valor do novo tesouro
                cout << "Digite o valor do tesouro: ";
                // Lê o valor do novo tesouro fornecido pelo usuário
                cin >> valor;
                // Adiciona o valor do tesouro ao inventário
                valores_tesouros[tamanho_inventario] = valor;

                // Incrementa o tamanho do inventário
                tamanho_inventario++;

                // Imprime uma mensagem indicando que o tesouro foi adicionado com sucesso
                cout << "Tesouro adicionado com sucesso!\n";
            }
            else
            {
                // Informa ao usuário que o inventário está cheio
                cout << "Inventário cheio! Não é possível adicionar mais tesouros.\n";
            }
            break; // Sai do switch

        case 2: // Se a opção for 2 (Remover tesouro por posição)
            // Verifica se há tesouros no inventário para remover
            if (tamanho_inventario > 0)
            {
                // Solicita ao usuário para digitar a posição do tesouro a ser removido
                cout << "Digite a posição do tesouro a ser removido (1-" << tamanho_inventario << "): ";
                // Lê a posição do tesouro a ser removido fornecida pelo usuário
                cin >> posicao;

                // Verifica se a posição fornecida é válida
                if (posicao >= 1 && posicao <= tamanho_inventario)
                {
                    // Move todos os tesouros à frente da posição para trás
                    for (int i = posicao - 1; i < tamanho_inventario - 1; ++i)
                    {
                        nomes_tesouros[i] = nomes_tesouros[i + 1];
                        valores_tesouros[i] = valores_tesouros[i + 1];
                    }

                    // Decrementa o tamanho do inventário
                    tamanho_inventario--;

                    // Imprime uma mensagem indicando que o tesouro foi removido com sucesso
                    cout << "Tesouro removido do inventário!\n";
                }
                else
                {
                    // Informa ao usuário que a posição fornecida é inválida
                    cout << "Posição inválida!\n";
                }
            }
            else
            {
                // Informa ao usuário que o inventário está vazio
                cout << "Inventário vazio! Não há tesouros para remover.\n";
            }
            break; // Sai do switch

        case 3: // Se a opção for 3 (Listar tesouros)
            // Verifica se há tesouros no inventário para listar
            if (tamanho_inventario > 0)
            {
                // Imprime um cabeçalho indicando a lista de tesouros
                cout << "\nLista de Tesouros:\n";
                // Itera sobre os tesouros no inventário e os imprime
                for (int i = 0; i < tamanho_inventario; ++i)
                {
                    cout << i + 1 << ". " << nomes_tesouros[i] << " - Valor: R$ " << valores_tesouros[i] << endl;
                }
            }
            else
            {
                // Informa ao usuário que o inventário está vazio
                cout << "Inventário vazio! Não há tesouros para listar.\n";
            }
            break; // Sai do switch

        case 4: // Se a opção for 4 (Sair do programa)
            // Imprime uma mensagem indicando o encerramento do programa
            cout << "Encerrando o programa...\n";
            break; // Sai do switch

        default: // Se a opção não for nenhuma das anteriores
            // Imprime uma mensagem indicando que a opção é inválida
            cout << "Opcao invalida!\n";
        }
    } while (opcao != 4); // Repete o loop enquanto a opção não for 4 (Sair do programa)

    // Retorna 0 para indicar que o programa foi encerrado com sucesso
    return 0;
}
