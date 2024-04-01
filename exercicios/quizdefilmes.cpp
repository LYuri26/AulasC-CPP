#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Arrays de perguntas e respostas
    string perguntas[3] = {
        "Qual filme ganhou o Oscar de Melhor Filme em 1994?",
        "Quem interpretou o personagem Jack Dawson em Titanic?",
        "Qual destes filmes foi dirigido por Quentin Tarantino?"};

    string opcoes_respostas[3][4] = {
        {"1. Forrest Gump", "2. Pulp Fiction", "3. O Rei Leao", "4. Os Imperdoaveis"},
        {"1. Tom Cruise", "2. Leonardo DiCaprio", "3. Brad Pitt", "4. Johnny Depp"},
        {"1. Django Livre", "2. Gravidade", "3. A Origem", "4. Clube da Luta"}};

    int respostas_corretas[3] = {1, 2, 1}; // Índices das respostas corretas (base 1)

    int resposta;
    int pontos = 0;

    // Loop para exibir as perguntas e receber as respostas
    for (int i = 0; i < 3; ++i)
    {
        cout << perguntas[i] << endl; // Exibe a pergunta

        // Exibe as opções de resposta
        for (int j = 0; j < 4; ++j)
        {
            cout << opcoes_respostas[i][j] << endl;
        }

        cout << "Digite sua resposta (1 a 4): ";
        cin >> resposta;

        if (resposta == respostas_corretas[i])
        {
            cout << "Resposta correta!\n"; // Exibe se a resposta do usuário está correta
            ++pontos;                      // Incrementa os pontos
        }
        else
        {
            cout << "Resposta incorreta!\n"; // Exibe se a resposta do usuário está incorreta
        }
    }

    cout << "Pontuação final: " << pontos << "/3\n"; // Exibe a pontuação final

    return 0;
}
