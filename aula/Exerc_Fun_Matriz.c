#include <stdio.h>
#define TAM 4

/**
 Elaborar um algoritmo que leia uma matriz 4x4 com números inteiros. Criar funções para:

 1) somar os elementos da diagonal secundária;
 2) somar todos os elementos da matriz;
 3) somar os elementos da coluna 2;
 4) multiplicar os elementos da diagonal principal.

 */

//Funcao que soma os elementos da Diagonal Secundaria
//No parametro da funcao, colocar a matriz com os colchetes da
//primeira dimensao vazios
int SomaDS(int m[][TAM]){
    int i,j,sds = 0;
    for(i=0;i<TAM;i++)
        for(j=0;j<TAM;j++)
        {
            if ((i+j) == 3)
                sds += m[i][j];
        }
    return sds;
}

//Funcao que soma todos os elementos da Matriz
int SomaTodos(int m[][TAM]){
    int stodos = 0;
    for(int i=0;i<TAM;i++)
        for(int j=0;j<TAM;j++)
            stodos += m[i][j];
    return stodos;
}

//Funcao que soma os elementos da Coluna 2 da Matriz
int SomaCol2(int m[][TAM]){
    
    int scol2 = 0;
    
    for(int i=0;i<TAM;i++)
        scol2 += m[i][1];
    
    return scol2;
}

//Funcao que multiplica os elementos da DP da Matriz
int MultDP(int m[][TAM]){
    int i,j,pdp = 1;
    
    for(i=0;i<TAM;i++)
        for(j=0;j<TAM;j++)
        {
            if (i == j)
                pdp *= m[i][j];
        }
    return pdp;
}


int main() {

    int mat[TAM][TAM];
    int i,j, SomaDiagSec, SomaTodosEle, SomaColuna2, ProdutoDP;
    
    //Preenchendo a matriz mat
    for(i=0;i<TAM;i++)
        for(j=0;j<TAM;j++)
        {
            printf("Digite o elemento [%d][%d] da matriz A: ",(i+1),(j+1));
            scanf("%d",&mat[i][j]);
        }
    printf("\n");
    
    //Chamadas às funções para cálculos
    SomaDiagSec = SomaDS(mat);
    SomaTodosEle = SomaTodos(mat);
    SomaColuna2 = SomaCol2(mat);
    ProdutoDP = MultDP(mat);

    //Impressão da matriz
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++)
            printf("%4d",mat[i][j]);
        printf ("\n");
    }
    
    //Impressão dos resultados
    printf("A soma da DS da matriz é: %d.\n",SomaDiagSec);
    printf("A soma de todos os elementos da matriz é: %d.\n",SomaTodosEle);
    printf("A soma da Coluna 2 da matriz e: %d.\n",SomaColuna2);
    printf("O produto da DP e: %d.\n",ProdutoDP);

    return 0;
}

