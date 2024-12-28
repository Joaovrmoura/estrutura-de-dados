// Faça um programa que converta da notação de 24 horas para a notação de 12 horas. 
// Por exemplo, o programa deve converter 14:25 em 2:25 P.M. A entrada é dada em 
// dois inteiros. Deve haver pelo menos duas funções: uma para fazer a conversão e 
// uma para a saída. Registre a informação A.M./P.M. como um valor ‘A’ para A.M. e 
// ‘P’ para P.M. Assim, a função para efetuar as conversões terá um parâmetro formal 
// registrar se é A.M. ou P.M. Inclua um loop que permita que o usuário repita esse 
// cálculo para novos valores de entrada todas as vezes que desejar.

#include <stdio.h>

void converterHora(int hora, int minuto, char *periodo) {
    if (hora == 0) {
        hora = 12;
        *periodo = 'A';
    } else if (hora == 12) {
        *periodo = 'P';
    } else if (hora > 12) {
        hora -= 12;
        *periodo = 'P';
    } else {
        *periodo = 'A';
    }
    printf("Hora convertida: %02d:%02d %c.M.\n", hora, minuto, *periodo);
}

int main() {
    int hora, minuto;
    char periodo;
    char continuar;

    do {
        printf("Digite a hora no formato 24 horas (hh mm): ");
        scanf("%d %d", &hora, &minuto);

        converterHora(hora, minuto, &periodo);

        printf("Deseja converter outra hora? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    return 0;
}
