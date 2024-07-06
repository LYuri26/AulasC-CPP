#include <iostream> // Inclui a biblioteca padrão de entrada e saída

using namespace std; // Permite o uso do namespace padrão para evitar a repetição de "std::"

const int MAX_TERMINAIS = 100; // Definindo o número máximo de terminais
const int MAX_CARACTERES = 50; // Definindo o número máximo de caracteres para nomes e senhas

int main()
{
    char nomes[MAX_TERMINAIS][MAX_CARACTERES];  // Array bidimensional para armazenar os nomes dos terminais
    char senhas[MAX_TERMINAIS][MAX_CARACTERES]; // Array bidimensional para armazenar as senhas dos terminais
    int tamanho = 0;                            // Variável para controlar o número atual de terminais

    // Adicionando exemplos de terminais e suas senhas

    // Terminal 1
    for (int i = 0; i < 18; ++i) // Loop para copiar os caracteres da string "Controle de Armas" para o array `nomes`
    {
        // Aqui, "Controle de Armas"[i] é uma forma de acessar o caractere na posição `i` da string "Controle de Armas".
        // Isso significa que a expressão "Controle de Armas"[i] retorna o caractere `i`-ésimo da string.
        // Por exemplo, "Controle de Armas"[0] retorna 'C', "Controle de Armas"[1] retorna 'o', e assim por diante.
        nomes[tamanho][i] = "Controle de Armas"[i]; // Copia cada caractere para a posição correspondente no array `nomes`

        // Da mesma forma, " Rebel1on!"[i] acessa o caractere na posição `i` da string " Rebel1on!".
        // A expressão " Rebel1on!"[i] retorna o caractere `i`-ésimo da string.
        senhas[tamanho][i] = "Rebel1on!"[i]; // Copia cada caractere para a posição correspondente no array `senhas`
    }
    tamanho++; // Incrementa o número de terminais após adicionar o primeiro terminal

    // Terminal 2
    for (int i = 0; i < 18; ++i) // Loop para copiar os caracteres da string "Centro de Comando" para o array `nomes`
    {
        // Novamente, estamos acessando o caractere `i`-ésimo da string "Centro de Comando".
        nomes[tamanho][i] = "Centro de Comando"[i]; // Copia cada caractere para a posição correspondente no array `nomes`

        // Acessando o caractere `i`-ésimo da string " Secr3tB@s3".
        senhas[tamanho][i] = "Secr3tB@s3"[i]; // Copia cada caractere para a posição correspondente no array `senhas`
    }
    tamanho++; // Incrementa o número de terminais após adicionar o segundo terminal

    // Terminal 3
    for (int i = 0; i < 23; ++i) // Loop para copiar os caracteres da string "Sistema de Comunicação" para o array `nomes`
    {
        // Aqui, "Sistema de Comunicação"[i] acessa o caractere `i`-ésimo da string "Sistema de Comunicação".
        nomes[tamanho][i] = "Sistema de Comunicação"[i]; // Copia cada caractere para a posição correspondente no array `nomes`

        // Acessando o caractere `i`-ésimo da string " FreedomP@ss".
        senhas[tamanho][i] = "FreedomP@ss"[i]; // Copia cada caractere para a posição correspondente no array `senhas`
    }
    tamanho++; // Incrementa o número de terminais após adicionar o terceiro terminal

    // Exibindo os terminais e suas senhas
    for (int i = 0; i < tamanho; ++i) // Loop para percorrer todos os terminais adicionados
    {
        // Exibe o nome do terminal e a senha associada, acessando os arrays `nomes` e `senhas` na posição `i`
        cout << "Terminal: " << nomes[i] << " (Senha: " << senhas[i] << ")\n";
    }

    return 0; // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
