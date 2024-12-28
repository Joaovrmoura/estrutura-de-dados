#include <stdio.h>
#include <time.h>

int fib1(int n){
    if(n < 2){
        return n;
    }else{
        return fib1(n - 2) + fib1(n - 2);
    }
}

int main() {
    int result;
    int inicio = 5;
    int fim = 50;
    int proximo = 5;

    for(int n = inicio; n <= fim; n += proximo){
        clock_t start_time = clock();

        result = fib1(n);

        clock_t end_time = clock();

        double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

        // Exibe o resultado e o tempo de execução
        printf("Fibonacci de %d = %d\n", n, result);
        printf("Tempo de execução: %f segundos\n", time_taken);

    }

    return 0;
}