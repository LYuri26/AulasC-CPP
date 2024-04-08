#include <iostream>

int main() {
    // Variáveis para armazenar a temperatura e a unidade de medida original
    double temperatura;
    char unidade;

    // Solicita ao usuário a temperatura e a unidade de medida original
    std::cout << "Digite a temperatura: ";
    std::cin >> temperatura;
    std::cout << "Digite a unidade de medida (C para Celsius, F para Fahrenheit): ";
    std::cin >> unidade;

    // Variável para armazenar a temperatura convertida
    double temperaturaConvertida;

    // Converte a temperatura conforme a unidade de medida original
    if (unidade == 'C' || unidade == 'c') {
        // Converte de Celsius para Fahrenheit
        temperaturaConvertida = (temperatura * 9 / 5) + 32;
        std::cout << "Temperatura convertida para Fahrenheit: " << temperaturaConvertida << " F" << std::endl;
    } else if (unidade == 'F' || unidade == 'f') {
        // Converte de Fahrenheit para Celsius
        temperaturaConvertida = (temperatura - 32) * 5 / 9;
        std::cout << "Temperatura convertida para Celsius: " << temperaturaConvertida << " C" << std::endl;
    } else {
        // Caso a unidade de medida não seja reconhecida
        std::cout << "Unidade de medida inválida. Por favor, insira 'C' para Celsius ou 'F' para Fahrenheit." << std::endl;
    }

    return 0;
}
