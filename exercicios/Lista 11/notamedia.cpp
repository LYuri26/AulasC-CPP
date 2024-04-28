#include <iostream>
using namespace std;

int main() {
    const float MEDIA_MINIMA_APROVACAO = 6.0;
    float nota1, nota2, nota3, media;

    // Solicita as notas das três provas
    cout << "Digite a nota da primeira prova: ";
    cin >> nota1;

    cout << "Digite a nota da segunda prova: ";
    cin >> nota2;

    cout << "Digite a nota da terceira prova: ";
    cin >> nota3;

    // Calcula a média
    media = (nota1 + nota2 + nota3) / 3.0;

    // Verifica se o aluno foi aprovado ou reprovado
    if (media >= MEDIA_MINIMA_APROVACAO) {
        cout << "Parabéns! Você foi aprovado com média " << media << "." << endl;
    } else {
        cout << "Infelizmente você foi reprovado com média " << media << "." << endl;
    }

    return 0;
}
