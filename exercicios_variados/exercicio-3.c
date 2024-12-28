//somar os elementos da coluna 2;
#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int somarColuna2(int m[TAM][TAM]){
    int i, j;
    int somar = 0;
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM ; j++){
            somar += m[i][1];
        }
    }
    return somar;
}

int main(){
    int i, j;
    int a[TAM][TAM];
    int somar_coluna;

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            printf("Preencha a matriz [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    somar_coluna = somarColuna2(a);
    printf("\n A soma da 2 coluno e %d\n", somar_coluna);
}