// função em C que busca o produto de menor preço em uma lista de produtos 
// armazenados em uma estrutura produto. A função retorna 1 se a 
// operação foi bem-sucedida (encontrou um produto) e 
// 0 se não encontrou nenhum produto.

// struct produto{
// int codProd; //c´odigo do produto
// char nomeProd[10]; //nome do produto
// float valor; //valor do produto
// int qtdeEstoque; //quantidade dispon´ıvel em estoque
// }

#include <stdio.h>

struct produto {
    int codProd;          // código do produto
    char nomeProd[10];    // nome do produto
    float valor;          // valor do produto
    int qtdeEstoque;      // quantidade disponível em estoque
};

int buscarProdutoMenorPreco(struct produto produtos[], int tamanho, struct produto produtoMenor) {
    if (tamanho <= 0) return 0; // Não há produtos na lista

    produtoMenor = produtos[0]; // Inicializa com o primeiro produto

    for (int i = 1; i < tamanho; i++) {
        if (produtos[i].valor < produtoMenor.valor) {
            produtoMenor = produtos[i]; // Atualiza o produto menor
        }
    }

    // Aqui, se você quiser passar o menor produto de volta para o main, você pode usar uma abordagem diferente.
    // Para este exemplo, não vamos retornar o menor produto diretamente.
    printf("Produto de menor preço: %s (R$ %.2f)\n", produtoMenor.nomeProd, produtoMenor.valor);
    return 1; // Produto de menor preço encontrado
}

int main() {
    struct produto listaProdutos[4] = {
        {1, "ProdutoA", 10.50, 5},
        {2, "ProdutoB", 7.30, 10},
        {3, "ProdutoC", 12.00, 2},
        {4, "ProdutoD", 6.80, 0},
    };

    int tamanho = 4; // Tamanho do array de produtos

    if (!buscarProdutoMenorPreco(listaProdutos, tamanho, listaProdutos[0])) {
        printf("Nenhum produto encontrado.\n");
    }

    return 0;
}
