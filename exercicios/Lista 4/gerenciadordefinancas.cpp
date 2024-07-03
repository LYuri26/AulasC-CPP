#include <iostream> // Biblioteca para entrada e saída de dados em C++

int main()
{
    const int MAX_HISTORICO = 100;            // Definindo o número máximo de transações no histórico
    const int MAX_CARACTERES_DATA = 11;       // Definindo o número máximo de caracteres para a data
    const int MAX_CARACTERES_DESCRICAO = 100; // Definindo o número máximo de caracteres para a descrição

    char historico_data[MAX_HISTORICO][MAX_CARACTERES_DATA] = {
        "01/03/2024",
        "05/03/2024",
        "10/03/2024"};

    char historico_descricao[MAX_HISTORICO][MAX_CARACTERES_DESCRICAO] = {
        "Compra de Batmóvel",
        "Recebimento de aluguel",
        "Herança dos pais"};

    double historico_valor[MAX_HISTORICO] = {
        -100000,
        5000,
        1000000};

    int tamanho = 3; // Variável para controlar o tamanho atual do histórico

    // Exibindo o histórico de transações
    std::cout << "Histórico de transações:\n";
    for (int i = 0; i < tamanho; ++i)
    {
        std::cout << "Data: " << historico_data[i] << ", Descrição: " << historico_descricao[i] << ", Valor: $" << historico_valor[i] << std::endl;
    }

    // Calculando e exibindo o saldo atual
    double saldo = 0;
    for (int i = 0; i < tamanho; ++i)
    {
        saldo += historico_valor[i];
    }
    std::cout << "\nSaldo atual: $" << saldo << std::endl;

    return 0;
}
