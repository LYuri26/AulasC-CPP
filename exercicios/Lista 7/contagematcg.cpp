#include <iostream> // Inclui a biblioteca para entrada e saída padrão
#include <string>   // Inclui a biblioteca para manipulação de strings

using namespace std; // Permite o uso dos identificadores da biblioteca padrão diretamente, sem a necessidade de prefixos como "std::"

int main() {
    string sequenciaAminoacidos; // Variável para armazenar a sequência de aminoácidos fornecida pelo usuário

    // Solicita ao usuário que insira a sequência de aminoácidos
    cout << "Digite a sequência de aminoácidos: ";
    getline(cin, sequenciaAminoacidos);

    // Variáveis para armazenar as contagens de cada aminoácido
    int contagemA = 0, contagemC = 0, contagemG = 0, contagemT = 0;

    // Conta o número de ocorrências de cada aminoácido na sequência
    for (char aminoacido : sequenciaAminoacidos) {
        if (aminoacido == 'A') // Se o aminoácido atual for 'A'
            contagemA++;       // Incrementa a contagem de 'A'
        else if (aminoacido == 'C') // Se o aminoácido atual for 'C'
            contagemC++;             // Incrementa a contagem de 'C'
        else if (aminoacido == 'G') // Se o aminoácido atual for 'G'
            contagemG++;             // Incrementa a contagem de 'G'
        else if (aminoacido == 'T') // Se o aminoácido atual for 'T'
            contagemT++;             // Incrementa a contagem de 'T'
    }

    // Exibe o resultado das contagens de cada aminoácido
    cout << "A: " << contagemA << endl;
    cout << "C: " << contagemC << endl;
    cout << "G: " << contagemG << endl;
    cout << "T: " << contagemT << endl;

    return 0;
}
