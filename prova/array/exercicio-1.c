// Exercício 1: Preencher e Exibir um Array
// Descrição: Escreva um programa que utilize uma função para 
// preencher um array de inteiros com 5 elementos e outra função
// para exibir os elementos desse array.

#include <stdio.h>

#define TAM 5

// Função para preencher o array
void preencherArray(int arr[]) {
    for (int i = 0; i < TAM; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Função para exibir o array
void exibirArray(int arr[]) {
    printf("Elementos do array:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numeros[TAM];

    preencherArray(numeros);  // Chama a função para preencher o array
    exibirArray(numeros);      // Chama a função para exibir o array

    return 0;
}