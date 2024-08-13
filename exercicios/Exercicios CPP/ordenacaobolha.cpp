#include <iostream>

int main() {
    int n;

    // Solicitar número de elementos
    std::cout << "Digite o número de elementos: ";
    std::cin >> n;

    int* arr = new int[n];

    // Solicitar elementos do array
    std::cout << "Digite os elementos do array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Ordenação por bolha
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Trocar arr[j] e arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Exibir array ordenado
    std::cout << "Array ordenado:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;  // Liberar memória alocada
    return 0;
}
