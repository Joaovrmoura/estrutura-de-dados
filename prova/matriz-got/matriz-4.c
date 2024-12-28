// Escreva um programa que leia uma matriz 3x3 e verifique se ela é uma matriz identidade.
// Uma matriz identidade tem 1's na diagonal principal e 0's em todas as outras posições.

#include <stdio.h>

#define SIZE 3 // Definindo o tamanho da matriz como 3

// Função para verificar se a matriz é identidade
int isIdentityMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            // Verifica se os elementos da diagonal principal são 1
            // e os outros elementos são 0
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                return 0; // Não é uma matriz identidade
            }
        }
    }
    return 1; // É uma matriz identidade
}

int main() {
    int matrix[SIZE][SIZE];

    // Leitura da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Verificação se a matriz é identidade
    if (isIdentityMatrix(matrix)) {
        printf("A matriz é uma matriz identidade.\n");
    } else {
        printf("A matriz não é uma matriz identidade.\n");
    }

    return 0;
}
