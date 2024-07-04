#include <iostream> // Biblioteca para entrada e saída de dados em C++

using namespace std;

// Função para adicionar um contato à agenda
void adicionarContato(string contatos[], string telefones[], int tamanho, string contato, string telefone)
{
    contatos[tamanho] = contato;   // Adiciona o contato ao final do array de contatos
    telefones[tamanho] = telefone; // Adiciona o telefone correspondente ao contato
}

// Função para procurar um contato na agenda
void procurarContato(string contatos[], string telefones[], int tamanho, string contato)
{
    int i = 0;

    // Percorre o array de contatos
    while (i < tamanho && contatos[i] != contato)
    {
        i++; // Incrementa o índice até encontrar o contato ou atingir o final do array
    }

    // Verifica se o índice está dentro do tamanho do array, ou seja, se o contato foi encontrado
    if (i < tamanho)
    {
        cout << "Contato encontrado: " << contatos[i] << ", Telefone: " << telefones[i] << endl;
    }
    else
    {
        cout << "Contato '" << contato << "' não encontrado." << endl;
    }
}

// Função para exibir a agenda de contatos atual
void exibirContatos(string contatos[], string telefones[], int tamanho)
{
    cout << "\nAgenda de contatos:\n"; // Exibe cabeçalho
    for (int i = 0; i < tamanho; i++)  // Loop para percorrer a agenda de contatos
    {
        cout << "Nome: " << contatos[i] << ", Telefone: " << telefones[i] << endl; // Exibe cada contato e seu telefone
    }
}

int main()
{
    const int maxContatos = 100;   // Define o tamanho máximo do array de contatos
    string contatos[maxContatos];  // Array para armazenar os contatos
    string telefones[maxContatos]; // Array para armazenar os telefones correspondentes
    int tamanho = 0;               // Variável para controlar o tamanho atual dos arrays

    // Adiciona contatos inicialmente à agenda
    adicionarContato(contatos, telefones, tamanho, "Coringa", "999-8888");
    tamanho++;
    adicionarContato(contatos, telefones, tamanho, "Pinguim", "777-6666");
    tamanho++;
    adicionarContato(contatos, telefones, tamanho, "Duas Caras", "555-4444");
    tamanho++;

    // Exibe a agenda inicial de contatos
    exibirContatos(contatos, telefones, tamanho);

    // Simula a busca por alguns contatos
    procurarContato(contatos, telefones, tamanho, "Coringa");
    procurarContato(contatos, telefones, tamanho, "Pinguim");
    procurarContato(contatos, telefones, tamanho, "Duas Caras");
    procurarContato(contatos, telefones, tamanho, "Charada"); // Tentativa de buscar um contato não existente

    return 0;
}
