#include <iostream>

using namespace std;

// Tamanho da matriz de registro de horas (dias da semana)
const int dias_semana = 7;

int main()
{
    int horas_trabalhadas[dias_semana] = {0}; // Array para armazenar as horas trabalhadas, inicializado com zero

    // Adicionando exemplos de horas trabalhadas
    horas_trabalhadas[0] += 8;
    horas_trabalhadas[1] += 7;

    // Exibindo o registro completo
    cout << "Registro de Horas Trabalhadas:\n";
    for (int dia = 0; dia < dias_semana; ++dia)
    {
        cout << "Dia " << dia + 1 << ": " << horas_trabalhadas[dia] << " horas\n";
    }

    // Calculando e exibindo o total de horas na semana
    int total_horas = 0;
    for (int dia = 0; dia < dias_semana; ++dia)
    {
        total_horas += horas_trabalhadas[dia];
    }
    cout << "Total de Horas na Semana: " << total_horas << " horas\n";

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
