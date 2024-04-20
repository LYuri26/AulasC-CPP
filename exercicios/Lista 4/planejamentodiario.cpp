#include <iostream> // incluindo a biblioteca para entrada e saída de dados em C++
#include <array>    // incluindo a biblioteca para utilizar matrizes em C++
#include <string>   // incluindo a biblioteca para manipulação de strings em C++

using namespace std; // usando o namespace std para facilitar o acesso aos elementos

// tamanho da matriz de planejamento (dias da semana x tarefas planejadas por dia)
const int diasSemana = 7;
const int tarefasDia = 3;

// função para adicionar uma nova tarefa em um dia específico da semana
void adicionarTarefa(array<array<string, tarefasDia>, diasSemana> &planejamento, int dia, const string &tarefa)
{
    planejamento[dia - 1][dia - 1] = tarefa; // adiciona a tarefa ao dia da semana correspondente
}

// função para exibir as tarefas de um dia específico
void exibirTarefasDia(const array<array<string, tarefasDia>, diasSemana> &planejamento, int dia)
{
    cout << "Tarefas para o dia " << dia << ":\n";
    for (const auto &tarefa : planejamento[dia - 1]) // itera sobre as tarefas do dia
    {
        if (!tarefa.empty()) // verifica se a tarefa não está vazia
        {
            cout << "- " << tarefa << endl; // exibe a tarefa
        }
    }
}

// função para exibir o planejamento completo da semana
void exibirPlanejamento(const array<array<string, tarefasDia>, diasSemana> &planejamento)
{
    cout << "Planejamento da Semana:\n";
    for (int dia = 0; dia < diasSemana; ++dia) // itera sobre os dias da semana
    {
        cout << "Dia " << dia + 1 << ":\n";
        exibirTarefasDia(planejamento, dia + 1); // exibe as tarefas do dia atual
    }
}

int main()
{
    array<array<string, tarefasDia>, diasSemana> planejamento = {}; // declaração da matriz para armazenar o planejamento

    // adicionando exemplos de tarefas planejadas para diferentes dias da semana
    adicionarTarefa(planejamento, 1, "Escavação na Ruína do Templo");
    adicionarTarefa(planejamento, 5, "Estudo de Artefatos");

    // exibindo o planejamento completo da semana
    exibirPlanejamento(planejamento);

    return 0; // retorna 0 para indicar que o programa foi executado com sucesso
}
