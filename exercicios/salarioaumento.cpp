#include <iostream>

int main() {
    // Variáveis para armazenar o salário atual, o aumento percentual e o novo salário
    double salarioAtual, aumentoPercentual, novoSalario;

    // Solicitar ao usuário para inserir o salário atual e a porcentagem de aumento
    std::cout << "Digite o salario atual do funcionario: R$ ";
    std::cin >> salarioAtual;

    std::cout << "Digite a porcentagem de aumento salarial (%): ";
    std::cin >> aumentoPercentual;

    // Calcular o novo salário
    novoSalario = salarioAtual * (1 + aumentoPercentual / 100);

    // Exibir o novo salário
    std::cout << "Novo salario do funcionario: R$ " << novoSalario << std::endl;

    return 0;
}
