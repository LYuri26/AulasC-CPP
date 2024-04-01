#include <iostream>
#include <vector>

using namespace std;

// Função para adicionar nova nota
void adicionarNota(vector<double> &notas, double nota)
{
    notas.push_back(nota); // Adiciona a nova nota ao vetor de notas
}

// Função para calcular a média geral das notas
double calcularMedia(const vector<double> &notas)
{
    if (notas.empty())
    {
        return 0.0; // Retorna 0 se o vetor de notas estiver vazio
    }
    double soma = 0.0;
    for (int i = 0; i < notas.size(); ++i)
    {
        soma += notas[i]; // Soma todas as notas do vetor
    }
    return soma / notas.size(); // Calcula a média dividindo a soma pelo número de notas
}

// Função para exibir as notas e a média
void exibirNotasEMedia(const vector<double> &notas)
{
    cout << "Notas do Recruta:\n";
    for (int i = 0; i < notas.size(); ++i)
    {
        cout << "Habilidade " << i + 1 << ": " << notas[i] << endl; // Exibe cada nota do vetor
    }
    cout << "Média Geral: " << calcularMedia(notas) << endl; // Exibe a média geral das notas
}

int main()
{
    vector<double> notas;

    // Adicionando exemplos de notas
    adicionarNota(notas, 8.5);
    adicionarNota(notas, 7.9);
    adicionarNota(notas, 9.2);

    // Exibindo as notas e a média
    exibirNotasEMedia(notas);

    return 0;
}
