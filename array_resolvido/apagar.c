// Crie uma matriz e funções para
// achar qtd de par e impar &
// qtd zero e um na matriz

#include <stdio.h>
#include <stdlib.h>
#define TAM 3

void PreencherMatriz(){
    int c[TAM][TAM];
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("Preencha a Matriz [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &c[i][j]);
        }
    }
}
void printMatriz(){
    int c[TAM][TAM];
    printf("\nMatriz Preenchida:\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
void qtd_01(int c[TAM][TAM]){
    int qtd_0 = 0;
    int qtd_1 = 0;
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if(c[i][j] == 0){
                qtd_0++;
            }
            if(c[i][j] == 1){
                qtd_1++;
            }
        }
    }
    printf("\nQuantidade de Zeros = %d", qtd_0);
    printf("\nQuantidade de Numeros Um = %d", qtd_1);
}

int main(){
    int matriz[TAM][TAM];
    
    PreencherMatriz(matriz);
    printMatriz(matriz);
    qtd_01(matriz);

    return 0;
}