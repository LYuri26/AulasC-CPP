#include <iostream>

using namespace std;

// Função para receber uma matriz 3x3 como entrada
void receberMatriz(int matriz[3][3], string nomeMatriz) {
    cout << "Insira os elementos da matriz " << nomeMatriz << ":" << endl;
    // Loop para percorrer as linhas da matriz
    for(int i = 0; i < 3; ++i) {
        // Loop para percorrer as colunas da matriz
        for(int j = 0; j < 3; ++j) {
            // Solicita ao usuário que insira o valor de cada elemento da matriz
            cout << nomeMatriz << "[" << i+1 << "][" << j+1 << "]: ";
            // Lê o valor fornecido pelo usuário e armazena na posição correspondente da matriz
            cin >> matriz[i][j];
        }
    }
}

// Função para calcular a multiplicação de duas matrizes 3x3
void multiplicarMatrizes(int matriz1[3][3], int matriz2[3][3], int resultado[3][3]) {
    // Loop para percorrer as linhas da matriz resultante
    for(int i = 0; i < 3; ++i) {
        // Loop para percorrer as colunas da matriz resultante
        for(int j = 0; j < 3; ++j) {
            // Inicializa o elemento da matriz resultante como 0
            resultado[i][j] = 0;
            // Loop para calcular o valor do elemento da matriz resultante
            for(int k = 0; k < 3; ++k) {
                // Calcula o produto dos elementos correspondentes das matrizes e acumula o resultado
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

// Função para exibir uma matriz 3x3
void exibirMatriz(int matriz[3][3]) {
    // Loop para percorrer as linhas da matriz
    for(int i = 0; i < 3; ++i) {
        // Loop para percorrer as colunas da matriz
        for(int j = 0; j < 3; ++j) {
            // Exibe o valor do elemento na posição (i, j) da matriz
            cout << matriz[i][j] << " ";
        }
        // Pula para a próxima linha após exibir todos os elementos de uma linha
        cout << endl;
    }
}

int main() {
    int matriz1[3][3], matriz2[3][3], resultado[3][3];

    // Recebe as duas matrizes como entrada
    receberMatriz(matriz1, "Matriz1");
    receberMatriz(matriz2, "Matriz2");

    // Calcula a multiplicação das matrizes
    multiplicarMatrizes(matriz1, matriz2, resultado);

    // Exibe o resultado
    cout << "O produto das matrizes é:" << endl;
    exibirMatriz(resultado);

    return 0;
}
