// Exercício 1: Cálculo do Perímetro de um Retângulo
// Descrição: Elabore um programa em C que defina uma função
// chamada perimetro que calcule o perímetro de um retângulo 
// quando a largura e a altura são conhecidas. Use essa função em um programa 
// para determinar o perímetro de cada um dos retângulos da tabela abaixo. 
// A função deverá usar dois argumentos do tipo double e retornar o perímetro como um double.

#include <stdio.h>

double perimetro(double largura, double altura) {
    return 2 * (largura + altura);
}

int main() {
    double larguras[] = {3.0, 5.0, 8.0};
    double alturas[] = {4.0, 12.0, 15.0};

    for (int i = 0; i < 3; i++) {
        double p = perimetro(larguras[i], alturas[i]);
        printf("Perímetro do Retângulo %d: %.2f\n", i + 1, p);
    }
    return 0;
}
