#include <iostream>
#include <vector>
using namespace std;

// Função para criar personagens e inicializar os pontos de vida
vector<int> criar_personagem(int quantidade_jogadores)
{
    // Inicializa um vetor com a quantidade de jogadores especificada, cada um com 100 pontos de vida
    vector<int> pontos_de_vida(quantidade_jogadores, 100);
    // Retorna o vetor de pontos de vida inicializado
    return pontos_de_vida;
}

// Função para realizar uma ação (atacar ou curar) para um determinado jogador
bool realizar_acao(vector<int> &pontos_de_vida, int jogador, char acao)
{
    // Verifica qual ação o jogador deseja realizar
    switch (acao)
    {
    case '1': // Se a ação for atacar
    {
        // Verifica se o jogador ainda tem pontos de vida para atacar
        if (jogador < pontos_de_vida.size())
        {
            // Verifica se o jogador ainda está vivo
            if (pontos_de_vida[jogador] > 0)
            {
                // Reduz 20 pontos de vida do jogador atacado
                pontos_de_vida[jogador] -= 20;
                // Verifica se o jogador foi derrotado após o ataque
                if (pontos_de_vida[jogador] <= 0)
                {
                    // Define os pontos de vida como zero se o jogador for derrotado
                    pontos_de_vida[jogador] = 0;
                    // Informa que o jogador foi derrotado
                    cout << "O jogador " << jogador << " foi derrotado!\n";
                    // Retorna true para indicar que o jogo deve ser encerrado
                    return true;
                }
                else
                {
                    // Informa que o ataque foi realizado e exibe os pontos de vida atualizados
                    cout << "Ataque realizado! Pontos de vida do jogador " << jogador << " agora: " << pontos_de_vida[jogador] << endl;
                }
            }
            else
            {
                // Informa que o jogador já foi derrotado e não pode atacar novamente
                cout << "O jogador " << jogador << " já foi derrotado e não pode atacar!\n";
            }
        }
        else
        {
            // Informa que o jogador é inválido
            cout << "Jogador inválido!\n";
        }
        break;
    }
    case '2': // Se a ação for curar
    {
        // Verifica se o jogador é válido
        if (jogador < pontos_de_vida.size())
        {
            // Incrementa 10 pontos de vida ao jogador
            pontos_de_vida[jogador] += 10;
            // Informa que a cura foi realizada e exibe os pontos de vida atualizados
            cout << "Cura realizada! Pontos de vida do jogador " << jogador << " agora: " << pontos_de_vida[jogador] << endl;
        }
        else
        {
            // Informa que o jogador é inválido
            cout << "Jogador inválido!\n";
        }
        break;
    }
    case '3': // Se a ação for sair
    {
        // Informa que o programa está sendo encerrado
        cout << "Encerrando o programa...\n";
        // Retorna true para indicar que o jogo deve ser encerrado
        return true;
    }
    default:
        // Informa que a opção é inválida
        cout << "Opção inválida!\n";
    }
    // Retorna false para indicar que o jogo não deve ser encerrado
    return false;
}

int main()
{
    int quantidadeJogadores; // Variável para armazenar a quantidade de jogadores
    char opcao;              // Variável para armazenar a opção do usuário
    vector<int> pontosVida;  // Vetor para armazenar os pontos de vida dos jogadores

    // Solicita ao usuário a quantidade de jogadores
    cout << "Quantidade de jogadores: ";
    cin >> quantidadeJogadores;
    // Informa ao usuário a quantidade de jogadores escolhida
    cout << "Você escolheu " << quantidadeJogadores << " jogadores.\n";

    // Chama a função para criar os personagens com os pontos de vida iniciais
    pontosVida = criar_personagem(quantidadeJogadores);

    bool jogoEncerrado = false; // Variável para controlar se o jogo foi encerrado

    do
    {
        // Menu de opções
        cout << "\nMenu:\n";
        cout << "1. Atacar\n";
        cout << "2. Curar\n";
        cout << "3. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao)
        {
        case '1': // Opção para atacar
        case '2': // Opção para curar
        {
            int jogador; // Variável para armazenar o jogador escolhido
            // Solicita ao usuário o número do jogador
            cout << "Digite o número do jogador (0-" << quantidadeJogadores - 1 << "): ";
            cin >> jogador;
            // Realiza a ação escolhida para o jogador especificado e verifica se o jogo deve ser encerrado
            jogoEncerrado = realizar_acao(pontosVida, jogador, opcao);
            break;
        }
        case '3': // Opção para sair
            // Encerra o programa e verifica se o jogo deve ser encerrado
            jogoEncerrado = realizar_acao(pontosVida, 0, opcao);
            break;
        default:
            // Informa que a opção é inválida
            cout << "Opção inválida!\n";
        }

        // Verifica se o jogo deve ser encerrado devido à derrota de algum jogador
        for (int i = 0; i < pontosVida.size(); ++i)
        {
            if (pontosVida[i] == 0)
            {
                // Informa que o jogo foi encerrado devido à derrota de um jogador
                cout << "Jogo encerrado! O jogador " << i << " foi derrotado.\n";
                // Define o jogo como encerrado
                jogoEncerrado = true;
                // Sai do loop assim que um jogador for derrotado
                break;
            }
        }

    } while (!jogoEncerrado); // Loop continua até o jogo ser encerrado

    return 0;
}
