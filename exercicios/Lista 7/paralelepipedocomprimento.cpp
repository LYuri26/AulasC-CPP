#include <iostream>
#include <string>

using namespace std;

// Função para solicitar as dimensões do paralelepípedo
void solicitarDimensoes(double &comprimento, double &largura, double &altura)
{
    cout << "Digite o comprimento do paralelepípedo em metros: ";
    cin >> comprimento;

    cout << "Digite a largura do paralelepípedo em metros: ";
    cin >> largura;

    cout << "Digite a altura do paralelepípedo em metros: ";
    cin >> altura;
}

// Função para calcular o volume do paralelepípedo
double calcularVolume(double comprimento, double largura, double altura)
{
    return comprimento * largura * altura;
}

int main()
{
    // Variáveis para armazenar o nome e as dimensões do paralelepípedo
    string nomeParalelepipedo;
    double comprimento, largura, altura;

    // Solicita ao usuário que insira o nome do paralelepípedo
    cout << "Digite o nome do paralelepípedo: ";
    getline(cin, nomeParalelepipedo);

    // Chama a função para solicitar as dimensões do paralelepípedo
    solicitarDimensoes(comprimento, largura, altura);

    // Calcula o volume do paralelepípedo
    double volume = calcularVolume(comprimento, largura, altura);

    // Exibe o resultado
    cout << "O volume aproximado do paralelepípedo " 
    << nomeParalelepipedo << " é de " << volume << " metros cúbicos." 
    << endl;

    return 0;
}
