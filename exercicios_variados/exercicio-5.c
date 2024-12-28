//  Elaborar um programa que leia os dados de 4 produtos
//  (nome, preço unitário e quantidade em estoque) usando
//  uma struct. Encontre e imprima o nome e o preço do
//  produto mais caro e do produto mais barato. Deve-se
//  imprimir também o valor total arrecadado se todas as
//  quantidades em estoque dos produtos forem vendidas.

#include <stdio.h>
#include <locale.h>

#define TAM 4

typedef struct{
    char nome_produto[50];
    float price;
    int qtd_estoque; 
} Produto;

int main(){

     setlocale(LC_ALL, "pt_BR.UTF-8");

    float mais_barato = -1;
    float mais_caro = 0;
    
    int indice_mais_caro;
    int indice_mais_barato;

    float total = 0.0;
    int qtd_estoque = 0;

    Produto prod[TAM];
    
    for(int i = 0; i < TAM; i++){
        printf("\nDigite o nome do produto: ");
        scanf("%s", prod[i].nome_produto);

        printf("\nDigite o preço do produto: ");
        scanf("%f", &prod[i].price);

        printf("\nDigite o qtd do produto: ");
        scanf("%d", &prod[i].qtd_estoque);

    }
    for(int i = 0; i < TAM; i++){
        qtd_estoque += prod[i].qtd_estoque;
        total += prod[i].price;
        mais_caro = prod[i].price;

        if(prod[i].price > mais_caro){
            mais_caro = prod[i].price;
            int indice_mais_caro = i;
        }
        if(mais_barato <= prod[i].price){
            mais_barato = prod[i].price;
            int indice_mais_barato = i;
        }
    }
    
    printf("\nEstque final\n");
    printf("\n O produto mais caro foi: %s seu preco foi: %2.f", prod[indice_mais_caro].nome_produto, mais_caro);
    printf("\n O produto mais caro foi: %s seu preco foi: %2.f", prod[indice_mais_barato].nome_produto, mais_barato);
    printf("\nO total arrecadado nas vendas foi de: %.2f", total);
    if(!qtd_estoque){
        printf("\nAinda existe quantidade em estoque é de: %d", qtd_estoque);
    }else{
        printf("\nVendemo a porra toda a quantidade em estoque é de: %d", qtd_estoque);
    }


}