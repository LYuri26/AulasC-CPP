#include <iostream> // Biblioteca para entrada e saída de dados em C++
using namespace std; // Usando o namespace std para facilitar o acesso aos elementos

int main()
{
    int escolha; // Variável para armazenar a escolha do usuário

    // Solicita ao usuário para escolher o caminho
    cout << "Escolha o caminho:\n";
    cout << "0: Floresta Encantada\n";
    cout << "1: Montanhas do Destino\n";
    cout << "Digite sua escolha (0 ou 1): ";
    cin >> escolha; // Lê a escolha do usuário

    // Verifica a escolha do usuário e exibe os desafios correspondentes
    switch (escolha)
    {
    case 0:
        cout << "Voce escolheu a Floresta Encantada! Desafios: criaturas misticas e magia.\n";
        break;
    case 1:
        cout << "Voce escolheu as Montanhas do Destino! Desafios: climas extremos e criaturas selvagens.\n";
        break;
    default:
        cout << "Opcao invalida! Escolha entre 0 (Floresta Encantada) ou 1 (Montanhas do Destino).\n";
    }

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
