#include <iostream>
#include <cstdlib> // Para std::rand() e std::srand()
#include <ctime>   // Para std::time()
using namespace std;

int main() {
    int forca, destreza, sorte;
    
    // Inicializar o gerador de números aleatórios
    srand(time(0));
    
    cout << "Digite o valor de Força do personagem: ";
    cin >> forca;
    
    cout << "Digite o valor de Destreza do personagem: ";
    cin >> destreza;
    
    cout << "Digite o valor de Sorte do personagem: ";
    cin >> sorte;
    
    int numeroAleatorio = rand() % 101; // Número aleatório entre 0 e 100
    
    cout << "Número aleatório gerado: " << numeroAleatorio << endl;
    
    bool sucessoMissao = (forca + destreza > 50) && (sorte > numeroAleatorio);
    
    if (sucessoMissao) {
        cout << "Missão bem-sucedida!" << endl;
    } else {
        cout << "Missão falhou." << endl;
    }
    
    return 0;
}
