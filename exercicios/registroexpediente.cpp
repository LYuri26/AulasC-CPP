#include <iostream>
#include <array>
#include <numeric> // Adicionando a biblioteca necessária para a função accumulate

using namespace std;

// Tamanho da matriz de registro de horas (dias da semana x horas trabalhadas por dia)
const int dias_semana = 7;

// Função para adicionar horas trabalhadas em um dia específico
void adicionar_horas_trabalhadas(array<int, dias_semana> &horas_trabalhadas, int dia, int horas)
{
    horas_trabalhadas[dia - 1] += horas;
}

// Função para calcular o total de horas trabalhadas na semana
int calcular_total_horas(const array<int, dias_semana> &horas_trabalhadas)
{
    return accumulate(horas_trabalhadas.begin(), horas_trabalhadas.end(), 0);
}

// Função para exibir o registro completo de horas trabalhadas
void exibir_registro(const array<int, dias_semana> &horas_trabalhadas)
{
    cout << "Registro de Horas Trabalhadas:\n";
    for (int dia = 0; dia < dias_semana; ++dia)
    {
        cout << "Dia " << dia + 1 << ": " << horas_trabalhadas[dia] << " horas\n";
    }
    cout << "Total de Horas na Semana: " << calcular_total_horas(horas_trabalhadas) << " horas\n";
}

int main()
{
    array<int, dias_semana> horas_trabalhadas = {};

    // Adicionando exemplos de horas trabalhadas
    adicionar_horas_trabalhadas(horas_trabalhadas, 1, 8);
    adicionar_horas_trabalhadas(horas_trabalhadas, 2, 7);

    // Exibindo o registro completo
    exibir_registro(horas_trabalhadas);

    return 0;
}
