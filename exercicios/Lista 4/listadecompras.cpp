#include <iostream>

using namespace std;

const int MAX_ITENS = 10; // Definindo o tamanho máximo da lista de compras

int main()
{
    string listaCompras[MAX_ITENS]; // Array para armazenar os itens de compra
    int numItens = 0;               // Variável para controlar o número atual de itens na lista

    // Exibe a lista de compras antes de inserir itens
    cout << "Lista de compras antes de inserir itens:\n";
    if (numItens == 0)
    {
        cout << "A lista de compras está vazia.\n";
    }
    else
    {
        for (int i = 0; i < numItens; ++i)
        {
            cout << listaCompras[i] << endl;
        }
    }
    cout << endl;

    // Adiciona alguns itens à lista de compras inicialmente
    listaCompras[numItens] = "Leite";
    numItens++; // Incrementa o número de itens após adicionar "Leite"

    listaCompras[numItens] = "Ovos";
    numItens++; // Incrementa o número de itens após adicionar "Ovos"

    // Exibe a lista de compras após inserir itens
    cout << "Lista de compras após inserir itens:\n";
    for (int i = 0; i < numItens; ++i)
    {
        cout << listaCompras[i] << endl;
    }
    cout << endl;

    // Simula a compra de um item (remover o primeiro item da lista)
    if (numItens > 0)
    {
        cout << "Você comprou o item " << listaCompras[0] << "!\n";
        for (int i = 0; i < numItens - 1; ++i)
        {
            listaCompras[i] = listaCompras[i + 1]; // Move os itens para frente
        }
        numItens--; // Decrementa o número de itens na lista
    }
    else
    {
        cout << "A lista de compras está vazia. Nada para comprar.\n";
    }

    // Exibe a lista de compras após remover um item
    cout << "Lista de compras após remover um item:\n";
    if (numItens == 0)
    {
        cout << "A lista de compras está vazia.\n";
    }
    else
    {
        for (int i = 0; i < numItens; ++i)
        {
            cout << listaCompras[i] << endl;
        }
    }

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
