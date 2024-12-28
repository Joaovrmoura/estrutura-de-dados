// Exercício 4: Inverter um Array
// Descrição: Desenvolva um programa que 
// utilize uma função para inverter os elementos de um array de 6 números inteiros.

#include <stdio.h>

#define TAM 6

// Função para inverter o array
void inverterArray(int arr[]) {
    for(int i = 0; i < TAM / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[TAM - 1 - i];
        arr[TAM - 1 - i] = temp;
    }
}

// Função para exibir o array
void exibirArray(int arr[]) {
    printf("Array invertido:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numeros[TAM];

    // Preencher o array
    for (int i = 0; i < TAM; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    inverterArray(numeros);  // Chama a função para inverter o array
    exibirArray(numeros);     // Chama a função para exibir o array

    return 0;
}
