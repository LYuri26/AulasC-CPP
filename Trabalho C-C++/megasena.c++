#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main() {
    // Inicialização do gerador de números aleatórios
    srand(time(0));

    // Definição das probabilidades de cada número (exemplo simplificado)
    vector<double> probabilities = {
        0.02, 0.03, 0.05, 0.08, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 
        0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85,
        0.9, 0.95, 1.0
    };

    // Números da Mega-Sena (de 1 a 60)
    vector<int> numbers(60);
    for (int i = 0; i < 60; ++i) {
        numbers[i] = i + 1;
    }

    // Sorteio de 6 números
    cout << "Números sorteados da Mega-Sena:" << endl;
    for (int i = 0; i < 6; ++i) {
        double randomValue = static_cast<double>(rand()) / RAND_MAX;  // Gera um número entre 0 e 1

        // Encontra o número correspondente à probabilidade gerada
        int selectedNumber = -1;
        for (size_t j = 0; j < probabilities.size(); ++j) {
            if (randomValue <= probabilities[j]) {
                selectedNumber = numbers[j];
                break;
            }
        }

        // Remove o número sorteado da lista para evitar repetições
        if (selectedNumber != -1) {
            probabilities[selectedNumber - 1] = 0;  // Zera a probabilidade para o número sorteado
            cout << selectedNumber << " ";
        } else {
            cout << "Erro ao sortear número." << endl;
            break;
        }
    }
    
    cout << endl;

    return 0;
}
