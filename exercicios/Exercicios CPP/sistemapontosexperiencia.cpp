#include <iostream>
using namespace std;

int main() {
    int numMissões, pontosExperiencia, totalExperiencia = 0;
    
    cout << "Digite o número de missões completadas: ";
    cin >> numMissões;
    
    for (int i = 0; i < numMissões; i++) {
        cout << "Digite os pontos de experiência ganhos na missão " << (i + 1) << ": ";
        cin >> pontosExperiencia;
        totalExperiencia += pontosExperiencia;
        
        int nivel = totalExperiencia / 1000;
        int experienciaParaProximoNivel = 1000 - (totalExperiencia % 1000);
        
        if (experienciaParaProximoNivel == 1000) {
            experienciaParaProximoNivel = 0;
        }
        
        cout << "Nível atual: " << nivel << endl;
        cout << "Experiência restante para o próximo nível: " << experienciaParaProximoNivel << endl;
    }
    
    return 0;
}
