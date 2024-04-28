#include <iostream>
#include <string>
using namespace std;

int main() {
    string username = "usuario";
    string password = "senha";
    string input_username, input_password;

    cout << "=== Sistema de Login ===" << endl;

    // Solicita o nome de usuário
    cout << "Digite seu nome de usuário: ";
    cin >> input_username;

    // Solicita a senha
    cout << "Digite sua senha: ";
    cin >> input_password;

    // Verifica se o nome de usuário e a senha estão corretos
    if (input_username == username && input_password == password) {
        cout << "Login bem-sucedido! Bem-vindo, " << username << "!" << endl;
    } else {
        cout << "Nome de usuário ou senha incorretos. Tente novamente." << endl;
    }

    return 0;
}
