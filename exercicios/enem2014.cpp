#include <iostream>

int main() {
    int area_total = 120; // Total de hectares de terra
    double proporcao_soja = 2.0 / 3.0; // Proporção da área para soja

    double area_soja = area_total * proporcao_soja;
    double area_milho = area_total - area_soja;

    std::cout << "Hectares destinados ao plantio de milho: " << area_milho << std::endl;

    return 0;
}
