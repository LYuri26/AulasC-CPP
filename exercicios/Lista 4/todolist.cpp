#include <iostream> // Biblioteca para entrada e saída de dados em C++
#include <queue>    // Biblioteca para utilizar fila em C++

int main()
{
    std::queue<std::string> listaAfazeres; // Fila para armazenar as tarefas

    // Adiciona algumas tarefas à lista inicialmente
    listaAfazeres.push("Capturar o Lex Luthor");
    listaAfazeres.push("Impedir um assalto a banco");
    listaAfazeres.push("Salvar um gato de uma árvore");

    // Exibe a lista de afazeres inicial
    std::cout << "Lista de afazeres inicial:\n";
    std::queue<std::string> listaCopia = listaAfazeres; // Copia a fila para exibição sem alterar a original
    while (!listaCopia.empty())
    {
        std::cout << listaCopia.front() << std::endl; // Exibe cada tarefa da lista
        listaCopia.pop();                             // Remove a tarefa exibida da fila
    }

    // Marca algumas tarefas como concluídas
    if (!listaAfazeres.empty())
    {
        std::cout << "\nTarefa concluída: " << listaAfazeres.front() << std::endl;
        listaAfazeres.pop();
    }
    else
    {
        std::cout << "Lista de afazeres vazia!\n";
    }

    if (!listaAfazeres.empty())
    {
        std::cout << "Tarefa concluída: " << listaAfazeres.front() << std::endl;
        listaAfazeres.pop();
    }
    else
    {
        std::cout << "Lista de afazeres vazia!\n";
    }

    // Exibe a lista de afazeres após as conclusões
    std::cout << "\nLista de afazeres após concluir algumas tarefas:\n";
    listaCopia = listaAfazeres; // Copia a fila novamente para exibição
    while (!listaCopia.empty())
    {
        std::cout << listaCopia.front() << std::endl;
        listaCopia.pop();
    }

    return 0;
}
