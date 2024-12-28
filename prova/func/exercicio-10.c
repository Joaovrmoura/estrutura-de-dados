// Fac¸a um programa que leia 2 valores inteiros e chame uma funcao que receba estas 
// 2 variaveis e troque o seu conteudo, ou seja, esta funcao e chamada passando duas 
// variaveis A e B por exemplo e, apos a execucao da funcao, A contera o valor de B e B  
// tera o valor de A.

#include <stdio.h>

// Função que troca os valores de duas variáveis
void trocarValores(int *a, int *b) {
    int temp = *a; // Armazena o valor de a em temp
    *a = *b;       // Atribui o valor de b a a
    *b = temp;     // Atribui o valor armazenado de temp a b
}

int main() {
    int A, B;

    // Leitura dos valores inteiros
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Chamada da função para trocar os valores
    trocarValores(&A, &B);

    // Exibição dos valores trocados
    printf("Após a troca:\n");
    printf("A: %d\n", A);
    printf("B: %d\n", B);

    return 0;
}
