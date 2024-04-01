#include <iostream> // Biblioteca para entrada e saída de dados em C++
#include <queue>    // Biblioteca para utilizar fila em C++

using namespace std; // Usando o namespace std para facilitar o acesso aos elementos

// Função para adicionar um novo item à lista de compras
queue<string> adicionarItem(queue<string> listaCompras, string item)
{
    listaCompras.push(item); // Adiciona o item à lista de compras
    return listaCompras;     // Retorna a lista de compras atualizada
}

// Função para remover um item da lista de compras após ser adquirido
queue<string> removerItem(queue<string> listaCompras)
{
    if (!listaCompras.empty()) // Verifica se a lista de compras não está vazia
    {
        listaCompras.pop(); // Remove o item mais antigo da lista
    }
    else
    {
        cout << "A lista de compras está vazia.\n"; // Mensagem caso a lista de compras esteja vazia
    }
    return listaCompras; // Retorna a lista de compras atualizada
}

// Função para exibir a lista de compras atual
void exibirLista(const queue<string> &listaCompras)
{
    if (listaCompras.empty()) // Verifica se a lista de compras está vazia
    {
        cout << "A lista de compras está vazia.\n"; // Mensagem caso a lista de compras esteja vazia
    }
    else
    {
        queue<string> copiaLista = listaCompras; // Cria uma cópia da lista para preservar os dados originais
        while (!copiaLista.empty())              // Loop para exibir cada item da lista de compras
        {
            cout << copiaLista.front() << endl; // Exibe o próximo item da lista
            copiaLista.pop();                   // Remove o item exibido da cópia da lista
        }
    }
}

int main()
{
    queue<string> listaCompras; // Declaração da fila para armazenar os itens de compra

    // Exibe a lista de compras antes de inserir itens
    cout << "Lista de compras antes de inserir itens:\n";
    exibirLista(listaCompras);
    cout << endl;

    // Adiciona alguns itens à lista de compras inicialmente
    listaCompras = adicionarItem(listaCompras, "Leite");
    listaCompras = adicionarItem(listaCompras, "Ovos");

    // Exibe a lista de compras após inserir itens
    cout << "Lista de compras após inserir itens:\n";
    exibirLista(listaCompras);
    cout << endl;

    // Simula a compra de um item
    listaCompras = removerItem(listaCompras);

    // Exibe a lista de compras após remover um item
    cout << "Lista de compras após remover um item:\n";
    exibirLista(listaCompras);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
