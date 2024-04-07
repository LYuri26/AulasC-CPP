#include <iostream>
#include <string>

using namespace std;

const int tamanhoEstoque = 10; // Tamanho máximo do estoque
string nomeItem[tamanhoEstoque]; // Array para armazenar os nomes dos itens do estoque
int quantidadeItem[tamanhoEstoque]; // Array para armazenar as quantidades dos itens do estoque

// Função para adicionar um item ao estoque
void adicionar() {
    string nome;
    int quantidade;

    // Solicita ao usuário o nome do item e sua quantidade
    cout << "Digite o nome do item: ";
    cin >> nome;
    cout << "Digite a quantidade do item: ";
    cin >> quantidade;

    // Procura por uma posição vazia no estoque para adicionar o item
    int posicaoVazia = -1;
    for (int i = 0; i < tamanhoEstoque; ++i) {
        if (nomeItem[i] == "") {
            posicaoVazia = i;
            break;
        }
    }

    // Verifica se há espaço disponível no estoque e adiciona o item
    if (posicaoVazia != -1) {
        nomeItem[posicaoVazia] = nome;
        quantidadeItem[posicaoVazia] = quantidade;
        cout << "Item '" << nome << "' adicionado ao estoque na posição " << posicaoVazia << "." << endl;
    } else {
        cout << "O estoque está cheio. Não é possível adicionar mais itens." << endl;
    }
}

// Função para editar um item do estoque
void editar() {
    int posicao;

    // Solicita ao usuário a posição do item que deseja editar
    cout << "Digite a posição do item que deseja editar: ";
    cin >> posicao;

    // Verifica se a posição é válida e se o item existe
    if (posicao >= 0 && posicao < tamanhoEstoque && nomeItem[posicao] != "") {
        string novoNome;
        int novaQuantidade;

        // Solicita ao usuário o novo nome e a nova quantidade do item
        cout << "Digite o novo nome do item: ";
        cin >> novoNome;
        cout << "Digite a nova quantidade do item: ";
        cin >> novaQuantidade;

        // Atualiza o nome e a quantidade do item na posição especificada
        nomeItem[posicao] = novoNome;
        quantidadeItem[posicao] = novaQuantidade;
        cout << "Item na posição " << posicao << " atualizado com sucesso." << endl;
    } else {
        cout << "Posição inválida ou item não encontrado." << endl;
    }
}

// Função para remover um item do estoque
void remover() {
    int posicao;

    // Solicita ao usuário a posição do item que deseja remover
    cout << "Digite a posição do item que deseja remover: ";
    cin >> posicao;

    // Verifica se a posição é válida e se o item existe
    if (posicao >= 0 && posicao < tamanhoEstoque && nomeItem[posicao] != "") {
        // Remove o item da posição especificada
        nomeItem[posicao] = "";
        quantidadeItem[posicao] = 0;
        cout << "Item na posição " << posicao << " removido do estoque." << endl;
    } else {
        cout << "Posição inválida ou item não encontrado." << endl;
    }
}

// Função para exibir o estoque
void exibirEstoque() {
    cout << "===== ESTOQUE =====" << endl;

    // Itera sobre o estoque e exibe os itens presentes
    for (int i = 0; i < tamanhoEstoque; ++i) {
        if (nomeItem[i] != "") {
            cout << "Posição: " << i << ", Nome: " << nomeItem[i] << ", Quantidade: " << quantidadeItem[i] << endl;
        }
    }
}

int main() {
    int escolha;

    // Menu principal do programa
    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Adicionar Item" << endl;
        cout << "2. Editar Item" << endl;
        cout << "3. Remover Item" << endl;
        cout << "4. Exibir Estoque" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> escolha;

        // Realiza a operação correspondente à escolha do usuário
        switch (escolha) {
            case 1:
                adicionar();
                break;
            case 2:
                editar();
                break;
            case 3:
                remover();
                break;
            case 4:
                exibirEstoque();
                break;
            case 5:
                cout << "Saindo do programa..." << endl;
                break;
            default:
                cout << "Opção inválida. Por favor, escolha uma opção válida." << endl;
                break;
        }
    } while (escolha != 5);

    return 0;
}
