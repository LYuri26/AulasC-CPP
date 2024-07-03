#include <iostream>

using namespace std;

const int MAX_JOGADORES = 10;  // Definindo o número máximo de jogadores
int pontosVida[MAX_JOGADORES]; // Array para armazenar os pontos de vida dos jogadores

// Função para inicializar os personagens com pontos de vida
void inicializar_personagens(int quantidade_jogadores)
{
    // Inicializa os pontos de vida de todos os jogadores com 100
    for (int i = 0; i < quantidade_jogadores; ++i)
    {
        pontosVida[i] = 100;
    }
}

int main()
{
    int quantidadeJogadores; // Variável para armazenar a quantidade de jogadores
    char opcao;              // Variável para armazenar a opção do usuário

    // Solicita ao usuário a quantidade de jogadores
    cout << "Quantidade de jogadores: ";
    cin >> quantidadeJogadores;

    // Informa ao usuário a quantidade de jogadores escolhida
    cout << "Você escolheu " << quantidadeJogadores << " jogadores.\n";

    // Chama a função para inicializar os personagens com os pontos de vida iniciais
    inicializar_personagens(quantidadeJogadores);

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

            // Verifica se o jogador é válido
            if (jogador >= 0 && jogador < quantidadeJogadores)
            {
                if (opcao == '1') // Ataque
                {
                    // Verifica se o jogador ainda tem pontos de vida para atacar
                    if (pontosVida[jogador] > 0)
                    {
                        // Reduz 20 pontos de vida do jogador atacado
                        pontosVida[jogador] -= 20;
                        // Verifica se o jogador foi derrotado após o ataque
                        if (pontosVida[jogador] <= 0)
                        {
                            // Define os pontos de vida como zero se o jogador for derrotado
                            pontosVida[jogador] = 0;
                            // Informa que o jogador foi derrotado
                            cout << "O jogador " << jogador << " foi derrotado!\n";
                            // Define o jogo como encerrado
                            jogoEncerrado = true;
                        }
                        else
                        {
                            // Informa que o ataque foi realizado e exibe os pontos de vida atualizados
                            cout << "Ataque realizado! Pontos de vida do jogador " << jogador << " agora: " << pontosVida[jogador] << endl;
                        }
                    }
                    else
                    {
                        // Informa que o jogador já foi derrotado e não pode atacar novamente
                        cout << "O jogador " << jogador << " já foi derrotado e não pode atacar!\n";
                    }
                }
                else if (opcao == '2') // Cura
                {
                    // Incrementa 10 pontos de vida ao jogador
                    pontosVida[jogador] += 10;
                    // Informa que a cura foi realizada e exibe os pontos de vida atualizados
                    cout << "Cura realizada! Pontos de vida do jogador " << jogador << " agora: " << pontosVida[jogador] << endl;
                }
            }
            else
            {
                // Informa que o jogador é inválido
                cout << "Jogador inválido!\n";
            }
            break;
        }
        case '3': // Opção para sair
            // Informa que o programa está sendo encerrado
            cout << "Encerrando o programa...\n";
            // Define o jogo como encerrado
            jogoEncerrado = true;
            break;
        default:
            // Informa que a opção é inválida
            cout << "Opção inválida!\n";
        }

    } while (!jogoEncerrado); // Loop continua até o jogo ser encerrado

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
