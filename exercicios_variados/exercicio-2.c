//multiplicar os elementos da diagonal principal.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

int soma(int m[TAM][TAM]){
    int i, j;
    int multiplicarDiagonal = 1;
    for(i = 0; i < TAM; i++){
        multiplicarDiagonal *= m[i][i];
    }
    return multiplicarDiagonal;
}

int main(){
    int i, j;
    int a[TAM][TAM];

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            printf("Digite a Matriz: [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    int somar_todos = soma(a);
    printf("\nItens da matriz somados: %d \n", somar_todos);
}