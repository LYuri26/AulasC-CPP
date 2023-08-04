#include <stdio.h>
#include <string.h>

struct Produto {
  char nome[50];
  int codigo;
  float preco;
  int quantidade;
};

struct Produto estoque[100];
int totalProdutos = 0;

void registrarEntrada(char nome[], int codigo, float preco, int quantidade) {
  // Adicionar um novo produto ao estoque
  strcpy(estoque[totalProdutos].nome, nome);
  estoque[totalProdutos].codigo = codigo;
  estoque[totalProdutos].preco = preco;
  estoque[totalProdutos].quantidade = quantidade;
  totalProdutos++;
}

void registrarVenda(int codigo) {
  // Verificar se o produto existe no estoque
  int indiceProduto = -1;
  for (int i = 0; i < totalProdutos; i++) {
    if (estoque[i].codigo == codigo) {
      indiceProduto = i;
      break;
    }
  }

  // Se o produto não existir, retornar um erro
  if (indiceProduto == -1) {
    printf("Produto não encontrado!\n");
    return;
  }

  // Se a quantidade do produto for maior que zero, decrementar a quantidade
  if (estoque[indiceProduto].quantidade > 0) {
    estoque[indiceProduto].quantidade--;
  } else {
    printf("Produto esgotado!\n");
  }
}

void gerarRelatorio() {
  // Imprimir um relatório do estoque
  for (int i = 0; i < totalProdutos; i++) {
    printf("Nome: %s\n", estoque[i].nome);
    printf("Código: %d\n", estoque[i].codigo);
    printf("Quantidade: %d\n", estoque[i].quantidade);
    printf("Preço: %.2f\n", estoque[i].preco);
    printf("-----------------------------\n");
  }
}

int main() {
  int opcao;

  while (1) {
    printf("===== MENU =====\n");
    printf("1. Registrar entrada de produto\n");
    printf("2. Registrar venda de produto\n");
    printf("3. Gerar relatório de estoque\n");
    printf("4. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
      case 1: {
        // Registrar entrada de produto
        char nome[50];
        int codigo;
        float preco;
        int quantidade;

        printf("Informe o nome do produto: ");
        scanf("%s", nome);

        printf("Informe o código do produto: ");
        scanf("%d", &codigo);

        printf("Informe o preço do produto: ");
        scanf("%f", &preco);

        printf("Informe a quantidade do produto: ");
        scanf("%d", &quantidade);

        registrarEntrada(nome, codigo, preco, quantidade);
        break;
      }

      case 2: {
        // Registrar venda de produto
        int codigo;

        printf("Informe o código do produto: ");
        scanf("%d", &codigo);

        registrarVenda(codigo);
        break;
      }

      case 3:
        // Gerar relatório de estoque
        gerarRelatorio();
        break;

      case 4:
        printf("Saindo...\n");
        return 0;

      default:
        printf("Opção inválida. Tente novamente.\n");
        break;
    }
  }
}
