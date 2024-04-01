#include <iostream>
#include <vector>
using namespace std;

// Função para adicionar um novo herói ao vetor
void adicionar_heroi(vector<string>& herois, string novo_heroi) {
    herois.push_back(novo_heroi); // Adiciona o novo herói ao final do vetor
    cout << "Novo heroi adicionado com sucesso!\n"; // Exibe uma mensagem de sucesso
}

// Função para listar todos os heróis cadastrados
void listar_herois(const vector<string>& herois) {
    cout << "Lista de Heróis Cadastrados:\n"; // Exibe o cabeçalho da lista
    for (int i = 0; i < herois.size(); ++i) { // Loop para percorrer o vetor de heróis
        cout << "- " << herois[i] << endl; // Exibe cada herói da lista
    }
}

int main() {
    vector<string> herois; // Declara um vetor para armazenar os heróis
    char opcao; // Variável para armazenar a opção do usuário
    string novo_heroi; // Variável para armazenar o novo herói

    do {
        cout << "\nMenu:\n"; // Exibe o menu de opções
        cout << "1. Adicionar novo heroi\n"; // Opção para adicionar um novo herói
        cout << "2. Listar herois cadastrados\n"; // Opção para listar os heróis cadastrados
        cout << "3. Sair\n"; // Opção para sair do programa
        cout << "Escolha uma opcao: "; // Solicita ao usuário que escolha uma opção
        cin >> opcao; // Lê a opção escolhida pelo usuário

        switch (opcao) { // Switch para tratar a opção escolhida pelo usuário
            case '1':
                cout << "Digite o nome do novo heroi: "; // Solicita ao usuário que digite o nome do novo herói
                cin >> novo_heroi; // Lê o nome do novo herói
                adicionar_heroi(herois, novo_heroi); // Chama a função para adicionar o novo herói ao vetor
                break;
            case '2':
                listar_herois(herois); // Chama a função para listar os heróis cadastrados
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
