#include <stdio.h>
#define TAM 5

int main(){
    int v[TAM];
    int i;
    int qtd_negativo = 0, n_positivo = 0;
    int qtd_zero = 0;
    float media, soma = 0.0;

    for(i = 0;i < TAM;i++){
        printf("Digite um numero para soma %d :", (i + 1));
        scanf("%d", &v[i]);
        if(v[i] %2 == 0){
            n_positivo += v[i];
        }
        if(v[i] == 0){
            qtd_zero++;
        }
        if(v[i] %2 == 1){
            qtd_negativo++;
        }
    }
    for(i = 0; i< TAM; i++){
        soma += v[i];
    }
    media = soma/TAM;
    printf("Numero positivos somados %d", n_positivo);
    printf("\n Numeros zeros = %d", qtd_zero);
     printf("\n Numero negativos = %d", qtd_negativo);
    printf("\n %.2f", media);
}
