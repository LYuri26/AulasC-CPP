#include <iostream>

using namespace std;

// Função para receber uma matriz 3x3 como entrada
void receberMatriz(int matriz[3][3], string nomeMatriz) {
    cout << "Insira os elementos da matriz " << nomeMatriz << ":" << endl;
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
            cin >> matriz[i][j];
        }
    }
}

// Função para exibir uma matriz 3x3
void exibirMatriz(int matriz[3][3], string nomeMatriz) {
    cout << "Matriz " << nomeMatriz << ":" << endl;
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Função para exibir uma matriz 3x5
void exibirMatrizDeterminante(int matrizDeterminante[3][5], string nomeMatriz) {
    cout << "Matriz " << nomeMatriz << ":" << endl;
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 5; ++j) {
            cout << matrizDeterminante[i][j] << " ";
        }
        cout << endl;
    }
}

// Função para calcular o determinante da matriz 3x3 usando a Regra de Sarrus
int determinanteMatriz(int matrizDeterminante[3][5]) {
    int determinante = 0;

    // Calcula a parte positiva da fórmula
    for (int i = 0; i < 3; ++i) {
        int produto = 1; // Inicializa o produto como 1
        // Calcula o produto dos elementos na diagonal principal
        for (int j = 0; j < 3; ++j) {
            produto *= matrizDeterminante[j][i + j]; // Multiplica os elementos na diagonal principal
        }
        determinante += produto; // Adiciona o produto ao determinante
    }

    // Calcula a parte negativa da fórmula
    for (int i = 0; i < 3; ++i) {
        int produto = 1; // Inicializa o produto como 1
        // Calcula o produto dos elementos na diagonal secundária
        for (int j = 0; j < 3; ++j) {
            produto *= matrizDeterminante[j][4 - i - j]; // Multiplica os elementos na diagonal secundária
        }
        determinante -= produto; // Subtrai o produto do determinante
    }

    return determinante; // Retorna o determinante calculado
}

int main() {
    int matriz[3][3];

    // Recebe a matriz como entrada
    receberMatriz(matriz, "Principal");

    // Calcula a matriz determinante 3x5
    int matrizDeterminante[3][5];
    // Preenche a matriz determinante com as duas primeiras colunas da matriz 3x3
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            matrizDeterminante[i][j] = matriz[i][j]; // Copia os elementos da matriz original
            matrizDeterminante[i][j + 3] = matriz[i][j]; // Repete as duas primeiras colunas da matriz original
        }
    }

    // Exibe a matriz principal
    exibirMatriz(matriz, "Principal");

    // Exibe a matriz determinante
    exibirMatrizDeterminante(matrizDeterminante, "Determinante");

    // Calcula o determinante da matriz
    int determinante = determinanteMatriz(matrizDeterminante);

    // Exibe o determinante
    cout << "O determinante da matriz é: " << determinante << endl;

    return 0;
}
