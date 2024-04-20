#include <iostream>

int main() {
    // Força aplicada em Newtons
    double forca = 200.0;

    // Massa do objeto em kg
    double massa = 50.0;

    // Calcula a aceleração usando a fórmula Aceleração = Força / Massa
    double aceleracao = forca / massa;

    // Exibe a aceleração do objeto
    std::cout << "A aceleracao do objeto e: " << aceleracao << " m/s^2" << std::endl;

    return 0;
}
