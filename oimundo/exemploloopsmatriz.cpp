#include <iostream>

using namespace std;

int main()
{
    int numeroMaximo = 100;
    int numeroLinhas = 0;
    int numeroColunas = 0;

    int matriznumeros[numeroMaximo][numeroMaximo];

    int contadorMatriz = 1;
    int numeroUsuario = 0;

    cout << "Digite o número de Linhas da Matriz:" << endl;
    cin >> numeroLinhas;

    cout << "Digite o número de Colunas da Matriz:" << endl;
    cin >> numeroColunas;

    cout << "Digite " << (numeroLinhas * numeroColunas) << " números:" << endl;

    for (int i = 0; i < numeroLinhas; i++)
    {
        for (int j = 0; j < numeroColunas; j++)
        {
            cout << "Digite o " << contadorMatriz << "º número: ";
            cin >> matriznumeros[i][j];
            contadorMatriz++;
        }
    }

    cout << "Agora leia a posição descrita abaixo e escreva o número que está na posição relacionada da matriz." << endl;
    for (int i = 0; i < numeroLinhas; i++)
    {
        for (int j = 0; j < numeroColunas; j++)
        {
            cout << "Digite o número na posição [" << i << "], [" << j << "]:" << endl;
            cin >> numeroUsuario;
            if (numeroUsuario == matriznumeros[i][j])
            {
                cout << "Parabéns, você acertou!" << endl;
            }
            else
            {
                cout << "Você errou, o número era: " << matriznumeros[i][j] << endl;
            }
        }
    }

    cout << "A matriz que você criou é:" << endl;

    for (int i = 0; i < numeroLinhas; i++)
    {
        for (int j = 0; j < numeroColunas; j++)
        {
            cout << "| " << matriznumeros[i][j] << " ";
        }
        cout << "|" << endl;
    }

    return 0;
}
