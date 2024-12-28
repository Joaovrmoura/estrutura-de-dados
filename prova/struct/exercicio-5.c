// Exercício 2: Cadastro de Veículos
// Descrição: Desenvolva um programa que utilize uma struct 
// para armazenar informações de 3 veículos (marca, modelo e ano de fabricação).
// O programa deve permitir a entrada de dados dos veículos
// e exibir um relatório com essas informações.

#include <stdio.h>

#define TAM 3

typedef struct {
    char marca[30];
    char modelo[30];
    int ano_fabricacao;
} Veiculo;

int main() {
    Veiculo veiculos[TAM];

    // Entrada de dados
    for (int i = 0; i < TAM; i++) {
        printf("Digite a marca do veículo %d: ", i + 1);
        scanf(" %[^\n]", veiculos[i].marca);

        printf("Digite o modelo do veículo %d: ", i + 1);
        scanf(" %[^\n]", veiculos[i].modelo);

        printf("Digite o ano de fabricação do veículo %d: ", i + 1);
        scanf("%d", &veiculos[i].ano_fabricacao);
    }

    // Exibição dos dados
    printf("\nRelatório de Veículos:\n");
    for (int i = 0; i < TAM; i++) {
        printf("Veículo %d: Marca: %s, Modelo: %s, Ano: %d\n", 
               i + 1, veiculos[i].marca, veiculos[i].modelo, veiculos[i].ano_fabricacao);
    }

    return 0;
}
