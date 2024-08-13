#include <iostream>
using namespace std;

int main() {
    const int pontosIniciais = 100;
    int pontosDisponiveis = pontosIniciais;
    int forca, destreza, inteligencia;
    
    cout << "Distribua os " << pontosIniciais << " pontos de habilidade entre Força, Destreza e Inteligência." << endl;
    
    cout << "Digite os pontos para Força: ";
    cin >> forca;
    pontosDisponiveis -= forca;
    
    cout << "Digite os pontos para Destreza: ";
    cin >> destreza;
    pontosDisponiveis -= destreza;
    
    cout << "Digite os pontos para Inteligência: ";
    cin >> inteligencia;
    pontosDisponiveis -= inteligencia;
    
    if (pontosDisponiveis != 0) {
        cout << "Você não usou todos os pontos disponíveis. Tente novamente." << endl;
        return 1;
    }
    
    cout << "Distribuição final:" << endl;
    cout << "Força: " << forca << endl;
    cout << "Destreza: " << destreza << endl;
    cout << "Inteligência: " << inteligencia << endl;
    
    return 0;
}
