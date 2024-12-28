#include <stdio.h>

//Define o tamanho da matriz
#define LIN 3
#define COL 4

/* Quando passamos uma matriz para uma função, estamos passando um
 * ponteiro para o primeiro elemento de cada linha da matriz.
 * Qualquer modificação feita na matriz dentro da função afetará a
 * matriz original (passagem de parâmetro por referência).
 */
//Função que dobra os valores dos elementos de uma matriz



void dobraMatriz(int mat[][COL]) {
    for(int i=0;i<LIN;i++) {
        for(int j=0;j<COL;j++) {
            mat[i][j] *= 2;
        }
    }
}

int main() {
    //Inicializa uma matriz 3x4
    int matriz[LIN][COL] = {
          {1, 2, 3, 4},
          {5, 6, 7, 8},
          {9, 10, 11, 12}
      };
    
    printf("-=- Matriz original -=-\n");
    //Imprime a matriz inicializada
    for(int i=0;i<LIN; i++) {
        for(int j=0;j<COL;j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    //Chama a função imprimeMatriz passando a matriz como parâmetro
    dobraMatriz(matriz);

    printf("-=- Matriz modificada -=-\n");
    
    //Imprime a matriz modificada
    for(int i=0;i<LIN; i++) {
        for(int j=0;j<COL;j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    return 0;
}
