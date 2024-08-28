#include <iostream>

using namespace std;

// Função para calcular a média aritmética de um conjunto de números
double calcularMediaAritmetica(int numeros[], int quantidade)
{
    double soma = 0; // Variável para armazenar a soma dos números
    for (int i = 0; i < quantidade; i++)
    {
        soma += numeros[i]; // Soma todos os números do conjunto
    }
    return soma / quantidade; // Retorna a média aritmética
}

// Função para calcular a potência de um número sem usar a função pow
double calcularPotencia(double base, int expoente)
{
    double resultado = 1;
    for (int i = 0; i < expoente; i++)
    {
        resultado *= base; // Multiplica a base por ela mesma "expoente" vezes
    }
    return resultado;
}

// Função para calcular a raiz quadrada de um número usando o método de aproximação
double calcularRaizQuadrada(double numero)
{
    double estimativa = numero / 2;
    double precisao = 0.00001; // Precisão da aproximação

    while ((estimativa * estimativa) - numero > precisao || numero - (estimativa * estimativa) > precisao)
    {
        estimativa = (estimativa + numero / estimativa) / 2; // Atualiza a estimativa pela média das aproximações
    }

    return estimativa;
}

// Função para calcular as raízes de uma equação do 2º grau sem usar sqrt
void calcularEquacaoSegundoGrau(double coeficienteA, double coeficienteB, double coeficienteC)
{
    double delta = coeficienteB * coeficienteB - 4 * coeficienteA * coeficienteC; // Calcula o discriminante (delta) da equação
    if (delta < 0)
    {
        cout << "A equação não possui raízes reais." << endl; // Caso delta seja negativo, não há raízes reais
    }
    else if (delta == 0)
    {
        double raizUnica = -coeficienteB / (2 * coeficienteA); // Caso delta seja zero, há uma única raiz real
        cout << "A única raiz da equação é: x = " << raizUnica << endl;
    }
    else
    {
        double raizDelta = calcularRaizQuadrada(delta);                  // Calcula a raiz quadrada de delta manualmente
        double raiz1 = (-coeficienteB + raizDelta) / (2 * coeficienteA); // Calcula a primeira raiz real
        double raiz2 = (-coeficienteB - raizDelta) / (2 * coeficienteA); // Calcula a segunda raiz real
        cout << "As raízes da equação são: x1 = " << raiz1 << ", x2 = " << raiz2 << endl;
    }
}

// Função principal (main) que controla a execução do programa
int main()
{
    int opcaoEscolhida; // Variável para armazenar a opção escolhida pelo usuário
    cout << "Escolha uma operação:" << endl;
    cout << "1. Calcular Média Aritmética" << endl;
    cout << "2. Calcular Potência" << endl;
    cout << "3. Calcular Equação do 2º Grau" << endl;
    cin >> opcaoEscolhida; // Recebe a opção do usuário

    if (opcaoEscolhida == 1)
    {
        int quantidadeNumeros;
        cout << "Quantos números deseja calcular a média?" << endl;
        cin >> quantidadeNumeros; // Recebe a quantidade de números do conjunto

        int numeros[quantidadeNumeros]; // Declara um array para armazenar os números
        cout << "Digite os números:" << endl;
        for (int i = 0; i < quantidadeNumeros; i++)
        {
            cin >> numeros[i]; // Recebe cada número e armazena no array
        }

        double mediaAritmetica = calcularMediaAritmetica(numeros, quantidadeNumeros); // Calcula a média aritmética
        cout << "A média aritmética é: " << mediaAritmetica << endl;                  // Exibe o resultado
    }
    else if (opcaoEscolhida == 2)
    {
        double base;
        int expoente;
        cout << "Digite a base:" << endl;
        cin >> base; // Recebe a base da potência
        cout << "Digite o expoente:" << endl;
        cin >> expoente; // Recebe o expoente da potência

        double resultadoPotencia = calcularPotencia(base, expoente);           // Calcula a potência
        cout << base << "^" << expoente << " = " << resultadoPotencia << endl; // Exibe o resultado
    }
    else if (opcaoEscolhida == 3)
    {
        double coeficienteA, coeficienteB, coeficienteC;
        cout << "Digite os coeficientes a, b e c da equação:" << endl;
        cin >> coeficienteA >> coeficienteB >> coeficienteC; // Recebe os coeficientes da equação do 2º grau

        calcularEquacaoSegundoGrau(coeficienteA, coeficienteB, coeficienteC); // Calcula as raízes da equação
    }
    else
    {
        cout << "Opção inválida!" << endl; // Caso o usuário insira uma opção inválida
    }

    return 0; // Retorna 0 indicando que o programa foi executado com sucesso
}
