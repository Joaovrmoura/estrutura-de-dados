// 7. Elaborar um programa em C que leia uma matriz 4x4
// de números inteiros e positivos. Em seguida, verifique
// a quantidade de elementos pares contidos em cada
// linha da matriz atribuindo o resultado a um vetor e
// verifique a quantidade de elementos ímpares
// contidos em cada coluna da matriz atribuindo o
// resultado a outro vetor.

#include <stdio.h>

#define TAM 4

int main(){
    int a[TAM][TAM];
    int v_par[TAM];
    int v_impar[TAM];


    for(int i = 0; i < TAM; i++){
        v_par[i] = 0;
        v_impar[i] = 0;
    }

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("Preencha a matriz A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);

            if(a[i][j] %2 == 0){
                v_par[i]++;
            }
        }
    }

    //aqui acesso colunas
    for(int j = 0; j < TAM; j++){
        for(int i = 0; i < TAM; i++){
            if(a[i][j] %2 == 1){
                v_impar[j]++;
            }
        }
    }

    printf("\nMatriz:\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
           printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < TAM; i++){
        printf("\nPARES LINHA %d foi de: %d", i + 1, v_par[i]);
    }
    printf("\n");

    for(int i = 0; i < TAM; i++){
        printf("\nIMPAR COLUNA %d foi de: %d", i + 1, v_impar[i]);
    }
    return 0;
}
