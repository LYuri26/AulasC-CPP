#include <iostream> // Biblioteca para entrada e saída de dados em C++
#include <vector>   // Biblioteca para utilizar vetor em C++
#include <string>   // Biblioteca para utilizar string em C++

// Estrutura para representar uma transação financeira
struct Transacao
{
    std::string data;      // Armazena a data da transação
    std::string descricao; // Armazena a descrição da transação
    double valor;          // Armazena o valor da transação
};

// Função para adicionar nova transação
std::vector<Transacao> adicionarTransacao(std::vector<Transacao> historico, std::string data, std::string descricao, double valor)
{
    // Cria uma nova transação com a data, descrição e valor fornecidos
    Transacao novaTransacao = {data, descricao, valor};
    // Adiciona a nova transação ao final do vetor
    historico.push_back(novaTransacao);

    // Exibe a transação adicionada
    std::cout << "Transação adicionada: Data: " << data << ", Descrição: " << descricao << ", Valor: $" << valor << std::endl;

    return historico;
}

// Função para calcular o saldo atual
double calcularSaldo(std::vector<Transacao> historico)
{
    double saldo = 0;
    // Percorre todas as transações no histórico
    for (int i = 0; i < historico.size(); ++i)
    {
        saldo += historico[i].valor; // Soma os valores das transações ao saldo
    }
    return saldo;
}

// Função para exibir o histórico de transações
void exibirHistorico(std::vector<Transacao> historico)
{
    std::cout << "Histórico de transações:\n";
    // Percorre todas as transações no histórico
    for (int i = 0; i < historico.size(); ++i)
    {
        // Exibe cada transação do histórico
        std::cout << "Data: " << historico[i].data << ", Descrição: " << historico[i].descricao << ", Valor: $" << historico[i].valor << std::endl;
    }
}

int main()
{
    std::vector<Transacao> historico; // Vetor para armazenar as transações financeiras

    // Adiciona algumas transações ao histórico inicialmente e atualiza o vetor historico
    historico = adicionarTransacao(historico, "01/03/2024", "Compra de Batmóvel", -100000);
    historico = adicionarTransacao(historico, "05/03/2024", "Recebimento de aluguel", 5000);
    historico = adicionarTransacao(historico, "10/03/2024", "Herança dos pais", 1000000);

    // Exibe o histórico de transações
    exibirHistorico(historico);

    // Calcula e exibe o saldo atual
    std::cout << "\nSaldo atual: $" << calcularSaldo(historico) << std::endl;

    return 0;
}
