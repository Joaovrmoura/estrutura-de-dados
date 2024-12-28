// Exercício 1: Preencher e Exibir um Array
// Descrição: Escreva um programa que utilize uma função para 
// preencher um array de inteiros com 5 elementos e outra função
// para exibir os elementos desse array.

#include <stdio.h>
#define TAM 5

void limparBuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

void PreencherArray(){
    int a[TAM];
    int resultado;
    for(int i = 0; i < TAM;i++){
        do{
            printf("Preencha de 5 elementos: Elemento numero %d: ", i + 1);
            resultado = scanf("%d", &a[i]);

            if(resultado != 1){
                printf("\nPreencha o array apenas com numero inteiros!");
                limparBuffer();
            }
        }while(resultado != 1);
    }
}

void printArray(){
    int a[TAM];
    printf("\nArray Preenchido");
    for(int i = 0; i < TAM;i++){
        printf("\nitem %d: %d", i + 1, a[i]);
    }
}

int main(){
    int array[TAM];

    PreencherArray(array);
    printArray(array);

    return 0;
}