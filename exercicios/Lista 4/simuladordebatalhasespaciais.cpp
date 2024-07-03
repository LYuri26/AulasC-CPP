#include <iostream>  // Incluindo a biblioteca para entrada e saída padrão
using namespace std; // Utilizando o namespace std para evitar repetição de std::

int main()
{
    const int numNaves = 3;  // Número de naves disponíveis
    const int numInimigos = 3; // Número de inimigos

    string naves[numNaves] = {"Nave1", "Nave2", "Nave3"}; // Array de strings contendo as naves disponíveis
    string inimigos[numInimigos] = {"Inimigo1", "Inimigo2", "Inimigo3"}; // Array de strings contendo os inimigos

    string naveEscolhida; // String para armazenar a nave escolhida
    int opcao;            // Variável para armazenar a opção escolhida pelo jogador

    cout << "Escolha sua nave:\n";         // Mensagem solicitando a escolha da nave
    for (int i = 0; i < numNaves; ++i) // Loop para imprimir as opções de nave
    {
        cout << i + 1 << ". " << naves[i] << endl; // Imprime a opção de nave
    }
    cout << "Opcao: "; // Solicitação para o jogador digitar a opção
    cin >> opcao;      // Lê a opção escolhida pelo jogador

    if (opcao >= 1 && opcao <= numNaves) // Verifica se a opção é válida
    {
        naveEscolhida = naves[opcao - 1];    // Atribui a nave escolhida à variável naveEscolhida
        cout << "Voce escolheu a nave " << naveEscolhida << "!\n"; // Mensagem indicando a nave escolhida

        // Início da simulação da batalha
        cout << "Batalha espacial iniciada!\n";                // Mensagem indicando o início da batalha
        cout << "Naves inimigas: " << numInimigos << endl; // Mostra o número de naves inimigas
        cout << "Naves aliadas: " << numNaves << endl;     // Mostra o número de naves aliadas
        cout << "Combatendo...\n";                             // Mensagem indicando o início do combate

        for (int i = 0; i < numInimigos; ++i) // Loop para simular a destruição dos inimigos
        {
            cout << "Destruindo " << inimigos[i] << "!\n"; // Mensagem indicando a destruição do inimigo
        }
        cout << "Batalha concluida!\n"; // Mensagem indicando o fim da batalha
    }
    else
    {
        cout << "Opcao invalida!\n"; // Mensagem indicando que a opção é inválida
    }

    return 0; // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
