#include <iostream>
#include <chrono>

int main() {
    const long long int limit = 1000000000; // Limite de contagem: um bilhão
    long long int count = 0;

    // Marca o tempo de início
    auto start = std::chrono::high_resolution_clock::now();

    // Loop de contagem
    for (long long int i = 0; i < limit; ++i) {
        count++;
    }

    // Marca o tempo de término
    auto end = std::chrono::high_resolution_clock::now();

    // Calcula a duração
    std::chrono::duration<double> duration = end - start;
    std::cout << "Tempo de contagem em C++: " << duration.count() << " segundos" << std::endl;

    return 0;
}
