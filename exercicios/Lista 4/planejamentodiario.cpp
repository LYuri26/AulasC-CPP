#include <iostream>

using namespace std;

const int diasSemana = 7;
const int tarefasDia = 3;

int main()
{
    string planejamento[diasSemana][tarefasDia] = {}; // Declaração do planejamento semanal

    // Adicionando exemplos de tarefas planejadas para diferentes dias da semana
    planejamento[0][0] = "Escavacao na Ruina do Templo";
    planejamento[4][0] = "Estudo de Artefatos";

    // Exibindo o planejamento completo da semana
    cout << "Planejamento da Semana:\n";
    for (int dia = 0; dia < diasSemana; ++dia) // Itera sobre os dias da semana
    {
        cout << "Dia " << dia + 1 << ":\n";
        for (int i = 0; i < tarefasDia; ++i) // Itera sobre as tarefas do dia
        {
            if (!planejamento[dia][i].empty()) // Verifica se a tarefa não está vazia
            {
                cout << "- " << planejamento[dia][i] << endl; // Exibe a tarefa
            }
        }
    }

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
