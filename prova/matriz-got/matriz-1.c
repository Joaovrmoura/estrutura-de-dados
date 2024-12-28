#include <stdio.h>

#define TAM 3

int main(){
    int a[TAM][TAM], b[TAM][TAM];
    int c[TAM][TAM];

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("Prencha a matriz A: [%d][%d]", (i + 1), (j + 1));
            scanf("%d", &a[i][j]);

            printf("Prencha a matriz B: [%d][%d]",(i + 1), (j + 1));
            scanf("%d", &b[i][j]);
        }
    }
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nSoma das Matrizes\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
           printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}