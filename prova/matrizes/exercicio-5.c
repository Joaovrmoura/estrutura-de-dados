// 5. Dada uma matriz 4x4 de valores reais e positivos,
// elaborar um programa em C para calcular e imprimir a
// soma dos elementos situados acima da diagonal
// secundária da matriz, incluindo os elementos da
// própria diagonal secundária.

#include <stdio.h>

#define TAM 4

int main(){
    int a[TAM][TAM];
    int soma_elementos = 0;

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("Preencha a matriz A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j <= TAM - 1 - i; j++){
            soma_elementos += a[i][j];
        }
    }
     
    printf("\nElementos da diafonal secundaria:\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j <= TAM - 1 - i; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma dos elementos da Diagonal Secundaria %d: \n", soma_elementos);

    printf("\nMAtriz: \n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}