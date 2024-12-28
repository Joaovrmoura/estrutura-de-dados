// 3) somar os elementos da coluna 2;
#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int somarTudo(int m[TAM][TAM]){
    int soma = 0;
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            soma += m[i][j];
        }
    } 
    return soma;   
}
int somarColuna_2(int m[TAM][TAM]){
    int soma = 0;
    for(int i = 0; i < TAM; i++){
        soma += m[i][1];
    }
    return soma;
}

int soma_diagonal_sec(int m[TAM][TAM]){
    int soma = 0;
    for(int i = 0; i < TAM; i++){
        soma += m[i][TAM - i - 1];
    }
    return soma;
}

int mult_diagonal_princ(int m[TAM][TAM]){
    int soma = 1;
    for(int i = 0; i < TAM; i++){
        soma = soma * m[i][i];
    }
    return soma;
}

void printMatriz(int m[TAM][TAM]){
    printf("\nMatriz Exibida\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int soma_diag_2 = 0;
    int soma_coluna_2 = 0;
    int mult_diag_princ = 0;
    int somar_tudo = 0;
    int m[TAM][TAM];

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("Digite o elemento da Matriz [%d][%d]: ", (i + 1), (j + 1));
            scanf("%d", &m[i][j]);
        }
    }

    somar_tudo = somarTudo(m);
    soma_coluna_2 = somarColuna_2(m);
    soma_diag_2 = soma_diagonal_sec(m);
    mult_diag_princ = mult_diagonal_princ(m);
    printMatriz(m);

    printf("\nSomar diagonal secundaria %d", soma_diag_2);
    printf("\nSomar todos os elementos %d", somar_tudo);
    printf("\nSomar os elementos da segunda Coluna %d", soma_coluna_2);
    printf("\nMultiplicar diagonal Principal %d", mult_diag_princ);

    return 0;
}