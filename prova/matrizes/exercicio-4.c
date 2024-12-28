// 4. Elaborar um programa em C que leia duas matrizes A
// e B de números inteiros (de tamanho (5x5)) e, em
// seguida, imprima uma matriz C de mesmo tamanho
// definida como:

// – C[i,j] = A[i,j], se i ≤ j;
// – C[i,j] = B[i,j], caso contrário.

#include <stdio.h>
#define TAM 5

int main() {
    int A[TAM][TAM], B[TAM][TAM], C[TAM][TAM];

    // Preenchendo a matriz A
    printf("Preencha a Matriz A:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    // Preenchendo a matriz B
    printf("\nPreencha a Matriz B:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    // Definindo a Matriz C
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if(i <= j) {
                C[i][j] = A[i][j];  // Se i <= j, C recebe valor de A
            } else {
                C[i][j] = B[i][j];  // Caso contrário, C recebe valor de B
            }
        }
    }

    // Imprimindo a Matriz C
    printf("\nMatriz C:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
