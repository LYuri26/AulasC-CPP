#include <stdio.h>

int main() {
    int quantidadeNotas;
    float nota, soma = 0, media;

    printf("Quantas notas deseja inserir? ");
    scanf("%d", &quantidadeNotas);

    for (int i = 1; i <= quantidadeNotas; i++) {
        printf("Digite a nota #%d: ", i);
        scanf("%f", &nota);

        soma += nota;
    }

    media = soma / quantidadeNotas;

    printf("A média das notas é: %.2f\n", media);

    return 0;
}