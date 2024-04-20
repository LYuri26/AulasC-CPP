#include <iostream>

int main() {
    // Variáveis para armazenar peso e altura
    double peso, altura;

    // Solicita ao usuário o peso e a altura
    std::cout << "Digite seu peso em quilogramas: ";
    std::cin >> peso;
    std::cout << "Digite sua altura em metros: ";
    std::cin >> altura;

    // Calcula o IMC
    double imc = peso / (altura * altura);

    // Exibe o resultado
    std::cout << "Seu IMC é: " << imc << std::endl;

    return 0;
}
