//função em C que encontra o maior elemento de um array:

#include <stdio.h>

int encontrarMaior(int array[], int tamanho) {
    int maior = array[0]; // Assume que o primeiro elemento é o maior

    for (int i = 1; i < tamanho; i++) {
        if (array[i] > maior) {
            maior = array[i]; // Atualiza o maior elemento
        }
    }

    return maior;
}

int main() {
    int numeros[] = {3, 5, 7, 2, 8, -1, 4};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    int maiorElemento = encontrarMaior(numeros, tamanho);
    printf("O maior elemento do array é: %d\n", maiorElemento);

    return 0;
}
