#include <iostream>  // Incluindo a biblioteca para entrada e saída padrão
#include <vector>    // Incluindo a biblioteca para usar vetores
using namespace std; // Utilizando o namespace std para evitar repetição de std::

// Função para escolher a nave que o jogador irá controlar
void escolher_nave(vector<string> &naves, const string &nave_escolhida)
{
    cout << "Voce escolheu a nave " << nave_escolhida << "!\n"; // Mensagem indicando a nave escolhida
}

// Função para simular a batalha entre as naves e os inimigos
void simular_batalha(const vector<string> &naves, const vector<string> &inimigos)
{
    cout << "Batalha espacial iniciada!\n";                // Mensagem indicando o início da batalha
    cout << "Naves inimigas: " << inimigos.size() << endl; // Mostra o número de naves inimigas
    cout << "Naves aliadas: " << naves.size() << endl;     // Mostra o número de naves aliadas
    cout << "Combatendo...\n";                             // Mensagem indicando o início do combate
    for (int i = 0; i < inimigos.size(); ++i)              // Loop para simular a destruição dos inimigos
    {
        cout << "Destruindo " << inimigos[i] << "!\n"; // Mensagem indicando a destruição do inimigo
    }
    cout << "Batalha concluida!\n"; // Mensagem indicando o fim da batalha
}

int main()
{
    vector<string> naves = {"Nave1", "Nave2", "Nave3"};             // Vetor de strings contendo as naves disponíveis
    vector<string> inimigos = {"Inimigo1", "Inimigo2", "Inimigo3"}; // Vetor de strings contendo os inimigos

    string naveEscolhida; // String para armazenar a nave escolhida
    int opcao;            // Variável para armazenar a opção escolhida pelo jogador

    cout << "Escolha sua nave:\n";         // Mensagem solicitando a escolha da nave
    for (int i = 0; i < naves.size(); ++i) // Loop para imprimir as opções de nave
    {
        cout << i + 1 << ". " << naves[i] << endl; // Imprime a opção de nave
    }
    cout << "Opcao: "; // Solicitação para o jogador digitar a opção
    cin >> opcao;      // Lê a opção escolhida pelo jogador

    if (opcao >= 1 && opcao <= naves.size()) // Verifica se a opção é válida
    {
        naveEscolhida = naves[opcao - 1];    // Atribui a nave escolhida à variável naveEscolhida
        escolher_nave(naves, naveEscolhida); // Chama a função para escolher a nave
        simular_batalha(naves, inimigos);    // Chama a função para simular a batalha
    }
    else
    {
        cout << "Opcao invalida!\n"; // Mensagem indicando que a opção é inválida
    }

    return 0; // Retorna 0 para indicar que o programa foi encerrado com sucesso
}
