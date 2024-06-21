#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "int numeroSecreto = rand() % 100 + 1;" << endl;
    int numeroSecreto = rand() % 100 + 1; // Gera um número secreto aleatório entre 1 e 100.
    cout << "// Gera um número secreto aleatório entre 1 e 100." << endl;
    cout << "numeroSecreto = " << numeroSecreto << ";" << endl;

    cout << "int tentativas = 8;" << endl;
    int tentativas = 8; // Define o número máximo de tentativas.
    cout << "// Define o número máximo de tentativas." << endl;

    cout << "int palpite;" << endl;
    int palpite; // Declara a variável para armazenar o palpite do usuário.
    cout << "// Declara a variável para armazenar o palpite do usuário." << endl;

    do
    {
        cout << "cout << \"Tentativa \" << tentativas << \", digite um número:\";" << endl;
        cout << "// Exibe o número da tentativa atual e solicita ao usuário que insira um número." << endl;
        cout << "Tentativa " << tentativas << ", digite um número:";

        cout << "cin >> palpite;" << endl;
        cin >> palpite; // Lê o palpite do usuário.
        cout << "// Lê o palpite do usuário e armazena na variável palpite." << endl;

        cout << "if (palpite < numeroSecreto) {" << endl;
        if (palpite < numeroSecreto)
        {
            cout << "    cout << \"Muito Baixo!\" << endl;" << endl;
            cout << "    // O palpite é menor que o número secreto." << endl;
            cout << "    Muito Baixo!" << endl;
        }
        else if (palpite > numeroSecreto)
        {
            cout << "} else if (palpite > numeroSecreto) {" << endl;
            cout << "    cout << \"Muito alto!\" << endl;" << endl;
            cout << "    // O palpite é maior que o número secreto." << endl;
            cout << "    Muito alto!" << endl;
        }
        cout << "}" << endl;

        cout << "tentativas--;" << endl;
        tentativas--; // Decrementa o número de tentativas restantes.
        cout << "// Decrementa o número de tentativas restantes." << endl;
    } while (palpite != numeroSecreto && tentativas > 0); // Continua até acertar ou acabar as tentativas.

    cout << "} while (palpite != numeroSecreto && tentativas > 0);" << endl;
    cout << "// Continua o loop enquanto o palpite não for o número secreto e houver tentativas restantes." << endl;

    if (palpite == numeroSecreto)
    {
        cout << "if (palpite == numeroSecreto) {" << endl;
        cout << "    cout << \"Parabéns! Você acertou o número com \" << 8 - tentativas << \" tentativa(s)!\" << endl;" << endl;
        cout << "    // Informa ao usuário que ele acertou o número secreto." << endl;
        cout << "    Parabéns! Você acertou o número com " << 8 - tentativas << " tentativa(s)!" << endl;
    }
    else
    {
        cout << "} else {" << endl;
        cout << "    cout << \"Você não conseguiu adivinhar o número. O número secreto era: \" << numeroSecreto << \"!\" << endl;" << endl;
        cout << "    // Informa ao usuário que ele não conseguiu adivinhar o número e revela qual era o número secreto." << endl;
        cout << "    Você não conseguiu adivinhar o número. O número secreto era: " << numeroSecreto << "!" << endl;
    }
    cout << "}" << endl;

    cout << "return 0;" << endl;
    cout << "// Retorna 0 indicando que o programa terminou com sucesso." << endl;
    return 0;
}
