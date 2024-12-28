#include <stdio.h>

//Define o tamanho do vetor
/* Quando passamos um vetor para uma função, estamos passando um
 * ponteiro para o primeiro elemento do vetor.
 * Qualquer modificação feita no vetor dentro da função afetará o
 * vetor original (passagem de parâmetro por referência).
 */
//Função que dobra os valores dos elementos de um vetor

#define TAM 5

void dobraVetor(int vet[]) {
    for(int i = 0; i < TAM; i++) {
        vet[i] *= 2;
    }
}

/**
 * Programa Principal
 */
int main() {
    //Inicializa um vetor com 5 elementos
    int vetor[TAM] = {1, 2, 3, 4, 5};

    printf("-=- Vetor original -=-\n");
    //Imprime o vetor inicializado
    for(int i=0;i<TAM; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    
    //Chama a função dobraVetor passando o vetor com uma passagem
    //de parâmetro por referência
    
    dobraVetor(vetor);

    printf("-=- Vetor modificado -=-\n");
    
    //Imprime o vetor modificado
    for(int i = 0; i < TAM; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");

    return 0;
}
