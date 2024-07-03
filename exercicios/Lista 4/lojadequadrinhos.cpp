#include <iostream>

using namespace std;

int main()
{
    // Arrays para armazenar os nomes e preços dos quadrinhos
    const int num_quadrinhos = 3;
    const char* nomes[num_quadrinhos] = {"Homem-Aranha: De Volta ao Lar", "Batman: O Cavaleiro das Trevas", "X-Men: Dias de um Futuro Esquecido"};
    double precos[num_quadrinhos] = {29.99, 24.99, 19.99};
    bool comprado[num_quadrinhos] = {false}; // Array para marcar se cada quadrinho foi comprado

    char opcao;          // Variável para armazenar a opção escolhida pelo usuário
    int numeroQuadrinho; // Variável para armazenar o número do quadrinho a ser comprado

    do
    {
        // Menu de opções
        cout << "\nMenu:\n";
        cout << "1. Listar quadrinhos disponíveis\n";
        cout << "2. Comprar quadrinho\n";
        cout << "3. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao; // Lê a opção escolhida pelo usuário

        switch (opcao)
        {
        case '1': // Opção para listar os quadrinhos disponíveis
            cout << "Quadrinhos Disponíveis:\n";
            for (int i = 0; i < num_quadrinhos; ++i)
            {
                if (!comprado[i])
                {
                    cout << i + 1 << ". " << nomes[i] << " - Preço: R$ " << precos[i] << endl;
                }
            }
            break;
        case '2': // Opção para comprar um quadrinho
            cout << "Digite o número do quadrinho que deseja comprar: ";
            cin >> numeroQuadrinho;

            if (numeroQuadrinho >= 1 && numeroQuadrinho <= num_quadrinhos && !comprado[numeroQuadrinho - 1])
            {
                cout << "Você comprou o quadrinho " << nomes[numeroQuadrinho - 1] << "!\n";
                comprado[numeroQuadrinho - 1] = true; // Marca o quadrinho como comprado
            }
            else
            {
                cout << "Número do quadrinho inválido ou já comprado!\n";
            }
            break;
        case '3': // Opção para sair da loja
            cout << "Saindo da loja...\n";
            break;
        default: // Opção inválida
            cout << "Opção inválida!\n";
        }
    } while (opcao != '3'); // O loop continua até que o usuário escolha a opção de sair da loja

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
