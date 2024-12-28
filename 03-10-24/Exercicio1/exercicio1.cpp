
#include <stdio.h>
#define TAM 8

int main(){
    int a[TAM][TAM];
    int cont_p = 0, cont_i = 0;
    int soma_par = 0, soma_impar = 0;
    int pares_DP = 0, impar_DS = 0; 

    for(int i = 0; i < TAM;){
        for(int j = 0; j < TAM;){
        	
        	do{
			    printf("Preencha a Matriz A[%d][%d]: ", i + 1, j + 1);
                scanf("%d", &a[i][j]);
                i++;
                j++;
                printf("\nfui executado\n");
			}while(a[i][j] < 1 || a[i][j] > 0);
        }
    }
    
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if(a[i][j] %2 == 0){
                cont_p++;
                soma_par += a[i][j];
            }
            if(a[i][j] %2 == 1){
                cont_i++;
                soma_impar += a[i][j];
            }
        }
    }
    
    for(int i = 0; i < TAM; i++){
        if(a[i][i] %2 == 0){
            pares_DP++;
        }
    }

    for(int i = 0; i < TAM; i++){
        if(a[i][TAM - 1 - i] %2 == 1){
            impar_DS += a[i][TAM - 1 - i];
        }
    }

    
    printf("\nPrint da Matriz A >\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

   
    printf("\nResultado: ");
    printf("\nNumero de pares: %d", cont_p);
    printf("\nNumero de impares: %d", cont_i);
    printf("\nSoma dos pares: %d", soma_par);
    printf("\nTotal de pares da diagonal Principal: %d", pares_DP);
    printf("\n:Soma dos impares da diagonal secundária: %d", impar_DS);

    return 0;

}

