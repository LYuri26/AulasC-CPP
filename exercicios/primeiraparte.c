#include <stdio.h>

int main() {
    // Exercicio sobre Estrutura de um Programa em C
    // Imprime uma mensagem de boas-vindas ao universo da programacao
    printf("Exercicio sobre Estrutura de um Programa em C:\n");
    printf("Voce e convocado para uma missao especial pelo \"Comandante C\" da Frota de Programadores.\n");
    printf("Sua tarefa e criar um programa em C que imprima na tela a mensagem \"Ola, Mundo!\"\n");
    printf("e iniciar a aventura pelo universo da programacao.\n");
    printf("\n");

    // Exercicio sobre Declaracao de Variaveis
    // Declara duas variaveis inteiras, realiza a soma e imprime o resultado
    printf("Exercicio sobre Declaracao de Variaveis:\n");
    printf("Em uma galaxia distante, voce e um(a) aprendiz Jedi da programacao.\n");
    printf("Seu mestre lhe deu a missao de declarar duas variaveis misteriosas\n");
    printf("e revelar a soma de seus valores. Que a Forca esteja com voce!\n");
    int variavel1 = 10, variavel2 = 20;
    int soma = variavel1 + variavel2;
    printf("A soma de %d e %d e %d\n", variavel1, variavel2, soma);
    printf("\n");

    // Exercicio sobre Tipos de Dados
    // Declara e imprime valores de diferentes tipos de dados
    printf("Exercicio sobre Tipos de Dados:\n");
    printf("Em uma taverna medieval, voce encontra um mapa antigo com inscricoes estranhas.\n");
    printf("Decifre as mensagens usando os tipos de dados corretos!\n");
    printf("Floats, chars e doubles sao suas ferramentas para desvendar os segredos ocultos!\n");
    float numeroFloat = 3.14;
    char letra = 'A';
    double numeroDouble = 123.456;
    printf("Valor de float: %f\n", numeroFloat);
    printf("Valor de char: %c\n", letra);
    printf("Valor de double: %lf\n", numeroDouble);
    printf("\n");

    // Exercicio sobre Operadores Aritmeticos
    // Realiza operacoes aritmeticas basicas e imprime os resultados
    printf("Exercicio sobre Operadores Aritmeticos:\n");
    printf("No mundo magico de Hogwarts, o Professor Snape desafia voce a dominar os feiticos aritmeticos basicos.\n");
    printf("Prepare sua varinha (ou seu teclado) e realize as operacoes magicas para provar seu dominio das artes da programacao!\n");
    int num1 = 10, num2 = 5;
    printf("Soma: %d\n", num1 + num2);
    printf("Subtracao: %d\n", num1 - num2);
    printf("Multiplicacao: %d\n", num1 * num2);
    printf("Divisao: %d\n", num1 / num2);
    printf("Resto da Divisao: %d\n", num1 % num2);
    printf("\n");

    // Exercicio sobre Operadores de Atribuicao
    // Utiliza operadores de atribuicao para incrementar uma variavel
    printf("Exercicio sobre Operadores de Atribuicao:\n");
    printf("Em uma terra de dragoes e aventuras, voce encontrou um pergaminho encantado com um desafio peculiar.\n");
    printf("Utilize os operadores de atribuicao como se fossem runas magicas para incrementar o valor de uma variavel\n");
    printf("e desbloquear o segredo guardado pelo antigo feiticeiro.\n");
    int valor = 5;
    printf("Valor inicial: %d\n", valor);
    valor += 3; // Equivalente a valor = valor + 3;
    printf("Valor apos incremento: %d\n", valor);

    return 0;
}
