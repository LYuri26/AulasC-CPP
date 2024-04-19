#include <iostream>
#include <vector>

// Definição da capacidade máxima da fila
const int capacidadeMaxima = 5;

// Vetor para armazenar os elementos da fila
std::vector<int> fila(capacidadeMaxima);

// Índice do primeiro elemento da fila
int inicio = 0;

// Índice do próximo local disponível para inserção
int fim = 0;

// Função para adicionar um elemento à fila
void adicionarElemento(int valor) {
    // Verifica se há espaço disponível na fila
    if ((fim + 1) % capacidadeMaxima != inicio) {
        fila[fim] = valor; // Insere o elemento na posição fim
        fim = (fim + 1) % capacidadeMaxima; // Atualiza o índice de fim
    } else {
        // A fila está cheia, exibe mensagem de erro
        std::cout << "Fila cheia. Não é possível adicionar mais elementos." << std::endl;
    }
}

// Função para remover um elemento da fila
void removerElemento() {
    // Verifica se a fila não está vazia
    if (inicio != fim) {
        int valor = fila[inicio]; // Obtém o elemento a ser removido
        inicio = (inicio + 1) % capacidadeMaxima; // Atualiza o índice de início
        std::cout << "Elemento removido: " << valor << std::endl; // Exibe o elemento removido
    } else {
        // A fila está vazia, exibe mensagem de erro
        std::cout << "Fila vazia. Não é possível remover elementos." << std::endl;
    }
}

// Função para exibir o menu e obter a escolha do usuário
int exibirMenu() {
    int escolha;
    std::cout << "\n1. Adicionar elemento\n2. Remover elemento\n3. Sair\nEscolha uma opção: ";
    std::cin >> escolha;
    return escolha;
}

// Função principal
int main() {
    int escolha, valor;

    // Menu principal
    do {
        escolha = exibirMenu(); // Exibe o menu e obtém a escolha do usuário

        switch (escolha) {
            case 1:
                // Adiciona um elemento à fila
                std::cout << "Digite o valor a ser adicionado: ";
                std::cin >> valor;
                adicionarElemento(valor);
                break;
            case 2:
                // Remove um elemento da fila
                removerElemento();
                break;
            case 3:
                // Encerra o programa
                std::cout << "Encerrando o programa." << std::endl;
                break;
            default:
                // Opção inválida, exibe mensagem de erro
                std::cout << "Opção inválida. Tente novamente." << std::endl;
        }
    } while (escolha != 3); // Repete o menu até que o usuário escolha sair

    return 0;
}
