#include <iostream>

using namespace std;

// Função para multiplicar cada elemento da matriz pelo número fornecido
void multiplicarPorNumero(int matriz[3][3], int numero) {
    cout << "Matriz resultante:" << endl;
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            matriz[i][j] *= numero;
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz[3][3];

    // Solicita ao usuário inserir os elementos da matriz
    cout << "Digite os elementos da matriz 3x3:" << endl;
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    int numero;

    // Solicita ao usuário inserir o número pelo qual a matriz será multiplicada
    cout << "Digite o número pelo qual deseja multiplicar a matriz: ";
    cin >> numero;

    // Chama a função para multiplicar a matriz pelo número fornecido
    multiplicarPorNumero(matriz, numero);

    return 0;
}
