// Exercícios (Matrizes)

// 1.Dada uma matriz 4x4 de valores reais e positivos, elaborar um
// programa em C para somar os valores da Diagonal Principal
// (DP) e o produto dos valores da Diagonal Secundária (DS),
// mostrando o resultado da soma e do produto no final.

#include <stdio.h>
#include <locale.h>

#define TAM 4
int main(){
    int produto = 1;
    int soma = 0;
    int a[TAM][TAM];
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("Preencha a Matriz A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nPrint da Matriz: \n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < TAM; i++){
        soma += a[i][i];
    }
    for(int i = 0; i < TAM; i++){
        produto = produto * a[i][TAM - 1 - i];
    }
    printf("\n aqui o Produto da diagonal secundária: %d", produto);
    printf("\n aqui a soma da diagonal principal: %d", soma);

    return 0;
}