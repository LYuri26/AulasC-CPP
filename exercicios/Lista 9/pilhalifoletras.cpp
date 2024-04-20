#include <iostream>

const int CapacidadeMaxima = 10;

// Estrutura para representar a pilha
struct Pilha
{
    char array[CapacidadeMaxima]; // Array para armazenar os elementos da pilha
    int topo;                     // Índice do topo da pilha
};

// Função para inicializar a pilha
void inicializarPilha(Pilha &pilha)
{
    pilha.topo = -1; // Inicializa o topo como -1 para indicar que a pilha está vazia
}

// Função para adicionar um elemento ao topo da pilha
void push(Pilha &pilha, char elemento)
{
    // Verifica se a pilha está cheia
    if (pilha.topo == CapacidadeMaxima - 1)
    {
        std::cout << "A pilha está cheia. Não é possível adicionar mais elementos." << std::endl;
        return; // Retorna sem fazer nada se a pilha estiver cheia
    }
    pilha.array[++pilha.topo] = elemento; // Adiciona o elemento ao topo da pilha e incrementa o topo
}

// Função para remover e retornar o elemento do topo da pilha
char pop(Pilha &pilha)
{
    // Verifica se a pilha está vazia
    if (pilha.topo == -1)
    {
        std::cout << "Erro: pilha vazia!" << std::endl;
        return '\0'; // Retorna um valor inválido ('\0') indicando erro
    }
    return pilha.array[pilha.topo--]; // Retorna o elemento do topo da pilha e decrementa o topo
}

// Função principal
int main()
{
    Pilha pilha; // Declara uma instância da estrutura Pilha
    int escolha; // Variável para armazenar a escolha do usuário
    char valor;  // Variável para armazenar o valor a ser inserido/removido da pilha

    // Inicializa a pilha
    inicializarPilha(pilha);

    // Menu principal
    do
    {
        // Exibe o menu
        std::cout << "\n1. Inserir item na pilha\n2. Retirar item do topo\n3. Sair\nEscolha uma opção: ";
        std::cin >> escolha; // Lê a escolha do usuário

        switch (escolha)
        {
        case 1:
            std::cout << "Digite o valor a ser inserido na pilha: ";
            std::cin >> valor;  // Lê o valor a ser inserido na pilha
            push(pilha, valor); // Chama a função push para inserir o valor na pilha
            break;
        case 2:
            valor = pop(pilha); // Chama a função pop para remover o elemento do topo da pilha
            if (valor != '\0')
            {                                                                 // Verifica se o valor retornado não é inválido
                std::cout << "Item retirado do topo: " << valor << std::endl; // Exibe o elemento removido
            }
            break;
        case 3:
            std::cout << "Encerrando o programa." << std::endl; // Mensagem de encerramento do programa
            break;
        default:
            std::cout << "Opção inválida. Tente novamente." << std::endl; // Mensagem de opção inválida
        }
    } while (escolha != 3); // Repete o menu até que o usuário escolha sair

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
