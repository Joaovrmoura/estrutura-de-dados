// Faça um programa, com uma função que necessite de um argumento. A função retorna o valor de caractere ‘P’,
//  se seu argumento for positivo, e ‘N’, se seu argumento for zero ou negativo.

#include <stdio.h>

char verifica_numero(int num) {
    if (num > 0) return 'P';
    else return 'N';
}

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("O resultado e: %c\n", verifica_numero(num));
    return 0;
}
