#include <stdio.h>
#define TAM 8

int main(){
    int a[TAM][TAM];
    int cont_dp = 0;
    int cont_col = 0;
    int cont_ds = 0;
    int cont_n = 0;
    float percentual_zero = 0.0;
    float percentual_1 = 0.0;
    int cont_total_zero = 0, cont_total_1 = 0;

    for(int i = 0; i < TAM;i++){
        for(int j = 0; j < TAM;j++){
            do{
                printf("Preencha a Matriz A[%d][%d]: ", i + 1, j + 1);
                scanf("%d", &a[i][j]);
            }while(a[i][j] < 0 || a[i][j] > 1);

            cont_n++;
        }
    }
    
    for(int i = 0; i < TAM;i++){
        for(int j = 0; j < TAM;j++){
            if(a[i][j] == 1){
                cont_total_1++;
            }
            if(a[i][j] == 0){
                cont_total_zero++;
            }
        }
    }

    for(int i = 0; i < TAM; i++){
        if(a[i][1] == 1){
            cont_col++;
        }
    }

    for(int i = 0; i < TAM; i++){
        if(a[i][i] == 1){
            cont_dp++;
        }
    }

    for(int i = 0; i < TAM; i++){
        if(a[i][TAM - 1 - i] == 0){
            cont_ds++;
        }
    }

    printf("\nPrint da Matriz A >\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    percentual_zero = (cont_total_zero/(float)cont_n) * 100;
    percentual_1 = (cont_total_1/(float)cont_n) * 100;

    printf("\nquntidade de 1s da coluna 2: %d\n", cont_col);
    printf("\nQuantidade de 1s da diagona pincipal: %d\n", cont_dp);
    printf("\nQuantidade de 0s da diagonal secundaria: %d\n", cont_ds);
    printf("\nO percentual de numeros Zero foi de: %.2f", percentual_zero);
    printf("\nO percentual de numeros UM foi de: %.2f", percentual_1);

    return 0;
}

