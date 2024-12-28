// Fac¸a um programa que leia um vetor de 5 posicoes para numeros reais e, depois, um 
// codigo inteiro. Se o codigo for zero, finalize o programa; se for 1, mostre o vetor na ordem
// direta; se for 2, mostre o vetor na ordem inversa. Caso, o codigo for diferente de 1 e 2 
// escreva uma mensagem informando que o codigo e invalido.

#include <stdio.h>

int main() {
    float numeros[5]; // Vetor para armazenar 5 números reais
    int codigo;

    // Leitura dos números reais
    printf("Digite 5 números reais:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &numeros[i]);
    }

    // Leitura do código
    printf("Digite um código (0 para sair, 1 para ordem direta, 2 para ordem inversa): ");
    scanf("%d", &codigo);

    // Verificação do código
    switch (codigo) {
        case 0:
            printf("Programa finalizado.\n");
            break;
        case 1:
            printf("Vetor na ordem direta:\n");
            for (int i = 0; i < 5; i++) {
                printf("%.2f ", numeros[i]);
            }
            printf("\n");
            break;
        case 2:
            printf("Vetor na ordem inversa:\n");
            for (int i = 4; i >= 0; i--) {
                printf("%.2f ", numeros[i]);
            }
            printf("\n");
            break;
        default:
            printf("Código inválido.\n");
            break;
    }

    return 0;
}
