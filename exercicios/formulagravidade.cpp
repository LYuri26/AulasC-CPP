#include <iostream>

using namespace std;

// Função para calcular o peso no planeta desejado em quilogramas
double calcularPesoNoPlaneta(double pesoTerra, double gravidadePlaneta) {
    return (pesoTerra / 9.81) * gravidadePlaneta;
}

int main() {
    // Constantes para as gravidades dos planetas em relação à Terra
    const double gravidadeMercurio = 3.7;
    const double gravidadeVenus = 8.87;
    const double gravidadeTerra = 9.81;
    const double gravidadeLua = 1.62;
    const double gravidadeMarte = 3.71;
    const double gravidadeJupiter = 24.79;
    const double gravidadeSaturno = 10.44;
    const double gravidadeUrano = 8.69;
    const double gravidadeNetuno = 11.15;
    const double gravidadePlutao = 0.62;

    double pesoTerra, pesoPlaneta;
    int opcaoPlaneta;

    // Solicita ao usuário que insira seu peso na Terra em Newtons
    cout << "Insira seu peso na Terra (em Newtons): ";
    cin >> pesoTerra;

    // Solicita ao usuário que escolha o planeta desejado
    cout << "Escolha o planeta desejado (insira o número correspondente):\n";
    cout << "1. Mercúrio\n2. Vênus\n3. Terra\n4. Lua\n5. Marte\n6. Júpiter\n7. Saturno\n8. Urano\n9. Netuno\n10. Plutão\n";
    cin >> opcaoPlaneta;

    // Calcula o peso no planeta desejado
    switch (opcaoPlaneta) {
        case 1:
            pesoPlaneta = calcularPesoNoPlaneta(pesoTerra, gravidadeMercurio);
            cout << "Seu peso em Mercúrio é de " << pesoPlaneta << " kg." << endl;
            break;
        case 2:
            pesoPlaneta = calcularPesoNoPlaneta(pesoTerra, gravidadeVenus);
            cout << "Seu peso em Vênus é de " << pesoPlaneta << " kg." << endl;
            break;
        case 3:
            pesoPlaneta = calcularPesoNoPlaneta(pesoTerra, gravidadeTerra);
            cout << "Seu peso na Terra é de " << pesoPlaneta << " kg." << endl;
            break;
        case 4:
            pesoPlaneta = calcularPesoNoPlaneta(pesoTerra, gravidadeLua);
            cout << "Seu peso na Lua é de " << pesoPlaneta << " kg." << endl;
            break;
        case 5:
            pesoPlaneta = calcularPesoNoPlaneta(pesoTerra, gravidadeMarte);
            cout << "Seu peso em Marte é de " << pesoPlaneta << " kg." << endl;
            break;
        case 6:
            pesoPlaneta = calcularPesoNoPlaneta(pesoTerra, gravidadeJupiter);
            cout << "Seu peso em Júpiter é de " << pesoPlaneta << " kg." << endl;
            break;
        case 7:
            pesoPlaneta = calcularPesoNoPlaneta(pesoTerra, gravidadeSaturno);
            cout << "Seu peso em Saturno é de " << pesoPlaneta << " kg." << endl;
            break;
        case 8:
            pesoPlaneta = calcularPesoNoPlaneta(pesoTerra, gravidadeUrano);
            cout << "Seu peso em Urano é de " << pesoPlaneta << " kg." << endl;
            break;
        case 9:
            pesoPlaneta = calcularPesoNoPlaneta(pesoTerra, gravidadeNetuno);
            cout << "Seu peso em Netuno é de " << pesoPlaneta << " kg." << endl;
            break;
        case 10:
            pesoPlaneta = calcularPesoNoPlaneta(pesoTerra, gravidadePlutao);
            cout << "Seu peso em Plutão é de " << pesoPlaneta << " kg." << endl;
            break;
        default:
            // Caso o usuário escolha uma opção inválida
            cout << "Opção inválida. Certifique-se de escolher um número entre 1 e 10." << endl;
            return 1;
    }

    return 0;
}
