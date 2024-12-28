// Exercício 2: Calcular a Média de um Array
// Descrição: Desenvolva um programa que utilize uma função para 
// calcular a média de um array de 10 números inteiros e outra função para exibir o resultado.

#include <stdio.h>

#define TAM 10

// Função para calcular a média
float calcularMedia(int arr[]) {
    int soma = 0;
    for (int i = 0; i < TAM; i++) {
        soma += arr[i];
    }
    return (float)soma / TAM;
}

// Função para exibir a média
void exibirMedia(float media) {
    printf("A média dos números é: %.2f\n", media);
}

int main() {
    int numeros[TAM];

    // Preencher o array
    for (int i = 0; i < TAM; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    float media = calcularMedia(numeros);  // Chama a função para calcular a média
    exibirMedia(media);                      // Chama a função para exibir a média

    return 0;
}
