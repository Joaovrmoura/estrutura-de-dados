// 6. Elaborar um programa em C que leia um número
// inteiro e gere uma matriz A3x3 ,onde cada elemento
// da matriz A será o número lido elevado a (i+j), sendo i
// a i-ésima linha da matriz a e j a j-ésima linha da matriz A.

#include <stdio.h>
#include <math.h>
#define TAM 3

int main(){
    int a[TAM][TAM];
    int n;

   printf("Digite o numero para preencher a matriz: ");
   scanf("%d", &n);

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            a[i][j] = pow(n, i + j);
        }
    }
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
           printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}