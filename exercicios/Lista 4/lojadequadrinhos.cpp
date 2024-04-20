#include <iostream> // Biblioteca para entrada e saída padrão
#include <vector>   // Biblioteca para trabalhar com vetores
#include <string>   // Biblioteca para manipulação de strings

using namespace std; // Usando o namespace std para facilitar o acesso aos elementos

// Função para listar todos os quadrinhos disponíveis na loja
void listarQuadrinhos(const vector<string> &nomes, const vector<double> &precos)
{
    cout << "Quadrinhos Disponíveis:\n";   // Mensagem indicando o início da lista de quadrinhos
    for (int i = 0; i < nomes.size(); ++i) // Itera sobre os quadrinhos
    {
        cout << i + 1 << ". " << nomes[i] << " - Preço: R$ " << precos[i] << endl; // Imprime o número, nome e preço de cada quadrinho
    }
}

// Função para simular a compra de um quadrinho, removendo-o dos vetores
void comprarQuadrinho(vector<string> &nomes, vector<double> &precos, int numeroQuadrinho)
{
    if (numeroQuadrinho >= 1 && numeroQuadrinho <= nomes.size()) // Verifica se o número do quadrinho é válido
    {
        cout << "Você comprou o quadrinho " << nomes[numeroQuadrinho - 1] << "!\n"; // Mensagem indicando a compra bem-sucedida
        nomes.erase(nomes.begin() + numeroQuadrinho - 1);                           // Remove o nome do quadrinho do vetor de nomes
        precos.erase(precos.begin() + numeroQuadrinho - 1);                         // Remove o preço do quadrinho do vetor de preços
    }
    else
    {
        cout << "Número do quadrinho inválido!\n"; // Mensagem indicando que o número do quadrinho é inválido
    }
}

int main()
{
    // Vetores separados para armazenar os nomes e preços dos quadrinhos
    vector<string> nomes = {"Homem-Aranha: De Volta ao Lar", "Batman: O Cavaleiro das Trevas", "X-Men: Dias de um Futuro Esquecido"};
    vector<double> precos = {29.99, 24.99, 19.99};

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
        case '1':                            // Opção para listar os quadrinhos disponíveis
            listarQuadrinhos(nomes, precos); // Chama a função para listar os quadrinhos disponíveis
            break;
        case '2':                                                        // Opção para comprar um quadrinho
            cout << "Digite o número do quadrinho que deseja comprar: "; // Solicita o número do quadrinho a ser comprado
            cin >> numeroQuadrinho;                                      // Lê o número do quadrinho
            comprarQuadrinho(nomes, precos, numeroQuadrinho);            // Chama a função para comprar o quadrinho
            break;
        case '3':                          // Opção para sair da loja
            cout << "Saindo da loja...\n"; // Mensagem indicando que o usuário está saindo da loja
            break;
        default:                         // Opção inválida
            cout << "Opção inválida!\n"; // Mensagem indicando que a opção é inválida
        }
    } while (opcao != '3'); // O loop continua até que o usuário escolha a opção de sair da loja

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
