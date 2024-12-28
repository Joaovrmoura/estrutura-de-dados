/**
Elaborar um programa que leia os dados de 4 produtos
(nome, preço unitário e quantidade em estoque) usando
uma struct. Encontre e imprima o nome e o preço do
produto mais caro e do produto mais barato. Deve-se
imprimir também o valor total arrecadado se todas as
quantidades em estoque dos produtos forem vendidas.
**/

#include <stdio.h>

#define TAM 4
typedef struct{
    char nome[50];
    float preco;
    int qtd_estoque;
}Produtos;


int main(){

    Produtos prod[TAM];

    float soma_preco = 0.0;
    float mais_barato = -1.0;
    int barato;
    int caro;
    float mais_caro = 0.0;


    for(int i = 0; i < TAM ; i++){
        printf("Digite o nome do produto n-%d: ", i + 1);
        scanf("%s", prod[i].nome); 

        printf("Digite o preço unitário do Produto n-%d: ", i + 1);
        scanf("%f", &prod[i].preco);

        printf("Digite a quantidade em estoque do produto n-%d: ", i + 1);
        scanf("%d", &prod[i].qtd_estoque);

        soma_preco += prod[i].preco;

        if(prod[i].preco > mais_caro){
            mais_caro = prod[i].preco;
            caro = i;
        }
        if(mais_barato < 0 || mais_barato < prod[i].preco){
            mais_barato = prod[i].preco;
            barato = i;
        }

    }

    printf("\nnome e o preço do produto");
    printf("\nO nome do produto mais caro %s", prod[caro].nome);
    printf("\nSeu preço é de: %.2f", prod[caro].preco);
    printf("\nO nome do produto mais Barato %s", prod[barato].nome);
    printf("\nSeu preço é de: %.2f", prod[barato].preco);
    printf("\nA soma dos produtos caso vendidos será de %.2f", soma_preco);

    return 0;
}




