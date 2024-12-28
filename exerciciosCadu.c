#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para troca de elementos
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para o Insertion Sort (O(n^2))
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Função para ajustar o heap
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

// Função para Heap Sort (O(n log n))
void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

// Função para preencher o array com valores aleatórios
void fillArrayRandom(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100000;
    }
}

// Função para preencher o array em ordem crescente
void fillArrayOrdered(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
}

// Função para medir o tempo de execução
double measureTime(void (*sortFunc)(int *, int), int arr[], int n) {
    clock_t start, end;
    start = clock();
    sortFunc(arr, n);
    end = clock();
    return ((double)(end - start)) / CLOCKS_PER_SEC;
}

int main() {
    int sizes[] = {1000, 2000, 3000, 4000, 5000, 100000, 200000, 300000, 400000, 500000, 1000000};
    int numSizes = sizeof(sizes) / sizeof(sizes[0]);
    int *arr;

    printf("Size\tInsertionSort (Random)\tHeapSort (Random)\tInsertionSort (Ordered)\tHeapSort (Ordered)\n");

    for (int i = 0; i < numSizes; i++) {
        int n = sizes[i];

        // Teste com dados aleatórios
        arr = (int *)malloc(n * sizeof(int));
        fillArrayRandom(arr, n);
        double timeInsertionRandom = measureTime(insertionSort, arr, n);

        fillArrayRandom(arr, n);
        double timeHeapRandom = measureTime(heapSort, arr, n);

        // Teste com dados ordenados
        fillArrayOrdered(arr, n);
        double timeInsertionOrdered = measureTime(insertionSort, arr, n);

        fillArrayOrdered(arr, n);
        double timeHeapOrdered = measureTime(heapSort, arr, n);

        // Imprime resultados
        printf("%d\t%.4lf\t\t\t%.4lf\t\t\t%.4lf\t\t\t%.4lf\n", 
                n, timeInsertionRandom, timeHeapRandom, timeInsertionOrdered, timeHeapOrdered);

        free(arr);
    }

    return 0;
}
