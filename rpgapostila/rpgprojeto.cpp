#include <iostream>
#include <string>

using namespace std;

// Função para exibir o status do personagem
void exibirStatus(string pNomeJogador, string pClasseJogador, int pVidaJogador, int pAtaqueJogador, int pDefesaJogador, int pManaJogador)
{
    cout << pNomeJogador << " (" << pClasseJogador << ") - Vida: " << pVidaJogador
         << " | Ataque: " << pAtaqueJogador << " | Defesa: " << pDefesaJogador << " | Mana: " << pManaJogador << endl;
}

// Função para realizar o ataque
void atacar(string pNomeAtacante, int &pVidaAtacante, int pAtaqueAtacante, int &pVidaDefensor, int pDefesaDefensor)
{
    int dano = pAtaqueAtacante - pDefesaDefensor;
    if (dano > 0)
    {
        pVidaDefensor -= dano;
        cout << pNomeAtacante << " causou " << dano << " de dano!" << endl;
    }
    else
    {
        cout << pNomeAtacante << " não causou dano!" << endl;
    }
}

// Função para defender
void defender(int &pDefesaJogador)
{
    pDefesaJogador *= 2; // A defesa dobra por um turno
    cout << "Defesa aumentada temporariamente!" << endl;
}

// Função para usar magia
void usarMagia(string pNomeJogador, int &pManaJogador, int &pVidaDefensor, int pAtaqueJogador)
{
    if (pManaJogador >= 10)
    {
        pManaJogador -= 10;
        int danoMagico = pAtaqueJogador * 2;
        pVidaDefensor -= danoMagico;
        cout << pNomeJogador << " usou magia e causou " << danoMagico << " de dano!" << endl;
    }
    else
    {
        cout << pNomeJogador << " não tem mana suficiente para usar magia!" << endl;
    }
}

// Função para verificar fim de batalha
bool verificarFimBatalha(int pVidaJogador1, int pVidaJogador2)
{
    if (pVidaJogador1 <= 0)
    {
        cout << "Jogador 1 foi derrotado! Jogador 2 venceu!" << endl;
        return true;
    }
    if (pVidaJogador2 <= 0)
    {
        cout << "Jogador 2 foi derrotado! Jogador 1 venceu!" << endl;
        return true;
    }
    return false;
}

// Função para realizar o turno de cada jogador
void realizarTurno(string pNomeJogador, int &pVidaJogador, int &pAtaqueJogador, int &pDefesaJogador, int &pManaJogador, int &pVidaInimigo, int pAtaqueInimigo, int pDefesaInimigo)
{
    int escolha;
    cout << "\nTurno de " << pNomeJogador << ":\n";
    cout << "1. Atacar\n";
    cout << "2. Defender\n";
    cout << "3. Usar Magia\n";
    cout << "Escolha: ";
    cin >> escolha;

    switch (escolha)
    {
    case 1:
        atacar(pNomeJogador, pVidaJogador, pAtaqueJogador, pVidaInimigo, pDefesaInimigo);
        break;
    case 2:
        defender(pDefesaJogador);
        break;
    case 3:
        usarMagia(pNomeJogador, pManaJogador, pVidaInimigo, pAtaqueJogador);
        break;
    default:
        cout << "Escolha inválida! Tente novamente.\n";
        realizarTurno(pNomeJogador, pVidaJogador, pAtaqueJogador, pDefesaJogador, pManaJogador, pVidaInimigo, pAtaqueInimigo, pDefesaInimigo); // Repete o turno se a escolha for inválida
        break;
    }
}

// Função para escolher o nome e a classe do jogador
void escolherNomeClasse(string &pNomeJogador, string &pClasseJogador)
{
    cout << "Escolha o seu nome: ";
    cin >> pNomeJogador;

    cout << "Escolha sua classe (Guerreiro, Mago, Arqueiro): ";
    cin >> pClasseJogador;
}

int main()
{
    string pNomeJogador1, pClasseJogador1, pNomeJogador2, pClasseJogador2;

    // Escolha do nome e classe para os jogadores
    cout << "Jogador 1:\n";
    escolherNomeClasse(pNomeJogador1, pClasseJogador1);

    cout << "Jogador 2:\n";
    escolherNomeClasse(pNomeJogador2, pClasseJogador2);

    // Inicialização dos atributos dos jogadores
    int pVidaJogador1 = 100, pAtaqueJogador1 = 30, pDefesaJogador1 = 10, pManaJogador1 = 50;
    int pVidaJogador2 = 80, pAtaqueJogador2 = 20, pDefesaJogador2 = 5, pManaJogador2 = 100;

    // Exibição inicial dos status
    exibirStatus(pNomeJogador1, pClasseJogador1, pVidaJogador1, pAtaqueJogador1, pDefesaJogador1, pManaJogador1);
    exibirStatus(pNomeJogador2, pClasseJogador2, pVidaJogador2, pAtaqueJogador2, pDefesaJogador2, pManaJogador2);

    bool pFimDeBatalha = false;
    bool pTurnoJogador = true; // Inicia com o jogador 1

    // Loop principal do jogo
    while (!pFimDeBatalha)
    {
        if (pTurnoJogador)
        {
            realizarTurno(pNomeJogador1, pVidaJogador1, pAtaqueJogador1, pDefesaJogador1, pManaJogador1, pVidaJogador2, pAtaqueJogador2, pDefesaJogador2);
        }
        else
        {
            realizarTurno(pNomeJogador2, pVidaJogador2, pAtaqueJogador2, pDefesaJogador2, pManaJogador2, pVidaJogador1, pAtaqueJogador1, pDefesaJogador1);
        }

        // Verifica se algum personagem perdeu
        pFimDeBatalha = verificarFimBatalha(pVidaJogador1, pVidaJogador2);

        // Alterna o turno
        pTurnoJogador = !pTurnoJogador;
    }

    return 0;
}
