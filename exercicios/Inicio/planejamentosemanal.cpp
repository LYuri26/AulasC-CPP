#include <iostream> // Incluindo a biblioteca para entrada e saída de dados em C++
#include <array>    // Incluindo a biblioteca para utilizar matrizes em C++

using namespace std; // Usando o namespace std para facilitar o acesso aos elementos

// Função para adicionar uma nova tarefa em um dia da semana
void adicionarTarefa(array<string, 7> &planejamentoSemanal, int diaSemana, string tarefa)
{
    planejamentoSemanal[diaSemana - 1] += tarefa + ", "; // Adiciona a tarefa ao dia da semana correspondente
}

// Função para exibir as tarefas de um dia específico
void exibirTarefasDia(array<string, 7> &planejamentoSemanal, int diaSemana)
{
    cout << "Tarefas para o dia " << diaSemana << " da semana:\n";
    cout << planejamentoSemanal[diaSemana - 1] << endl; // Exibe as tarefas do dia específico
}

// Função para exibir o planejamento completo da semana
void exibirPlanejamento(array<string, 7> &planejamentoSemanal)
{
    cout << "Planejamento semanal:\n";
    // Percorre a matriz de planejamento e exibe as tarefas de cada dia da semana
    for (int i = 0; i < 7; ++i)
    {
        cout << "Dia " << (i + 1) << ": " << planejamentoSemanal[i] << endl;
    }
}

int main()
{
    array<string, 7> planejamentoSemanal; // Declaração da matriz para armazenar as tarefas da semana

    // Adiciona algumas tarefas para cada dia da semana inicialmente
    adicionarTarefa(planejamentoSemanal, 1, "Estudar matemática");
    adicionarTarefa(planejamentoSemanal, 3, "Fazer compras");

    // Exibe o planejamento semanal inicial
    exibirPlanejamento(planejamentoSemanal);

    // Simula a exibição das tarefas de um dia específico
    exibirTarefasDia(planejamentoSemanal, 3);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
