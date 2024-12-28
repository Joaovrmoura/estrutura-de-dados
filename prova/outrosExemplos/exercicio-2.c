// Exercício 2: Soma das Diagonais de uma Matriz
// Descrição:
// Escreva um programa em C que leia uma matriz quadrada de tamanho 5x5 e, em seguida,
// calcule a soma dos elementos da diagonal principal e da diagonal secundária. 
// O programa deve usar funções separadas para calcular a soma de cada diagonal 
// e uma função para exibir o resultado final.

// A diagonal principal é composta pelos elementos a[i][i], onde i é o índice da linha e coluna.
// A diagonal secundária é composta pelos elementos a[i][n-1-i], onde n é o tamanho da matriz.

#include <stdio.h>
#define TAM 5

// Função para ler a matriz
void lerMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("Digite o valor para A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Função para calcular a soma da diagonal principal
int somaDiagonalPrincipal(int matriz[TAM][TAM]) {
    int soma = 0;
    for (int i = 0; i < TAM; i++) {
        soma += matriz[i][i];
    }
    return soma;
}

// Função para calcular a soma da diagonal secundária
int somaDiagonalSecundaria(int matriz[TAM][TAM]) {
    int soma = 0;
    for (int i = 0; i < TAM; i++) {
        soma += matriz[i][TAM - 1 - i];
    }
    return soma;
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

int main() {
    int matriz[TAM][TAM];

    // Ler a matriz
    printf("Preencha a matriz 5x5:\n");
    lerMatriz(matriz);

    // Exibir a matriz
    printf("\nMatriz:\n");
    exibirMatriz(matriz);

    // Calcular a soma das diagonais
    int somaPrincipal = somaDiagonalPrincipal(matriz);
    int somaSecundaria = somaDiagonalSecundaria(matriz);

    // Exibir as somas
    printf("\nSoma da Diagonal Principal: %d\n", somaPrincipal);
    printf("Soma da Diagonal Secundária: %d\n", somaSecundaria);

    return 0;
}
