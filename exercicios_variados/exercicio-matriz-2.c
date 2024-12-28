#include <stdio.h>
#include <stdlib.h>

#define TAM 3

//somar os elementos da diagonal secundária;

int somaDiagonal(int m[TAM][TAM]){
    int i;
    int soma = 0;
    for(i = 0; i < TAM; i++){
        soma += m[i][TAM - 1 - i];
    }
    return soma;
}

void printMatriz(int m[TAM][TAM]){
    int i, j;
    printf("\nMatriz Exibida\n");
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int i, j;
    int soma = 0;
    int m[TAM][TAM];

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            printf("Digite o elemento da Matriz [%d][%d]: ", (i + 1), (j + 1));
            scanf("%d", &m[i][j]);
        }
    }
    soma = somaDiagonal(m);
    printMatriz(m);
    printf("\n%d", soma);

    return 0;
}
