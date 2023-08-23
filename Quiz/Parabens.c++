#include <iostream>
#include <string>
#include <thread> // Para pausas e simulação de digitação
#include <chrono> // Para controlar o tempo das pausas
using namespace std;

void typeEffect(const string &text, int delay = 50, bool newLine = true) {
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
    if (newLine) {
        cout << endl;
    }
}

void clearConsole() {
    cout << "\033[2J\033[1;1H";
}

int main() {
    string teams[4];
    int scores[4];
    int positions[4];

    clearConsole();

    typeEffect("╭─────────────────────────────────────────────────────────────╮", 10);
    typeEffect("│                       RESULTADOS:                           │", 10);
    typeEffect("╰─────────────────────────────────────────────────────────────╯", 10);

    typeEffect("\nInicializando...\n\n", 50);
    this_thread::sleep_for(chrono::milliseconds(1000));

    typeEffect("Carregando...\n\n", 50);
    this_thread::sleep_for(chrono::milliseconds(1000));

    typeEffect("Informe os nomes das equipes e suas respectivas pontuações:", 30);
    for (int i = 0; i < 4; ++i) {
        cout << "\n\nEquipe " << i + 1 << ": ";
        cin >> teams[i];
        cout << "Pontuação: ";
        cin >> scores[i];
        cout << "Posição no pódio (1 a 4): ";
        cin >> positions[i];
    }

    clearConsole();

    typeEffect("╭─────────────────────────────────────────────────────────────╮", 10);
    typeEffect("│                       PARABÉNS PARA TODOS(AS)               │", 10);
    typeEffect("╰─────────────────────────────────────────────────────────────╯", 10);

    typeEffect("\nProcessando resultados...\n\n", 50);
    this_thread::sleep_for(chrono::milliseconds(1500));

    // Ordena as equipes de acordo com as posições no pódio
    for (int i = 0; i < 4; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            if (positions[i] > positions[j]) {
                swap(teams[i], teams[j]);
                swap(scores[i], scores[j]);
                swap(positions[i], positions[j]);
            }
        }
    }

    clearConsole();

    typeEffect("╭─────────────────────────────────────────────────────────────╮", 10);
    typeEffect("│                       GANHADORES!                           │", 10);
    typeEffect("╰─────────────────────────────────────────────────────────────╯", 10);

    typeEffect("\nParabéns a todas as equipes!\n", 50);
    typeEffect("🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆", 100, false);

    for (int i = 0; i < 4; ++i) {
        typeEffect("\n\nPosição " + to_string(positions[i]) + ": ", 30, false);
        cout << teams[i] << " - Pontuação: " << scores[i];
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    typeEffect("\n\n🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆🌈🏆\n", 100);

    return 0;
}
