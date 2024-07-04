#include <iostream> // Biblioteca para entrada e saída de dados em C++
#include <stack>    // Biblioteca para utilizar pilha em C++

int main()
{
    std::stack<std::string> livrosEmprestados; // Pilha para armazenar os livros emprestados

    // Adiciona alguns livros à pilha inicialmente
    livrosEmprestados.push("O Senhor dos Anéis");
    livrosEmprestados.push("Harry Potter e a Pedra Filosofal");
    livrosEmprestados.push("O Código Da Vinci");

    // Exibe a lista de livros emprestados inicialmente
    std::cout << "Lista de Livros Emprestados inicial:\n";
    std::stack<std::string> livrosEmprestadosCopia = livrosEmprestados; // Copia a pilha para exibição sem alterar a original
    while (!livrosEmprestadosCopia.empty())
    {
        std::cout << livrosEmprestadosCopia.top() << std::endl; // Exibe o livro no topo da pilha
        livrosEmprestadosCopia.pop();                           // Remove o livro exibido da cópia da pilha
    }

    // Marca alguns livros como devolvidos
    if (!livrosEmprestados.empty())
    {
        std::cout << "\nLivro devolvido: " << livrosEmprestados.top() << std::endl;
        livrosEmprestados.pop();
    }
    else
    {
        std::cout << "Nenhum livro para devolver!\n";
    }

    if (!livrosEmprestados.empty())
    {
        std::cout << "\nLivro devolvido: " << livrosEmprestados.top() << std::endl;
        livrosEmprestados.pop();
    }
    else
    {
        std::cout << "Nenhum livro para devolver!\n";
    }

    // Adiciona mais livros à pilha após as devoluções
    livrosEmprestados.push("1984 - George Orwell");
    livrosEmprestados.push("Dom Quixote - Miguel de Cervantes");
    livrosEmprestados.push("A Revolução dos Bichos - George Orwell");
    

    // Exibe a lista de livros emprestados após algumas devoluções
    std::cout << "\nLista de Livros Emprestados após algumas devoluções:\n";
    livrosEmprestadosCopia = livrosEmprestados; // Copia a pilha novamente para exibição
    while (!livrosEmprestadosCopia.empty())
    {
        std::cout << livrosEmprestadosCopia.top() << std::endl; // Exibe o livro no topo da pilha
        livrosEmprestadosCopia.pop();                           // Remove o livro exibido da cópia da pilha
    }

    return 0;
}
