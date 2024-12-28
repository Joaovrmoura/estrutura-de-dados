// Faca uma funcao que receba 3 numeros inteiros como parametro, representando horas,
// minutos e segundos, e os converta em segundos.

#include <stdio.h>

// Função que converte horas, minutos e segundos em segundos
int converterParaSegundos(int horas, int minutos, int segundos) {
    return (horas * 3600) + (minutos * 60) + segundos; // Cálculo total em segundos
}

int main() {
    int horas, minutos, segundos;

    // Leitura das horas, minutos e segundos
    printf("Digite as horas: ");
    scanf("%d", &horas);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    // Cálculo e exibição do total em segundos
    int totalSegundos = converterParaSegundos(horas, minutos, segundos);
    printf("Total em segundos: %d\n", totalSegundos);

    return 0;
}
