#include <stdio.h>
#include <stdlib.h>

#define TAM 3
 //2) somar todos os elementos da matriz;

int somaDiagonal(int m[TAM][TAM]){
    int i, j;
    int soma = 0;
    for(i = 0; i < TAM; i++){
        soma += m[i][i];
    }
    return soma;
}

void printMatriz(int m[TAM][TAM]){
    int i, j;
    printf("\nMatriz Exibida\n");
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int i, j;
    int resultado;
    int m[TAM][TAM];

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            printf("Preencha a matriz: ", (i + 1), (j + 1));
            scanf("%d", &m[i][j]);
        }
    }
    resultado = somaDiagonal(m);
    printMatriz(m);

    printf("\nresultado: %d", resultado);
}