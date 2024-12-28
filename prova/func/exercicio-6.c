// Exercício 2: Verificação de Números Primos
// Descrição: Elabore um programa em C que escreva 
// uma função chamada eh_primo que determine se um 
// número inteiro é primo. A função deve receber um 
// argumento e retornar 1 (verdadeiro) se o número for 
// primo e 0 (falso) caso contrário. Use essa função em um programa 
// que faça a leitura de 10 números inteiros e informe quais deles são primos.

#include <stdio.h>

int eh_primo(int numero) {
    if (numero <= 1) return 0; // Números menores ou iguais a 1 não são primos
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) return 0; // Não é primo
    }
    return 1; // É primo
}

int main() {
    int numeros[10];

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Números primos:\n");
    for (int i = 0; i < 10; i++) {
        if (eh_primo(numeros[i])) {
            printf("%d é primo.\n", numeros[i]);
        }
    }

    return 0;
}
