// Faça um programa com uma função chamada somaImposto. 
// A função possui dois parâmetros formais: taxaImposto, 
// que é a quantia de imposto sobre vendas expressa em 
// porcentagem e custo, que é o custo de um item antes do imposto. 
// A função “altera” o valor de custo para incluir o imposto sobre vendas.

#include <stdio.h>

float valorPagamento(float prestacao, int diasAtraso) {
    if (diasAtraso == 0)
        return prestacao;
    else
        return prestacao + (prestacao * 0.03) + (prestacao * 0.001 * diasAtraso);
}

int main() {
    float prestacao, totalPagamentos = 0;
    int diasAtraso, quantidadePagamentos = 0;

    do {
        printf("Digite o valor da prestacao (ou 0 para encerrar): ");
        scanf("%f", &prestacao);

        if (prestacao == 0) break;

        printf("Digite o numero de dias em atraso: ");
        scanf("%d", &diasAtraso);

        float valor = valorPagamento(prestacao, diasAtraso);
        printf("Valor a ser pago: %.2f\n", valor);

        totalPagamentos += valor;
        quantidadePagamentos++;

    } while (prestacao != 0);

    printf("Quantidade de prestacoes pagas: %d\n", quantidadePagamentos);
    printf("Valor total das prestacoes pagas: %.2f\n", totalPagamentos);

    return 0;
}
