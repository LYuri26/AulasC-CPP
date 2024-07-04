#include <iostream>

using namespace std;

int main()
{
    int tamanho;

    // Solicita o tamanho do vetor ao usuário
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    // Verifica se o tamanho é negativo
    if (tamanho < 0)
    {
        cout << "Valor incorreto. Tente novamente." << endl;
        return 1; // Encerra o programa com código de erro
    }

    // Cria um array com o tamanho fornecido
    int vetor[tamanho];

    // Solicita ao usuário para inserir os elementos do vetor
    cout << "Digite os " << tamanho << " números separados por enter:\n";
    for (int i = 0; i < tamanho; ++i)
    {
        cin >> vetor[i];
    }

    // Seleciona o algoritmo de ordenação com base no tamanho do vetor
    if (tamanho <= 20)
    {
        // Ordenação por inserção
        for (int i = 1; i < tamanho; ++i)
        {
            int chave = vetor[i];
            int j = i - 1;

            // Move os elementos maiores que a chave para a frente
            while (j >= 0 && vetor[j] > chave)
            {
                vetor[j + 1] = vetor[j];
                --j;
            }
            // Insere a chave na posição correta
            vetor[j + 1] = chave;
        }
        cout << "Lista ordenada utilizando Insertion Sort:\n";
    }
    else if (tamanho <= 30)
    {
        // Ordenação por bolha
        for (int i = 0; i < tamanho - 1; ++i)
        {
            for (int j = 0; j < tamanho - i - 1; ++j)
            {
                // Compara elementos adjacentes e os troca se estiverem na ordem errada
                if (vetor[j] > vetor[j + 1])
                {
                    int temp = vetor[j];
                    vetor[j] = vetor[j + 1];
                    vetor[j + 1] = temp;
                }
            }
        }
        cout << "Lista ordenada utilizando Bubble Sort:\n";
    }
    else
    {
        // Ordenação por seleção
        for (int i = 0; i < tamanho - 1; ++i)
        {
            int indice_minimo = i;
            // Percorre o restante do vetor para encontrar o menor elemento
            for (int j = i + 1; j < tamanho; ++j)
            {
                if (vetor[j] < vetor[indice_minimo])
                {
                    indice_minimo = j;
                }
            }
            // Troca o menor elemento encontrado com o primeiro elemento não classificado
            int temp = vetor[indice_minimo];
            vetor[indice_minimo] = vetor[i];
            vetor[i] = temp;
        }
        cout << "Lista ordenada utilizando Selection Sort:\n";
    }

    // Exibe o vetor ordenado
    for (int i = 0; i < tamanho; ++i)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0; // Encerra o programa com sucesso
}
