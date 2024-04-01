#include <iostream> // Biblioteca para entrada e saída de dados em C++
#include <stack>    // Biblioteca para utilizar pilha em C++

// Função para adicionar novo livro emprestado
void adicionarEmprestimo(std::stack<std::string> &livrosEmprestados, std::string livro)
{
    livrosEmprestados.push(livro); // Adiciona o livro ao topo da pilha de livros emprestados
    // Mostra o livro emprestado
    std::cout << "Livro emprestado: " << livro << std::endl;
}

// Função para remover livro devolvido
void removerDevolucao(std::stack<std::string> &livrosEmprestados)
{
    if (!livrosEmprestados.empty())
    {
        // Obtém o livro a ser devolvido
        std::string livroDevolvido = livrosEmprestados.top();
        livrosEmprestados.pop(); // Remove o livro do topo da pilha
        // Mostra o livro devolvido
        std::cout << "Livro devolvido: " << livroDevolvido << std::endl;
    }
    else
    {
        // Exibe mensagem se a pilha estiver vazia
        std::cout << "Não há livros emprestados para devolver.\n";
    }
}

// Função para exibir os livros emprestados atualmente
void exibirEmprestimos(std::stack<std::string> &livrosEmprestados)
{
    if (livrosEmprestados.empty())
    {
        // Exibe mensagem se não houver livros emprestados
        std::cout << "Não há livros emprestados atualmente.\n";
        return;
    }
    std::cout << "Livros emprestados atualmente:\n";
    std::stack<std::string> copiaLivros = livrosEmprestados; // Cria uma cópia da pilha para não alterar a original
    while (!copiaLivros.empty())
    {
        // Mostra o livro emprestado
        std::cout << copiaLivros.top() << std::endl;
        copiaLivros.pop(); // Remove o livro exibido da pilha
    }
}

int main()
{
    std::stack<std::string> livrosEmprestados; // Pilha para armazenar os livros emprestados

    // Adiciona alguns livros ao empréstimo inicialmente
    adicionarEmprestimo(livrosEmprestados, "A Origem das Espécies");
    adicionarEmprestimo(livrosEmprestados, "1984");
    adicionarEmprestimo(livrosEmprestados, "O Manifesto Comunista");
    adicionarEmprestimo(livrosEmprestados, "As Veias Abertas da América Latina");

    // Exibe os livros emprestados inicialmente
    std::cout << "Exibindo os livros emprestados:\n";
    exibirEmprestimos(livrosEmprestados);

    // Simula a devolução de um livro
    removerDevolucao(livrosEmprestados);

    // Exibe os livros após a devolução
    std::cout << "Após a devolução:\n";
    exibirEmprestimos(livrosEmprestados);

    return 0;
}
