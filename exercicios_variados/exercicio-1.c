#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int somarItens(int m[TAM][TAM]){
    int i, j;
    int somar = 0;
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            somar += m[i][j];
        }
    }
    return somar;
}

int main(){
    int i, j;
    int a[TAM][TAM];

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            printf("Digite o elemento da Matriz: [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    int somar_todos = somarItens(a);
    printf("\nItens da matriz somados: %d \n", somar_todos);
}