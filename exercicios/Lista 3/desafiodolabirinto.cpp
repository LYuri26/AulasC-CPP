#include <iostream>  // Inclui a biblioteca para entrada e saída padrão
using namespace std; // Utiliza o namespace std para evitar repetição de std::

int main()
{
    int nivel = 1; // Começa no nível 1

    // Simula o labirinto como uma sequência de escolhas entre direita (1) e esquerda (0)
    while (nivel <= 5)
    { // Continua até o nível final (5)
        int escolha;
        cout << "Nivel " << nivel << " - Escolha direita (1) ou esquerda (0): ";
        cin >> escolha;

        // Verifica se a escolha do usuário está correta para cada nível
        if (nivel == 1)
        {
            if (escolha == 1)
            {
                cout << "Escolha correta! Avancando para o proximo nivel...\n";
                nivel = 2; // Avança para o nível 2
            }
            else
            {
                cout << "Escolha incorreta! Tente novamente.\n";
            }
        }
        else if (nivel == 2)
        {
            if (escolha == 0)
            {
                cout << "Escolha correta! Avancando para o proximo nivel...\n";
                nivel = 3; // Avança para o nível 3
            }
            else
            {
                cout << "Escolha incorreta! Tente novamente.\n";
            }
        }
        else if (nivel == 3)
        {
            if (escolha == 1)
            {
                cout << "Escolha correta! Avancando para o proximo nivel...\n";
                nivel = 4; // Avança para o nível 4
            }
            else
            {
                cout << "Escolha incorreta! Tente novamente.\n";
            }
        }
        else if (nivel == 4)
        {
            if (escolha == 1)
            {
                cout << "Escolha correta! Avancando para o proximo nivel...\n";
                nivel = 5; // Avança para o nível 5
            }
            else
            {
                cout << "Escolha incorreta! Tente novamente.\n";
            }
        }
        else if (nivel == 5)
        {
            if (escolha == 0)
            {
                cout << "Escolha correta! Avancando para o proximo nivel...\n";
                nivel++; // Avança para o próximo nível (final)
            }
            else
            {
                cout << "Escolha incorreta! Tente novamente.\n";
            }
        }
    }

    // Parabéns ao aventureiro por encontrar a saída do labirinto
    cout << "Parabens! Voce encontrou a saida do labirinto!\n";

    return 0; // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
