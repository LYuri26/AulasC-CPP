#include <iostream>
#include <string>

using namespace std;

// Função para converter um dígito para hexadecimal
char digitoParaHexadecimal(int digito) {
    if (digito < 10) {
        return digito + '0'; // Retorna o dígito como um caractere ASCII
    } else {
        return digito - 10 + 'A'; // Retorna o dígito (A-F) como um caractere ASCII
    }
}

// Função para converter um número decimal para hexadecimal
string decimalParaHexadecimal(int numero) {
    string hexadecimal = ""; // Inicializa uma string vazia para armazenar o número hexadecimal

    while (numero > 0) {
        int resto = numero % 16; // Calcula o resto da divisão por 16
        char digitoHex = digitoParaHexadecimal(resto); // Converte o resto para dígito hexadecimal
        hexadecimal = digitoHex + hexadecimal; // Adiciona o dígito hexadecimal à esquerda da string
        numero /= 16; // Atualiza o número dividindo por 16
    }

    return hexadecimal; // Retorna o número hexadecimal como uma string
}

// Função para converter um número decimal para binário
string decimalParaBinario(int numero) {
    string binario = ""; // Inicializa uma string vazia para armazenar o número binário

    while (numero > 0) {
        int resto = numero % 2; // Calcula o resto da divisão por 2
        char digitoBin = resto + '0'; // Converte o resto para dígito binário
        binario = digitoBin + binario; // Adiciona o dígito binário à esquerda da string
        numero /= 2; // Atualiza o número dividindo por 2
    }

    return binario; // Retorna o número binário como uma string
}

int main() {
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    cout << "Representação binária: " << decimalParaBinario(numero) << endl;
    cout << "Representação hexadecimal: " << decimalParaHexadecimal(numero) << endl;

    return 0;
}
