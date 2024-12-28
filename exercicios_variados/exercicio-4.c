//somar os elementos da diagonal secundária
#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int multiplcarDiagonal(int m[TAM][TAM]){
    int j;
    int multiplicar = 1;
        for(j = 0; j < TAM; j++){
            multiplicar *= m[j][j];
        }
    return multiplicar;
}

int main(){
    int i, j;
    int m[TAM][TAM];
    int mMatriz = 0;

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            printf("Digite os elementos da matriz A [%d][%d]: ",(i + 1), (j + 1));
            scanf("%d", &m[i][j]);
        }
    }
    mMatriz = multiplcarDiagonal(m);
    printf("\n O resultado do produto das matrizes: %d\n", mMatriz);

    return 0;    
}