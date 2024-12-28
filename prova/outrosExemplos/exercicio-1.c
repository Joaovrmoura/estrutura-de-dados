// Exercício 1: Rotacionar uma Matriz 90 Graus
// Descrição:
// Escreva um programa em C que leia uma matriz quadrada de 
// tamanho 4x4 de inteiros, e depois rotacione a matriz em 90 graus no sentido horário. 
// Utilize uma função para realizar a rotação. O programa
//  deve exibir a matriz original e a matriz rotacionada.

// Requisitos:

// Função para ler a matriz.
// Função para rotacionar a matriz 90 graus.
// Função para exibir a matriz.
// Dica: Para rotacionar uma matriz 90 graus, a posição a[i][j] da 
// matriz original deve ser movida para a posição a[j][n-1-i] na matriz rotacionada.

#include <stdio.h>
#define TAM 4

// Função para ler a matriz
void lerMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("Digite o valor para A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Função para exibir a matriz
void exibirMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

// Função para rotacionar a matriz 90 graus no sentido horário
void rotacionarMatriz(int matriz[TAM][TAM], int matrizRotacionada[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matrizRotacionada[j][TAM - 1 - i] = matriz[i][j];
        }
    }
}

int main() {
    int matriz[TAM][TAM], matrizRotacionada[TAM][TAM];

    // Ler a matriz
    printf("Preencha a matriz 4x4:\n");
    lerMatriz(matriz);

    // Exibir a matriz original
    printf("\nMatriz Original:\n");
    exibirMatriz(matriz);

    // Rotacionar a matriz
    rotacionarMatriz(matriz, matrizRotacionada);

    // Exibir a matriz rotacionada
    printf("\nMatriz Rotacionada 90 graus:\n");
    exibirMatriz(matrizRotacionada);

    return 0;
}
