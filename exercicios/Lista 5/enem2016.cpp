#include <iostream>

int main() {
    // Massa da caixa em kg
    double massa = 20.0;

    // Força horizontal aplicada em N
    double forca = 100.0;

    // Calcula a aceleração usando a fórmula Aceleração = Força / Massa
    double aceleracao = forca / massa;

    // Exibe a aceleração da caixa
    std::cout << "A aceleracao da caixa e: " << aceleracao << " m/s^2" << std::endl;

    return 0;
}
