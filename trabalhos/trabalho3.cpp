#include <iostream>
#include <vector>

using namespace std;

// Função para ordenação por inserção
void insertionSort(vector<int> &array, int tamanho)
{
    // Percorre o vetor a partir do segundo elemento
    for (int indice = 1; indice < tamanho; ++indice)
    {
        int chave = array[indice];        // Armazena o valor do elemento atual
        int indice_anterior = indice - 1; // Inicializa o índice do elemento anterior

        // Move os elementos maiores que a chave para a frente
        while (indice_anterior >= 0 && array[indice_anterior] > chave)
        {
            array[indice_anterior + 1] = array[indice_anterior];
            --indice_anterior;
        }
        // Insere a chave na posição correta
        array[indice_anterior + 1] = chave;
    }
}

// Função para ordenação por bolha
void bubbleSort(vector<int> &array, int tamanho)
{
    // Percorre o vetor
    for (int i = 0; i < tamanho - 1; ++i)
    {
        // Percorre o vetor restante
        for (int j = 0; j < tamanho - i - 1; ++j)
        {
            // Compara elementos adjacentes e os troca se estiverem na ordem errada
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Função para ordenação por seleção
void selectionSort(vector<int> &array, int tamanho)
{
    // Percorre o vetor
    for (int i = 0; i < tamanho - 1; ++i)
    {
        int indice_minimo = i; // Assume que o elemento atual é o menor
        // Percorre o restante do vetor para encontrar o menor elemento
        for (int j = i + 1; j < tamanho; ++j)
        {
            if (array[j] < array[indice_minimo])
            {
                indice_minimo = j; // Atualiza o índice do menor elemento
            }
        }
        // Troca o menor elemento encontrado com o primeiro elemento não classificado
        int temp = array[indice_minimo];
        array[indice_minimo] = array[i];
        array[i] = temp;
    }
}

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

    // Cria um vetor com o tamanho fornecido
    vector<int> vetor(tamanho);
    // Solicita ao usuário para inserir os elementos do vetor
    cout << "Digite os " << tamanho << " números separados por enter:\n";
    for (int i = 0; i < tamanho; ++i)
    {
        cin >> vetor[i];
    }

    // Seleciona o algoritmo de ordenação com base no tamanho do vetor
    if (tamanho <= 20)
    {
        insertionSort(vetor, tamanho); // Usa ordenação por inserção
        cout << "Lista ordenada utilizando Insertion Sort:\n";
    }
    else if (tamanho <= 30)
    {
        bubbleSort(vetor, tamanho); // Usa ordenação por bolha
        cout << "Lista ordenada utilizando Bubble Sort:\n";
    }
    else
    {
        selectionSort(vetor, tamanho); // Usa ordenação por seleção
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
