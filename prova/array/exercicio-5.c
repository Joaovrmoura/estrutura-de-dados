// Considere uma lista contendo numeros inteiros positivos. 
// Fac¸a uma func¸ ´ ao que retorne ˜
// quantos numeros pares existem na lista.

#include <stdio.h>

int contar_pares(int lista[], int tamanho) {
    int contador = 0;  // Inicializa o contador de números pares
    for (int i = 0; i < tamanho; i++) {
        if (lista[i] % 2 == 0) {  // Verifica se o número é par
            contador++;
        }
    }
    return contador;  // Retorna a quantidade de números pares
}

int main() {
    int numeros[100];  // Array para armazenar até 100 números
    int n;  // Quantidade de números a serem lidos

    // Solicita ao usuário a quantidade de números
    printf("Quantos numeros inteiros positivos deseja inserir? ");
    scanf("%d", &n);

    // Lê os números inteiros positivos
    printf("Digite os numeros inteiros positivos:\n");
    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Chama a função para contar números pares
    int quantidade_pares = contar_pares(numeros, n);

    // Exibe o resultado
    printf("Quantidade de numeros pares na lista: %d\n", quantidade_pares);

    return 0;
}
