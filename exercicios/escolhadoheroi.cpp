#include <iostream> // Inclui a biblioteca para entrada e saída de dados

using namespace std; // Permite o uso de elementos do namespace std

int main()
{
    string escolha; // Declara uma variável para armazenar a escolha do usuário

    // Solicita ao usuário para escolher um herói
    cout << "Escolha seu heroi: Batman, Superman ou Mulher-Maravilha: ";
    cin >> escolha; // Lê a escolha do usuário

    // Verifica a escolha do usuário e exibe suas habilidades especiais
    if (escolha == "batman" || escolha == "Batman") // Verifica se o usuário escolheu o Batman
    {
        cout << "Voce escolheu o Batman! Habilidades especiais: inteligencia, artes marciais, tecnologia avancada e bater em pobre maluco além de ser um burgues safado.\n";
    }
    else if (escolha == "superman" || escolha == "Superman") // Verifica se o usuário escolheu o Superman
    {
        cout << "Voce escolheu o Superman! Habilidades especiais: super forca, voo, ser o simbolo imperialista dos EUA, um hipocrita e visao de calor.\n";
    }
    else if (escolha == "mulher-maravilha" || escolha == "Mulher-Maravilha") // Verifica se o usuário escolheu a Mulher-Maravilha
    {
        cout << "Voce escolheu a Mulher-Maravilha! Habilidades especiais: super forca, agilidade, ser um modelo sexy para nerdolas, cota feminina em uma liga majoritariamente machista e invulnerabilidade.\n";
    }
    else // Se a escolha do usuário não for válida
    {
        cout << "Opcao invalida! Escolha entre Batman, Superman ou Mulher-Maravilha.\n";
    }

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
