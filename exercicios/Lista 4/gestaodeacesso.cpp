#include <iostream>

using namespace std;

const int MAX_TERMINAIS = 100; // Definindo o número máximo de terminais
const int MAX_CARACTERES = 50; // Definindo o número máximo de caracteres para nomes e senhas

int main()
{
    char nomes[MAX_TERMINAIS][MAX_CARACTERES];  // Array de nomes dos terminais
    char senhas[MAX_TERMINAIS][MAX_CARACTERES]; // Array de senhas dos terminais
    int tamanho = 0;                            // Variável para controlar o tamanho atual dos arrays

    // Adicionando exemplos de terminais e senhas

    // Terminal 1
    for (int i = 0; i < 18; ++i)
    {
        nomes[tamanho][i] = "Controle de Armas"[i];
        senhas[tamanho][i] = " Rebel1on!"[i];
    }
    tamanho++; // Incrementa o tamanho do array

    // Terminal 2
    for (int i = 0; i < 18; ++i)
    {
        nomes[tamanho][i] = "Centro de Comando"[i];
        senhas[tamanho][i] = " Secr3tB@s3"[i];
    }
    tamanho++; // Incrementa o tamanho do array

    // Terminal 3
    for (int i = 0; i < 23; ++i)
    {
        nomes[tamanho][i] = "Sistema de Comunicação"[i];
        senhas[tamanho][i] = " FreedomP@ss"[i];
    }
    tamanho++; // Incrementa o tamanho do array

    // Exibindo os terminais e senhas
    for (int i = 0; i < tamanho; ++i)
    {
        cout << nomes[i] << " (Senha: " << senhas[i] << ")\n";
    }

    return 0; // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
