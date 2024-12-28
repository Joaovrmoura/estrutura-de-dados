// Exercício 5: Encontrar o Maior Número em um Array
// Descrição: Escreva um programa que utilize uma função para 
// encontrar o maior número em um array de 5 elementos.

#include <stdio.h>

#define TAM 5

// Função para encontrar o maior número
int encontrarMaior(int arr[]) {
    int maior = arr[0];
    for (int i = 1; i < TAM; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}

int main() {
    int numeros[TAM];

    // Preencher o array
    for (int i = 0; i < TAM; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    int maior = encontrarMaior(numeros);  // Chama a função para encontrar o maior número
    printf("O maior número é: %d\n", maior);

    return 0;
}
