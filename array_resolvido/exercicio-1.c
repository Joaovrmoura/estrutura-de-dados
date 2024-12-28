// Exercício 2: Calcular a Média de um Array
// Descrição: Desenvolva um programa que utilize uma função para 
// calcular a média de um array de 10 números inteiros e outra função para exibir o resultado.

#include <stdio.h>
#define TAM 10

void preencherArray(int m[TAM]){
    for(int i = 0; i < TAM; i++){
        printf("Preencha o %d numero da lista: ", i + 1);
        scanf("%d", &m[i]);
    }
}

float mostrarResultado(int m[TAM]){
    int soma = 0;
    for(int i = 0; i < 10; i++){
        soma += m[i];
    }
    return (float)soma /TAM;
}

int main(){
    int a[TAM];
    float resultado = 0.0;

    preencherArray(a);
    resultado = mostrarResultado(a);

    printf("\nmedia: %.2f", resultado);
    return 0;
}