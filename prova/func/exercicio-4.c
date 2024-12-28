
// 3. Elaborar um programa em C para escrever a
// soma S dos n termos, sendo 0 ≤ n ≤ 100 (é
// necessário fazer a proteção de dados no código).
// O cálculo do fatorial de um número deverá ser
// realizado através de uma função.

// – Exemplo (n=5):
// S =
// n
// 1!
// +
// n -1
// 2!
// +
// n -2
// 3!
// +...

// S =
// 5
// 1!
// +
// 4
// 2!
// +
// 3
// 3!
// +
// 2
// 4!
// +
// 1
// 5!

#include <stdio.h>

// Função para calcular o fatorial de um número
int fatorial(int num) {
    int fat = 1;
    for (int i = 1; i <= num; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int n;
    double soma = 0;

    // Proteção de dados: garantir que 0 ≤ n ≤ 100
    do {
        printf("Digite um valor para n (0 ≤ n ≤ 100): ");
        scanf("%d", &n);
    } while (n < 0 || n > 100);

    // Cálculo da soma dos n termos
    for (int i = 1; i <= n; i++) {
        soma += (double)(n - (i - 1)) / fatorial(i); // Fórmula da soma
    }

    // Exibe o resultado
    printf("A soma S dos %d termos é: %.6lf\n", n, soma);

    return 0;
}