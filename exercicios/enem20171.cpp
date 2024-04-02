#include <iostream>
#include <cmath>

int main() {
    // Dado o preço do pacote de viagem
    double limite_preco = 10.0; 

    // Calcula o discriminante
    double delta = 4 * 4 - 4 * 1 * (3 - limite_preco);

    // Calcula as raízes da equação quadrática
    double x1 = (-4 + std::sqrt(delta)) / (2 * 1);
    double x2 = (-4 - std::sqrt(delta)) / (2 * 1);

    // Verifica qual raiz é válida (positiva)
    double max_pessoas = (x1 > 0) ? x1 : x2;

    // Imprime o número máximo de pessoas que podem viajar juntas
    std::cout << "Quantidade máxima de pessoas que podem viajar juntas: " << max_pessoas << std::endl;

    return 0;
}
