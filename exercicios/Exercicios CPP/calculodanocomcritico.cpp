#include <iostream>
using namespace std;

int main() {
    int numAtaques;
    float danoBase, multiplicadorCritico, danoTotal = 0.0;
    
    cout << "Digite o número de ataques realizados: ";
    cin >> numAtaques;
    
    for (int i = 0; i < numAtaques; i++) {
        cout << "Digite o dano base do ataque " << (i + 1) << ": ";
        cin >> danoBase;
        
        cout << "Digite o multiplicador de crítico do ataque " << (i + 1) << ": ";
        cin >> multiplicadorCritico;
        
        danoTotal += danoBase * multiplicadorCritico;
    }
    
    cout << "Dano total causado: " << danoTotal << endl;
    
    return 0;
}
