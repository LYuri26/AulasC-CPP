#include <stdio.h>
#include <stdbool.h> // Incluindo a biblioteca para usar o tipo bool

// Funcao para simular uma batalha entre o personagem do jogador e um monstro
void batalha() {
    int max_turnos = 5; // Defina o numero maximo de turnos que voce deseja exibir

    for (int i = 1; i <= max_turnos; i++) { // Loop para simular os turnos da batalha
        printf("Turno %d: Combatendo...\n", i); // Exibe uma mensagem indicando o turno
    }
}

// Funcao para simular a compra de itens pelo programador
int comprar_itens() {
    int limite_itens = 3; // Limite pre-definido de itens que o programador pode comprar
    return limite_itens; // Retorna o numero de itens comprados
}

// Funcao para simular o uso de uma habilidade especial pelo personagem durante a batalha
void usar_habilidade() {
    int vezes = 3; // Numero de vezes que a habilidade pode ser usada durante a batalha
    for (int i = 1; i <= vezes; i++) { // Loop para simular o uso da habilidade varias vezes
        printf("Usando habilidade especial... (%d/%d)\n", i, vezes); // Exibe uma mensagem indicando o uso da habilidade
    }
}

// Funcao para simular a recuperacao de energia do personagem apos uma batalha
void recuperar_energia() {
    int energia = 0; // Energia inicial do personagem
    while (energia < 100) { // Loop para simular a recuperacao gradual da energia
        printf("Recuperando energia... (%d%%)\n", energia); // Exibe uma mensagem indicando a recuperacao da energia
        energia += 10; // Incrementa a energia em 10% a cada iteracao
    }
    printf("Energia totalmente recuperada!\n"); // Mensagem indicando que a energia foi totalmente recuperada
}

// Funcao para simular um aviso sobre uma cidade pegando fogo
void aviso_cidade_pegando_fogo() {
    bool cidade_pegando_fogo = true; // Variavel bool para indicar se a cidade esta pegando fogo ou nao

    while (cidade_pegando_fogo) { // Loop enquanto a cidade estiver pegando fogo
        printf("AVISO: A cidade esta pegando fogo! Acione os bombeiros!\n"); // Exibe uma mensagem de aviso sobre o incendio na cidade
        cidade_pegando_fogo = false; // Define a variavel como false para encerrar o loop apos exibir o aviso
    }
}

int main() {
    printf("Exercicio de Contagem de Turnos de Batalha:\n");
    batalha();

    
    printf("\nExercicio de Compra de Itens:\n");
    printf("Numero de itens comprados: %d\n", comprar_itens());
    
    printf("\nExercicio de Uso de Habilidades:\n");
    usar_habilidade();
    
    printf("\nExercicio de Recuperacao de Energia:\n");
    recuperar_energia();
    
    printf("\nExercicio de Aviso de Cidade Pegando Fogo:\n");
    aviso_cidade_pegando_fogo();
    
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}