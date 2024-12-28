// Exercício 2: Sistema de Gestão de Produtos em Estoque
// Descrição:
// Implemente um programa que gerencie o estoque de 
// produtos de uma loja. O programa deve utilizar uma struct para 
// representar cada produto, contendo os seguintes campos: nome, preço 
// e quantidade em estoque. O programa deve oferecer as seguintes opções ao usuário:

// Adicionar um novo produto ao estoque.
// Atualizar a quantidade de um produto existente.
// Exibir todos os produtos e o valor total em estoque (preço * quantidade).
// Utilize funções para adicionar produtos, atualizar a quantidade e exibir o estoque.

// Requisitos:

// Uma struct para representar um produto.
// Funções separadas para adicionar produtos, atualizar quantidade e exibir o estoque.
// Função para calcular o valor total do estoque.

#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100

// Definindo a struct para armazenar os dados de um produto
struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

// Função para adicionar um novo produto
void adicionarProduto(struct Produto estoque[], int *numProdutos) {
    if (*numProdutos < MAX_PRODUTOS) {
        printf("Digite o nome do produto: ");
        scanf(" %[^\n]s", estoque[*numProdutos].nome);
        printf("Digite o preço do produto: ");
        scanf("%f", &estoque[*numProdutos].preco);
        printf("Digite a quantidade do produto: ");
        scanf("%d", &estoque[*numProdutos].quantidade);
        (*numProdutos)++;
    } else {
        printf("Estoque cheio!\n");
    }
}

// Função para atualizar a quantidade de um produto existente
void atualizarQuantidade(struct Produto estoque[], int numProdutos) {
    char nome[50];
    printf("Digite o nome do produto para atualizar: ");
    scanf(" %[^\n]s", nome);

    for (int i = 0; i < numProdutos; i++) {
        if (strcmp(nome, estoque[i].nome) == 0) {
            printf("Digite a nova quantidade: ");
            scanf("%d", &estoque[i].quantidade);
            return;
        }
    }
    printf("Produto não encontrado!\n");
}

// Função para exibir todos os produtos e o valor total do estoque
void exibirEstoque(struct Produto estoque[], int numProdutos) {
    float valorTotal = 0;
    printf("\nEstoque:\n");
    for (int i = 0; i < numProdutos; i++) {
        printf("Produto: %s | Preço: %.2f | Quantidade: %d\n", estoque[i].nome, estoque[i].preco, estoque[i].quantidade);
        valorTotal += estoque[i].preco * estoque[i].quantidade;
    }
    printf("Valor total do estoque: R$ %.2f\n", valorTotal);
}

int main() {
    struct Produto estoque[MAX_PRODUTOS];
    int numProdutos = 0;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar Produto\n");
        printf("2. Atualizar Quantidade\n");
        printf("3. Exibir Estoque\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarProduto(estoque, &numProdutos);
                break;
            case 2:
                atualizarQuantidade(estoque, numProdutos);
                break;
            case 3:
                exibirEstoque(estoque, numProdutos);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 4);

    return 0;
}
