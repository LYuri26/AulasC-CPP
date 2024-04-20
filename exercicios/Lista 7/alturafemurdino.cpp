#include <iostream> // Biblioteca para entrada e saída padrão
#include <string>   // Biblioteca para manipulação de strings

using namespace std; // Permite o uso dos identificadores da biblioteca padrão diretamente, sem a necessidade de prefixos como "std::"

int main() {     

    // Variáveis para armazenar o nome do dinossauro e o tamanho do fêmur
    string nomeDinossauro;
    int tamanhoFemur_cm;

    // Solicita ao usuário que insira o nome do dinossauro
    cout << "Entre com o nome do dinossauro: ";
    cin >> nomeDinossauro;

    // Solicita ao usuário que insira o tamanho do fêmur em centímetros
    cout << "Digite o tamanho do fêmur em centímetros: ";
    cin >> tamanhoFemur_cm;

    // Converte o tamanho do fêmur para metros
    double tamanhoFemur_m = tamanhoFemur_cm / 100.0;

    // Calcula a altura aproximada do dinossauro
    double altura_m = tamanhoFemur_m * 10;

    // Exibe o resultado
    cout << "A altura aproximada do dinossauro " << nomeDinossauro << " é: " << altura_m << " metros" << endl;

    return 0;
}
