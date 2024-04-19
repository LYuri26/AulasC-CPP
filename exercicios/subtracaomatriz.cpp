#include <iostream>

using namespace std;

// Função para receber uma matriz 3x3 como entrada
void receberMatriz(int matriz[3][3], string nomeMatriz) {
    cout << "Insira os elementos da matriz " << nomeMatriz << ":" << endl;
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << nomeMatriz << "[" << i+1 << "][" << j+1 << "]: ";
            cin >> matriz[i][j];
        }
    }
}

// Função para calcular a subtração de duas matrizes 3x3
void subtrairMatrizes(int matriz1[3][3], int matriz2[3][3], int resultado[3][3]) {
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

// Função para exibir uma matriz 3x3
void exibirMatriz(int matriz[3][3]) {
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz1[3][3], matriz2[3][3], resultado[3][3];

    // Recebe as duas matrizes como entrada
    receberMatriz(matriz1, "Matriz1");
    receberMatriz(matriz2, "Matriz2");

    // Calcula a subtração das matrizes
    subtrairMatrizes(matriz1, matriz2, resultado);

    // Exibe o resultado
    cout << "A subtração das matrizes é:" << endl;
    exibirMatriz(resultado);

    return 0;
}
