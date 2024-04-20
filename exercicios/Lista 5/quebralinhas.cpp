#include <iostream>

int main() {
    // Definindo as medidas do cilindro em metros
    double raioBase = 7.0;
    double alturaCilindro = 12.0;

    // Calculando a área da superfície lateral do cilindro
    double areaLateral = 2.0 * 3.14159 * raioBase * alturaCilindro;

    // Calculando a área das bases do cilindro
    double areaBase = 2.0 * 3.14159 * raioBase * raioBase;

    // Calculando a área total da superfície do cilindro
    double areaTotal = areaLateral + areaBase;

    // Imprimindo o resultado
    std::cout << "A area da superficie do cilindro em metros quadrados: " << areaTotal << std::endl;

    return 0;
}
