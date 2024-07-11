#include <iostream>

int main() {
    int identidade[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (i == j) {
                identidade[i][j] = 1;
            } else {
                identidade[i][j] = 0;
            }
        }
    }

    std::cout << "Matriz identidade 2x2:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << identidade[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
