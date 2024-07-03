#include <iostream> // Biblioteca para entrada e saída de dados em C++
#include <stack>    // Biblioteca para utilizar pilha em C++

int main()
{
    std::stack<std::string> livrosEmprestados; // Pilha para armazenar os livros emprestados

    // Adicionando livros ao empréstimo inicialmente
    livrosEmprestados.push("A Origem das Espécies");
    livrosEmprestados.push("1984");
    livrosEmprestados.push("O Manifesto Comunista");
    livrosEmprestados.push("As Veias Abertas da América Latina");

    // Exibindo os livros emprestados inicialmente
    std::cout << "Exibindo os livros emprestados:\n";
    std::stack<std::string> copiaLivros = livrosEmprestados; // Cria uma cópia da pilha para não alterar a original
    while (!copiaLivros.empty())
    {
        std::cout << copiaLivros.top() << std::endl; // Mostra o livro emprestado
        copiaLivros.pop();                           // Remove o livro exibido da pilha
    }

    // Simulando a devolução de um livro
    if (!livrosEmprestados.empty())
    {
        std::string livroDevolvido = livrosEmprestados.top(); // Obtém o livro a ser devolvido
        livrosEmprestados.pop();                              // Remove o livro do topo da pilha
        std::cout << "\nLivro devolvido: " << livroDevolvido << std::endl;
    }
    else
    {
        std::cout << "\nNão há livros emprestados para devolver.\n";
    }

    // Exibindo os livros após a devolução
    std::cout << "\nApós a devolução:\n";
    copiaLivros = livrosEmprestados; // Atualiza a cópia da pilha para refletir as mudanças
    while (!copiaLivros.empty())
    {
        std::cout << copiaLivros.top() << std::endl; // Mostra o livro emprestado
        copiaLivros.pop();                           // Remove o livro exibido da pilha
    }

    return 0; // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
