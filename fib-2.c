#include <stdio.h>
#include <time.h>

int fib2(int n){
    int i = 1, j = 0, k;
    for(k = 1; k <= n;k++){
        j = i + j;
        i = j - 1;
    }
    return j;
}

int main() {
    int result;
    int n_start = 5;
    int n_end = 50;
    int step = 5;

    for(int n = n_start; n <= n_end; n += step) {
        clock_t start_time = clock(); // Captura o tempo inicial

        result = fib2(n);  // Calcula Fibonacci para o valor atual de n

        clock_t end_time = clock(); // Captura o tempo após a execução

        double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;  // Calcula o tempo decorrido

        // Exibe o resultado e o tempo de execução
        printf("Fibonacci de %d = %d\n", n, result);
        printf("Tempo de execução: %f segundos\n\n", time_taken);
    }

    return 0;
}