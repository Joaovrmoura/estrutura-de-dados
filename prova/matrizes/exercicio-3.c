// 3. Elaborar um programa em C que leia uma matriz 4x4 com
// números inteiros, calcule e mostre a soma:
// – Dos elementos da linha 4;
// – Dos elementos da coluna 2;
// – De todos os elementos da matriz.

#include <stdio.h>
#define TAM 4

int main(){
   int a[TAM][TAM];
   int soma_linha4 = 0;
   int soma_coluna2 = 0;
   int somar_tudo = 0;

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("Preencha a Matriz A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

   for(int i = 0; i < TAM; i++){
        soma_linha4 += a[3][i];
    }

   for(int i = 0; i < TAM; i++){
        soma_coluna2 += a[i][1];
    }

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            somar_tudo += a[i][j];
        }
    }
  
    printf("\nPrint da Matriz A >\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nsoma dos elementos da linha 4 %d", soma_linha4);
    printf("\nsoma da coluna 2 %d", soma_coluna2);
    printf("\nsoma de todos os elementos: %d", somar_tudo);
}