#include <iostream>
#include <vector>

// Capacidade máxima da pilha
const int CapacidadeMaxima = 5;

// Vetor para armazenar os elementos da pilha
std::vector<int> pilha;

// Função para adicionar um elemento ao topo da pilha
void push(int elemento)
{
    // Verifica se a pilha está cheia
    if (pilha.size() == CapacidadeMaxima)
    {
        std::cout << "A pilha está cheia. Não é possível adicionar mais elementos." << std::endl;
        return;
    }

    // Adiciona o elemento ao topo da pilha
    pilha.push_back(elemento);
}

// Função para remover e retornar o elemento do topo da pilha
int pop()
{
    // Verifica se a pilha está vazia
    if (pilha.empty())
    {
        std::cout << "Erro: pilha vazia!" << std::endl;
        return -1; // Retorna um valor inválido indicando erro
    }

    // Obtém o elemento do topo da pilha
    int elemento = pilha.back();

    // Remove o elemento do topo da pilha
    pilha.pop_back();

    // Retorna o elemento removido
    return elemento;
}

// Função para obter o tamanho atual da pilha
int tamanhoPilha()
{
    return pilha.size(); // Retorna o tamanho da pilha
}

// Função principal
int main()
{
    int escolha, valor;

    // Menu principal
    do
    {
        std::cout << "\n1. Inserir item na pilha\n2. Retirar item do topo\n3. Sair\nEscolha uma opção: ";
        std::cin >> escolha;

        switch (escolha)
        {
        case 1:
            // Adiciona um elemento à pilha
            std::cout << "Digite o valor a ser inserido na pilha: ";
            std::cin >> valor;
            push(valor);
            break;
        case 2:
            // Remove um elemento do topo da pilha
            valor = pop();
            if (valor != -1)
            {
                std::cout << "Item retirado do topo: " << valor << std::endl;
            }
            break;
        case 3:
            std::cout << "Encerrando o programa." << std::endl;
            break;
        default:
            std::cout << "Opção inválida. Tente novamente." << std::endl;
        }
    } while (escolha != 3); // Repete o menu até que o usuário escolha sair

    return 0;
}
