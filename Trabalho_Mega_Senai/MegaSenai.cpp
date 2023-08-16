#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

// Função para verificar se a entrada é um número válido
bool numeroValido(string entrada)
{
    for (char c : entrada)
    {
        if (!isdigit(c))
        {
            return false;
        }
    }
    int numero = stoi(entrada);
    return numero >= 1 && numero <= 60;
}

int main()
{
    srand(time(nullptr)); // Inicializa a semente do gerador de números aleatórios

    vector<int> numerosSorteados;
    vector<int> numerosEscolhidos;

    cout << "Bem-vindo(a) à Loteria!" << endl;

    int numeroJogadores;
    cout << "Quantos jogadores vão participar? ";
    cin >> numeroJogadores;

    vector<string> nomesJogadores;
    for (int i = 0; i < numeroJogadores; i++)
    {
        string nome;
        cout << "Digite o nome do jogador " << i + 1 << ": ";
        cin >> nome;
        nomesJogadores.push_back(nome);
    }

    int quantidadeNumeros;
    cout << "Escolha a quantidade de números para tentar (de 6 a 15): ";
    cin >> quantidadeNumeros;

    if (quantidadeNumeros < 6 || quantidadeNumeros > 15)
    {
        cout << "Quantidade de números inválida. Escolha entre 6 e 15 números." << endl;
        return 1; // Encerra o programa com erro
    }

    int totalJogadas = 0; // Inicializa o contador de jogadas

    while (true)
    {
        totalJogadas++; // Incrementa o contador a cada jogada

        cout << "Jogada #" << totalJogadas << endl;

        for (int j = 0; j < numeroJogadores; j++)
        {
            cout << nomesJogadores[j] << ", insira seus números:" << endl;
            numerosEscolhidos.clear();

            while (numerosEscolhidos.size() < quantidadeNumeros)
            {
                string entrada;
                cin >> entrada;

                if (numeroValido(entrada))
                {
                    int numero = stoi(entrada);

                    if (find(numerosEscolhidos.begin(), numerosEscolhidos.end(), numero) == numerosEscolhidos.end())
                    {
                        numerosEscolhidos.push_back(numero);
                    }
                    else
                    {
                        cout << "Número repetido. Escolha outro número." << endl;
                    }
                }
                else
                {
                    cout << "Número inválido. Escolha um número entre 1 e 60." << endl;
                }
            }

            cout << nomesJogadores[j] << ", seus números escolhidos são: ";
            for (int numero : numerosEscolhidos)
            {
                cout << numero << " ";
            }
            cout << endl;
        }

        for (int i = 0; i < 6; i++)
        {
            int numero = rand() % 60 + 1; // Gera um número aleatório entre 1 e 60
            numerosSorteados.push_back(numero);
        }

        for (int j = 0; j < numeroJogadores; j++)
        {
            int acertos = 0;
            for (int i = 0; i < quantidadeNumeros; i++)
            {
                if (find(numerosEscolhidos.begin(), numerosEscolhidos.end(), numerosSorteados[i]) != numerosEscolhidos.end())
                {
                    acertos++;
                }
            }

            cout << "Resultados para " << nomesJogadores[j] << ":" << endl;
            cout << "Números escolhidos: ";
            for (int numero : numerosEscolhidos)
            {
                cout << numero << " ";
            }
            cout << endl;
            cout << "Números sorteados: ";
            for (int numero : numerosSorteados)
            {
                cout << numero << " ";
            }
            cout << endl;
            cout << nomesJogadores[j] << ", você acertou " << acertos << " número(s)." << endl;
            if (acertos == quantidadeNumeros)
            {
                cout << "Parabéns! Você acertou todos os números!" << endl;
            }
        }

        char continuar;
        cout << "Deseja jogar novamente? (S/N): ";
        cin >> continuar;
        if (continuar != 'S' && continuar != 's')
        {
            cout << "Obrigado por jogar!" << endl;
            break; // Encerra o loop infinito e o programa
        }
    }

    return 0; // Encerra o programa com sucesso
}
