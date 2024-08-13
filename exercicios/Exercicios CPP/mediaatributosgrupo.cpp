#include <iostream>
using namespace std;

int main() {
    const int numPersonagens = 5;
    int forca[numPersonagens], destreza[numPersonagens], inteligencia[numPersonagens];
    int somaForca = 0, somaDestreza = 0, somaInteligencia = 0;
    
    for (int i = 0; i < numPersonagens; i++) {
        cout << "Digite os atributos para o personagem " << (i + 1) << ":" << endl;
        
        cout << "Força: ";
        cin >> forca[i];
        
        cout << "Destreza: ";
        cin >> destreza[i];
        
        cout << "Inteligência: ";
        cin >> inteligencia[i];
        
        somaForca += forca[i];
        somaDestreza += destreza[i];
        somaInteligencia += inteligencia[i];
    }
    
    cout << "Média de Força: " << (somaForca / (float)numPersonagens) << endl;
    cout << "Média de Destreza: " << (somaDestreza / (float)numPersonagens) << endl;
    cout << "Média de Inteligência: " << (somaInteligencia / (float)numPersonagens) << endl;
    
    return 0;
}
