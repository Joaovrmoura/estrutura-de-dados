#include <stdio.h>
#define TAM 3

void preencherMatriz(int m[TAM][TAM]){
    for(int i = 0; i < TAM;i++){
        for(int j = 0; j < TAM;j++){
            do{
                printf("Preencha a Matriz A[%d][%d]: ", i + 1, j + 1);
                scanf("%d", &m[i][j]);
            }while(m[i][j] < 0 || m[i][j] > 1);
        }
    }
}

int cont_diagonal_p(int m[TAM][TAM]){
    int cont_dp = 0;
     for(int i = 0; i < TAM; i++){
        if(m[i][i] == 1){
            cont_dp++;
        }
    }
    return cont_dp++;
}

int cont_ds_zero(int m[TAM][TAM]){
    int cont_ds = 0;
    for(int i = 0; i < TAM; i++){
        if(m[i][TAM - 1 - i] == 0){
            cont_ds++;
        }
    }
    return cont_ds;
}

int cont_1_col2(int m[TAM][TAM]){
    int cont_col = 0;
    for(int i = 0; i < TAM; i++){
        if(m[i][1] == 1){
            cont_col++;
        }
    }
    return cont_col;
}

void total_zero_um(int m[TAM][TAM], int *total_zero, int *total_um){
    *total_zero = 0;
    *total_um = 0;
    for(int i = 0; i < TAM;i++){
        for(int j = 0; j < TAM;j++){
            if(m[i][j] == 0){
                (*total_zero)++;
            }
            if(m[i][j] == 1){
                (*total_um)++;
            }
        }
    }
}

void PrintMAtriz(int m[TAM][TAM]){
    int i, j;
    for(int i = 0; i < TAM;i++){
        for(int j = 0; j < TAM;j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int a[TAM][TAM];
    int mostrarMatrizes = 0;
    int cont_dp = 0;
    int cont_col = 0;
    int cont_ds = 0;
    int cont_n = 0;
    int cont_total_01 = 0;
    float percentual_zero = 0.0;
    float percentual_1 = 0.0;
    int cont_total_zero = 0, cont_total_1 = 0;

    preencherMatriz(a);

    printf("\nPrint da Matriz:\n");
    PrintMAtriz(a);

    cont_dp = cont_diagonal_p(a);
    printf("\nTotal de  1s da diagonal Principal: %d\n", cont_dp);

    cont_ds = cont_ds_zero(a);
    printf("\nTotal de  0s da diagonal secundária: %d\n", cont_ds);

    cont_col = cont_1_col2(a);
    printf("\nTotal de  1s da Segunda Coluna: %d\n", cont_col);

    total_zero_um(a, &cont_total_zero, &cont_total_1);
    
    float tamanho_matriz = TAM * TAM;
    percentual_zero = ((float)cont_total_zero/tamanho_matriz) * 100;
    percentual_1 = ((float)cont_total_1/tamanho_matriz) * 100;

    printf("\nO percentual de numeros Zero foi de: %.2f", percentual_zero);
    printf("\nO percentual de numeros UM foi de: %.2f", percentual_1);

    return 0;
}

