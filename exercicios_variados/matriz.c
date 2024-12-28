#include <stdio.h>
#define TAM 3

void PreencheMatriz(){
    int m[TAM][TAM];
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("Digite o Tamanho da Matriz[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    } 
}

int dg(int m[TAM][TAM]){
    for(int i = 0; i < TAM; i++){
       m[i][i];
    }
    return m;
}

void PrintMatriz( int m[TAM][TAM]){
    for(int i = 0; i < TAM; i++){
        printf("%d\t", m[i][i]);
    }
    printf("\n");
}
int main(){
    int a;
    int dg;

    PreencheMatriz(a);
    dg = dg(a)
    
    PrintMatriz(a);

}