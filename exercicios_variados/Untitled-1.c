#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

int main(){
    int a[TAM][TAM], b[TAM][TAM];
    int c[TAM][TAM];
    int i, j;
    
    srand(time(NULL));

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            a[i][j] = rand() % 100;
            b[i][j] = rand() % 100;
        }
    }
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nSOMA DAS MATRIZES\n");
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}