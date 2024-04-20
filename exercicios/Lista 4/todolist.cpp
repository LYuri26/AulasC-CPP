#include <iostream> // Biblioteca para entrada e saída de dados em C++
#include <queue>    // Biblioteca para utilizar fila em C++

// Função para adicionar nova tarefa à lista
void adicionarTarefa(std::queue<std::string> &lista, std::string tarefa)
{
    lista.push(tarefa); // Adiciona a nova tarefa à fila
}

// Função para marcar tarefa como concluída
void marcarConcluida(std::queue<std::string> &lista)
{
    if (!lista.empty())
    {                                                                    // Verifica se a lista não está vazia
        std::cout << "Tarefa concluída: " << lista.front() << std::endl; // Exibe a tarefa a ser marcada como concluída
        lista.pop();                                                     // Remove a tarefa concluída da fila
    }
    else
    {
        std::cout << "Lista de afazeres vazia!\n"; // Exibe mensagem se a lista estiver vazia
    }
}

// Função para exibir a lista atual de afazeres
void exibirLista(std::queue<std::string> lista)
{
    std::cout << "Lista de afazeres:\n";
    while (!lista.empty())
    {
        std::cout << lista.front() << std::endl; // Exibe cada tarefa da lista
        lista.pop();                             // Remove a tarefa exibida da fila
    }
}

int main()
{
    std::queue<std::string> listaAfazeres; // Fila para armazenar as tarefas

    // Adiciona algumas tarefas à lista inicialmente
    adicionarTarefa(listaAfazeres, "Capturar o Lex Luthor");
    adicionarTarefa(listaAfazeres, "Impedir um assalto a banco");
    adicionarTarefa(listaAfazeres, "Salvar um gato de uma árvore");

    // Exibe a lista de afazeres inicial
    exibirLista(listaAfazeres);

    // Marca algumas tarefas como concluídas
    marcarConcluida(listaAfazeres);
    marcarConcluida(listaAfazeres);

    // Exibe a lista de afazeres após as conclusões
    exibirLista(listaAfazeres);

    return 0;
}
