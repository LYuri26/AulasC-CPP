#include <iostream>

int main() {
    // Definindo as medidas do paralelepípedo em metros
    double comprimento = 4.0; // Comprimento do paralelepípedo
    double largura = 3.0;     // Largura do paralelepípedo
    double altura = 5.0;      // Altura do paralelepípedo

    // Calculando o volume do paralelepípedo
    double volume = comprimento * largura * altura; // Fórmula do volume do paralelepípedo

    // Imprimindo o resultado
    std::cout << "O volume do paralelepipedo em metros cubicos: " << volume << std::endl;

    return 0;
}
