#include <iostream>      // Inclui a biblioteca para entrada e saída padrão
#include <algorithm>     // Para a função transform
#include <cctype>        // Para a função tolower

using namespace std;   // Utilizando o namespace std para evitar repetição de std::

int main()
{
    string escolha;     // Declaração da variável para armazenar a escolha do usuário

    // Solicita ao usuário para escolher entre abrir uma porta misteriosa ou seguir por um túnel escuro
    cout << "Escolha: abrir uma porta misteriosa ou seguir por um túnel escuro: ";
    getline(cin, escolha); // Usando getline para permitir espaços na entrada

    // Converte a escolha do usuário para letras minúsculas
    transform(escolha.begin(), escolha.end(), escolha.begin(), ::tolower);

    // Verifica a escolha do usuário e exibe o resultado e as consequências
    if (escolha == "porta misteriosa")
    {
        cout << "Voce escolheu abrir uma porta misteriosa! Resultado: encontrou suprimentos preciosos.\n";
    }
    else if (escolha == "túnel escuro")
    {
        cout << "Voce escolheu seguir por um túnel escuro! Resultado: enfrentou armadilhas perigosas.\n";
    }
    else
    {
        cout << "Opcao invalida! Escolha entre abrir uma porta misteriosa ou seguir por um túnel escuro.\n";
    }

    return 0;   // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
