// Escreva um programa que leia uma matriz 3x3 e um número. O 
// programa deve multiplicar todos os elementos da matriz por esse número 
// e exibir o resultado.
#include <stdio.h>

#define TAM 3

int main(){
 
    int a[TAM][TAM];
    int m[TAM][TAM];
    int num_multili ;
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("Preencha a Matriz A: [%d][%d] ", (i + 1), (j + 1));
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nDigite o numero que multiplicará a Matriz A: ");
    scanf("%d", &num_multili);

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            m[i][j] = num_multili * a[i][j];
        }
    }
    printf("\n Matriz multiplicada!\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
           printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}