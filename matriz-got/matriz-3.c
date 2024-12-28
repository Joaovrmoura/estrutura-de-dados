// Crie um programa que leia uma matriz 3x3 e calcule sua transposta.
//  A transposta de uma matriz é obtida trocando as linhas pelas colunas.

// Dica: A transposta de uma matriz A[i][j] será A[j][i].

#include <stdio.h>
#define TAM 3

int main(){
    int a[TAM][TAM];
    int t[TAM][TAM];

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("Preencha a Matriz A: [%d][%d] ", (i + 1), (j + 1));
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nMatriz original\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz Transposta\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}
